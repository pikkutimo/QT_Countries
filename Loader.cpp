#include "loader.h"

// Function to read the data from csv-file into usable form
std::vector<std::vector<QString>> loader() {

    std::vector<std::vector<QString>> listOfCountries;
    std::vector<QString> country;
    // Open the file from the directory
    QFile file("../countries.csv");
    if ( !file.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File doesn't exist";
    } else {

        //Create a thread to retrieve data from a file
        QTextStream in(&file);

        //Reads the data up to the end of file
        while (!in.atEnd())
        {
            QString line = in.readLine();

            // consider that the line separated by semicolons into columns
            for (QString item : line.split(",")) {
                country.push_back(item);
            }

            listOfCountries.push_back(country);
            country.clear();

        }
    }
    file.close();

    return listOfCountries;
}
