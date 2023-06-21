//
// Created by richb on 21.06.2023.
//

#include "Products.h"

const std::string &Products::getProductName() const {
    return product_name;
}

void Products::setProductName(const std::string &productName) {
    product_name = productName;
}

Products::Products(std::string name, unsigned count) {
name = name;
count = count;
}
