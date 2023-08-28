#!/bin/bash

# Collect all the .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file into an object file
for c_file in $c_files; do
    gcc -c $c_file -o ${c_file%.c}.o
done

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up intermediate object files
rm *.o

echo "Static library liball.a created successfully."
