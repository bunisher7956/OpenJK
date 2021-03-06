This mod implements an account system which serves the purpose of persisting information tied to registered user accounts.

The account system uses flat-file storage of all registered accounts in order to minimize the technological knowledge required to operate and maintain things server-side. 

These files will be stored relative to the server-side documents. These files are stored under $SERVER_FOLDER/Accounts/<AccountName>.acc 

The account system present in this mod requires user passwords to be hashed using OpenSSL's SHA256 implementation for security reasons and will not be offered without this implementation.

Any derivative mods that has disabled, removed or tampered with this implementation should be steered clear from to protect your data in a safely manner.

The account system consists of code written by the authors of this project within the following 1 files:
1. g_cmds.c 
    1.1 Contains the including of OpenSSL and its SHA header file. 
	1.2 Handles the register and login commands made available through /register and /login
    1.3 Handles hashing of account passwords using the SHA256 implementation from OpenSSL. 
    1.4 Writes to the local file system (directory relative to the server-side documents location) using Q3 I/O functions (FS_Open(), FS_Read(), FS_Write(), FS_Append(), FS_Close())