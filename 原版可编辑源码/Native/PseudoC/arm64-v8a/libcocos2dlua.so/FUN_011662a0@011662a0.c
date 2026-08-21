
undefined4 FUN_011662a0(undefined4 *param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  float fStack_28;
  undefined4 uStack_24;
  
  if ((((*(long *)(param_2 + 0x60) == 0) || (*(long *)(param_2 + 0x60) != *(long *)(param_1 + 6)))
      && ((*(ulong *)(param_2 + 0x68) & *(ulong *)(param_1 + 8) >> 0x20) != 0)) &&
     ((((*(ulong *)(param_1 + 8) & *(ulong *)(param_2 + 0x68) >> 0x20) != 0 &&
       (*(char *)(param_2 + 0x3c) == '\0')) &&
      ((cVar1 = cpShapeSegmentQuery(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_2,
                                    &local_40), cVar1 != '\0' &&
       (fStack_28 < *(float *)(param_3 + 3))))))) {
    param_3[3] = CONCAT44(uStack_24,fStack_28);
    param_3[2] = local_30;
    param_3[1] = uStack_38;
    *param_3 = local_40;
  }
  return *(undefined4 *)(param_3 + 3);
}

