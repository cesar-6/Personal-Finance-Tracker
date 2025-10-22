import unittest
from models.transaction import Transaction

class TestTransaction(unittest.TestCase):
    def test_transaction_creation(self):
        t = Transaction(100, "Groceries", "2025-10-21")
        self.assertEqual(t.amount, 100)

if __name__ == "__main__":
    unittest.main()
