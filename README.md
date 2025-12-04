

**ABSTRACT**

The Sports Management System is a console-based application developed in the C programming language. Its main objective is to store, manage, and  organize information about players in different sports teams
. The system allows the user to add new player records, view all players, search for a player using their ID, update existing information, and delete records when needed. The program uses structures and file
handling to maintain the data, ensuring that player information is saved even after the program is closed. This project demonstrates the practical use of arrays, functions, structures, and file operations in 
C programming. It provides a simple and efficient way to manage sports-related data and can be expanded with additional features in the future.
Here are the **features of the Sports Management System (C Program)** in a clear, easy list:

1. **Add Player Information**

   * Allows the user to enter details like ID, name, team, age, and sport.
   * Prevents duplicate player IDs.

2. **Display All Players**

   * Shows a neatly formatted list of all stored players and their information.

3. **Search Player by ID**

   * Quickly finds a player using their unique ID.
   * Useful for checking details fast.

4. **Update Player Details**

   * Edits existing player information.
   * Lets the user keep old values if no change is needed.

5. **Delete Player Record**

   * Removes a player from the system.
   * Automatically shifts data to avoid empty spaces.

6. **File Handling (Save & Load)**

   * Saves all player records to a file (`players.dat`).
   * Automatically loads saved data when the program starts.

7. **User-Friendly Menu System**

   * Clear menu options for navigation.
   * Input validation to avoid errors.

8. **Efficient Data Management**

   * Uses structures (`struct`) and arrays to organize information.
   * Supports up to 100 player records (can be increased).

9. **Lightweight & Fast**

   * Runs in terminal/command prompt.
   * Requires very low memory.

Here are the **Technical Requirements** and **Functional Requirements** for your **Sports Management System (C Language Project)**.
You can directly use this in your project report.

---

## ✅ **Technical Requirements**

### **1. Hardware Requirements**

* Minimum **1 GB RAM**
* **Processor:** Any basic CPU that supports C compilation
* **Storage:** At least **10–20 MB** free space
* **Operating System:**

  * Windows / Linux / macOS (any OS that supports GCC or a C compiler)

### **2. Software Requirements**

* **C Compiler:**

  * GCC (MinGW, TDM-GCC, Linux GCC)
  * OR any compiler like Turbo C, Clang, etc.
* **Text Editor / IDE:**

  * VS Code
  * Code::Blocks
  * Dev-C++
  * Notepad++ (optional)
* **Terminal/Command Prompt** to run the compiled program

---

## ✅ **Functional Requirements**

These describe what the program *must do*.

### **1. Add Player**

* System must allow adding new player details (ID, name, age, team, sport).
* Must prevent duplicate player IDs.

### **2. Display Players**

* System must show all stored players in a tabular format.

### **3. Search Player**

* System must allow searching for a player using **player ID**.
* Must display full details if found.

### **4. Update Player**

* System must allow editing player information.
* Must allow keeping old information if no change is made.

### **5. Delete Player**

* System must delete a player record by ID.
* Data should shift automatically to maintain order.

### **6. Save Data**

* System must save all records to a file (`players.dat`).
* Must support **persistent storage** (data should remain even after closing program).

### **7. Load Data**

* System must automatically load saved data when the program starts.

### **8. User Interface**

* Menu-driven console interface.
* Error handling for invalid inputs.
Here’s a **simple, beginner-friendly guide** to run your **C Sports Management System** code on your computer.

---

# ✅ **How to Run the C Program (Step-by-Step)**

## **OPTION 1 — Using VS Code (Recommended)**

### **Step 1: Install Required Software**

1. Install **VS Code**
2. Install the **C/C++ Extension** (Microsoft)
3. Install **GCC Compiler (MinGW)**

   * Download MinGW
   * Add its *bin* folder to **PATH**
   * Example: `C:\MinGW\bin`

### **Step 2: Save Your C File**

* Create a new file named: **sports.c**
* Paste the program into it.

### **Step 3: Open Terminal in VS Code**

* Click **Terminal → New Terminal**

### **Step 4: Compile the Code**

Type:

```
gcc sports.c -o sports
```

This creates an executable file named **sports** (or sports.exe on Windows).

### **Step 5: Run the Program**

* On Windows:

```
./sports
```

* On Linux/macOS:

```
./sports
```

---

# ✅ OPTION 2 — Using Code::Blocks

### **Step 1:** Install Code::Blocks (with MinGW bundle).

### **Step 2:** Create a new project → Console Application → C.

### **Step 3:** Delete auto code & paste your program.

### **Step 4:** Click **Build & Run** (F9).

Your program will run immediately.

---

# ✅ OPTION 3 — Using Online Compilers

You can use any online C compiler:

* **OnlineGDB**
* **Replit**
* **JDoodle**

### Steps:

1. Open the website.
2. Choose **C language**.
3. Paste your code.
4. Click **Run**.











