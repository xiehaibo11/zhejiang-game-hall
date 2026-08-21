
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011bf48(long param_1,long param_2,ulong *param_3,int param_4,ulong *param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  long lVar7;
  ushort uVar8;
  code *pcVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_4 == 7) {
switchD_0011bff8_caseD_3:
    uVar13 = *param_3;
    pcVar9 = *(code **)(param_2 + 0x18);
    *param_3 = uVar13 + 1;
    iVar6 = (*pcVar9)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_6);
    uVar12 = local_10;
    if (-1 < iVar6) {
      uVar10 = *param_3;
      pcVar9 = *(code **)(param_2 + 0x18);
      *param_3 = uVar10 + 1;
      iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
      uVar3 = (undefined1)
              (local_10 >>
              ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f));
      if (-1 < iVar6) {
        uVar4 = (undefined1)
                (uVar12 >>
                ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
        if (*(int *)(param_1 + 0x40) == 0) {
          uVar5 = CONCAT11(uVar3,uVar4);
        }
        else {
          uVar5 = CONCAT11(uVar4,uVar3);
        }
        uVar13 = *param_3;
        pcVar9 = *(code **)(param_2 + 0x18);
        *param_3 = uVar13 + 1;
        iVar6 = (*pcVar9)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_6);
        uVar12 = local_10;
        if (-1 < iVar6) {
          uVar10 = *param_3;
          pcVar9 = *(code **)(param_2 + 0x18);
          *param_3 = uVar10 + 1;
          iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
          uVar3 = (undefined1)
                  (local_10 >>
                  ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f));
          if (-1 < iVar6) {
            uVar4 = (undefined1)
                    (uVar12 >>
                    ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
            if (*(int *)(param_1 + 0x40) == 0) {
              uVar2 = CONCAT22(CONCAT11(uVar3,uVar4),uVar5);
            }
            else {
              uVar2 = CONCAT22(uVar5,CONCAT11(uVar4,uVar3));
            }
            uVar13 = *param_3;
            pcVar9 = *(code **)(param_2 + 0x18);
            *param_3 = uVar13 + 1;
            iVar6 = (*pcVar9)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_6);
            uVar12 = local_10;
            if (-1 < iVar6) {
              uVar10 = *param_3;
              pcVar9 = *(code **)(param_2 + 0x18);
              *param_3 = uVar10 + 1;
              iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
              uVar3 = (undefined1)(local_10 >> ((ulong)(uint)((int)uVar10 << 3) & 0x3f));
              if (-1 < iVar6) {
                uVar4 = (undefined1)
                        (uVar12 >>
                        ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) &
                        0x3f));
                if (*(int *)(param_1 + 0x40) == 0) {
                  uVar5 = CONCAT11(uVar3,uVar4);
                }
                else {
                  uVar5 = CONCAT11(uVar4,uVar3);
                }
                uVar13 = *param_3;
                pcVar9 = *(code **)(param_2 + 0x18);
                *param_3 = uVar13 + 1;
                iVar6 = (*pcVar9)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_6);
                uVar12 = local_10;
                if (-1 < iVar6) {
                  uVar10 = *param_3;
                  pcVar9 = *(code **)(param_2 + 0x18);
                  *param_3 = uVar10 + 1;
                  iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
                  uVar3 = (undefined1)
                          (local_10 >>
                          ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) &
                          0x3f));
                  if (-1 < iVar6) {
                    uVar4 = (undefined1)
                            (uVar12 >>
                            ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) &
                            0x3f));
                    if (*(int *)(param_1 + 0x40) == 0) {
                      uVar12 = CONCAT44(CONCAT22(CONCAT11(uVar3,uVar4),uVar5),uVar2);
                    }
                    else {
                      uVar12 = CONCAT44(uVar2,CONCAT22(uVar5,CONCAT11(uVar4,uVar3)));
                    }
                    *param_5 = uVar12;
                    lVar7 = 0;
                    goto LAB_0011bfb4;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_0011c064;
  }
  switch(param_4) {
  case 0:
    uVar12 = *param_3;
    pcVar9 = *(code **)(param_2 + 0x18);
    *param_3 = uVar12 + 1;
    iVar6 = (*pcVar9)(param_1,uVar12 & 0xfffffffffffffff8,&local_10,0,param_6);
    if (-1 < iVar6) {
      lVar7 = (long)iVar6;
      *param_5 = local_10 >>
                 ((ulong)(uint)(((int)uVar12 - (int)(uVar12 & 0xfffffffffffffff8)) * 8) & 0x3f) &
                 0xff;
      goto LAB_0011bfb4;
    }
    break;
  case 1:
    uVar13 = *param_3;
    pcVar9 = *(code **)(param_2 + 0x18);
    *param_3 = uVar13 + 1;
    iVar6 = (*pcVar9)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_6);
    uVar12 = local_10;
    if (-1 < iVar6) {
      uVar10 = *param_3;
      pcVar9 = *(code **)(param_2 + 0x18);
      *param_3 = uVar10 + 1;
      iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
      uVar3 = (undefined1)
              (local_10 >>
              ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f));
      if (-1 < iVar6) {
        uVar4 = (undefined1)
                (uVar12 >>
                ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
        if (*(int *)(param_1 + 0x40) == 0) {
          uVar8 = CONCAT11(uVar3,uVar4);
        }
        else {
          uVar8 = CONCAT11(uVar4,uVar3);
        }
        lVar7 = 0;
        *param_5 = (ulong)uVar8;
        goto LAB_0011bfb4;
      }
    }
    break;
  case 2:
    uVar13 = *param_3;
    pcVar9 = *(code **)(param_2 + 0x18);
    *param_3 = uVar13 + 1;
    iVar6 = (*pcVar9)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_6);
    uVar12 = local_10;
    if (-1 < iVar6) {
      uVar10 = *param_3;
      pcVar9 = *(code **)(param_2 + 0x18);
      *param_3 = uVar10 + 1;
      iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
      uVar3 = (undefined1)
              (local_10 >>
              ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f));
      if (-1 < iVar6) {
        uVar4 = (undefined1)
                (uVar12 >>
                ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
        if (*(int *)(param_1 + 0x40) == 0) {
          uVar5 = CONCAT11(uVar3,uVar4);
        }
        else {
          uVar5 = CONCAT11(uVar4,uVar3);
        }
        uVar13 = *param_3;
        pcVar9 = *(code **)(param_2 + 0x18);
        *param_3 = uVar13 + 1;
        iVar6 = (*pcVar9)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_6);
        uVar12 = local_10;
        if (-1 < iVar6) {
          uVar10 = *param_3;
          pcVar9 = *(code **)(param_2 + 0x18);
          *param_3 = uVar10 + 1;
          iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
          uVar3 = (undefined1)
                  (local_10 >>
                  ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f));
          if (-1 < iVar6) {
            uVar4 = (undefined1)
                    (uVar12 >>
                    ((ulong)(uint)(((int)uVar13 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
            if (*(int *)(param_1 + 0x40) == 0) {
              uVar11 = CONCAT22(CONCAT11(uVar3,uVar4),uVar5);
            }
            else {
              uVar11 = CONCAT22(uVar5,CONCAT11(uVar4,uVar3));
            }
            lVar7 = 0;
            *param_5 = (ulong)uVar11;
            goto LAB_0011bfb4;
          }
        }
      }
    }
    break;
  case 3:
    goto switchD_0011bff8_caseD_3;
  case 4:
    uVar12 = 0;
    uVar13 = 0;
    do {
      uVar10 = *param_3;
      pcVar9 = *(code **)(param_2 + 0x18);
      *param_3 = uVar10 + 1;
      iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
      uVar10 = local_10 >>
               ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if (iVar6 < 0) goto LAB_0011c064;
      uVar1 = uVar12 & 0x3f;
      uVar12 = uVar12 + 7;
      uVar13 = uVar13 | (uVar10 & 0x7f) << uVar1;
    } while (((uint)uVar10 >> 7 & 1) != 0);
    goto LAB_0011c5dc;
  case 5:
    uVar12 = 0;
    uVar13 = 0;
    do {
      uVar10 = *param_3;
      pcVar9 = *(code **)(param_2 + 0x18);
      *param_3 = uVar10 + 1;
      iVar6 = (*pcVar9)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_6);
      uVar10 = local_10 >>
               ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f);
      uVar11 = (uint)uVar10;
      if (iVar6 < 0) {
        lVar7 = (long)iVar6;
        goto LAB_0011bfb4;
      }
      uVar1 = uVar12 & 0x3f;
      uVar12 = uVar12 + 7;
      uVar13 = uVar13 | (uVar10 & 0x7f) << uVar1;
    } while ((uVar11 >> 7 & 1) != 0);
    if ((uVar12 < 0x40) && (((uVar11 & 0xff) >> 6 & 1) != 0)) {
      uVar13 = -1L << (uVar12 & 0x3f) | uVar13;
    }
LAB_0011c5dc:
    *param_5 = uVar13;
    lVar7 = 0;
    goto LAB_0011bfb4;
  default:
    log2Console(3,"Bugly-libunwind","Unexpected operand type %d\n");
    lVar7 = -8;
    goto LAB_0011bfb4;
  }
LAB_0011c064:
  lVar7 = (long)iVar6;
LAB_0011bfb4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar7);
  }
  return;
}

