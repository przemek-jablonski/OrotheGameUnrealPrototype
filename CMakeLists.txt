cmake_minimum_required (VERSION 2.6)
project (UE4)
set(CMAKE_CXX_STANDARD 11)

include("C:/Users/ciemek/Documents/development/OroUnrealPrototype/Intermediate/ProjectFiles/IncludeDirectories.cmake")
include("C:/Users/ciemek/Documents/development/OroUnrealPrototype/Intermediate/ProjectFiles/Definitions.cmake")
include("C:/Users/ciemek/Documents/development/OroUnrealPrototype/Intermediate/ProjectFiles/UE4Editor.cmake")

# Custom target for UE4Editor project, DebugGame configuration
set(MONO_ROOT_PATH "C:/Program Files/Epic Games/UE_4.15/Engine/Binaries/DotNET")
set(BUILD cd "${MONO_ROOT_PATH}")

add_custom_target(UE4Editor-Windows-DebugGame ${BUILD} && UnrealBuildTool.exe UE4Editor Win64 DebugGame -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(UE4Editor-Windows-DebugGame-clean ${BUILD} && UnrealBuildTool.exe UE4Editor Win64 DebugGame -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


# Custom target for UE4Editor project, Development configuration
add_custom_target(UE4Editor ${BUILD} && UnrealBuildTool.exe UE4Editor Win64 Development -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(UE4Editor-clean ${BUILD} && UnrealBuildTool.exe UE4Editor Win64 Development -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


# Custom target for UE4Editor project, Shipping configuration
add_custom_target(UE4Editor-Windows-Shipping ${BUILD} && UnrealBuildTool.exe UE4Editor Win64 Shipping -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(UE4Editor-Windows-Shipping-clean ${BUILD} && UnrealBuildTool.exe UE4Editor Win64 Shipping -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)

include("C:/Users/ciemek/Documents/development/OroUnrealPrototype/Intermediate/ProjectFiles/UE4Game.cmake")

# Custom target for UE4Game project, DebugGame configuration
set(MONO_ROOT_PATH "C:/Program Files/Epic Games/UE_4.15/Engine/Binaries/DotNET")
set(BUILD cd "${MONO_ROOT_PATH}")

add_custom_target(UE4Game-Windows-DebugGame ${BUILD} && UnrealBuildTool.exe UE4Game Win64 DebugGame -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(UE4Game-Windows-DebugGame-clean ${BUILD} && UnrealBuildTool.exe UE4Game Win64 DebugGame -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


# Custom target for UE4Game project, Development configuration
add_custom_target(UE4Game ${BUILD} && UnrealBuildTool.exe UE4Game Win64 Development -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(UE4Game-clean ${BUILD} && UnrealBuildTool.exe UE4Game Win64 Development -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


# Custom target for UE4Game project, Shipping configuration
add_custom_target(UE4Game-Windows-Shipping ${BUILD} && UnrealBuildTool.exe UE4Game Win64 Shipping -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(UE4Game-Windows-Shipping-clean ${BUILD} && UnrealBuildTool.exe UE4Game Win64 Shipping -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)

include("C:/Users/ciemek/Documents/development/OroUnrealPrototype/Intermediate/ProjectFiles/OroUnrealPrototype.cmake")

# Custom target for OroUnrealPrototype project, DebugGame configuration
set(MONO_ROOT_PATH "C:/Program Files/Epic Games/UE_4.15/Engine/Binaries/DotNET")
set(BUILD cd "${MONO_ROOT_PATH}")

add_custom_target(OroUnrealPrototype-Windows-DebugGame ${BUILD} && UnrealBuildTool.exe OroUnrealPrototype Win64 DebugGame -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(OroUnrealPrototype-Windows-DebugGame-clean ${BUILD} && UnrealBuildTool.exe OroUnrealPrototype Win64 DebugGame -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


# Custom target for OroUnrealPrototype project, Development configuration
add_custom_target(OroUnrealPrototype ${BUILD} && UnrealBuildTool.exe OroUnrealPrototype Win64 Development -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(OroUnrealPrototype-clean ${BUILD} && UnrealBuildTool.exe OroUnrealPrototype Win64 Development -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


# Custom target for OroUnrealPrototype project, Shipping configuration
add_custom_target(OroUnrealPrototype-Windows-Shipping ${BUILD} && UnrealBuildTool.exe OroUnrealPrototype Win64 Shipping -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(OroUnrealPrototype-Windows-Shipping-clean ${BUILD} && UnrealBuildTool.exe OroUnrealPrototype Win64 Shipping -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)

include("C:/Users/ciemek/Documents/development/OroUnrealPrototype/Intermediate/ProjectFiles/OroUnrealPrototypeEditor.cmake")

# Custom target for OroUnrealPrototypeEditor project, DebugGame configuration
set(MONO_ROOT_PATH "C:/Program Files/Epic Games/UE_4.15/Engine/Binaries/DotNET")
set(BUILD cd "${MONO_ROOT_PATH}")

add_custom_target(OroUnrealPrototypeEditor-Windows-DebugGame ${BUILD} && UnrealBuildTool.exe OroUnrealPrototypeEditor Win64 DebugGame -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(OroUnrealPrototypeEditor-Windows-DebugGame-clean ${BUILD} && UnrealBuildTool.exe OroUnrealPrototypeEditor Win64 DebugGame -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


# Custom target for OroUnrealPrototypeEditor project, Development configuration
add_custom_target(OroUnrealPrototypeEditor ${BUILD} && UnrealBuildTool.exe OroUnrealPrototypeEditor Win64 Development -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(OroUnrealPrototypeEditor-clean ${BUILD} && UnrealBuildTool.exe OroUnrealPrototypeEditor Win64 Development -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


# Custom target for OroUnrealPrototypeEditor project, Shipping configuration
add_custom_target(OroUnrealPrototypeEditor-Windows-Shipping ${BUILD} && UnrealBuildTool.exe OroUnrealPrototypeEditor Win64 Shipping -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -game)
add_custom_target(OroUnrealPrototypeEditor-Windows-Shipping-clean ${BUILD} && UnrealBuildTool.exe OroUnrealPrototypeEditor Win64 Shipping -project="C:/Users/ciemek/Documents/development/OroUnrealPrototype/OroUnrealPrototype.uproject" -clean)


add_executable(OroUnrealPrototypeEditorFake ${OroUnrealPrototypeEditor_FILES})
