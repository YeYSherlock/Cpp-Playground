// #include <boost/filesystem.hpp>
// #include <boost/range/iterator_range.hpp>
#include <iostream>

// using namespace boost::filesystem;

int main(int argc, char *argv[]) {
    std::cout << "yey" << std::endl;
    // path p(argc>1? argv[1] : ".");

    // if(is_directory(p)) {
    //     std::cout << p << " is a directory containing:\n";

    //     for(auto& entry : boost::make_iterator_range(directory_iterator(p), {}))
    //         std::cout << entry << "\n";
    // }
}


// int main() {
//     float first_no, second_no, result_add, result_div;

//     std::cout << "Enter first \t";
//     std::cin >> first_no;
//     std::cout << "Enter second number \t";
//     std::cin >> second_no;

//     result_add = first_no + second_no;
//     result_div = first_no / second_no;

//     std::cout << "Addition result: \t" << result_add << 
//         "\nDivision result: \t" << result_div << "\n";
    
//     return 0;
// }