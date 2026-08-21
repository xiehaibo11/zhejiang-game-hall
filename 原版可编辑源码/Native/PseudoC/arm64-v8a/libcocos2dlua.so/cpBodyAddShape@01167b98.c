
void cpBodyAddShape(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x78) = param_2;
  }
  *(long *)(param_2 + 0x70) = lVar1;
  *(long *)(param_1 + 0x88) = param_2;
  if (0.0 < *(float *)(param_2 + 0x18)) {
    cpBodyAccumulateMassFromShapes();
    return;
  }
  return;
}

