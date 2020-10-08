# Key points for linking shared libraries

* Export symbols, otherwise visual studio would never produce .lib files
* Set the shared libraries' target output path, or the compiler would never find them