C++ hello world solution.

Test app for testing source indexing and symbol serving. It will debug break
after printing Hello World. If the symbol server and source indexing is set up
correctly, the debugger should download the pdb file and then get the source
file and pop up on the __debugbreak() source line.
