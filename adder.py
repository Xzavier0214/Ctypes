import ctypes

#%% 加載dll
adder = ctypes.CDLL('./lib/libadder.dylib')
print(adder.add_integer)

#%% 執行整形求和
a = ctypes.c_int(4)
b = ctypes.c_int(5)
result = adder.add_integer(a, b)
print(result)


#%%
