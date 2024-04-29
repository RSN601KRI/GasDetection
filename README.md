## Gas Detection Analysis and Prediction
This repository contains code and datasets for analyzing and predicting gas concentrations, specifically focusing on gases such as carbon monoxide, methane, propane, and others. The project aims to develop models to predict the concentration levels of these gases based on various environmental factors.

![iot](https://github.com/RSN601KRI/GasDetection/assets/106860359/9f988233-b638-494b-a7ba-ca97b1c12f59)

## Dataset
The dataset used for analysis and prediction is stored in the ./datasets/ directory. The original dataset is divided into separate files for each gas type, containing data points for concentration levels, timestamps, and environmental conditions. Additionally, a modified dataset is provided, combining the data for all gases into a single file for comparative analysis.
## Problem Statement
Existing LPG systems suffer from limitations in real-time monitoring, inadequate detection of gas leaks, pressure fluctuations, and inefficient response, mechanisms, posing significant safety risks. These safety concerns include the potential for fire, explosion, and health hazards due to gas leaks and improper handling of LPG. There is a pressing need for a comprehensive solution to enhance safety, improve monitoring capabilities, and mitigate the risks associated with LPG usage. 
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

![WhatsApp Image 2024-04-13 at 7 53 10 PM](https://github.com/RSN601KRI/GasDetection/assets/106860359/656f3e4e-2b61-4333-bc7c-d546ba8f8a8c)

ESP8266 microcontroller board
MQ2 sensor
6.2 LC display with I2C model
Red and Green LED
Small piezo buzzer
Arduino Uno
12V, 2A Adapter
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

![WhatsApp Image 2024-04-13 at 7 53 07 PM](https://github.com/RSN601KRI/GasDetection/assets/106860359/350e2863-4b74-45bf-b9e9-b4892e39e282)

## Usage
To use this repository, follow these steps:

Clone the repository to your local machine.
Navigate to the datasets/ directory to access the original and modified datasets.
Explore the notebooks/ directory to understand the data analysis and model training process.
If desired, run the notebooks in a Jupyter environment to reproduce the analysis and train the models.
The trained models are available in the models/ directory. You can load these models and use them for predicting gas concentrations based on environmental factors.
Please note that this project assumes basic knowledge of data analysis and machine learning techniques. It is recommended to have a Python environment with the necessary dependencies installed.

![WhatsApp Image 2024-04-13 at 7 55 54 PM](https://github.com/RSN601KRI/GasDetection/assets/106860359/68591342-ee72-4cb9-a52d-9ad36c20f884)

## Team Members 

Ranjan Gupta
Ashish Panday
Roshni Kumari
Antima Mishra
Rashi Bajpai

## Describe Use Cases:
Home Appliances: Gas leaks in stoves, ovens, water heaters, and furnaces due to faulty connections or damaged pipes. 
Industrial Settings: Equipment malfunction or pipeline damage in industries using methane, propane, or hydrogen.  
Transportation: Leaks in vehicles powered by natural gas or propane caused by damaged fuel lines or faulty valves. 
Natural Gas Pipelines: Corrosion or excavation damage in underground pipelines leading to hazardous leaks.  
Chemical Plants: Equipment failure or human error in facilities handling hazardous gases.  
LPG Tanks: Leaks in residential or commercial LPG storage tanks due to overfilling or corrosion 

This background is the major motivation behind this study and the development of the warning information system to help people or residents monitoring. This study is to develop a technology system that integrates the LPG Sensor Detector, Microcontroller, and SMS Gateway Module. Moreover, this study will develop a  low cost, quick response, easy to use and implement and low maintenance gas leak prototype. home safety. This study is to develop a technology system that integrates the LP.

Gas Leakage Detection Systems as a Service (GLDaaS): Offer subscription-based services to industries for continuous monitoring of gas leaks using advanced sensor networks.

Gas Leak Detection Drones: Design and deploy drones equipped with specialized sensors to perform aerial inspections of industrial facilities for gas leaks, offering faster and more comprehensive coverage.

Smart Gas Pipeline Monitoring: Develop IoT-enabled sensors and software solutions for real-time monitoring of gas pipelines, allowing for early detection and mitigation of leaks.

Mobile Gas Leak Detection Units: Create mobile units equipped with advanced detection equipment to offer on-demand gas leak detection services for industries during maintenance shutdowns or emergencies.

Data Analytics for Gas Leak Prediction: Utilize machine learning algorithms to analyze historical data and predict potential gas leak locations, enabling proactive maintenance and risk mitigation strategies.

## Conclusion

This gas leak detector system contains two features, this includes the SMS Gateway Module. Moreover, his gas leak detector system contains two features, this includes the SMS Gateway feature for only sending warning information regarding the gas leak to the user and the Alarm for the warning alert. There are some improvements which can be applied for future work, such as regarding the SMS Gateway, it needs to be enhanced with feature such as notifying the user whenever the remaining credit balance is insufficient. Another thing which can be enhanced is regarding the sensor, the sensors in this module do not include somewhat notification for notifying the user whenever the sensor not working properly or not connected to the microcontroller in some cases, therefore, it is recommended to add this kind of features in the future work for better refinement. Notifying the user whenever the sensor not working properly or not connected to the microcontroller in some cases, therefore, it is recommended to add this kind of feature in future work for better refinement.

![image](https://github.com/RSN601KRI/GasDetection/assets/106860359/ade5177e-9329-4824-bf84-f62290c2bee0)


## License
The code and datasets in this repository are provided under the MIT License. You are free to use, modify, and distribute the code and datasets for personal and commercial purposes.

## Acknowledgments
If you use this project or find it helpful, it would be appreciated if you could acknowledge it by citing this repository or providing a link to it. Additionally, any contributions or improvements to the project are welcome through pull requests.

Thanks for Reading, mark star if you liked it!🙌
