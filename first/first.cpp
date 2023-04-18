#include <iostream>
#include <string>

int main() {
    std::string house = "         *     *\n";
    house += "       *   *  **\n";
    house += "     *       * *  \n";
    house += "   *           *   \n";
    house += " *               *  \n";
    house += "*********************\n";
    house += "                     *\n";
    house += "              * *    *\n";
    house += "      ******* * *    *   *   *   *\n";
    house += "      *  *  *        *  * * * * * *\n";
    house += "      *     *        *  * * * * * *\n";
    house += "***********************************\n";
    std::cout << house << std::endl;
    return 0;
}
