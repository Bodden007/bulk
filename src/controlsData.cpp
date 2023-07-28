#include "includes/controlsData.hpp"
namespace ph = std::placeholders;

void controlsData::controls()
{
    std::string data;

    dataStorage dataStor;

    std::cout << "Enter the input size: N = " << std::endl;
    std::cin >> N;
    dataStor.iniN(N);

    boost::signals2::signal<void(std::string)> sig;

    sig.connect(boost::bind(&dataStorage::dataBulk,
                            &dataStor, std::placeholders::_1));

    while (request)
    {
        std::cout << "Enter the command" << std::endl;
        std::cin >> data;
        sig(data);
    }
}