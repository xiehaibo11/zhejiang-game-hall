
ulong FUN_00139d5c(long param_1,long param_2,void *param_3,long param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  
  if (param_5 == 0) {
    memcpy(param_3,(void *)(*(long *)(*(long *)(param_1 + 8) + 0x50) +
                           (param_2 -
                           (ulong)*(uint *)(*(long *)(param_1 + 0x38) + (long)param_5 * 4 + -4)) +
                           (ulong)*(uint *)(*(long *)(param_1 + 0x40) + (long)param_5 * 4)),
           param_4 - (long)param_3);
    uVar2 = 1;
  }
  else {
    if (*(char *)(*(long *)(param_1 + 0x48) + (long)param_5) == '\0') {
      uVar2 = FUN_0013d028(*(undefined8 *)(param_1 + 8));
      return uVar2;
    }
    iVar1 = (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}

