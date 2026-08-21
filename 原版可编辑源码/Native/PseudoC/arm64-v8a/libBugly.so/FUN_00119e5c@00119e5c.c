
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119e5c(long param_1,long param_2,ulong *param_3,byte param_4,long *param_5,ulong *param_6
                 ,undefined8 param_7)

{
  byte bVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  ulong uVar13;
  ushort local_12;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar13 = *param_3;
  if (param_4 == 0xff) goto LAB_0011a214;
  if (param_4 == 0x50) {
    pcVar8 = *(code **)(param_2 + 0x18);
    uVar13 = uVar13 + 7 & 0xfffffffffffffff8;
    *param_3 = uVar13 + 1;
    uVar7 = (*pcVar8)(param_1,uVar13,&local_10,0,param_7);
    uVar13 = local_10;
    if (-1 < (int)uVar7) {
      uVar9 = *param_3;
      pcVar8 = *(code **)(param_2 + 0x18);
      *param_3 = uVar9 + 1;
      uVar7 = (*pcVar8)(param_1,uVar9 & 0xfffffffffffffff8,&local_10,0,param_7);
      uVar3 = (undefined1)
              (local_10 >>
              ((ulong)(uint)(((int)uVar9 - (int)(uVar9 & 0xfffffffffffffff8)) * 8) & 0x3f));
      if (-1 < (int)uVar7) {
        if (*(int *)(param_1 + 0x40) == 0) {
          uVar6 = CONCAT11(uVar3,(char)uVar13);
        }
        else {
          uVar6 = CONCAT11((char)uVar13,uVar3);
        }
        uVar9 = *param_3;
        pcVar8 = *(code **)(param_2 + 0x18);
        *param_3 = uVar9 + 1;
        uVar7 = (*pcVar8)(param_1,uVar9 & 0xfffffffffffffff8,&local_10,0,param_7);
        uVar13 = local_10;
        if (-1 < (int)uVar7) {
          uVar10 = *param_3;
          pcVar8 = *(code **)(param_2 + 0x18);
          *param_3 = uVar10 + 1;
          uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
          uVar3 = (undefined1)
                  (local_10 >>
                  ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f));
          if (-1 < (int)uVar7) {
            uVar4 = (undefined1)
                    (uVar13 >>
                    ((ulong)(uint)(((int)uVar9 - (int)(uVar9 & 0xfffffffffffffff8)) * 8) & 0x3f));
            if (*(int *)(param_1 + 0x40) == 0) {
              uVar12 = CONCAT22(CONCAT11(uVar3,uVar4),uVar6);
            }
            else {
              uVar12 = CONCAT22(uVar6,CONCAT11(uVar4,uVar3));
            }
            uVar9 = *param_3;
            pcVar8 = *(code **)(param_2 + 0x18);
            *param_3 = uVar9 + 1;
            uVar7 = (*pcVar8)(param_1,uVar9 & 0xfffffffffffffff8,&local_10,0,param_7);
            uVar13 = local_10;
            if (-1 < (int)uVar7) {
              uVar10 = *param_3;
              pcVar8 = *(code **)(param_2 + 0x18);
              *param_3 = uVar10 + 1;
              uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
              uVar3 = (undefined1)
                      (local_10 >>
                      ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f)
                      );
              if (-1 < (int)uVar7) {
                uVar4 = (undefined1)
                        (uVar13 >>
                        ((ulong)(uint)(((int)uVar9 - (int)(uVar9 & 0xfffffffffffffff8)) * 8) & 0x3f)
                        );
                if (*(int *)(param_1 + 0x40) == 0) {
                  uVar6 = CONCAT11(uVar3,uVar4);
                }
                else {
                  uVar6 = CONCAT11(uVar4,uVar3);
                }
                uVar9 = *param_3;
                pcVar8 = *(code **)(param_2 + 0x18);
                *param_3 = uVar9 + 1;
                uVar7 = (*pcVar8)(param_1,uVar9 & 0xfffffffffffffff8,&local_10,0,param_7);
                uVar13 = local_10;
                if (-1 < (int)uVar7) {
                  uVar10 = *param_3;
                  pcVar8 = *(code **)(param_2 + 0x18);
                  *param_3 = uVar10 + 1;
                  uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
                  uVar3 = (undefined1)
                          (local_10 >>
                          ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) &
                          0x3f));
                  if (-1 < (int)uVar7) {
                    uVar4 = (undefined1)
                            (uVar13 >>
                            ((ulong)(uint)(((int)uVar9 - (int)(uVar9 & 0xfffffffffffffff8)) * 8) &
                            0x3f));
                    if (*(int *)(param_1 + 0x40) == 0) {
                      uVar13 = CONCAT44(CONCAT22(CONCAT11(uVar3,uVar4),uVar6),uVar12);
                    }
                    else {
                      uVar13 = CONCAT44(uVar12,CONCAT22(uVar6,CONCAT11(uVar4,uVar3)));
                    }
                    *param_6 = uVar13;
                    uVar7 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_00119ee0;
  }
  iVar5 = (int)uVar13;
  switch(param_4 & 0xf) {
  case 0:
  case 4:
  case 0xc:
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar13 + 1;
    uVar7 = (*pcVar8)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)(local_10 >> ((ulong)(uint)((int)uVar10 << 3) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)((iVar5 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = CONCAT11(uVar3,uVar4);
    }
    else {
      uVar6 = CONCAT11(uVar4,uVar3);
    }
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar11 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar11 + 1;
    uVar7 = (*pcVar8)(param_1,uVar11 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)
            (local_10 >>
            ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f)
            );
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar12 = CONCAT22(CONCAT11(uVar3,uVar4),uVar6);
    }
    else {
      uVar12 = CONCAT22(uVar6,CONCAT11(uVar4,uVar3));
    }
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar11 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar11 + 1;
    uVar7 = (*pcVar8)(param_1,uVar11 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)(local_10 >> ((ulong)(uint)((int)uVar11 << 3) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f)
            );
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = CONCAT11(uVar3,uVar4);
    }
    else {
      uVar6 = CONCAT11(uVar4,uVar3);
    }
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar11 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar11 + 1;
    uVar7 = (*pcVar8)(param_1,uVar11 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)
            (local_10 >>
            ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f)
            );
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar9 = CONCAT44(CONCAT22(CONCAT11(uVar3,uVar4),uVar6),uVar12);
    }
    else {
      uVar9 = CONCAT44(uVar12,CONCAT22(uVar6,CONCAT11(uVar4,uVar3)));
    }
    break;
  case 1:
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = uVar13;
    while( true ) {
      pcVar8 = *(code **)(param_2 + 0x18);
      *param_3 = uVar11 + 1;
      uVar7 = (*pcVar8)(param_1,uVar11 & 0xfffffffffffffff8,&local_10,0,param_7);
      uVar11 = local_10 >>
               ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar7 < 0) break;
      uVar2 = uVar10 & 0x3f;
      uVar10 = uVar10 + 7;
      uVar9 = uVar9 | (uVar11 & 0x7f) << uVar2;
      if (((uint)uVar11 >> 7 & 1) == 0) goto LAB_0011a1d0;
      uVar11 = *param_3;
    }
    goto LAB_00119ee0;
  case 2:
    uVar7 = FUN_00119d44(param_1,param_2,param_3,&local_12,param_7);
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar9 = (ulong)local_12;
    break;
  case 3:
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar13 + 1;
    uVar7 = (*pcVar8)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)(local_10 >> ((ulong)(uint)((int)uVar10 << 3) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)((iVar5 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = CONCAT11(uVar3,uVar4);
    }
    else {
      uVar6 = CONCAT11(uVar4,uVar3);
    }
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar11 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar11 + 1;
    uVar7 = (*pcVar8)(param_1,uVar11 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)
            (local_10 >>
            ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f)
            );
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar9 = (ulong)CONCAT22(CONCAT11(uVar3,uVar4),uVar6);
    }
    else {
      uVar9 = (ulong)CONCAT22(uVar6,CONCAT11(uVar4,uVar3));
    }
    break;
  default:
    log2Console(3,"Bugly-libunwind","unexpected encoding format 0x%x\n");
    uVar7 = 0xfffffff8;
    goto LAB_00119ee0;
  case 9:
    uVar10 = 0;
    uVar9 = 0;
    uVar11 = uVar13;
    while( true ) {
      pcVar8 = *(code **)(param_2 + 0x18);
      *param_3 = uVar11 + 1;
      uVar7 = (*pcVar8)(param_1,uVar11 & 0xfffffffffffffff8,&local_10,0,param_7);
      uVar11 = local_10 >>
               ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) & 0x3f);
      if ((int)uVar7 < 0) break;
      uVar2 = uVar10 & 0x3f;
      uVar10 = uVar10 + 7;
      uVar9 = uVar9 | (uVar11 & 0x7f) << uVar2;
      if (((uint)uVar11 >> 7 & 1) == 0) goto LAB_0011a1d0;
      uVar11 = *param_3;
    }
    goto LAB_00119ee0;
  case 10:
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar13 + 1;
    uVar7 = (*pcVar8)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)
            (local_10 >>
            ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)((iVar5 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar9 = (ulong)CONCAT11(uVar3,uVar4);
    }
    else {
      uVar9 = (ulong)CONCAT11(uVar4,uVar3);
    }
    break;
  case 0xb:
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar13 + 1;
    uVar7 = (*pcVar8)(param_1,uVar13 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)(local_10 >> ((ulong)(uint)((int)uVar10 << 3) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)((iVar5 - (int)(uVar13 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = CONCAT11(uVar3,uVar4);
    }
    else {
      uVar6 = CONCAT11(uVar4,uVar3);
    }
    uVar10 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar10 + 1;
    uVar7 = (*pcVar8)(param_1,uVar10 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar9 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar11 = *param_3;
    pcVar8 = *(code **)(param_2 + 0x18);
    *param_3 = uVar11 + 1;
    uVar7 = (*pcVar8)(param_1,uVar11 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar3 = (undefined1)
            (local_10 >>
            ((ulong)(uint)(((int)uVar11 - (int)(uVar11 & 0xfffffffffffffff8)) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar9 >> ((ulong)(uint)(((int)uVar10 - (int)(uVar10 & 0xfffffffffffffff8)) * 8) & 0x3f)
            );
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar9 = (ulong)CONCAT22(CONCAT11(uVar3,uVar4),uVar6);
    }
    else {
      uVar9 = (ulong)CONCAT22(uVar6,CONCAT11(uVar4,uVar3));
    }
  }
LAB_0011a1d0:
  if (uVar9 == 0) {
LAB_0011a214:
    *param_6 = 0;
    uVar7 = 0;
    goto LAB_00119ee0;
  }
  bVar1 = param_4 & 0x70;
  if (bVar1 == 0x10) {
    uVar9 = uVar9 + uVar13;
  }
  else if (bVar1 < 0x11) {
    if ((param_4 & 0x70) != 0) {
LAB_0011a66c:
      log2Console(3,"Bugly-libunwind","unexpected application type 0x%x\n");
      uVar7 = 0xfffffff8;
      goto LAB_00119ee0;
    }
  }
  else if (bVar1 == 0x30) {
    uVar9 = uVar9 + param_5[4];
  }
  else {
    if (bVar1 != 0x40) goto LAB_0011a66c;
    uVar9 = uVar9 + *param_5;
  }
  if ((char)param_4 < '\0') {
    uVar7 = (**(code **)(param_2 + 0x18))(param_1,uVar9 & 0xfffffffffffffff8,&local_10,0,param_7);
    uVar13 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar10 = uVar9 + 1 & 0xfffffffffffffff8;
    uVar7 = (**(code **)(param_2 + 0x18))(param_1,uVar10,&local_10,0,param_7);
    uVar3 = (undefined1)(local_10 >> ((ulong)(uint)(((int)(uVar9 + 1) - (int)uVar10) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)
            (uVar13 >> ((ulong)(uint)(((int)uVar9 - (int)(uVar9 & 0xfffffffffffffff8)) * 8) & 0x3f))
    ;
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = CONCAT11(uVar3,uVar4);
    }
    else {
      uVar6 = CONCAT11(uVar4,uVar3);
    }
    uVar10 = uVar9 + 2 & 0xfffffffffffffff8;
    uVar7 = (**(code **)(param_2 + 0x18))(param_1,uVar10,&local_10,0,param_7);
    uVar13 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar11 = uVar9 + 3 & 0xfffffffffffffff8;
    uVar7 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_10,0,param_7);
    uVar3 = (undefined1)(local_10 >> ((ulong)(uint)(((int)(uVar9 + 3) - (int)uVar11) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)(uVar13 >> ((ulong)(uint)(((int)(uVar9 + 2) - (int)uVar10) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar12 = CONCAT22(CONCAT11(uVar3,uVar4),uVar6);
    }
    else {
      uVar12 = CONCAT22(uVar6,CONCAT11(uVar4,uVar3));
    }
    uVar10 = uVar9 + 4 & 0xfffffffffffffff8;
    uVar7 = (**(code **)(param_2 + 0x18))(param_1,uVar10,&local_10,0,param_7);
    uVar13 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar11 = uVar9 + 5 & 0xfffffffffffffff8;
    uVar7 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_10,0,param_7);
    uVar3 = (undefined1)(local_10 >> ((ulong)(uint)(((int)(uVar9 + 5) - (int)uVar11) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)(uVar13 >> ((ulong)(uint)(((int)(uVar9 + 4) - (int)uVar10) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar6 = CONCAT11(uVar3,uVar4);
    }
    else {
      uVar6 = CONCAT11(uVar4,uVar3);
    }
    uVar10 = uVar9 + 6 & 0xfffffffffffffff8;
    uVar7 = (**(code **)(param_2 + 0x18))(param_1,uVar10,&local_10,0,param_7);
    uVar13 = local_10;
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar11 = uVar9 + 7 & 0xfffffffffffffff8;
    uVar7 = (**(code **)(param_2 + 0x18))(param_1,uVar11,&local_10,0,param_7);
    uVar3 = (undefined1)(local_10 >> ((ulong)(uint)(((int)(uVar9 + 7) - (int)uVar11) * 8) & 0x3f));
    if ((int)uVar7 < 0) goto LAB_00119ee0;
    uVar4 = (undefined1)(uVar13 >> ((ulong)(uint)(((int)(uVar9 + 6) - (int)uVar10) * 8) & 0x3f));
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar9 = CONCAT44(CONCAT22(CONCAT11(uVar3,uVar4),uVar6),uVar12);
    }
    else {
      uVar9 = CONCAT44(uVar12,CONCAT22(uVar6,CONCAT11(uVar4,uVar3)));
    }
  }
  *param_6 = uVar9;
  uVar7 = 0;
LAB_00119ee0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

