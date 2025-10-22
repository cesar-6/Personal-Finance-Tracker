import tkinter as tk

def launch_gui():
    root = tk.Tk()
    root.title("Personal Finance Tracker")
    tk.Label(root, text="Welcome to Finance Tracker").pack()
    root.mainloop()
