//
// Created by ZICHUN on 24-8-4.
//

#include "../include/FactoryManager.h"

#include "FactoryManager.h"

// 获取FactoryManager的唯一实例
FactoryManager& FactoryManager::getInstance() {
    static FactoryManager instance; // 局部静态变量，保证唯一实例
    return instance;
}

// 创建产品，根据传入的产品类型返回相应的产品对象
Product* FactoryManager::createProduct(const std::string& type) {
    if (type == "ProductA") {
        return new ProductA();
    } else if (type == "ProductB") {
        return new ProductB();
    } else if (type == "ProductC") {
        return new ProductC();
    } else {
        return nullptr;
    }
}

// 为产品分配策略，根据传入的策略类型返回相应的策略对象
void FactoryManager::assignStrategy(Product* product, const std::string& strategyType) {
    if (product) {
        if (strategyType == "Heating") {
            product->setStrategy(new HeatingStrategy());
        } else if (strategyType == "Cooling") {
            product->setStrategy(new CoolingStrategy());
        } else if (strategyType == "Mixing") {
            product->setStrategy(new MixingStrategy());
        }
    }
}
