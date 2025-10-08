#include "../include/global.hpp"
#include <vector>

void LoadGameAssets() {
    std::vector<Texture2D> pngVector;
    std::vector<Sound> soundVector;

    // Creates a struct containing dirPath links to all sub-folders within assets
    FilePathList assetDirectory = LoadDirectoryFiles("assets");
    // For each sub-folder...
    for (unsigned int i = 0; i < assetDirectory.count; i++) {
        // Create a struct containing dirPath links to all asset files
        FilePathList subFileAssetDirectory = LoadDirectoryFiles(assetDirectory.paths[i] );
        // For each asset within the sub-folders...
        for (unsigned int ii = 0; ii < subFileAssetDirectory.count; ii++) {
            // If it's a PNG...
            if (IsFileExtension(GetFileName(subFileAssetDirectory.paths[ii]), .png)) {

            }
            if (IsFileExtension(GetFileName(subFileAssetDirectory.paths[ii], .wav))) {

            }
        }
    }
};

void TestFunction() {
};

/*
void VisualizeAssetFolder() {
    FilePathList assetDirectory = LoadDirectoryFiles("assets"); // 1. Get the path for "../assets"
    for (unsigned int i = 0; i < assetDirectory.count; i++) {
        std::cout << assetDirectory.paths[i] << std::endl; 
    }
};
*/