
/* btBvhTriangleMeshShape::partialRefitTree(btVector3 const&, btVector3 const&) */

void __thiscall
btBvhTriangleMeshShape::partialRefitTree
          (btBvhTriangleMeshShape *this,btVector3 *param_1,btVector3 *param_2)

{
  btOptimizedBvh::refitPartial
            (*(btOptimizedBvh **)(this + 0x48),*(btStridingMeshInterface **)(this + 0x40),param_1,
             param_2);
  if (*(float *)param_1 < *(float *)(this + 0x1c)) {
    *(float *)(this + 0x1c) = *(float *)param_1;
  }
  if (*(float *)(param_1 + 4) < *(float *)(this + 0x20)) {
    *(float *)(this + 0x20) = *(float *)(param_1 + 4);
  }
  if (*(float *)(param_1 + 8) < *(float *)(this + 0x24)) {
    *(float *)(this + 0x24) = *(float *)(param_1 + 8);
  }
  if (*(float *)(param_1 + 0xc) < *(float *)(this + 0x28)) {
    *(float *)(this + 0x28) = *(float *)(param_1 + 0xc);
  }
  if (*(float *)(this + 0x2c) < *(float *)param_2) {
    *(float *)(this + 0x2c) = *(float *)param_2;
  }
  if (*(float *)(this + 0x30) < *(float *)(param_2 + 4)) {
    *(float *)(this + 0x30) = *(float *)(param_2 + 4);
  }
  if (*(float *)(this + 0x34) < *(float *)(param_2 + 8)) {
    *(float *)(this + 0x34) = *(float *)(param_2 + 8);
  }
  if (*(float *)(this + 0x38) < *(float *)(param_2 + 0xc)) {
    *(float *)(this + 0x38) = *(float *)(param_2 + 0xc);
  }
  return;
}

