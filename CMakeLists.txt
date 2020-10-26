# CMakeList.txt : CMake project for Lab 5, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Lab 6")

# Add source to this project's executable.
add_executable (CMakeTarget "Vehicle.cpp" "Vehicle.h" "week2.cpp" "ElectricVehicle.cpp" "ElectricVehicle.h" "GasolineVehicle.cpp" "GasolineVehicle.h" "HybridVehicle.cpp" "HybridVehicle.h")

