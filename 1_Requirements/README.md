# Requirements
## Introduction
As the covid rate increased the need for vaccine and the vaccine registration need has been increased.This mini project "Vaccine Registration System" helps you in finding out the number of doses has been vaccinated and the details of the peprson who is registering.
Due to multiple input and output commands on the server, it resulted in several slow running issues and crashes. 
The Aadhar details were used to allot the vaccines and hence it operated on a central server.
To avoid the use of central server for all commmands, a local server will be loaded with the vaccine-registered data. 
Local verification and completion of vaccination data will be processed locally and will be loaded back to the main server by the end of day.
        Each vaccine centre will operate locally to register and allot vaccines. 
The basic registration can be done online and schedules are set as desired by the patient. Assuming a vaccination centre can vaccinate around 100 people in a day. 
The local server must store the data of around 100 people where the allocated online registration data will be loaded onto the local server of that local centre. 
Verification of the data is done based on the details provided by the patient. Once completed, the data of the vaccinated will be sent back for future use and reference.


### Advantages
* Smoother data handling.
* Pre data readily available for verification.
* Flexibility to add new registrations limited with server alloted memory.

### Disadvantages
* Cannot add large number of new registrations due to local server limitations.
* Encryption is not enabled to protect the data.
* OTP verification is not activated for new registrations.

# SWOT Analysis
### Strengths
 * Local vaccine centre database enabling smoother operation.
 * Recorded data is sent to main central database for future suggestions.
 * Created a database to vaccinate people based on their aadhar number.

### Weakness
 * Aadhar linked phone number database not available.
 * OTP generation for verification is absent.
 * Credential validity verification is absent.

### Opportunities
 * Tracking to determine the pace of vaccine development.

### Threats
 * Requires personal data of people and encryption of data is not obtained in this program.

## 4 W's and 1 H
### Who
* Patient who needs to be vaccinated.
### What
* Verify the details of the patient using the alloted data.
### When
* During the time alloted for vaccination.
### Where
* Local vaccination centre.
### How
* Online registration and on field verification using local server.

## High Level Requirements
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| HR01 | User should be able to add new registrations  | Implemented |
| HR02 | OTP generated verification for secure registration  | Implemented |
| HR03 | System should recognize vaccinated patients | Implemented |
| HR04 | System should be updated with the time interval between two doses | Future |
| HR05 | System should be able to access pre loaded registration data for verification | Future |
| HR06 | System should recognize invalid credentials | Future |

## Low Level Requirement
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| LR01 | Full list of patients vaccinated must be set as output | Implemented |
| LR02 | Vaccine vials must be tracked for its use within a day | Implemented |
| LR03 | Total quantity of vaccines used must be shown by EOD | Implemented |
| LR04 | Only new user must be given an option to select vaccine type | Future |
| LR05 | Remaining and present stock of vaccines must be tracked  | Future |
