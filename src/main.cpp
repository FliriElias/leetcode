#include <iostream>
#include "../include/same_tree/same_tree.h"

int main(int argc, char* argv[]) {

    Solution sol;
    auto *n1 = new TreeNode(1);
    auto *n2 = new TreeNode(2);
    auto *n3 = new TreeNode(3);

    n1->left = n2;
    n1->right = n3;

    auto *n11 = new TreeNode(1);
    auto *n22 = new TreeNode(2);
    auto *n33 = new TreeNode(3);

    n11->left = n22;
    n11->right = n33;

    std::cout << sol.isSameTree(n1, n11) << std::endl;

    delete n1;
    delete n2;
    delete n3;

    delete n11;
    delete n22;
    delete n33;



    return 0;
}