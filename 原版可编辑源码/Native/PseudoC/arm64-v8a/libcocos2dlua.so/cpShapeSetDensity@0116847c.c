
void cpShapeSetDensity(float param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  fVar2 = *(float *)(param_2 + 0x28);
  cpBodyActivate(uVar1);
  *(float *)(param_2 + 0x18) = fVar2 * param_1;
  cpBodyAccumulateMassFromShapes(uVar1);
  return;
}

