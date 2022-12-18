#include <boost/program_options.hpp>
#include <iostream>
int main(int argc, char **argv){
    boost::program_options::options_description desc("Allowed options");
    desc.add_options()
        ("help", "produce help message")
    ;

    boost::program_options::variables_map vm;
    boost::program_options::store(boost::program_options::parse_command_line(argc, argv, desc), vm);

    if (vm.count("help")) {
        std::cout << desc << std::endl;
    }
    return 1;
}
