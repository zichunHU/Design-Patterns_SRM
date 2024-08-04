//
// Created by ZICHUN.
//

#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include "Strategy.h"
#include <memory>

// 抽象的产品基类
class Product {
public:
    virtual ~Product() {
        delete strategy; // 确保删除策略以避免内存泄漏
    }

    // 纯虚函数，必须在派生类中实现
    virtual void process() = 0;

    // 设置加工策略
    void setStrategy(Strategy* strat);

protected:
    Strategy* strategy = nullptr; // 指向策略对象的指针
};

// 具体的产品A类
class ProductA : public Product {
public:
    void process() override;
};

// 具体的产品B类
class ProductB : public Product {
public:
    void process() override;
};

// 具体的产品C类
class ProductC : public Product {
public:
    void process() override;
};

#endif // PRODUCT_H