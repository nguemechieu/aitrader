#include <iostream>
#include <string>

class User {
private:
    std::string username;
    std::string password;
    std::string email;
    std::string firstName;
    std::string lastName;
    int age;

public:
    // Constructor
    User(std::string username, std::string password, std::string email, 
         std::string firstName, std::string lastName, int age) 
         : username(username), password(password), email(email),
           firstName(firstName), lastName(lastName), age(age) {}

    // Getters and Setters
    void setUsername(const std::string& newUsername) {
        username = newUsername;
    }

    std::string getUsername() const {
        return username;
    }

    void setPassword(const std::string& newPassword) {
        password = newPassword;
    }

    std::string getPassword() const {
        return password;
    }

    void setEmail(const std::string& newEmail) {
        email = newEmail;
    }

    std::string getEmail() const {
        return email;
    }

    void setFirstName(const std::string& newFirstName) {
        firstName = newFirstName;
    }

    std::string getFirstName() const {
        return firstName;
    }

    void setLastName(const std::string& newLastName) {
        lastName = newLastName;
    }

    std::string getLastName() const {
        return lastName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    int getAge() const {
        return age;
    }

    // Display user details
    void displayUserInfo() const {
        std::cout << "User Information: \n"
                  << "Username: " << username << "\n"
                  << "Email: " << email << "\n"
                  << "First Name: " << firstName << "\n"
                  << "Last Name: " << lastName << "\n"
                  << "Age: " << age << std::endl;
    }
};
