#include <iostream>

enum class Mounthes{Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь,
        Ноябрь, Декабрь
};

std::string result_of_input(Mounthes input){
    switch (input) {
        case Mounthes::Январь:
            return "Январь";
        case Mounthes::Февраль:
            return "Февраль";
        case Mounthes::Март:
            return "Март";
        case Mounthes::Апрель:
            return "Апрель";
        case Mounthes::Май:
            return "Май";
        case Mounthes::Июнь:
            return "Июнь";
        case Mounthes::Июль:
            return "Июль";
        case Mounthes::Август:
            return "Август";
        case Mounthes::Сентябрь:
            return "Сентябрь";
        case Mounthes::Октябрь:
            return "Октябрь";
        case Mounthes::Ноябрь:
            return "Ноябрь";
        case Mounthes::Декабрь:
            return "Декабрь";

        
    }
}
int main() {
    int a = 0;
    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> a;

        if(a > 0 && a < 13) {
            std::cout << result_of_input(Mounthes(a)) << std::endl;
        }else if (a > 12){
            std::cout << "Неправильный номер!" << "\n";
        } else if(a == 0) break;

    }

    std::cout << "До свидания" << std::endl;
    return 0;
}
