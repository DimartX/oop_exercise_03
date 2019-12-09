#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

#include <include/figure.hxx>
#include <include/triangle.hxx>
#include <include/square.hxx>
#include <include/rectangle.hxx>

int main(){
    std::vector<Figure*> figures;
    std::string query;
    std::cout << std::fixed << std::setprecision(6);
    
    while (std::cin >> query) {
        
        if (query == "read") {
            Figure *fig;
            std::cin >> fig;
            if (fig != nullptr)
                figures.push_back(fig);            
        }
        
        else if (query == "delete") {
            int id;
            std::cin >> id;
            if (id < 1 || id > figures.size()){
                std::cout << "There is no such element!" << std::endl;
                continue;
            }
            id--;
            delete figures[id];
            figures.erase(figures.begin() + id);
        }
        
        else if (query == "area" || query == "areas") {
            std::cout << "Areas: " << std::endl;
            for (Figure* ptr : figures) {
                std::cout << ptr->figureArea() << std::endl;
            }
        }

        else if (query == "center" || query == "centers"){
            std::cout << "Centers: " << std::endl;
            for (Figure* ptr : figures) {
                std::cout << ptr->figureCenter() << std::endl;
            }
        }

        else if (query == "figure" || query == "figures") {
            std::cout << "Figures: " << std::endl;
            for (Figure* ptr : figures) {
                std::cout << (*ptr) << std::endl;
            }
        }

        else if (query == "sum_area" || query == "sum_areas") {
            double area = 0;
            std::cout << "Summary area: " << std::endl;
            for (Figure* ptr : figures) {
                area += ptr->figureArea();
            }
            std::cout << area << std::endl;
        }            

        else if (query == "help"){
            std::cout << "read, delete, areas, centers, figures, sum_area, help, exit" << std::endl;
        }            

        else if (query == "exit"){
            return 0;
        }
        
        else {
            std::cout << "Wrong command!" << std::endl;
        }
        
    }

    for (Figure* ptr : figures) {
        delete ptr;
    }
    return 0;
} 
