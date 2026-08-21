
/* btBvhTriangleMeshShape::setOptimizedBvh(btOptimizedBvh*, btVector3 const&) */

void __thiscall
btBvhTriangleMeshShape::setOptimizedBvh
          (btBvhTriangleMeshShape *this,btOptimizedBvh *param_1,btVector3 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  *(btOptimizedBvh **)(this + 0x48) = param_1;
  this[0x59] = (btBvhTriangleMeshShape)0x0;
  pfVar1 = (float *)(**(code **)(*(long *)this + 0x38))();
  fVar2 = (float)*(undefined8 *)(pfVar1 + 1) - (float)*(undefined8 *)(param_2 + 4);
  fVar3 = (float)((ulong)*(undefined8 *)(pfVar1 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  if (1.1920929e-07 <
      (*pfVar1 - *(float *)param_2) * (*pfVar1 - *(float *)param_2) + fVar2 * fVar2 + fVar3 * fVar3)
  {
    btTriangleMeshShape::setLocalScaling((btVector3 *)this);
    return;
  }
  return;
}

