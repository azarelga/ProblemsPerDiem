import pandas as pd

df = pd.DataFrame()
for m in range(0, 11):
    ser = pd.Series()
    ser["m"] = m
    for n in range(0, 11):
        if m >= n:
            continue
        ser["n"] = n
        ser["result"] = 2**m + 2**n
        df = df.append(ser, ignore_index=True)


df = df.sort_values(by="result")
df = df.reset_index(drop=True)
df.to_csv("series.csv", index=True)
