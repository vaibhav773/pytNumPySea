# pytNumPySea
TIME SERIES ANALYSIS AND FORCASTING
walk forward validation -
Walk Forward Validation was originally discussed by Robert E. Pardo. One of the primary benefits of Walk-Forward Validation as mentioned by Pardo, is to determine the robustness of the trading strategy. The central and highest benefit of the Walk-Forward Validation is to determine the degree of confidence with which the trader may anticipate that the strategy will perform in real-time trading as it has in its historical testing.
sklearn metrices-
Sklearn metrics let you assess the quality of your predictions. You can use this module in Scikit-Learn for various datasets, score functions, and performance metrics. The confusion matrix in sklearn is a handy representation of the accuracy of predictions.
mse-
The Mean Squared Error (MSE) or Mean Squared Deviation (MSD) of an estimator measures the average of error squares i.e. the average squared difference between the estimated values and true value. It is a risk function, corresponding to the expected value of the squared error loss. It is always non – negative and values close to zero are better. The MSE is the second moment of the error (about the origin) and thus incorporates both the variance of the estimator and its bias.
ar vs lr-
Autoregression modeling is a modeling technique used for time series data that assumes linear continuation of the series so that previous values in the time series can be used to predict futures values.  Some of you may be thinking that this sounds just like a linear regression – it sure does sound that way and is – in general – the same idea with additional features of the model that includes the idea of ‘lag variables’
stationary and non stationary data
When a time series is stationary, it means that certain attributes of the data do not change over time(i.e mean, median, mode). However, some time series are non-stationary, whereby values and associations between and among variables do vary with time. In finance, many processes are non-stationary, and so must be handled appropriate.
All the models 
AR
The auto regression model, or AR model, predicts a value at a particular time using previous lags (values at previous times). The model relies on the correlations between lags, or auto correlations, since the correlations are based on the same series. In this article, we will learn how to build an Autoregression model in Python.
ARIMA
ARIMA Model for Time Series Forecasting
ARIMA stands for autoregressive integrated moving average model and is specified by three order parameters: (p, d, q).

AR(p) Autoregression – a regression model that utilizes the dependent relationship between a current observation and observations over a previous period.An auto regressive (AR(p)) component refers to the use of past values in the regression equation for the time series.
I(d) Integration – uses differencing of observations (subtracting an observation from observation at the previous time step) in order to make the time series stationary. Differencing involves the subtraction of the current values of a series with its previous values d number of times.
MA(q) Moving Average – a model that uses the dependency between an observation and a residual error from a moving average model applied to lagged observations. A moving average component depicts the error of the model as a combination of previous error terms. The order q represents the number of terms to be included in the model.
MOVING AVERAGE
The moving average model, or MA model, predicts a value at a particular time using previous errors. The model relies on the average of previous time serries and correlations between errors that suggest we can predict the current value based on previous errors. 
What’s the difference between Arima and Sarima? ARIMA is a time series data model that can be used to predict future events in the series.

MA(q) refers to a moving average model, and the q refers to the number of forecast error terms in the prediction equation that are lagged. SARIMA is a seasonal ARIMA that is used in time series with seasonality. Which is the better version of ARIMA or Sarima? The seasonality of the dataset makes the difference between ARIMA and SARIMA (SARIMAX).
the names for these counterparts will be SARMA, SARIMA, and SARIMAX respectively, with the “S” representing the seasonal aspect. Therefore, the full name of the model would be Seasonal Autoregressive Integrated Moving Average Exogenous model. We can all agree that it’s a mouthful, so we’ll stick with the abbreviation
LR
Linear regression is a common method to model the relationship between a dependent variable and one or more independent variables. Linear models are developed using the parameters which are estimated from the data. Linear regression is useful in prediction and forecasting where a predictive model is fit to an observed data set of values to determine the response. Linear regression models are often fitted using the least-squares approach where the goal is to minimize the error.
The method of least squares is a standard approach in regression analysis to approximate the solution of overdetermined systems (sets of equations in which there are more equations than unknowns) by minimizing the sum of the squares of the residuals (a residual being the difference between an observed value and the fitted value provided by a model) made in the results of each individual equation
ann-visualizer. ANN Visualizer is a python library that enables us to visualize an Artificial Neural Network using just a single line of code. It is used to work with Keras and makes use of python’s graphviz library to create a neat and presentable graph of the neural network you’re building.. With advanced in deep learning, you can now visualise the entire deep learning process or just the Convolutional Neural Network you’ve built.
