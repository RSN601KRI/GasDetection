## Gas Detection Analysis and Prediction
This repository contains code and datasets for analyzing and predicting gas concentrations, specifically focusing on gases such as carbon monoxide, methane, propane, and others. The project aims to develop models to predict the concentration levels of these gases based on various environmental factors.

## Dataset
The dataset used for analysis and prediction is stored in the ./datasets/ directory. The original dataset is divided into separate files for each gas type, containing data points for concentration levels, timestamps, and environmental conditions. Additionally, a modified dataset is provided, combining the data for all gases into a single file for comparative analysis.
## Problem Statement
Existing LPG systems suffer from limitations in realtime monitoring, inadequate detection of gas leaks, pressure fluctuations, and inefficient respons, mechanisms, posing significant safety risks. These safety concerns include the potential for fire, explosion, and health hazards due to gas leaks and improper handling of LPG. There is a pressing need for a comprehensive solution to enhance safety, improve monitoring capabilities, and mitigate the risks associated with LPG usage. 
## Solution 
Key features of the smart LPG system:
Real-time monitoring of gas levels, pressure, and
temperature.
Automatic detection of gas leaks and prompt alerts.
Integration with IoT technology for remote monitoring and
control.
Data analytics for predictive maintenance and optimization.
Benefits: enhanced safety, reduced risks of accidents, improved
efficiency, and cost savings.
## Components Used 
ESP8266 microcontroller board
MQ2 sensor
6.2 LC display with I2C model
Red and Green LED
Small piezo buzzer
Arduino Uno
12V, 2A Adaptar
Breadboard
5V Relay
Power Bank

## Prototype
![gasss](https://github.com/RSN601KRI/GasDetection/assets/106860359/c3034890-096f-4f38-93dd-e5a93c70a15f)


## Dataset Structure
The original dataset files are structured as follows:

yaml
Copy code
Timestamp,CO_Concentration,CH4_Concentration,Propane_Concentration,Other_Gas_Concentration,Temperature,Humidity,Pressure
2020-01-01 00:00:00,5.2,1.3,0.8,0.4,20,50,1013
2020-01-01 01:00:00,6.5,1.8,0.9,0.5,21,48,1012
The modified dataset file combines the concentrations of all gases into a single file, organized by timestamp:

yaml
Copy code
Timestamp,CO_Concentration,CH4_Concentration,Propane_Concentration,Other_Gas_Concentration,Temperature,Humidity,Pressure
2020-01-01 00:00:00,5.2,1.3,0.8,0.4,20,50,1013
2020-01-01 01:00:00,6.5,1.8,0.9,0.5,21,48,1012

## Usage
To use this repository, follow these steps:

Clone the repository to your local machine.
Navigate to the datasets/ directory to access the original and modified datasets.
Explore the notebooks/ directory to understand the data analysis and model training process.
If desired, run the notebooks in a Jupyter environment to reproduce the analysis and train the models.
The trained models are available in the models/ directory. You can load these models and use them for predicting gas concentrations based on environmental factors.
Please note that this project assumes basic knowledge of data analysis and machine learning techniques. It is recommended to have a Python environment with necessary dependencies installed.

## License
The code and datasets in this repository are provided under the MIT License. You are free to use, modify, and distribute the code and datasets for personal and commercial purposes.

## Acknowledgments
If you use this project or find it helpful, it would be appreciated if you could acknowledge it by citing this repository or providing a link to it. Additionally, any contributions or improvements to the project are welcome through pull requests.