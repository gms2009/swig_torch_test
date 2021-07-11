#include <libtorch.h>
// #include <ATen/cuda/CUDAContext.h>
// #include <ATen/cuda/CUDAGuard.h>

#include <iostream>

using namespace std::chrono_literals;

NeuralNetwork::NeuralNetwork(std::string model_path, bool use_gpu,
                             unsigned int batch_size)
    : module(std::make_shared<torch::jit::script::Module>(torch::jit::load(model_path.c_str()))),
      use_gpu(use_gpu),
      batch_size(batch_size),
      running(true),
      loop(nullptr) {

}

NeuralNetwork::~NeuralNetwork() {
}


