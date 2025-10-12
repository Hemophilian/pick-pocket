#include "../include/global.hpp"
/*
void LoadGameAssets() {
    // Creates a struct containing dirPath links to all sub-folders within assets
    FilePathList assetDirectory = LoadDirectoryFiles("assets");
    // For each sub-folder...
    for (unsigned int i = 0; i < assetDirectory.count; i++) {
        // Create a struct containing dirPath links to all asset files
        FilePathList subFileAssetDirectory = LoadDirectoryFiles(assetDirectory.paths[i] );
        // For each asset within the sub-folders...
        for (unsigned int ii = 0; ii < subFileAssetDirectory.count; ii++) {
            // If it's a PNG File
            if (IsFileExtension(GetFileName(subFileAssetDirectory.paths[ii]), ".png")) {
                Image tempImage = LoadImage(subFileAssetDirectory.paths[ii]); 
                Texture2D tempTexture = LoadTextureFromImage(tempImage);
                const char* assetName = GetFileNameWithoutExt(subFileAssetDirectory.paths[ii])
                pngAssets[assetName] = tempTexture;
                UnloadImage(tempImage);
            }
            // If it's a WAV File
            if (IsFileExtension(GetFileName(subFileAssetDirectory.paths[ii]), ".wav"))  {
                Sound tempSound = LoadSound(subFileAssetDirectory.paths[ii]);
                // Set the name of the sound asset.
                // Push sound to Vector to store for later.
            }
            // If it's an OGG File
            if (IsFileExtension(GetFileName(subFileAssetDirectory.paths[ii]), ".ogg")) {
                Sound tempSound = LoadSound(subFileAssetDirectory.paths[ii]);
                // Set the name of the sound asset.
                // Push sound to Vector to store for later.
            }
} } };
s
std::map<const char, Texture2D> pngAssets = {};
std::map<const char, Sound> wavAssets = {};
std::map<const char, Sound> oggAssets = {};
*/