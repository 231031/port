import tkinter as tk
from tkinter import ttk
from forex_python.converter import CurrencyRates
from forex_python.bitcoin import BtcConverter


def convert():
    if to_currency_input.get() == 'BTC':
        b = BtcConverter()
        result_bitcoin = b.convert_to_btc(float(number_input.get()), from_currency_input.get())
        output_label.configure(text=result_bitcoin)
    elif from_currency_input.get() == 'BTC':
        b = BtcConverter()
        from_bitcoin = b.convert_btc_to_cur(float(number_input.get()), to_currency_input.get())
        output_label.configure(text=from_bitcoin)
    else:
        c = CurrencyRates()
        result = c.convert(from_currency_input.get(), to_currency_input.get(), float(number_input.get()))
        output_label.configure(text=result)


def reset():
    number_input.delete(0, 'end')
    from_currency_input.set('')
    to_currency_input.set('')
    output_label.configure(text="")


window = tk.Tk()
window.title('CURRENCY CONVERTER')
window.config(background="wheat")
window.minsize(width=355, height=210)

amount_label = tk.Label(master=window, text='Enter amount of money : ', fg="midnight blue", background="wheat",
                        font=('IrisUPC', 20))
amount_label.grid(row=0, column=1, pady=7)

number_input = tk.Entry(master=window, width=18)
number_input.grid(row=0, column=2, pady=7)

from_currency_label = tk.Label(master=window, text='From currency : ', fg="midnight blue", background="wheat",
                               font=('IrisUPC', 20))
from_currency_label.grid(row=1, column=1, pady=7)

from_currency_input = ttk.Combobox(master=window, width=15)
from_currency_input['values'] = ('THB', 'USD', 'EUR', 'IDR', 'BGN', 'GBP', 'DKK', 'CAD', 'JPY', 'HUF', 'RON',
                                 'MYR', 'SEK', 'SGD', 'HKD', 'AUD', 'CHF', 'KRW', 'CNY', 'TRY', 'HRK', 'NZD', 'NOK',
                                 'RUB', 'INR', 'MXN', 'CZK', 'BRL', 'PLN', 'PHP', 'ZAR', 'BTC')
from_currency_input.grid(row=1, column=2, pady=7)

to_currency_label = tk.Label(master=window, text='To currency : ', fg="midnight blue", background="wheat",
                             font=('IrisUPC', 20))
to_currency_label.grid(row=2, column=1, pady=7)

to_currency_input = ttk.Combobox(master=window, width=15)
to_currency_input['values'] = ('THB', 'USD', 'EUR', 'IDR', 'BGN', 'GBP', 'DKK', 'CAD', 'JPY', 'HUF', 'RON',
                               'MYR', 'SEK', 'SGD', 'HKD', 'AUD', 'CHF', 'KRW', 'CNY', 'TRY', 'HRK', 'NZD', 'NOK',
                               'RUB', 'INR', 'MXN', 'CZK', 'BRL', 'PLN', 'PHP', 'ZAR', 'BTC')
to_currency_input.grid(row=2, column=2, pady=7)

convert_button = tk.Button(master=window, text='convert', command=convert, width=13, height=1)
convert_button.grid(row=3, column=1, pady=7)

reset_button = tk.Button(master=window, text='reset', command=reset, width=13, height=1)
reset_button.grid(row=3, column=2, pady=7)

result_label = tk.Label(master=window, text="Outcome :", fg="midnight blue", background="wheat",
                        font=('IrisUPC', 20))
result_label.grid(row=4, column=1, pady=7)

output_label = tk.Label(master=window, fg="red", background="wheat", font=('Consolas', 13))
output_label.grid(row=4, column=2, pady=7)

window.mainloop()















