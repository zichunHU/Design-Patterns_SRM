#ifndef FACTORYMANAGER_H
#define FACTORYMANAGER_H

#include <string>
#include "Product.h"
#include "Strategy.h"

// 单例模式的工厂管理者类
class FactoryManager {
public:
    static FactoryManager& getInstance(); // 获取工厂管理者的唯一实例

    Product* createProduct(const std::string& type); // 创建产品，根据传入的产品类型
    void assignStrategy(Product* product, const std::string& strategyType); // 为产品分配策略，根据传入的策略类型

private:
    FactoryManager() {}; // 私有构造函数，确保外部无法创建实例
    ~FactoryManager() {}; // 私有析构函数，确保内存释放

    // 禁止拷贝构造和赋值操作
    FactoryManager(const FactoryManager&) = delete;
    FactoryManager& operator=(const FactoryManager&) = delete;
};

#endif // FACTORYMANAGER_H
