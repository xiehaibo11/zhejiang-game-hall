
/* btHeightfieldTerrainShape::setLocalScaling(btVector3 const&) */

void __thiscall
btHeightfieldTerrainShape::setLocalScaling(btHeightfieldTerrainShape *this,btVector3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x84) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x7c) = uVar1;
  return;
}

