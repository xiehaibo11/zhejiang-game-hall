
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf16dc(ulong param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_3 == 0) {
    uVar3 = 0xffffffea;
    goto LAB_00bf18d4;
  }
  if (*(int *)(param_1 + 0x68) == param_3) {
    *(undefined8 *)(param_1 + 0x60) = param_2;
    uVar3 = 0;
    goto LAB_00bf18d4;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_00bf0f6c();
  }
  FUN_00bf0c20(auStack_10);
  lVar4 = FUN_00bf0d78(param_3);
  if (lVar4 == 0) {
    uVar3 = FUN_00bf0ccc(param_3,param_4);
    if (uVar3 != 0) {
LAB_00bf1ae8:
      FUN_00bf0c94(auStack_10);
      goto LAB_00bf18d4;
    }
    *(int *)(param_1 + 0x68) = param_3;
    if (param_4 == 0) goto LAB_00bf1750;
LAB_00bf1744:
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 0x80000;
  }
  else {
    if (param_4 != 0) {
      *(int *)(param_1 + 0x68) = param_3;
      goto LAB_00bf1744;
    }
    if (((*(uint *)(lVar4 + 0x58) >> 0x13 & 1) != 0) &&
       (uVar3 = FUN_00bf0ccc(param_3,0), uVar3 != 0)) goto LAB_00bf1ae8;
    *(int *)(param_1 + 0x68) = param_3;
  }
LAB_00bf1750:
  uVar10 = param_1;
  uVar8 = DAT_01d3bc88;
  if (DAT_01d3bc88 != 0) {
    iVar2 = *(int *)(DAT_01d3bc88 + 0x68);
    do {
      if (param_3 < iVar2) {
LAB_00bf17c8:
        uVar6 = *(ulong *)(uVar8 + 0x70);
        iVar2 = -1;
      }
      else {
        if (param_3 <= iVar2) {
          uVar3 = *(uint *)(param_1 + 0x58) & 0x80000;
          uVar1 = *(uint *)(uVar8 + 0x58) & 0x80000;
          if (uVar3 < uVar1) goto LAB_00bf17c8;
          if (uVar3 <= uVar1) {
            if (*(ulong *)(param_1 + 8) < *(ulong *)(uVar8 + 8)) goto LAB_00bf17c8;
            if (*(ulong *)(param_1 + 8) <= *(ulong *)(uVar8 + 8)) {
              if (param_1 < uVar8) goto LAB_00bf17c8;
              if (param_1 <= uVar8) goto LAB_00bf18a0;
            }
          }
        }
        uVar6 = *(ulong *)(uVar8 + 0x78);
        iVar2 = 1;
      }
      if (uVar6 == 0) goto LAB_00bf17d4;
      iVar2 = *(int *)(uVar6 + 0x68);
      uVar8 = uVar6;
    } while( true );
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x88) = 1;
  DAT_01d3bc88 = param_1;
  goto joined_r0x00bf1804;
LAB_00bf17d4:
  *(ulong *)(param_1 + 0x80) = uVar8;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x88) = 1;
  if (iVar2 == -1) {
    *(ulong *)(uVar8 + 0x70) = param_1;
  }
  else {
    *(ulong *)(uVar8 + 0x78) = param_1;
  }
joined_r0x00bf1804:
  while ((uVar8 != 0 && (*(int *)(uVar8 + 0x88) == 1))) {
    uVar6 = *(ulong *)(uVar8 + 0x80);
    uVar7 = *(ulong *)(uVar6 + 0x70);
    if (uVar7 == uVar8) {
      lVar4 = *(long *)(uVar6 + 0x78);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0x88) != 1)) {
        uVar5 = *(ulong *)(uVar7 + 0x78);
        uVar8 = uVar7;
        uVar9 = uVar7;
        uVar11 = uVar10;
        uVar12 = DAT_01d3bc88;
        if (uVar5 == uVar10) {
          lVar4 = *(long *)(uVar10 + 0x70);
          *(long *)(uVar7 + 0x78) = lVar4;
          if (lVar4 == 0) {
            *(ulong *)(uVar10 + 0x80) = uVar6;
LAB_00bf1a80:
            lVar4 = *(long *)(uVar7 + 0x80);
            uVar10 = DAT_01d3bc88;
            if (uVar7 == *(ulong *)(lVar4 + 0x70)) {
              *(ulong *)(lVar4 + 0x70) = uVar5;
            }
            else {
              *(ulong *)(lVar4 + 0x78) = uVar5;
            }
          }
          else {
            *(ulong *)(lVar4 + 0x80) = uVar7;
            lVar4 = *(long *)(uVar7 + 0x80);
            *(long *)(uVar10 + 0x80) = lVar4;
            if (lVar4 != 0) goto LAB_00bf1a80;
          }
          *(ulong *)(uVar5 + 0x70) = uVar7;
          *(ulong *)(uVar7 + 0x80) = uVar5;
          uVar8 = *(ulong *)(uVar6 + 0x70);
          uVar9 = uVar5;
          uVar11 = uVar7;
          uVar12 = uVar10;
        }
        *(undefined4 *)(uVar9 + 0x88) = 0;
        lVar4 = *(long *)(uVar8 + 0x78);
        *(long *)(uVar6 + 0x70) = lVar4;
        *(undefined4 *)(uVar6 + 0x88) = 1;
        if (lVar4 != 0) {
          *(ulong *)(lVar4 + 0x80) = uVar6;
        }
        lVar4 = *(long *)(uVar6 + 0x80);
        *(long *)(uVar8 + 0x80) = lVar4;
        DAT_01d3bc88 = uVar8;
        if (lVar4 != 0) {
          lVar4 = *(long *)(uVar6 + 0x80);
          DAT_01d3bc88 = uVar12;
          if (uVar6 == *(ulong *)(lVar4 + 0x70)) {
            *(ulong *)(lVar4 + 0x70) = uVar8;
          }
          else {
            *(ulong *)(lVar4 + 0x78) = uVar8;
          }
        }
        *(ulong *)(uVar8 + 0x78) = uVar6;
        *(ulong *)(uVar6 + 0x80) = uVar8;
        uVar8 = *(ulong *)(uVar11 + 0x80);
        uVar10 = uVar11;
      }
      else {
        *(undefined4 *)(lVar4 + 0x88) = 0;
        *(undefined4 *)(uVar8 + 0x88) = 0;
        *(undefined4 *)(uVar6 + 0x88) = 1;
        uVar8 = *(ulong *)(uVar6 + 0x80);
        uVar10 = uVar6;
      }
    }
    else if ((uVar7 == 0) || (*(int *)(uVar7 + 0x88) != 1)) {
      uVar7 = uVar8;
      uVar9 = DAT_01d3bc88;
      if (uVar10 == *(ulong *)(uVar8 + 0x70)) {
        lVar4 = *(long *)(uVar10 + 0x78);
        *(long *)(uVar8 + 0x70) = lVar4;
        if (lVar4 == 0) {
          *(ulong *)(uVar10 + 0x80) = uVar6;
LAB_00bf19d4:
          lVar4 = *(long *)(uVar8 + 0x80);
          if (*(ulong *)(lVar4 + 0x70) == uVar8) {
            *(ulong *)(lVar4 + 0x70) = uVar10;
            uVar9 = DAT_01d3bc88;
          }
          else {
            *(ulong *)(lVar4 + 0x78) = uVar10;
            uVar9 = DAT_01d3bc88;
          }
        }
        else {
          *(ulong *)(lVar4 + 0x80) = uVar8;
          lVar4 = *(long *)(uVar8 + 0x80);
          *(long *)(uVar10 + 0x80) = lVar4;
          uVar9 = uVar10;
          if (lVar4 != 0) goto LAB_00bf19d4;
        }
        *(ulong *)(uVar10 + 0x78) = uVar8;
        *(ulong *)(uVar8 + 0x80) = uVar10;
        uVar7 = uVar10;
        uVar10 = uVar8;
      }
      uVar8 = *(ulong *)(uVar6 + 0x78);
      *(undefined4 *)(uVar7 + 0x88) = 0;
      *(undefined4 *)(uVar6 + 0x88) = 1;
      lVar4 = *(long *)(uVar8 + 0x70);
      *(long *)(uVar6 + 0x78) = lVar4;
      if (lVar4 != 0) {
        *(ulong *)(lVar4 + 0x80) = uVar6;
      }
      lVar4 = *(long *)(uVar6 + 0x80);
      *(long *)(uVar8 + 0x80) = lVar4;
      DAT_01d3bc88 = uVar8;
      if (lVar4 != 0) {
        lVar4 = *(long *)(uVar6 + 0x80);
        DAT_01d3bc88 = uVar9;
        if (uVar6 == *(ulong *)(lVar4 + 0x70)) {
          *(ulong *)(lVar4 + 0x70) = uVar8;
        }
        else {
          *(ulong *)(lVar4 + 0x78) = uVar8;
        }
      }
      *(ulong *)(uVar8 + 0x70) = uVar6;
      *(ulong *)(uVar6 + 0x80) = uVar8;
      uVar8 = *(ulong *)(uVar10 + 0x80);
    }
    else {
      *(undefined4 *)(uVar7 + 0x88) = 0;
      *(undefined4 *)(uVar8 + 0x88) = 0;
      *(undefined4 *)(uVar6 + 0x88) = 1;
      uVar8 = *(ulong *)(uVar6 + 0x80);
      uVar10 = uVar6;
    }
  }
  *(undefined4 *)(DAT_01d3bc88 + 0x88) = 0;
LAB_00bf18a0:
  FUN_00bf0c94(auStack_10);
  *(undefined8 *)(param_1 + 0x60) = param_2;
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar3 = uVar1 & 0x4000;
  if (((uVar1 >> 0xe & 1) == 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 | 0x4000, (uVar1 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + 1;
  }
  else {
    uVar3 = 0;
  }
LAB_00bf18d4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

