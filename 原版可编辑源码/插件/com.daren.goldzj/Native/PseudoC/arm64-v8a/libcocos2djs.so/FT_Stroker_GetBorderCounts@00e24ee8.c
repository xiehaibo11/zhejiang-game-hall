
undefined4 FT_Stroker_GetBorderCounts(long param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  
  uVar4 = 6;
  if ((param_1 == 0) || (1 < param_2)) {
joined_r0x00e24f8c:
    uVar5 = 0;
    iVar7 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + (ulong)param_2 * 0x30 + 0x70);
    if (iVar1 == 0) {
      iVar7 = 0;
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      bVar3 = false;
      iVar7 = 0;
      do {
        bVar2 = *(byte *)(*(long *)(param_1 + (ulong)param_2 * 0x30 + 0x80) + lVar6);
        if ((bVar2 >> 2 & 1) == 0) {
          if (!bVar3) goto LAB_00e24f64;
        }
        else {
          if (bVar3) goto LAB_00e24f64;
          bVar3 = true;
        }
        lVar6 = lVar6 + 1;
        if ((bVar2 & 8) != 0) {
          bVar3 = false;
        }
        iVar7 = iVar7 + ((bVar2 & 8) >> 3);
      } while (iVar1 != (int)lVar6);
      if (bVar3) {
LAB_00e24f64:
        uVar4 = 0;
        goto joined_r0x00e24f8c;
      }
    }
    uVar5 = (undefined4)lVar6;
    uVar4 = 0;
    *(undefined1 *)(param_1 + (ulong)param_2 * 0x30 + 0x98) = 1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar5;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar7;
  }
  return uVar4;
}

