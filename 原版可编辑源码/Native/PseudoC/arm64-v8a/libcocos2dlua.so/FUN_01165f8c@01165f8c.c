
undefined4 FUN_01165f8c(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if ((((*(long *)(param_2 + 0x60) == 0) || (*(long *)(param_2 + 0x60) != *(long *)(param_1 + 4)))
      && ((*(ulong *)(param_2 + 0x68) & *(ulong *)(param_1 + 6) >> 0x20) != 0)) &&
     ((((*(ulong *)(param_1 + 6) & *(ulong *)(param_2 + 0x68) >> 0x20) != 0 &&
       (*(char *)(param_2 + 0x3c) == '\0')) &&
      (cpShapePointQuery(*param_1,param_1[1],param_2,&local_40), local_30 < *(float *)(param_4 + 2))
      ))) {
    param_4[3] = uStack_28;
    param_4[2] = CONCAT44(uStack_2c,local_30);
    param_4[1] = uStack_38;
    *param_4 = local_40;
  }
  return param_3;
}

