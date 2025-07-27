# Qt Login Page with Backend – CoreEL Technologies

A simple Qt-based login UI with backend authentication logic (CSV-based), developed for CoreEL Technologies.

## Features
- QtWidgets-based UI
- Username and password input
- CSV-based backend for user authentication
- Clean separation of UI and logic

## Project Structure
- `mainwindow.ui` – Login UI layout
- `mainwindow.cpp/h` – Backend logic
- `users.csv` – Stores usernames and passwords

## How to Run
1. Open the `.pro` file in Qt Creator
2. Build and run the project

## Screenshots

## Backend Authentication Logic

- The application reads from a CSV file named `users.csv`
- Each line in the file contains a username and password separated by a comma

## License
MIT 
