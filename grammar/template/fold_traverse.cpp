/// \b 折叠表达式遍历二叉树
/// \c 成员指针

#include <iostream>

// 定 义 二 叉 树 结 构 和 遍 历 帮 助 函 数
struct Node {
    int value;
    Node *subLeft{nullptr};
    Node *subRight{nullptr};
    Node(int i = 0) : value{i} {}
    int getValue() const {
        return value;
    }

    // 遍 历 帮 助 函 数
    static constexpr auto left = &Node::subLeft;
    static constexpr auto right = &Node::subRight;

    // 使 用 折 叠 表 达 式 遍 历 树
    template<typename T, typename... TP>
    static Node *traverse(T np, TP... paths) {
        return (np ->* ... ->* paths);
        // np ->* paths1 ->* paths2
    }
};

int main()
{
    // 初 始 化 二 叉 树 结 构：
    Node* root = new Node{0};
    root->subLeft = new Node{1};
    root->subLeft->subRight = new Node{2};

    // 遍 历 二 叉 树
    Node* node = Node::traverse(root, &Node::subLeft, &Node::subRight);
    std::cout << node->getValue() << '\n';
    node = root ->* Node::left ->* Node::right;
    std::cout << node->getValue() << '\n';
    node = root -> subLeft -> subRight;
    std::cout << node->getValue() << '\n';

    return 0;
}