
undefined8 FUN_00b78528(int *param_1,void *param_2,void *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == (void *)0x0) {
    return 0;
  }
  if (param_3 == (void *)0x0) {
    return 0;
  }
  if (*param_1 == 1) {
    piVar3 = (int *)**(undefined8 **)(param_1 + 2);
    iVar1 = *piVar3;
    if (iVar1 < 0) {
      return 0;
    }
    if (param_4 < iVar1) {
      return 0;
    }
    if (0 < iVar1) {
      memcpy(param_2,*(void **)(piVar3 + 2),(long)iVar1);
      if ((*(ulong *)(piVar3 + 4) & 7) != 0) {
        *(byte *)((long)param_2 + (long)*piVar3 + -1) =
             *(byte *)((long)param_2 + (long)*piVar3 + -1) &
             ((byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(piVar3 + 4) & 7) & 0x1f)) ^ 0xff);
      }
    }
    memset((void *)((long)param_2 + (long)*piVar3),0,(long)param_4 - (long)*piVar3);
    piVar3 = *(int **)(*(long *)(param_1 + 2) + 8);
  }
  else {
    if (*param_1 != 0) {
      return 0;
    }
    piVar3 = *(int **)(param_1 + 2);
    iVar1 = *piVar3;
    if (iVar1 < 0) {
      return 0;
    }
    if (param_4 < iVar1) {
      return 0;
    }
    if (0 < iVar1) {
      memcpy(param_2,*(void **)(piVar3 + 2),(long)iVar1);
      if ((*(ulong *)(piVar3 + 4) & 7) != 0) {
        *(byte *)((long)param_2 + (long)*piVar3 + -1) =
             *(byte *)((long)param_2 + (long)*piVar3 + -1) &
             ((byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(piVar3 + 4) & 7) & 0x1f)) ^ 0xff);
      }
    }
    memset((void *)((long)param_2 + (long)*piVar3),0,(long)param_4 - (long)*piVar3);
    piVar3 = *(int **)(param_1 + 2);
  }
  iVar1 = *piVar3;
  uVar2 = 0;
  if ((-1 < iVar1) && (iVar1 <= param_4)) {
    if (0 < iVar1) {
      memcpy(param_3,*(void **)(piVar3 + 2),(long)iVar1);
      if ((*(ulong *)(piVar3 + 4) & 7) != 0) {
        *(byte *)((long)param_3 + (long)*piVar3 + -1) =
             (byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(piVar3 + 4) & 7) & 0x1f)) |
             *(byte *)((long)param_3 + (long)*piVar3 + -1);
      }
    }
    memset((void *)((long)param_3 + (long)*piVar3),0xff,(long)param_4 - (long)*piVar3);
    uVar2 = 1;
  }
  return uVar2;
}

