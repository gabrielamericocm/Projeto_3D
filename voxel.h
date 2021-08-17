#ifndef VOXEL_H
#define VOXEL_H

typedef struct{
    float r, g, b, a;
    bool isOn;

    } voxel;

typedef struct{
    int x, y, z;
    bool exists;
} voxelCoords;
#endif // VOXEL_H
