import ctypes
import os
h = ctypes.cdll.LoadLibrary("./test.dll")
h.main()