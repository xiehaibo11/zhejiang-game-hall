
ulong FT_Bitmap_Convert(undefined8 *param_1,ulong *param_2,ulong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint local_44;
  
  local_44 = 0;
  if (param_1 == (undefined8 *)0x0) {
    uVar7 = 0x21;
  }
  else {
    uVar7 = 6;
    if ((param_2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      if (*(byte *)((long)param_2 + 0x1a) - 1 < 7) {
        uVar8 = *param_1;
        *(undefined1 *)((long)param_3 + 0x1a) = 2;
        uVar9 = *param_2;
        iVar5 = (int)param_3[1];
        uVar7 = *param_3;
        *param_3 = uVar9;
        iVar2 = *(int *)((long)param_2 + 4);
        iVar1 = -iVar5;
        if (-1 < iVar5) {
          iVar1 = iVar5;
        }
        if (0 < param_4) {
          iVar5 = 0;
          if (param_4 != 0) {
            iVar5 = iVar2 / param_4;
          }
          iVar4 = iVar2 - iVar5 * param_4;
          iVar5 = 0;
          if (iVar4 != 0) {
            iVar5 = param_4 - iVar4;
          }
          iVar2 = iVar2 + iVar5;
        }
        if (0 < iVar2) {
          uVar6 = 0;
          if ((long)iVar2 != 0) {
            uVar6 = 0xffffffffffffffff / (ulong)(long)iVar2;
          }
          if (uVar6 < (uVar9 & 0xffffffff)) {
            return 6;
          }
        }
        uVar7 = FUN_00e1ea0c(uVar8,1,iVar1 * (int)uVar7,iVar2 * (int)uVar9,param_3[2],&local_44);
        param_3[2] = uVar7;
        if (local_44 != 0) {
          return (ulong)local_44;
        }
        iVar1 = -iVar2;
        if (-1 < (int)param_3[1]) {
          iVar1 = iVar2;
        }
        *(int *)(param_3 + 1) = iVar1;
        uVar7 = 0;
      }
      else {
        local_44 = 6;
      }
      if ((int)param_3[1] < 0) {
        bVar3 = *(byte *)((long)param_2 + 0x1a);
      }
      else {
        bVar3 = *(byte *)((long)param_2 + 0x1a);
      }
      if (bVar3 - 1 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00e85b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(&UNK_00e85b60 +
                          (ulong)*(ushort *)(&DAT_0198aed2 + (ulong)(bVar3 - 1) * 2) * 4))(uVar7);
        return uVar7;
      }
      uVar7 = (ulong)local_44;
    }
  }
  return uVar7;
}

