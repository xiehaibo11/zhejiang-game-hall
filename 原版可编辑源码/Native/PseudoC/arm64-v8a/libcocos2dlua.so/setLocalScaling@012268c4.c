
/* btConvexInternalShape::setLocalScaling(btVector3 const&) */

void __thiscall
btConvexInternalShape::setLocalScaling(btConvexInternalShape *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  *(undefined4 *)(this + 0x24) = 0;
  *(float *)(this + 0x18) = ABS(fVar1);
  *(float *)(this + 0x1c) = ABS(fVar2);
  *(float *)(this + 0x20) = ABS(fVar3);
  return;
}

