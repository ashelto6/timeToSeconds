#include <iostream>
#include <cmath>
#include <string>


int timeToSeconds(std::string time)
{
    /* GET SECONDS FROM HOUR */
    std::string delimeter = ":";
    int seconds = 3600 * stoi(time.substr(0, time.find(delimeter)));
    time.erase(0, time.find(delimeter)+1);

    /* ADD SECONDS FROM MINUTES */
    seconds = seconds + ( stoi(time.substr(0, time.find(delimeter))) * 60);
    time.erase(0, time.find(delimeter)+1);

    /* ADD REMAINING SECONDS */
    seconds += stoi(time);

    /* RETURN */
    return seconds;
}
int main(int argc, char** argv)
{
    int seconds = timeToSeconds(argv[1]);

    std::cout << seconds;

}