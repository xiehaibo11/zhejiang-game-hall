
long FUN_00bff68c(long param_1,ulong *param_2,int *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = (uint)((long)*param_2 >> 0x2f);
  if (uVar3 == 0xfffffffb) {
    *param_3 = *(int *)((*param_2 & 0x7fffffffffff) + 0x10);
    return (*param_2 & 0x7fffffffffff) + 0x18;
  }
  if (uVar3 == 0xfffffff2) {
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(lVar2 + 0xa0) = param_1;
    *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar2 + 0x98);
    puVar1 = (undefined8 *)FUN_00bff62c(lVar2 + 0x88,(int)*param_2);
  }
  else {
    if (0xfffffff1 < uVar3) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    *(long *)(lVar2 + 0xa0) = param_1;
    *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar2 + 0x98);
    puVar1 = (undefined8 *)FUN_00c030d0(*param_2,lVar2 + 0x88,0xf000035);
  }
  lVar2 = puVar1[2];
  *param_3 = (int)*puVar1 - (int)lVar2;
  return lVar2;
}

