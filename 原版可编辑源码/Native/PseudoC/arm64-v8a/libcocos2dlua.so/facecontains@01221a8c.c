
/* SphereTriangleDetector::facecontains(btVector3 const&, btVector3 const*, btVector3&) */

uint __thiscall
SphereTriangleDetector::facecontains
          (SphereTriangleDetector *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  uint uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined8 *)param_1;
  uStack_28 = *(undefined8 *)(param_3 + 8);
  local_30 = *(undefined8 *)param_3;
  uVar1 = pointInTriangle(this,param_2,(btVector3 *)&local_30,(btVector3 *)&local_20);
  return uVar1 & 1;
}

