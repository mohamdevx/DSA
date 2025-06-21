{
 "cells": [
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "PUSH Operation"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {
    "vscode": {
     "languageId": "plaintext"
    }
   },
   "outputs": [],
   "source": [
    "\n",
    "#include <iostream>\n",
    "#include <fstream> // For file handling\n",
    "\n",
    "int main() {\n",
    "    // Open a file in write mode\n",
    "    std::ofstream file(\"hello.txt\", std::ios::out);\n",
    "    \n",
    "    if (file.is_open()) {\n",
    "        // Write \"hello\" to the file\n",
    "        file << \"hello\";\n",
    "        file.close(); // Close the file\n",
    "        std::cout << \"File written successfully!\" << std::endl;\n",
    "    } else {\n",
    "        std::cerr << \"Error opening file!\" << std::endl;\n",
    "    }\n",
    "\n",
    "    return 0;\n",
    "}"
   ]
  }
 ],
 "metadata": {
  "language_info": {
   "name": "python"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 2
}
