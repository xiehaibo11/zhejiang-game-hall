
int * floor0_info_unpack(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *__ptr;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x30);
  __ptr = malloc(0x38);
  iVar3 = oggpack_read(param_2,8);
  *__ptr = iVar3;
  lVar5 = oggpack_read(param_2,0x10);
  *(long *)(__ptr + 2) = lVar5;
  lVar6 = oggpack_read(param_2,0x10);
  *(long *)(__ptr + 4) = lVar6;
  iVar4 = oggpack_read(param_2,6);
  __ptr[6] = iVar4;
  iVar4 = oggpack_read(param_2,8);
  __ptr[7] = iVar4;
  iVar4 = oggpack_read(param_2,4);
  uVar1 = iVar4 + 1;
  __ptr[8] = uVar1;
  if (((0 < iVar3) && (0 < lVar5)) && (0 < lVar6)) {
    if (0 < (int)uVar1) {
      pbVar7 = (byte *)(__ptr + 9);
      uVar8 = (ulong)uVar1;
      do {
        bVar2 = oggpack_read(param_2,8);
        *pbVar7 = bVar2;
        if (*(int *)(lVar9 + 0x20) <= (int)(uint)bVar2) goto LAB_00ebfd40;
        uVar8 = uVar8 - 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
    }
    iVar3 = oggpack_eop(param_2);
    if (iVar3 == 0) {
      return __ptr;
    }
  }
  if (__ptr != (int *)0x0) {
LAB_00ebfd40:
    free(__ptr);
  }
  return (int *)0x0;
}

