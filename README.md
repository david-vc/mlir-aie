# MLIR-based AI Engine toolchain

![GitHub Workflow Status](https://img.shields.io/github/actions/workflow/status/Xilinx/mlir-aie/buildAndTest.yml?branch=main)
![GitHub Pull Requests](https://img.shields.io/github/issues-pr-raw/Xilinx/mlir-aie)

![](https://mlir.llvm.org//mlir-logo.png)

This repository contains an [MLIR-based](https://mlir.llvm.org/) toolchain for AI Engine-enabled devices, such as [AMD Ryzen™ AI](https://www.amd.com/en/products/ryzen-ai) and [Versal™](https://www.xilinx.com/products/technology/ai-engine.html).  This repository can be used to generate low-level configurations for the AI Engine portion of these devices. AI Engines are organized as a spatial array of tiles, where each tile contains AI Engine cores and/or memories. The spatial array is connected by stream switches that can be configured to route data between AI Engine tiles scheduled by their programmable Data Movement Accelerators (DMAs). This repository contains MLIR representations, with multiple levels of abstraction, to target AI Engine devices. This enables compilers and developers to program AI Engine cores, as well as describe data movements and array connectivity. A Python API is made available as a convenient interface for generating MLIR design descriptions. Backend code generation is also included, targeting the [aie-rt](https://github.com/Xilinx/aie-rt/tree/main-aie) library.  This toolchain uses the AI Engine compiler tool which is part of the AMD Vitis™ software installation: these tools require a free license for use from the [Product Licensing Site](https://www.xilinx.com/member/forms/license-form.html).

This project is primarily intended to support the open-source community, particularly tool builders, with low-level access to AIE devices and enable the development of a wide variety of programming models from higher level abstractions.  As such, although it contains some examples, this project is not intended to represent an end-to-end compilation flow for application design. If you're looking for an out-of-the-box experience for highly efficient machine learning, check out the [AMD Ryzen™ AI Software Platform](https://github.com/amd/RyzenAI-SW/).

[Getting Started](docs/Building.md)

[Running on a Versal™ board](docs/Platform.md)

[Getting Started and Running on Windows Ryzen™ AI](docs/buildHostWin.md)

[Full Documentation](https://xilinx.github.io/mlir-aie/)

-----

<p align="center">Copyright&copy; 2019-2023 Advanced Micro Devices, Inc</p>
