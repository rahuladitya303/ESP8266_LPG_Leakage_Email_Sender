
#ifndef G_SENDER
#define G_SENDER
#define GS_SERIAL_LOG_1         // Print to Serial only server responce
//#define GS_SERIAL_LOG_2       //  Print to Serial client commands and server responce
#include <WiFiClientSecure.h>

class Gsender
{
    protected:
        Gsender();
    private:
        const int SMTP_PORT = 465;// STMP port change it if you use other smtp
        const char* SMTP_SERVER = "smtp.gmail.com";// gmail smtp server change if you use other smtp
<<<<<<< HEAD
        const char* EMAILBASE64_LOGIN = "c2lkZGhpc2hhbnU5N0BnbWFpbC5jb20=";// your email must me encoded with base64
        const char* EMAILBASE64_PASSWORD = "c2lkZGhpLTEyMzQ1";// your password must be encoded with base64
        const char* FROM = "siddhishanu97@gmail.com";//yoyr email address with encoding
=======
        const char* EMAILBASE64_LOGIN = "YOUR EMAIL ID ENCODED WITH BASE64";// your email must me encoded with base64
        const char* EMAILBASE64_PASSWORD = "YOUR PASSWORD ENCODED WITH BASE64";// your password must be encoded with base64
        const char* FROM = "youremail@gmail.com";//your email address without encoding
<<<<<<< HEAD
>>>>>>> 4257bbb2c2c741181b98e1191b37bf51a7562ef9
=======
>>>>>>> d5dc8701bb272b53094e8866fcaba9ce8ce20bc0
        const char* _error = nullptr;
        char* _subject = nullptr;
        String _serverResponce;
        static Gsender* _instance;
        bool AwaitSMTPResponse(WiFiClientSecure &client, const String &resp = "", uint16_t timeOut = 10000);

    public:
        static Gsender* Instance();
        Gsender* Subject(const char* subject);
        Gsender* Subject(const String &subject);
        bool Send(const String &to, const String &message);
        String getLastResponce();
        const char* getError();
};
#endif // G_SENDER
