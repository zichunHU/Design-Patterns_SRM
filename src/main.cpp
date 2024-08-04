#include "FactoryManager.h"

int main() {
    // 获取工厂管理者的唯一实例
    FactoryManager& manager = FactoryManager::getInstance();
    std::cout << "log: 获取唯一实例" << std::endl;

    // 创建产品A并指定加热策略
    Product* productA = manager.createProduct("ProductA");
    if (productA) {
        std::cout << "log: Product_A" << std::endl;
        manager.assignStrategy(productA, "Heating");
        productA->process(); // 执行加工过程
        delete productA; // 删除产品对象以释放内存
    }

    // 创建产品B并指定冷却策略
    Product* productB = manager.createProduct("ProductB");
    if (productB) {
        std::cout << "log: Product_B" << std::endl;
        manager.assignStrategy(productB, "Cooling");
        productB->process(); // 执行加工过程
        delete productB; // 删除产品对象以释放内存
    }

    // 创建产品C并指定混合策略
    Product* productC = manager.createProduct("ProductC");
    if (productC) {
        std::cout << "log: Product_C" << std::endl;
        manager.assignStrategy(productC, "Mixing");
        productC->process(); // 执行加工过程
        delete productC; // 删除产品对象以释放内存
    }

    return 0; // 程序成功结束
}
