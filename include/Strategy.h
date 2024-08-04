//
// Created by ZICHUN on 24-8-4.
//

#ifndef DESIGN_PATTERNS_STRATEGY_H
#define DESIGN_PATTERNS_STRATEGY_H

#include <iostream>

// 抽象的策略基类
class Strategy {
public:
    virtual ~Strategy() = default; // 虚析构函数，确保派生类的析构函数被调用
    virtual void execute() = 0; // 纯虚函数，必须在派生类中实现
};

// 加热策略类
class HeatingStrategy : public Strategy {
public:
    void execute() override {
        std::cout << "Heating\n";
    }
};

// 冷却策略类
class CoolingStrategy : public Strategy {
public:
    void execute() override {
        std::cout << "Cooling\n";
    }
};

// 混合策略类
class MixingStrategy : public Strategy {
public:
    void execute() override {
        std::cout << "Mixing\n";
    }
};

#endif //DESIGN_PATTERNS_STRATEGY_H
