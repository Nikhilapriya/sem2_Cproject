#include <stdio.h>
#include <stdlib.h>
#define HOME "/user/home"
#define SHELL "/bin/bash"


void addUser(char* uid, char* gid, char* info, char* username) {
	FILE* filePointer;

	int bufferLength = 255;

	char line[bufferLength];

	filePointer = fopen("passwd", "rb");

	while(fgets(line, bufferLength, filePointer)) {
		if (strstr(line, uid) != NULL) {
			printf("UID : [%s] already exists. Please use a different UID.", uid);
			return;
		}
	}

	fclose(filePointer);

	printf("Adding user [%s] to /etc/passwd", username);

	filePointer = fopen("passwd", "a+");
	fprintf(filePointer, "%s:%s:%s:%s:%s:%s:%s", username, "x", uid, gid, info, HOME, SHELL);

	fclose(filePointer);

}


/* Input Format : adduser –u 100 –g 200 –c “M S Anand” anandms */
int main(int argc, char *argv[]) {
    int i;
	char* uid;
	char* gid;
	char* userName;
	char* nickName;

    if(argc != 8)
    {
        printf("Please input in following format: adduser –u <uid> –g <gid> –c <info> <username> \n");
    }
    else
    {
		uid = argv[2];
		gid = argv[4];
		userName = argv[6];
		nickName = argv[7];

		addUser(uid, gid, userName, nickName);
    }
    return 0;
}
