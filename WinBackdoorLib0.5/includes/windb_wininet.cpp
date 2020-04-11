#include "windb_wininet.h"
#include <iostream>

using namespace std;

int download_on_ftp(char* filename, char* ftp_host, int ftp_port, char* ftp_user, char* ftp_pass)
{
    HINTERNET hNet;
    hNet = InternetOpen("Ftp", INTERNET_OPEN_TYPE_DIRECT, 0, 0, 0);
    if (hNet != INVALID_HANDLE_VALUE)
    {
        HINTERNET hFtp = InternetConnect(hNet, ftp_host, ftp_port, ftp_user, ftp_pass, INTERNET_SERVICE_FTP, INTERNET_FLAG_PASSIVE, 0);
        if (hFtp != INVALID_HANDLE_VALUE)
        {
            if (FtpGetFile(hNet, filename, filename, TRUE, FILE_ATTRIBUTE_NORMAL, FTP_TRANSFER_TYPE_BINARY, 0)) {
                return 0;
            }
            else {
                return -1;
            }
            InternetCloseHandle(hFtp);
        }
    }
}

int download_to_ftp(char* filename, char* ftp_host, int ftp_port, char* ftp_user, char* ftp_pass)
{
    HINTERNET hNet;
    hNet = InternetOpen("Ftp", INTERNET_OPEN_TYPE_DIRECT, 0, 0, 0);
    if (hNet != INVALID_HANDLE_VALUE)
    {
        HINTERNET hFtp = InternetConnect(hNet, ftp_host, ftp_port, ftp_user, ftp_pass, INTERNET_SERVICE_FTP, INTERNET_FLAG_PASSIVE, 0);
        if (hFtp != INVALID_HANDLE_VALUE)
        {
            if (FtpPutFile(hFtp, filename, filename, FTP_TRANSFER_TYPE_BINARY, 0))
            {
                return 0; // file envoyer au ftp
            }
            else {
                return -1; // file error
            }
            InternetCloseHandle(hFtp);
        }
    }
}