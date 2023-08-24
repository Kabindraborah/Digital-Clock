#include <stdio.h>
#include <time.h>
#include <unistd.h> // For sleep function

int main() {
    while (1) {
        // Get current time
        time_t currentTime;
        struct tm *localTime;
        currentTime = time(NULL);
        localTime = localtime(&currentTime);

        // Print the time in HH:MM:SS format
        printf("\r%02d:%02d:%02d", localTime->tm_hour, localTime->tm_min, localTime->tm_sec);
        fflush(stdout);

        // Wait for 1 second
        sleep(1);
    }

    return 0;
}
