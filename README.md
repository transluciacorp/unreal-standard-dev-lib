# Standard Development Library for Unreal Engine 5

An internal collection of utilities, tools, and extensions to streamline development workflows in Unreal Engine 5 projects.

## Overview

The Standard Development Library (SDL) is a comprehensive plugin designed to enhance productivity and standardize common development tasks across internal Unreal Engine 5 projects. It provides a suite of ready-to-use functions, utilities, and automation scripts to reduce boilerplate code and accelerate development.

## Features

- **Core Utilities**: Common helper functions and extensions for UE5 core classes
- **Editor Tools**: Custom editor extensions and quality-of-life improvements
- **Runtime Helpers**: Performance optimized utility functions for runtime use
- **Blueprint Function Library**: Extensive collection of Blueprint-callable functions
- **Debug Tools**: Enhanced logging, visualization, and debugging capabilities

## Installation

1. Add this repository as a submodule to your Unreal Engine project:

   ```bash
   git submodule add git@github.com:transluciacorp/unreal-standard-dev-lib.git Plugins/StandardDevLib
   git submodule update --init --recursive
   ```

2. Rebuild your project
3. Enable the plugin in the Plugins menu under "Internal Tools"

## Usage

After installation, the Standard Development Library's functionality can be accessed through:

- C++ via the provided headers
- Blueprint via the "StandardDevLib" category in Blueprint nodes
- Editor UI through the added menu entries and tools

## Support

For issues, feature requests, or questions:

- Submit a ticket in the internal tracking system or in this repository
- Create a pull request for any improvements or fixes
- Join the internal development Slack channel for discussions
- Contact the Tools & Infrastructure team

## Author

- [Translucia Corp](https://translucia.com)
- [Thanut Panichyotai (@LuviKunG)](https://github.com/LuviKunG)
