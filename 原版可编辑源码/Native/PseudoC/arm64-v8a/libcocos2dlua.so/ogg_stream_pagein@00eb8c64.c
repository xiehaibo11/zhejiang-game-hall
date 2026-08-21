
void ogg_stream_pagein(long *param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_60;
  undefined8 *puStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar6 = (undefined8 *)*param_2;
  local_40 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_48 = 0;
  local_50 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    iVar3 = -1;
    bVar2 = true;
    uVar8 = 0xffffffff;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    local_48 = 0;
    local_40 = puVar6[2];
    local_50 = *(long *)*puVar6 + puVar6[1];
    local_60 = puVar6;
    puStack_58 = puVar6;
    iVar3 = FUN_00eb71b4(&local_60,0xe);
    puVar6 = (undefined8 *)*param_2;
    if (puVar6 == (undefined8 *)0x0) {
      uVar8 = 0xffffffff;
      bVar2 = true;
    }
    else {
      lVar7 = puVar6[2];
      if (lVar7 < 5) {
        lVar9 = 0;
        puVar5 = puVar6;
        do {
          puVar5 = (undefined8 *)puVar5[3];
          lVar9 = lVar9 + lVar7;
          lVar7 = puVar5[2];
        } while (lVar7 + lVar9 < 5);
        lVar7 = *(long *)*puVar5 + puVar5[1];
        lVar9 = 4 - lVar9;
      }
      else {
        lVar9 = 4;
        lVar7 = *(long *)*puVar6 + puVar6[1];
      }
      uVar8 = (uint)*(byte *)(lVar7 + lVar9);
      bVar2 = false;
    }
  }
  if (param_1[5] != (long)iVar3) {
    uVar4 = 0xfffffff3;
    goto LAB_00eb8e58;
  }
  if (0 < (int)uVar8) {
    uVar4 = 0xfffffff4;
    goto LAB_00eb8e58;
  }
  if (param_1[3] == 0) {
    lVar7 = param_2[2];
    param_1[3] = lVar7;
    if (lVar7 == 0) {
LAB_00eb8dcc:
      lVar9 = 0;
    }
    else {
      do {
        lVar9 = lVar7;
        lVar7 = *(long *)(lVar9 + 0x18);
      } while (*(long *)(lVar9 + 0x18) != 0);
    }
  }
  else {
    lVar9 = param_2[2];
    lVar7 = param_1[2];
    if (param_1[2] != 0) {
      do {
        lVar10 = lVar7;
        lVar7 = *(long *)(lVar10 + 0x18);
      } while (lVar7 != 0);
      *(long *)(lVar10 + 0x18) = lVar9;
      lVar7 = lVar9;
      if (lVar9 == 0) goto LAB_00eb8dcc;
      do {
        lVar9 = lVar7;
        lVar7 = *(long *)(lVar9 + 0x18);
      } while (*(long *)(lVar9 + 0x18) != 0);
    }
  }
  param_1[2] = lVar9;
  if (param_1[1] == 0) {
    param_1[1] = (long)puVar6;
    if (bVar2) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      do {
        puVar5 = puVar6;
        puVar6 = (undefined8 *)puVar5[3];
      } while ((undefined8 *)puVar5[3] != (undefined8 *)0x0);
    }
    *param_1 = (long)puVar5;
    *(undefined4 *)(param_1 + 9) = 0xffffffe5;
  }
  else {
    lVar7 = *param_1;
    if (*param_1 != 0) {
      do {
        lVar9 = lVar7;
        lVar7 = *(long *)(lVar9 + 0x18);
      } while (lVar7 != 0);
      *(undefined8 **)(lVar9 + 0x18) = puVar6;
      puVar5 = puVar6;
      if (bVar2) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        do {
          puVar6 = puVar5;
          puVar5 = (undefined8 *)puVar6[3];
        } while ((undefined8 *)puVar6[3] != (undefined8 *)0x0);
      }
    }
    *param_1 = (long)puVar6;
  }
  uVar4 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
LAB_00eb8e58:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

