
void cpBodyRemoveShape(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x70);
  lVar3 = *(long *)(param_2 + 0x78);
  plVar1 = (long *)(lVar3 + 0x70);
  if (lVar3 == 0) {
    plVar1 = (long *)(param_1 + 0x88);
  }
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x78) = lVar3;
  }
  *(long *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  if (((*(float *)(param_1 + 0xb0) != INFINITY) && (*(float *)(param_1 + 0x10) != INFINITY)) &&
     (0.0 < *(float *)(param_2 + 0x18))) {
    cpBodyAccumulateMassFromShapes();
    return;
  }
  return;
}

