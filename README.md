# Grocery Item Frequency Analyzer

**Project Overview**
The Corner Grocer Item Frequency Tracker is a C++ program designed to analyze daily produce sales by reading a text input file of purchased items. The program helps the store optimize product layout by determining how often each item is purchased throughout the day.

**Features**
Menu Option 1: Prompt the user to enter a specific item name and display the frequency of that item.
Menu Option 2: Display the frequency count of all items purchased during the day.
Menu Option 3: Display a histogram of all items, using asterisks (*) to visually represent the number of times each item was purchased.
Menu Option 4: Exit the program.

**System Design**
- Utilizes a map<string, int> to efficiently count and store item frequencies.
- Uses file input/output to read from the purchase log (InputFile.txt) and write frequency data to frequency.dat.
- Implements a class (ItemFrequency) encapsulating menu display and option functionalities, promoting modular and maintainable code.
- Prioritized pseudocode-driven development, ensuring clear logic before coding.
- Inline comments and clean naming conventions maintain readability and professionalism.

**Application Menu Screencaps**
_Main Menu_
![Grocer1](https://github.com/user-attachments/assets/a1392675-791b-4bbb-b168-ede55f14f3cc)

_Selecting Single Item_
![Grocer2](https://github.com/user-attachments/assets/b506294f-0366-4e64-af6e-4b8a0a4cbc32)

_Selecting All Items_
![Grocer3](https://github.com/user-attachments/assets/f0c69a97-0af8-46a7-848c-defdaf1eedc0)
