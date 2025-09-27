#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <map>

using namespace std;

// Structure to store doctor information
struct Doctor {
    string name;
    string specialization;
    string availability;
    double consultationFee;
};

// Structure for appointment booking
struct Appointment {
    string patientName;
    string doctorName;
    string date;
    string timeSlot;
    double fee;
};

// Global vectors to store data
vector<Doctor> doctors;
vector<Appointment> appointments;

// Function prototypes
void initializeDoctors();
void displayMainMenu();
void symptomChecker();
void checkDoctorAvailability();
void bookAppointment();
void viewAppointments();
int getValidatedInput(int min, int max);
void clearScreen();

int main() {
    initializeDoctors(); // Initialize doctor data
    
    int choice;
    bool running = true;
    
    cout << "================================================" << endl;
    cout << "    TELEMEDICINE HEALTHCARE ASSISTANT" << endl;
    cout << "  Bridging Healthcare Gaps Through Technology" << endl;
    cout << "================================================" << endl;#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <map>

using namespace std;

// Structure to store doctor information
struct Doctor {
    string name;
    string specialization;
    string availability;
    double consultationFee;
};

// Structure for appointment booking
struct Appointment {
    string patientName;
    string doctorName;
    string date;
    string timeSlot;
    double fee;
};

// Global vectors to store data
vector<Doctor> doctors;
vector<Appointment> appointments;

// Function prototypes
void initializeDoctors();
void displayMainMenu();
void symptomChecker();
void checkDoctorAvailability();
void bookAppointment();
void viewAppointments();
int getValidatedInput(int min, int max);
void clearScreen();

int main() {
    initializeDoctors(); // Initialize doctor data
    
    int choice;
    bool running = true;
    
    cout << "================================================" << endl;
    cout << "    TELEMEDICINE HEALTHCARE ASSISTANT" << endl;
    cout << "  Bridging Healthcare Gaps Through Technology" << endl;
    cout << "================================================" << endl;