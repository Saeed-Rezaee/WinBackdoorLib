<h1>Commands List</h1>

<h4>void hello_world(void)</h4>
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
<br></br>
<br></br>

<h4>char * raw_input(char *input_string);</h4>
this function is an input for strings just like Python 2.7
return input_string value
<br></br>
<br></br>

<h4>int input(char *input_string);</h4>
this function allows you to make an entry of an integer number
return input_integer
<br></br>
<br></br>

<h4>void clear(void);</h4>
this function clears the console
does not return any value
<br></br>
<br></br>

<h4>int substring_in_string(char *substring,char *string);</h4>
return 1 if true return 0 if false
<br></br>
<br></br>

<h4>int tchar_substring_in_string(char *substring,TCHAR *string);</h4>
same as the function said above
<br></br>
<br></br>

<h4>int StartsWith(const char *a, const char *b);</h4>
This Function verifies if the beginning of the character string starts with the selected character string.

return 1 if true return 0 if false
<br></br>
<br></br>

<h4>TCHAR *get_username()</h4>
This Function Return Username Of Session
<br></br>
<br></br>

<h4>void print(char *string)</h4>
This Function print String in Console

<h4>int check_dir(char *pathname)</h4>
This Function Return -1 if path not exists
return 1 if path is Dir
return 0 if path is file
<br></br>
<br></br>

<h4>void hide_console(void)</h4>
This Function Hide Console
<br></br>
<br></br>

<h4>void sleep(int seconds)</h4>
This Function Make Time Sleep
<br></br>
<br></br>

<h4>int connect(SOCKET socks_instance,struct sockaddr_in session)</h4>
This Function Connect To Host With SOCKET Object and sockaddr_in structure
return 0 if connected & return -1 if not connected
<br></br>
<br></br>

<h4>int send(SOCKET socks_instance,char *buffer)</h4>
This Function allows you to send data
return -1 if failed and return 0 if sent
<br></br>
<br></br>

<h4>int recv(SOCKET socks_instance,char *buffer,int len)</h4>
This Function allows you to receive data and store it in a buffer.
return data if true else return 0 or -1 if not data
<br></br>
<br></br>

<h4>void cmd_command(SOCKET socks_instance,char *command)</h4>
This Function allows you to send a command in the cmd.exe process.
<br></br>
<br></br>

<h4>void powershell_command(SOCKET socks_instance,char*command)</h4>
This function allows you to send a command in the powershell.exe process.
<br></br>
<br></br>

<h4>void wsl_command(SOCKET socks_instance,char *command)</h4>
This function allows you to send a command to the wsl.exe sub-system if present.
<br></br>
<br></br>

<h4>void execute_process(SOCKET socks_instance,char *process)</h4>
This function executes a process.
<br></br>
<br></br>

<h4>void execute_cmd(SOCKET socks_instance);</h4>
This Function executes cmd commands and returns the contents of the remote terminal by socket.
<br></br>
<br></br>

<h4>void execute_powershell(SOCKET socks_instance);</h4>
This Function executes powershell.exe and returns the contents of its contents remotely per socket.
<br></br>
<br></br>

<h4>int download_to_ftp(char* filename, char* ftp_host, int ftp_port,char *ftp_user,char *ftp_pass)</h4>
This function allows you to send a file to an ftp server.

Return 0 if sent else return -1
<br></br>
<br></br>

<h4>int cd(char *path)</h4>
This function allows you to change paths.
if true return 0 else return -1
<br></br>
<br></br>

<h4>int download_on_ftp(char* filename, char* ftp_host, int ftp_port, char* ftp_user, char* ftp_pass)</h4>
This function allows you to download a file from an ftp server.
return 0 if downloaded else return -1

<h4>int keylogger_spawn(string FILENAME_LOG)</h4>
launches a keylogger
return 0
<br></br>
<br></br>

<h4>vector<string> split(const string& s, char delim)</h4>
allows to split a character string
return vector results
<br></br>
<br></br>

<h4>bool endswith(const std::string& str, const std::string& suffix)</h4>
if return code is 1 its True else if 0 its False
<br></br>
<br></br>

<h4>bool startswith(const std::string& str, const std::string& prefix)</h4>
if return code is 1 its True else if 0 its False
<br></br>
<br></br>


<h4>vector<int> GetScreenResolution(int &w, int &h)</h4>
Allows to recover the size of the screen
return results
<br></br>
<br></br>

<h4>bool screenshot(int x, int y, int w, int h, LPCSTR fname)</h4>
Take a ScreenShot and save as filename
if true return true if false return false
<br></br>
<br></br>

<h4>char *cmd_popen_char(const char *command,const char *mode,char *buffer)</h4>
This function allows you to execute a system command and retrieve the stdout or stderr output.
return buffer
<br></br>
<br></br>

<h4>string tohex(string buffer)</h4>
Allows you to convert a string into hexadecimal.
return hexa value
<br></br>
<br></br>

<h4>string xor_string_enc_dec(string data, char key[])</h4>
allows to encrypt a character string with a symmetric XOR key

return Xor Value
<br></br>
<br></br>

<h4>int xor_logic(int a,int b)</h4>
Xor Boolean Operations
<br></br>
<br></br>

<h4>bool bool_xor_logic(bool a, bool b)</h4>
Xor Boolean Operations
<br></br>
<br></br>

<h4>int getpid(const string& process_name)</h4>
allows to recover the pid of a process
return pid
<br></br>
<br></br>

<h4>string string_to_shellcode(string buffer);</h4>
return Hex Shellcode Format
<br></br>
<br></br>

<h4>string hex_to_shellcode(string buffer);</h4>
return hex to hex_execution Format
<br></br>
<br></br>

<h4>BOOL check_admin(void);</h4>
return 1 if administrator is True else return 0 if no administrator
<br></br>
<br></br>
<h4>string read_file(string filename,string buffer_return);</h4>
string read_file_binary(string filename,string buffer_return);
string read_file_to_hex(string filename,string buffer_return);
string read_file_binary_to_hex(string filename,string buffer_return);
void open_process(LPCSTR process,LPCSTR args,LPCSTR dir);
char *get_system_info_by_powershell(char* buffer, char* mode);
