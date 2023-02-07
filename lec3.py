#!/usr/bin/env python
# coding: utf-8

# In[1]:


import pandas as pd


# In[2]:


import numpy as np


# In[3]:


dataframe =pd.read_csv('daily-total-female-births-CA.csv', header=0)


# In[5]:


dataframe.head()


# In[6]:


dataframe['date'].dtype


# In[7]:


df2=pd.read_csv('daily-total-female-births-CA.csv', header=0 , parse_dates=[0])


# In[8]:


df2.head()


# In[9]:


df2['date'].dtype


# In[10]:


series = pd.read_csv('daily-total-female-births-CA.csv', header=0, parse_dates=[0], index_col=0, squeeze=True)


# In[11]:


series.head()


# In[12]:


print(series['1959-01'])


# In[13]:


df2[(df2['date'] > '1959-01-01') & (df2['date'] <= '1959-01-21')]


# In[14]:


series.describe()


# In[15]:


df2.head(5)


# In[16]:


features=df2.copy()


# In[17]:


features['year'] = df2['date'].dt.year


# In[18]:


features['month'] = df2['date'].dt.month


# In[19]:


features['day'] = df2['date'].dt.day


# In[20]:


features.head(5)


# In[24]:


features['lag2']=df2['births'].shift(2)


# In[26]:


features['lag2']=df2['births'].shift(365)


# In[27]:


features.head(7)


# In[28]:


features['Roll_mean']=df2['births'].rolling(window=2).mean()


# In[29]:


features.head(5)


# In[30]:


features['Roll_max'] = df2['births'].rolling(window = 3).max()


# In[31]:


features.head(5)


# In[32]:


features['Expand_max']=df2['births'].expanding().max()


# In[33]:


features.head(10)


# In[34]:


from matplotlib import pyplot as plt
get_ipython().run_line_magic('matpltlib', 'inline')


# In[35]:


Dataviz_df=df2.copy()


# In[36]:


Dataviz_df.head(10)


# In[37]:


Dataviz_df['births'].plot()


# In[39]:


Dataviz_df.index=Dataviz_df['date']


# In[40]:


Dataviz_df['births'].plot()


# In[43]:


Dataviz_df2 = Dataviz_df[(Dataviz_df['date'] > '1959-01-01') & (Dataviz_df['date'] <= '1959-01-10')].copy()


# In[44]:


Dataviz_df2


# In[45]:


Dataviz_df2['births'].plot()


# In[46]:


import seaborn as sns


# In[47]:


sns.regplot(x=df2.index.values,y=df2['births'])


# In[48]:


sns.regplot(x= df2.index.values, y=df2['births'], order =2)


# In[49]:


miles_df=pd.read_csv('us-airlines-monthly-aircraft-miles-flown.csv' ,header=0, parse_dates=[0])


# In[50]:


miles_df.head()


# In[51]:


miles_df['MilesMM'].plot()


# In[52]:


sns.regplot(x=miles_df.index.values, y=miles_df['MilesMM'])


# In[54]:





# In[58]:


miles_df['year']=miles_df['Month'].dt.year


# In[59]:


miles_df.head()


# In[60]:


miles_df.groupby('year')['MilesMM'].mean()


# In[61]:


miles_df.groupby('year')['MilesMM'].mean().plot()


# In[62]:


#creating lag plot


# In[63]:


miles_df['lag1']=miles_df['MilesMM'].shift(1)


# In[64]:


miles_df.head()


# In[65]:


sns.scatterplot(x=miles_df['lag1'], y=miles_df['MilesMM'])


# In[66]:


from pandas.plotting import lag_plot


# In[67]:


lag_plot(miles_df['MilesMM'])


# In[68]:


from pandas.plotting import autocorrelation_plot


# In[69]:


autocorrelation_plot(miles_df['MilesMM'])


# In[70]:


miles_df = pd.read_csv('us-airlines-monthly-aircraft-miles-flown.csv', header=0 , parse_dates=[0])


# In[72]:


miles_df.head()


# In[73]:


quarterly_miles_df = miles_df.resample('Q', on='Month').mean()


# In[75]:


quarterly_miles_df.head()


# In[76]:


yearly_total_miles_df = miles_df.resample('A', on='Month').sum()


# In[77]:


yearly_total_miles_df.head()


# In[78]:


upsampled_miles_df = miles_df.resample('D', on='Month').mean()


# In[79]:


upsampled_miles_df.head(35)


# In[81]:


interpolated_miles_df=upsampled_miles_df.interpolate(method='linear')


# In[82]:


interpolated_miles_df.head(32)


# In[83]:


interpolated_miles_df.plot()


# In[84]:


poly_interpolated_miles_df = upsampled_miles_df.interpolate(method='spline', order=2)


# In[85]:


poly_interpolated_miles_df.plot()


# In[87]:


#decomposing time series


# In[89]:


from statsmodels.tsa.seasonal import seasonal_decompose


# In[90]:


miles_decomp_df = pd.read_csv('us-airlines-monthly-aircraft-miles-flown.csv', header=0 , parse_dates=[0])


# In[92]:


miles_decomp_df.head()


# In[93]:


miles_decomp_df.index=miles_decomp_df['Month']


# In[ ]:




