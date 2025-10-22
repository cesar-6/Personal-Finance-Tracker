from .transaction import Transaction

class Income(Transaction):
    def __init__(self, amount, category, date, source):
        super().__init__(amount, category, date)
        self.source = source

    def get_summary(self):
        pass  # Stub method
