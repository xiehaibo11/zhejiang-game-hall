
void cpShapeSetMass(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  cpBodyActivate(uVar1);
  *(undefined4 *)(param_2 + 0x18) = param_1;
  cpBodyAccumulateMassFromShapes(uVar1);
  return;
}

