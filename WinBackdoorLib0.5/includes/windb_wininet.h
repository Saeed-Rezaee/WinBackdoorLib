#pragma once
#include <iostream>
#include <wininet.h>

using namespace std;

int download_on_ftp(char* filename, char* ftp_host, int ftp_port, char* ftp_user, char* ftp_pass);
int download_to_ftp(char* filename, char* ftp_host, int ftp_port, char* ftp_user, char* ftp_pass);