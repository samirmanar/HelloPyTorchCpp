#include <iostream>

#pragma warning(push)
#pragma warning(disable: 4267)
    #include <torch/torch.h>
#pragma warning(pop)

int main() {
    
    std::cout << "LibTorch version: "
        << TORCH_VERSION_MAJOR << "."
        << TORCH_VERSION_MINOR << "."
        << TORCH_VERSION_PATCH << std::endl;

    torch::Tensor tensor = torch::rand({2, 3});
    std::cout << "Random tensor: " << tensor << std::endl;
}
