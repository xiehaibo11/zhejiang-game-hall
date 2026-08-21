
/* btBvhTriangleMeshShape::setLocalScaling(btVector3 const&) */

void __thiscall
btBvhTriangleMeshShape::setLocalScaling(btBvhTriangleMeshShape *this,btVector3 *param_1)

{
  float *pfVar1;
  btOptimizedBvh *this_00;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)(**(code **)(*(long *)this + 0x38))();
  fVar2 = (float)*(undefined8 *)(pfVar1 + 1) - (float)*(undefined8 *)(param_1 + 4);
  fVar3 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  if (1.1920929e-07 <
      (*pfVar1 - *(float *)param_1) * (*pfVar1 - *(float *)param_1) + fVar2 * fVar2 + fVar3 * fVar3)
  {
    btTriangleMeshShape::setLocalScaling((btVector3 *)this);
    if (this[0x59] != (btBvhTriangleMeshShape)0x0) {
      (**(code **)**(undefined8 **)(this + 0x48))();
      btAlignedFreeInternal(*(void **)(this + 0x48));
    }
    this_00 = (btOptimizedBvh *)btAlignedAllocInternal(0xf8,0x10);
    btOptimizedBvh::btOptimizedBvh(this_00);
    *(btOptimizedBvh **)(this + 0x48) = this_00;
    btOptimizedBvh::build
              (this_00,*(btStridingMeshInterface **)(this + 0x40),(bool)this[0x58],
               (btVector3 *)(this + 0x1c),(btVector3 *)(this + 0x2c));
    this[0x59] = (btBvhTriangleMeshShape)0x1;
  }
  return;
}

