
undefined8 FUN_00e3f378(char *param_1,int param_2,uint param_3,void *param_4)

{
  int iVar1;
  
  if (*param_1 == '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0x10) == param_2) {
    if (*(uint *)(param_1 + 0x14) != param_3) {
      return 1;
    }
    if (param_3 != 0) {
      iVar1 = memcmp(param_4,*(void **)(param_1 + 0x18),(ulong)param_3 << 3);
      if (iVar1 != 0) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

