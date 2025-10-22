from .transaction import Transaction

class RecurringTransaction(Transaction):
    def __init__(self, amount, category, date, frequency):
        super().__init__(amount, category, date)
        self.frequency = frequency

    def get_summary(self):
        pass  # Stub method
