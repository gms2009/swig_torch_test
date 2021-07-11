#pragma once

#include <torch/script.h>  // One-stop header.

#include <future>
#include <memory>
#include <queue>
#include <string>
#include <utility>
#include <vector>


class NeuralNetwork {
 public:
  using return_type = std::vector<std::vector<double>>;

  NeuralNetwork(std::string model_path, bool use_gpu, unsigned int batch_size);
  ~NeuralNetwork();

private:

  std::unique_ptr<std::thread> loop;  // call infer in loop
  bool running;                       // is running


  std::shared_ptr<torch::jit::script::Module> module;  // torch module
  unsigned int batch_size;                             // batch size
  bool use_gpu;                                        // use gpu

};
