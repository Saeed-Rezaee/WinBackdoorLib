Commands List

void hello_world(void)
this function displays "Hello World" in the console, does not return any value
```cpp
//compile : g++ backdoorlib.cpp test.cpp -o test.exe
#include "backdoorlib.h"
#include <iostream>
#include <windows.h>

int main()
{
    hello_world();
    return 0;
}
```

char * raw_input(char *input_string);
this function is an input for strings just like Python 2.7
return input_string value

int input(char *input_string);
this function allows you to make an entry of an integer number
return input_integer

void clear(void);
this function clears the console
does not return any value

int substring_in_string(char *substring,char *string);
return 1 if true return 0 if false

int tchar_substring_in_string(char *substring,TCHAR *string);
same as the function said above

int StartsWith(const char *a, const char *b);
This Function verifies if the beginning of the character string starts with the selected character string.

return 1 if true return 0 if false

TCHAR *get_username()
This Function Return Username Of Session

void print(char *string)
This Function print String in Console

int check_dir(char *pathname)
This Function Return -1 if path not exists
return 1 if path is Dir
return 0 if path is file

void hide_console(void)
This Function Hide Console

void sleep(int seconds)
This Function Make Time Sleep

int connect(SOCKET socks_instance,struct sockaddr_in session)
This Function Connect To Host With SOCKET Object and sockaddr_in structure
return 0 if connected & return -1 if not connected

int send(SOCKET socks_instance,char *buffer)
This Function allows you to send data
return -1 if failed and return 0 if sent

int recv(SOCKET socks_instance,char *buffer,int len)
This Function allows you to receive data and store it in a buffer.
return data if true else return 0 or -1 if not data

void cmd_command(SOCKET socks_instance,char *command)
This Function allows you to send a command in the cmd.exe process.

void powershell_command(SOCKET socks_instance,char*command)
This function allows you to send a command in the powershell.exe process.

void wsl_command(SOCKET socks_instance,char *command)
This function allows you to send a command to the wsl.exe sub-system if present.

void execute_process(SOCKET socks_instance,char *process)
This function executes a process.

void execute_cmd(SOCKET socks_instance);
This Function executes cmd commands and returns the contents of the remote terminal by socket.

void execute_powershell(SOCKET socks_instance);
This Function executes powershell.exe and returns the contents of its contents remotely per socket.

int download_to_ftp(char* filename, char* ftp_host, int ftp_port,char *ftp_user,char *ftp_pass)
This function allows you to send a file to an ftp server.

Return 0 if sent else return -1

int cd(char *path)
This function allows you to change paths.
if true return 0 else return -1

int download_on_ftp(char* filename, char* ftp_host, int ftp_port, char* ftp_user, char* ftp_pass)
This function allows you to download a file from an ftp server.
return 0 if downloaded else return -1

int keylogger_spawn(string FILENAME_LOG)
launches a keylogger
return 0

vector<string> split(const string& s, char delim)
allows to split a character string
return vector results

bool endswith(const std::string& str, const std::string& suffix)
if return code is 1 its True else if 0 its False

bool startswith(const std::string& str, const std::string& prefix)
if return code is 1 its True else if 0 its False


vector<int> GetScreenResolution(int &w, int &h)
Allows to recover the size of the screen
return results

bool screenshot(int x, int y, int w, int h, LPCSTR fname)
Take a ScreenShot and save as filename
if true return true if false return false

char *cmd_popen_char(const char *command,const char *mode,char *buffer)
This function allows you to execute a system command and retrieve the stdout or stderr output.
return buffer

string tohex(string buffer)
Allows you to convert a string into hexadecimal.
return hexa value

string xor_string_enc_dec(string data, char key[])
allows to encrypt a character string with a symmetric XOR key

return Xor Value

int xor_logic(int a,int b)
Xor Boolean Operations

bool bool_xor_logic(bool a, bool b)
Xor Boolean Operations

int getpid(const string& process_name)
allows to recover the pid of a process
return pid

string string_to_shellcode(string buffer);
return Hex Shellcode Format

string hex_to_shellcode(string buffer);
return hex to hex_execution Format

BOOL check_admin(void);
return 1 if administrator is True else return 0 if no administrator
string read_file(string filename,string buffer_return);
string read_file_binary(string filename,string buffer_return);
string read_file_to_hex(string filename,string buffer_return);
string read_file_binary_to_hex(string filename,string buffer_return);
void open_process(LPCSTR process,LPCSTR args,LPCSTR dir);
char *get_system_info_by_powershell(char* buffer, char* mode);
