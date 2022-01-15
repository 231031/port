import random
import tkinter as tk
# 3!@fqEBkav


def random_password():
    length = int(length_input.get())
    all_use = "ABCDEFGHIJKLMNOPQRSTUVWSYZ0123456789abcdefghijklmnopqrstuvwxyz!@#$%^&*()?."
    result = "".join(random.sample(all_use, length))
    output_label.configure(text=result)
    window.clipboard_clear()
    window.clipboard_append(str(result))


window = tk.Tk()
window.title('RANDOM')
window.config(background="LightBlue1")
window.minsize(width=325, height=125)
window.iconbitmap(r'C:\Users\ASUS\Downloads\lock.ico')

length_label = tk.Label(master=window, text='Enter length of password : ', fg="navy", background="LightBlue1",
                        font=('Cambria', 13))
length_label.grid(row=0, column=1, pady=7)

length_input = tk.Entry(master=window, width=18)
length_input.grid(row=0, column=2, pady=7)

result_label = tk.Label(master=window, text="Password :", fg="navy", background="LightBlue1",
                        font=('Cambria', 13))
result_label.grid(row=3, column=1, pady=7)

output_label = tk.Label(master=window, fg="red", background="LightBlue1", font=('Cambria', 15))
output_label.grid(row=3, column=2, pady=7)

create_button = tk.Button(master=window, text='random', command=random_password, width=13, height=1)
create_button.grid(row=4, column=2)

window.mainloop()
