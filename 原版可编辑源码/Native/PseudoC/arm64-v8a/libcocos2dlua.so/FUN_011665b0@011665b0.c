
undefined4 FUN_011665b0(long param_1,long param_2,undefined4 param_3,undefined8 *param_4)

{
  bool bVar1;
  int local_68 [14];
  
  if ((((*(long *)(param_1 + 0x60) == 0) || (*(long *)(param_1 + 0x60) != *(long *)(param_2 + 0x60))
       ) && ((*(ulong *)(param_1 + 0x68) & *(ulong *)(param_2 + 0x68) >> 0x20) != 0)) &&
     (((param_1 != param_2 &&
       ((*(ulong *)(param_2 + 0x68) & *(ulong *)(param_1 + 0x68) >> 0x20) != 0)) &&
      (cpShapesCollide(local_68,param_1,param_2), local_68[0] != 0)))) {
    if ((code *)*param_4 != (code *)0x0) {
      (*(code *)*param_4)(param_2,local_68,param_4[1]);
    }
    if (*(char *)(param_1 + 0x3c) == '\0') {
      bVar1 = *(char *)(param_2 + 0x3c) == '\0';
    }
    else {
      bVar1 = false;
    }
    *(bool *)(param_4 + 2) = bVar1;
  }
  return param_3;
}

