from .transaction import Transaction

class Expense(Transaction):
    def __init__(self, amount, category, date, vendor):
        super().__init__(amount, category, date)
        self.vendor = vendor

    def get_summary(self):
        pass  # Stub method
