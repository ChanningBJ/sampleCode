#include <unistd.h>
#include <iostream>

using namespace std;


static void alarm_handler(int);

int main(int argc, char *argv[])
{
	if(signal(SIGALRM,alarm_handler)==SIG_ERR){
		cout<<"handler error"<<endl;
	}
	alarm(2);
        int a;
	while(cin>>a){
		;;
	}
	return 0;
}


static void alarm_handler(int signo){
	cout<<"alarm------"<<endl;
	alarm(2);
}









