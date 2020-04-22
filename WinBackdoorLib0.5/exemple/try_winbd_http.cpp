#include "winbd_wininet.h"
//g++ winbd_wininet.cpp try_winbd_http.cpp -o simple_http.exe -s -ffunction-sections -fdata-sections -Wno-write-strings -fno-exceptions -fmerge-all-constants -static-libstdc++ -static-libgcc -std=c++11 -lwininet

using namespace std;

int main()
{
	cout << "Send HTTP Requests" << endl;
	string my_link = "https://google.com/";
	vector<string> s = split_link(my_link,'/');
	for (int i = 0; i < s.size(); i++)
	{
		cout << i << " String Split : " << s[i] << endl;
	}

	string ss = path_link(my_link);
	cout << "Hostname : " << ss << endl;

	http_struct lol;
	send_https_get(my_link,&lol);
	cout << lol.content << endl;
	cout << lol.status_code << endl;
	cout << lol.status_text << endl;
	return 0;
}