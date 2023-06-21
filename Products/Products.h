//
// Created by richb on 21.06.2023.
//

#ifndef FINAL_PROJECT_PRODUCTS_H
#define FINAL_PROJECT_PRODUCTS_H
#include <string>

class Products {
private:
    std::string product_name;

public:
    Products(std::string name, unsigned count);

    int product_count;

    [[nodiscard]] const std::string &getProductName() const;

    void setProductName(const std::string &productName);


};


#endif //FINAL_PROJECT_PRODUCTS_H
