
long FUN_0136dac0(undefined8 param_1,long param_2,long param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x26;
  
  iVar3 = (int)param_1;
  if ((int)param_2 == param_4) {
    iVar5 = (int)param_3;
    if (iVar5 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
      if (iVar3 == 0) {
        uVar8 = **(ulong **)(unaff_x26 + 0x1428);
        uVar6 = *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + 0x15f);
        uVar1 = uVar8 + 0x28;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar4 = uVar8 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          lVar4 = FUN_01348560(param_1,0x28);
        }
        *(undefined4 *)(lVar4 + -1) = uVar6;
        *(undefined4 *)(lVar4 + 0xb) = 0;
        *(int *)(lVar4 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
        *(int *)(lVar4 + 7) = (int)lVar4 + 0x10;
        *(int *)(lVar4 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
        *(undefined4 *)(lVar4 + 0x13) = 8;
        uVar6 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa8);
        *(undefined4 *)(lVar4 + 0x23) = uVar6;
        *(undefined4 *)(lVar4 + 0x1f) = uVar6;
        *(undefined4 *)(lVar4 + 0x1b) = uVar6;
        *(undefined4 *)(lVar4 + 0x17) = uVar6;
        return lVar4;
      }
      if (iVar3 == 1) {
        lVar4 = FUN_0136ea40(param_1,param_2,*(undefined8 *)(unaff_x26 + 0xa0));
        return lVar4;
      }
    }
    else {
      if (iVar3 == 0) {
        uVar2 = (int)unaff_x26 + *(int *)(param_3 + 3) >> 1 & 0x1f;
        if (uVar2 == 0) {
          uVar8 = **(ulong **)(unaff_x26 + 0x1428);
          uVar6 = *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + 0x15f);
          uVar1 = uVar8 + 0x30;
          if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar4 = uVar8 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar1;
          }
          else {
            lVar4 = FUN_01348560(param_1,0x30);
          }
          *(undefined4 *)(lVar4 + -1) = uVar6;
          *(undefined4 *)(lVar4 + 0xb) = 0;
          *(int *)(lVar4 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
          *(int *)(lVar4 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
          *(int *)(lVar4 + 0x13) = iVar5;
          *(int *)(param_3 + 0x13) = *(int *)(param_3 + 0x13) + 1;
          *(int *)(lVar4 + 7) = (int)lVar4 + 0x18;
          *(int *)(lVar4 + 0x17) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
          *(undefined4 *)(lVar4 + 0x1b) = 8;
          uVar6 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa8);
          *(undefined4 *)(lVar4 + 0x2b) = uVar6;
          *(undefined4 *)(lVar4 + 0x27) = uVar6;
          *(undefined4 *)(lVar4 + 0x23) = uVar6;
          *(undefined4 *)(lVar4 + 0x1f) = uVar6;
          return lVar4;
        }
        if (uVar2 == 1) {
          uVar8 = **(ulong **)(unaff_x26 + 0x1428);
          uVar6 = *(undefined4 *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xf) + 0x163);
          uVar1 = uVar8 + 0x30;
          if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar4 = uVar8 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar1;
          }
          else {
            lVar4 = FUN_01348560(param_1,0x30);
          }
          *(undefined4 *)(lVar4 + -1) = uVar6;
          *(undefined4 *)(lVar4 + 0xb) = 0;
          *(int *)(lVar4 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
          *(int *)(lVar4 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
          *(int *)(lVar4 + 0x13) = iVar5;
          *(int *)(param_3 + 0x13) = *(int *)(param_3 + 0x13) + 1;
          *(int *)(lVar4 + 7) = (int)lVar4 + 0x18;
          *(int *)(lVar4 + 0x17) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
          *(undefined4 *)(lVar4 + 0x1b) = 8;
          uVar6 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa8);
          *(undefined4 *)(lVar4 + 0x2b) = uVar6;
          *(undefined4 *)(lVar4 + 0x27) = uVar6;
          *(undefined4 *)(lVar4 + 0x23) = uVar6;
          *(undefined4 *)(lVar4 + 0x1f) = uVar6;
          return lVar4;
        }
        if (uVar2 == 4) {
          lVar4 = FUN_0136e260();
          return lVar4;
        }
        if (uVar2 == 5) {
          lVar4 = FUN_0136e340();
          return lVar4;
        }
        if (uVar2 == 2) {
          lVar4 = FUN_0136e0a0();
          return lVar4;
        }
        if (uVar2 == 3) {
          lVar4 = FUN_0136e180();
          return lVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2630));
      }
      if (iVar3 == 1) {
        uVar7 = (int)unaff_x26 + *(int *)(param_3 + 3);
        uVar2 = (int)uVar7 >> 1 & 0x1f;
        if ((uVar7 >> 1 & 1) == 0) {
          *(uint *)(param_3 + 3) = uVar7 | 2;
          uVar2 = uVar2 | 1;
        }
        if (uVar2 == 0) {
          lVar4 = FUN_0136e420();
          return lVar4;
        }
        if (uVar2 == 1) {
          lVar4 = FUN_0136e640();
          return lVar4;
        }
        if (uVar2 == 4) {
          lVar4 = FUN_0136efe0();
          return lVar4;
        }
        if (uVar2 == 5) {
          lVar4 = FUN_0136f1c0();
          return lVar4;
        }
        if (uVar2 == 2) {
          lVar4 = FUN_0136ec20();
          return lVar4;
        }
        if (uVar2 == 3) {
          lVar4 = FUN_0136ee00();
          return lVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2630));
      }
    }
  }
  *(long *)(&stack0x00000000 + (long)iVar3 * 8) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(iVar3 + 3,*(undefined8 *)(unaff_x26 + 0x1b78));
}

