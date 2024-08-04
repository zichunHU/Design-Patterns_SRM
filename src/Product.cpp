//
// Created by ZICHUN on 24-8-4.
//

#include "Product.h"

// 设置产品的加工策略
void Product::setStrategy(Strategy* strat) {
    std::cout << "log: Strategy 内存保护" << std::endl;
    delete strategy; // 删除之前的策略以避免内存泄漏
    strategy = strat;
}

// 具体产品A的加工过程
void ProductA::process() {
    if (strategy) {
        std::cout << "Processing Product_A: ";
        strategy->execute(); // 使用策略进行加工
    } else {
        std::cout << "No strategy assigned for ProductA\n";
    }
}

// 具体产品B的加工过程
void ProductB::process() {
    if (strategy) {
        std::cout << "Processing Product_B: ";
        strategy->execute(); // 使用策略进行加工
    } else {
        std::cout << "No strategy assigned for ProductB\n";
    }
}

// 具体产品C的加工过程
void ProductC::process() {
    if (strategy) {
        std::cout << "Processing Product_C: ";
        strategy->execute(); // 使用策略进行加工
    } else {
        std::cout << "No strategy assigned for ProductC\n";
    }
}
