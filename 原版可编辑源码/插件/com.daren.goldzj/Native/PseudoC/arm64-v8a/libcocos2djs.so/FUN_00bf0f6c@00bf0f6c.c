
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf0f6c(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_30 [8];
  _union_1457 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_00bf0c20(auStack_30);
  lVar8 = *(long *)(param_1 + 0x70);
  if (lVar8 == 0) {
    lVar8 = *(long *)(param_1 + 0x78);
    lVar6 = *(long *)(param_1 + 0x80);
    iVar3 = *(int *)(param_1 + 0x88);
    if (lVar8 != 0) {
      *(long *)(lVar8 + 0x80) = lVar6;
    }
LAB_00bf124c:
    lVar5 = lVar8;
    if (lVar6 != 0) {
      if (param_1 == *(long *)(lVar6 + 0x70)) {
        *(long *)(lVar6 + 0x70) = lVar8;
        lVar5 = DAT_01d3bc88;
      }
      else {
        *(long *)(lVar6 + 0x78) = lVar8;
        lVar5 = DAT_01d3bc88;
      }
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x78) == 0) {
      lVar6 = *(long *)(param_1 + 0x80);
      iVar3 = *(int *)(param_1 + 0x88);
      *(long *)(lVar8 + 0x80) = lVar6;
      goto LAB_00bf124c;
    }
    do {
      lVar5 = lVar6;
      lVar6 = *(long *)(lVar5 + 0x70);
    } while (*(long *)(lVar5 + 0x70) != 0);
    lVar8 = *(long *)(lVar5 + 0x78);
    lVar6 = *(long *)(lVar5 + 0x80);
    iVar3 = *(int *)(lVar5 + 0x88);
    if (lVar8 == 0) {
      lVar9 = 0;
      lVar4 = lVar6;
      if (lVar6 != 0) goto LAB_00bf0fd8;
LAB_00bf1290:
      if (param_1 == lVar9) {
        lVar6 = lVar5;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      DAT_01d3bc88 = lVar8;
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(lVar5 + 0x78) = uVar1;
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(lVar5 + 0x88) = uVar1;
      lVar9 = *(long *)(param_1 + 0x80);
    }
    else {
      *(long *)(lVar8 + 0x80) = lVar6;
      lVar9 = *(long *)(lVar5 + 0x80);
      lVar4 = lVar9;
      if (lVar6 == 0) goto LAB_00bf1290;
LAB_00bf0fd8:
      if (*(long *)(lVar6 + 0x70) == lVar5) {
        *(long *)(lVar6 + 0x70) = lVar8;
      }
      else {
        *(long *)(lVar6 + 0x78) = lVar8;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(lVar5 + 0x70) = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(lVar5 + 0x78) = uVar1;
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(lVar5 + 0x80) = *(undefined8 *)(param_1 + 0x80);
      *(undefined8 *)(lVar5 + 0x88) = uVar1;
      if (param_1 == lVar4) {
        lVar6 = lVar5;
      }
      lVar9 = *(long *)(param_1 + 0x80);
    }
    lVar4 = lVar5;
    if (lVar9 != 0) {
      if (param_1 == *(long *)(lVar9 + 0x70)) {
        *(long *)(lVar9 + 0x70) = lVar5;
        lVar4 = DAT_01d3bc88;
      }
      else {
        *(long *)(lVar9 + 0x78) = lVar5;
        lVar4 = DAT_01d3bc88;
      }
    }
    DAT_01d3bc88 = lVar4;
    lVar4 = *(long *)(param_1 + 0x78);
    *(long *)(*(long *)(param_1 + 0x70) + 0x80) = lVar5;
    lVar9 = lVar6;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = lVar5;
    }
    for (; lVar5 = DAT_01d3bc88, lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x80)) {
    }
  }
  DAT_01d3bc88 = lVar5;
  if (iVar3 == 0) {
LAB_00bf10dc:
    do {
      lVar5 = lVar6;
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x88) != 0)) {
        *(undefined4 *)(lVar8 + 0x88) = 0;
        break;
      }
      lVar6 = DAT_01d3bc88;
      if (lVar8 == DAT_01d3bc88) {
joined_r0x00bf127c:
        if (lVar6 == 0) break;
        goto LAB_00bf1280;
      }
      lVar6 = *(long *)(lVar5 + 0x70);
      if (lVar6 != lVar8) {
        lVar8 = lVar6;
        if (*(int *)(lVar6 + 0x88) == 1) {
          *(undefined4 *)(lVar6 + 0x88) = 0;
          lVar8 = *(long *)(lVar6 + 0x78);
          *(long *)(lVar5 + 0x70) = lVar8;
          *(undefined4 *)(lVar5 + 0x88) = 1;
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x80) = lVar5;
          }
          lVar4 = *(long *)(lVar5 + 0x80);
          *(long *)(lVar6 + 0x80) = lVar4;
          lVar9 = lVar6;
          if (lVar4 != 0) {
            lVar4 = *(long *)(lVar5 + 0x80);
            lVar9 = DAT_01d3bc88;
            if (lVar5 == *(long *)(lVar4 + 0x70)) {
              *(long *)(lVar4 + 0x70) = lVar6;
              lVar8 = *(long *)(lVar5 + 0x70);
            }
            else {
              *(long *)(lVar4 + 0x78) = lVar6;
            }
          }
          *(long *)(lVar6 + 0x78) = lVar5;
          *(long *)(lVar5 + 0x80) = lVar6;
          DAT_01d3bc88 = lVar9;
        }
        lVar6 = *(long *)(lVar8 + 0x70);
        if ((lVar6 == 0) || (*(int *)(lVar6 + 0x88) == 0)) {
          lVar9 = *(long *)(lVar8 + 0x78);
          if ((lVar9 == 0) || (*(int *)(lVar9 + 0x88) == 0)) {
            *(undefined4 *)(lVar8 + 0x88) = 1;
            lVar6 = *(long *)(lVar5 + 0x80);
            lVar8 = lVar5;
            goto LAB_00bf10dc;
          }
          if ((lVar6 == 0) || (*(int *)(lVar6 + 0x88) == 0)) {
            *(undefined4 *)(lVar9 + 0x88) = 0;
            lVar6 = *(long *)(lVar9 + 0x70);
            *(long *)(lVar8 + 0x78) = lVar6;
            *(undefined4 *)(lVar8 + 0x88) = 1;
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x80) = lVar8;
            }
            lVar4 = *(long *)(lVar8 + 0x80);
            *(long *)(lVar9 + 0x80) = lVar4;
            lVar6 = lVar9;
            if (lVar4 != 0) {
              lVar6 = *(long *)(lVar8 + 0x80);
              if (*(long *)(lVar6 + 0x70) == lVar8) {
                *(long *)(lVar6 + 0x70) = lVar9;
                lVar6 = DAT_01d3bc88;
              }
              else {
                *(long *)(lVar6 + 0x78) = lVar9;
                lVar6 = DAT_01d3bc88;
              }
            }
            DAT_01d3bc88 = lVar6;
            *(long *)(lVar9 + 0x70) = lVar8;
            *(long *)(lVar8 + 0x80) = lVar9;
            lVar9 = *(long *)(lVar5 + 0x70);
            lVar6 = *(long *)(lVar9 + 0x70);
            lVar8 = lVar9;
          }
          else {
            lVar9 = *(long *)(lVar5 + 0x70);
          }
          *(undefined4 *)(lVar8 + 0x88) = *(undefined4 *)(lVar5 + 0x88);
          *(undefined4 *)(lVar5 + 0x88) = 0;
          if (lVar6 != 0) goto LAB_00bf1300;
        }
        else {
          lVar9 = *(long *)(lVar5 + 0x70);
          *(undefined4 *)(lVar8 + 0x88) = *(undefined4 *)(lVar5 + 0x88);
          *(undefined4 *)(lVar5 + 0x88) = 0;
LAB_00bf1300:
          *(undefined4 *)(lVar6 + 0x88) = 0;
        }
        lVar8 = *(long *)(lVar9 + 0x78);
        *(long *)(lVar5 + 0x70) = lVar8;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = lVar5;
        }
        lVar7 = *(long *)(lVar5 + 0x80);
        *(long *)(lVar9 + 0x80) = lVar7;
        lVar8 = DAT_01d3bc88;
        lVar6 = lVar9;
        lVar4 = lVar9;
        if (lVar7 != 0) {
          lVar6 = *(long *)(lVar5 + 0x80);
          if (*(long *)(lVar6 + 0x70) == lVar5) {
            *(long *)(lVar6 + 0x70) = lVar9;
            lVar6 = DAT_01d3bc88;
            lVar4 = DAT_01d3bc88;
          }
          else {
            *(long *)(lVar6 + 0x78) = lVar9;
            lVar6 = lVar8;
            lVar4 = DAT_01d3bc88;
          }
        }
        DAT_01d3bc88 = lVar4;
        *(long *)(lVar9 + 0x78) = lVar5;
        *(long *)(lVar5 + 0x80) = lVar9;
        goto joined_r0x00bf127c;
      }
      lVar6 = *(long *)(lVar5 + 0x78);
      lVar8 = lVar6;
      if (*(int *)(lVar6 + 0x88) == 1) {
        *(undefined4 *)(lVar6 + 0x88) = 0;
        lVar8 = *(long *)(lVar6 + 0x70);
        *(long *)(lVar5 + 0x78) = lVar8;
        *(undefined4 *)(lVar5 + 0x88) = 1;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = lVar5;
        }
        lVar4 = *(long *)(lVar5 + 0x80);
        *(long *)(lVar6 + 0x80) = lVar4;
        lVar9 = lVar6;
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar5 + 0x80);
          lVar9 = DAT_01d3bc88;
          if (lVar5 == *(long *)(lVar4 + 0x70)) {
            *(long *)(lVar4 + 0x70) = lVar6;
          }
          else {
            *(long *)(lVar4 + 0x78) = lVar6;
            lVar8 = *(long *)(lVar5 + 0x78);
          }
        }
        *(long *)(lVar6 + 0x70) = lVar5;
        *(long *)(lVar5 + 0x80) = lVar6;
        DAT_01d3bc88 = lVar9;
      }
      lVar6 = *(long *)(lVar8 + 0x70);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x88) != 0)) {
        lVar9 = *(long *)(lVar8 + 0x78);
        if ((lVar9 != 0) && (*(int *)(lVar9 + 0x88) != 0)) {
          lVar4 = *(long *)(lVar5 + 0x78);
          goto LAB_00bf1418;
        }
        *(undefined4 *)(lVar6 + 0x88) = 0;
        lVar9 = *(long *)(lVar6 + 0x78);
        *(long *)(lVar8 + 0x70) = lVar9;
        *(undefined4 *)(lVar8 + 0x88) = 1;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = lVar8;
        }
        lVar4 = *(long *)(lVar8 + 0x80);
        *(long *)(lVar6 + 0x80) = lVar4;
        lVar9 = lVar6;
        if (lVar4 != 0) {
          lVar9 = *(long *)(lVar8 + 0x80);
          if (lVar8 == *(long *)(lVar9 + 0x70)) {
            *(long *)(lVar9 + 0x70) = lVar6;
            lVar9 = DAT_01d3bc88;
          }
          else {
            *(long *)(lVar9 + 0x78) = lVar6;
            lVar9 = DAT_01d3bc88;
          }
        }
        DAT_01d3bc88 = lVar9;
        *(long *)(lVar6 + 0x78) = lVar8;
        *(long *)(lVar8 + 0x80) = lVar6;
        lVar4 = *(long *)(lVar5 + 0x78);
        lVar9 = *(long *)(lVar4 + 0x78);
        *(undefined4 *)(lVar4 + 0x88) = *(undefined4 *)(lVar5 + 0x88);
        *(undefined4 *)(lVar5 + 0x88) = 0;
        if (lVar9 == 0) goto LAB_00bf1428;
        goto LAB_00bf1424;
      }
      lVar9 = *(long *)(lVar8 + 0x78);
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x88) != 0)) goto LAB_00bf140c;
      *(undefined4 *)(lVar8 + 0x88) = 1;
      lVar6 = *(long *)(lVar5 + 0x80);
      lVar8 = lVar5;
    } while( true );
  }
LAB_00bf1040:
  iVar3 = *(int *)(param_1 + 0x68);
  lVar8 = FUN_00bf0d78(iVar3);
  if (lVar8 == 0) {
    local_28.sa_handler = (__sighandler_t)0x0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    iVar3 = sigaction(iVar3,(sigaction *)&local_28,(sigaction *)0x0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else if (((*(uint *)(param_1 + 0x58) >> 0x13 & 1) == 0) &&
          ((*(uint *)(lVar8 + 0x58) >> 0x13 & 1) != 0)) {
    FUN_00bf0ccc(iVar3,1);
  }
  FUN_00bf0c94(auStack_30);
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar2 = *(uint *)(param_1 + 0x58);
  if (((uVar2 >> 0xe & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar2 & 0xffffbfff, (uVar2 >> 0xd & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00bf140c:
  lVar4 = *(long *)(lVar5 + 0x78);
LAB_00bf1418:
  *(undefined4 *)(lVar8 + 0x88) = *(undefined4 *)(lVar5 + 0x88);
  *(undefined4 *)(lVar5 + 0x88) = 0;
LAB_00bf1424:
  *(undefined4 *)(lVar9 + 0x88) = 0;
LAB_00bf1428:
  lVar8 = *(long *)(lVar4 + 0x70);
  *(long *)(lVar5 + 0x78) = lVar8;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = lVar5;
  }
  lVar7 = *(long *)(lVar5 + 0x80);
  *(long *)(lVar4 + 0x80) = lVar7;
  lVar8 = DAT_01d3bc88;
  lVar6 = lVar4;
  lVar9 = lVar4;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar5 + 0x80);
    if (*(long *)(lVar6 + 0x70) == lVar5) {
      *(long *)(lVar6 + 0x70) = lVar4;
      lVar6 = DAT_01d3bc88;
      lVar9 = DAT_01d3bc88;
    }
    else {
      *(long *)(lVar6 + 0x78) = lVar4;
      lVar6 = lVar8;
      lVar9 = DAT_01d3bc88;
    }
  }
  DAT_01d3bc88 = lVar9;
  *(long *)(lVar4 + 0x70) = lVar5;
  *(long *)(lVar5 + 0x80) = lVar4;
  if (lVar6 != 0) {
LAB_00bf1280:
    *(undefined4 *)(lVar6 + 0x88) = 0;
  }
  goto LAB_00bf1040;
}

