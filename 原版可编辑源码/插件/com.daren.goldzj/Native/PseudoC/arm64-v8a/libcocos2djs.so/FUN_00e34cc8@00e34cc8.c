
void FUN_00e34cc8(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((long)*(short *)(param_1 + 0x226) != 0) {
    lVar2 = (param_3 & 0xffff) * 0x10;
    lVar3 = *(long *)(*(long *)(param_2 + 0x10) + lVar2);
    lVar1 = FT_MulDiv(param_4,(long)*(short *)(param_1 + 0x226),*(undefined8 *)(param_1 + 0x3d0));
    *(long *)(*(long *)(param_2 + 0x10) + lVar2) = lVar1 + lVar3;
  }
  if ((long)*(short *)(param_1 + 0x228) != 0) {
    lVar2 = (param_3 & 0xffff) * 0x10;
    lVar3 = *(long *)(*(long *)(param_2 + 0x10) + lVar2 + 8);
    lVar1 = FT_MulDiv(param_4,(long)*(short *)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x3d0));
    *(long *)(*(long *)(param_2 + 0x10) + lVar2 + 8) = lVar1 + lVar3;
  }
  return;
}

