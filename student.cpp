std::stringstream ss;
ss.str(studentString);

std::string street;
std::string city;
std::string state;
std::string zip;
std::string tBirthDate;
std::string tGradDate;
std::string tCreditHours;

getLine(ss, firstName, ',');
getLine(ss, lastName, ',');
getLine(ss, street, ',');
getLine(ss, city, ',');
getLine(ss, state, ',');
getLine(ss, zip, ',');
getLine(ss, tBirthDate, ',');
getLine(ss, tGradDate, ',');
getLine(ss, tCreditHours);

address->init(street, city, state, zip);
birthDate->init(tBirthDate);
gradDate->init(tGradDate);

ss.clear();
ss.str(tCreditHours);
ss >> creditHours;

std::cout << "Birth: ";
birthDate->printDate();
std::cout << "Grad: ";
gradDate->printDate()
