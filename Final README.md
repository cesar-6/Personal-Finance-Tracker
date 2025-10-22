
## Test Case Discussion
To verify the program works as intended, the following test cases were used:

- **Transaction Creation Test**  
  Verified that a `Transaction` object correctly stores amount, category, and date.

- **Income Inheritance Test**  
  Confirmed that `Income` inherits from `Transaction` and adds a `source` attribute.

- **GUI Launch Test**  
  Manually launched the GUI to ensure the window opens and displays the welcome message.

- **Expense and Recurring Stub Tests**  
  Stub methods were structured for future testing of vendor and frequency attributes.

- **Unit Test File (`test_transactions.py`)**  
  Contains automated tests using Python’s `unittest` framework to validate object creation and attribute assignment.

## How to Run the Program
1. Open a terminal or Thonny IDE.
2. Navigate to the `PersonalFinanceTracker` directory.
3. Run the program with:
