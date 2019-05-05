#include<vector>
#include<iostream>
#include<algorithm>
#include<iterator>

int main(int argc, char * argv[])
{
    char buf;
    int iterator = 0;
    std::string podstr;
    std::string bufstr;
    // // //
    podstr = argv[1];
    while((buf = std::cin.get()) != '\n')
    {
        std::cout << buf;
        if(buf == podstr[iterator])
        {
            iterator++;
            bufstr.push_back(buf);
            if(podstr == bufstr)
            {
                std::cout << '*';
                bufstr.clear();
                iterator = 0;
            }
        }
        else if (bufstr.size() != 0)
        {
            iterator++;
            bufstr.push_back(buf);
            while(podstr.find(bufstr) == std::string::npos && bufstr.size() != 0)
            {
                iterator--;
                bufstr.erase(bufstr.begin());
            }
        }
    }
    std::cout << std::endl;
    return 0;
}
