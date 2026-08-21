
int * floor0_info_unpack(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *__ptr;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x30);
  __ptr = malloc(0x38);
  iVar2 = oggpack_read(param_2,8);
  *__ptr = iVar2;
  lVar4 = oggpack_read(param_2,0x10);
  *(long *)(__ptr + 2) = lVar4;
  lVar5 = oggpack_read(param_2,0x10);
  *(long *)(__ptr + 4) = lVar5;
  iVar3 = oggpack_read(param_2,6);
  __ptr[6] = iVar3;
  iVar3 = oggpack_read(param_2,8);
  __ptr[7] = iVar3;
  iVar3 = oggpack_read(param_2,4);
  iVar3 = iVar3 + 1;
  __ptr[8] = iVar3;
  if (((0 < iVar2) && (0 < lVar4)) && (0 < lVar5)) {
    if (0 < iVar3) {
      lVar4 = 0;
      do {
        bVar1 = oggpack_read(param_2,8);
        *(byte *)((long)__ptr + lVar4 + 0x24) = bVar1;
        if (*(int *)(lVar6 + 0x20) <= (int)(uint)bVar1) goto LAB_00e937ac;
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar3);
    }
    iVar3 = oggpack_eop(param_2);
    if (iVar3 == 0) {
      return __ptr;
    }
  }
  if (__ptr != (int *)0x0) {
LAB_00e937ac:
    free(__ptr);
  }
  return (int *)0x0;
}

