
void FUN_0145d538(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,ulong param_8,ulong param_9)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  long in_x10;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x19;
  long unaff_x21;
  long lVar12;
  long unaff_x26;
  long local_40;
  long local_38;
  
  iVar6 = (int)unaff_x19;
  lVar8 = param_6;
  if (*(int *)(param_1 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
    *(int *)(param_6 + -0x20) = (iVar6 + -1) * 2;
    if (((long)*(int *)(param_1 + 0x17) & 0x80000000U) == 0) {
      pcVar7 = (code *)(param_1 + 0x3f);
    }
    else {
      pcVar7 = *(code **)((long)*(int *)(param_1 + 0x27) * 8 + unaff_x26 + 0x2c78);
    }
    uVar11 = (*pcVar7)(param_2,param_9,param_4,param_7);
  }
  else {
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
    lVar9 = 0;
    if (((int)lVar1 != 0) && (*(int *)(lVar1 + 3) != 0)) goto LAB_0145e378;
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
    if (((lVar1 << 0x20) >> 0x21 & 0x30U) != 0) {
      if (((uint)((int)lVar1 >> 1) >> 4 & 1) == 0) {
        uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 3);
        if ((uVar10 & 1) == 0) {
          uVar10 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar11 = (ulong)(*(uint *)(param_4 + 3) >> 3);
        while( true ) {
          uVar11 = uVar11 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar1 = uVar11 * 3;
          lVar12 = (lVar1 + 5) * 4;
          iVar2 = *(int *)(uVar10 + lVar12 + 7);
          if (iVar2 == (int)param_8) break;
          if (iVar2 == (int)param_4) {
            if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= lVar1 + 6U) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(0,0x145d620);
              (*pcVar7)();
            }
            uVar11 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar12 + 0xb);
            if ((*(int *)(uVar10 + lVar12 + 0xf) >> 1 & 1U) == 0) goto LAB_0145d478;
            if (*(int *)(uVar11 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar9 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
              sVar4 = *(short *)(lVar9 + 7);
              if (sVar4 == 0x423) {
                if (*(int *)(uVar11 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
                goto LAB_0145e378;
                uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
              }
              else if (sVar4 == 0x439) {
                if ((*(int *)(uVar11 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
                   ((((bVar3 = *(byte *)(lVar9 + 9), (bVar3 & 0xc0) != 0xc0 &&
                      (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 + 0xb) + 0x1b) & 0x1f) -
                           0xd)) || ((bVar3 & 1) != 0)) ||
                    (uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 + 0x1b),
                    (int)uVar11 == (int)*(undefined8 *)(unaff_x26 + 0xa8))))) goto LAB_0145e378;
                if (*(int *)(uVar11 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf);
                }
              }
              else {
                if (((sVar4 != 0x411) ||
                    (*(int *)(uVar11 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
                   ((uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb), (uVar11 & 1) == 0 ||
                    (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar11 - 1) + 7)))))
                goto LAB_0145e378;
                uVar11 = (ulong)(uint)(*(int *)(uVar11 + 7) * 2);
              }
              goto LAB_0145d478;
            }
            lVar9 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
            lVar1 = unaff_x26 + (ulong)*(uint *)(lVar9 + -1);
            if ((*(byte *)(lVar1 + 9) >> 1 & 1) != 0) {
              *(int *)(param_6 + -0x20) = (iVar6 + -1) * 2;
              uVar11 = FUN_0133fcc0(0);
              lVar8 = local_40;
              unaff_x19 = local_38;
              unaff_x21 = param_6;
              goto LAB_0145d478;
            }
            uVar11 = param_8;
            if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0145d478;
            if (*(int *)(lVar9 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
              uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
              iVar2 = *(int *)(uVar11 - 1);
              while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 0x13);
                iVar2 = *(int *)(uVar11 - 1);
              }
              if ((uVar11 & 1) == 0) goto LAB_0145e378;
              lVar8 = unaff_x26 + (ulong)*(uint *)(uVar11 - 1);
              sVar4 = *(short *)(lVar8 + 7);
              if (sVar4 != 0x439) {
                if (sVar4 == 0x417) {
                  uVar11 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
                }
                else {
                  uVar11 = param_9;
                  if ((int)lVar8 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0145e378;
                }
              }
              uVar5 = *(ushort *)
                       (unaff_x26 +
                        (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar11 + 0xf) + -1) + 7);
              if (uVar5 < 0x88 || 0x91 < uVar5) goto LAB_0145e378;
              *(int *)(param_6 + -0x20) = (iVar6 + -1) * 2;
              uVar11 = FUN_01341080(param_2,lVar9,0);
              lVar8 = local_40;
              unaff_x19 = local_38;
              unaff_x21 = param_6;
              goto LAB_0145d478;
            }
            goto LAB_0145e378;
          }
          lVar9 = lVar9 + 1;
          uVar11 = uVar11 + lVar9;
        }
      }
      else {
        uVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
        if ((int)uVar11 == 3) goto LAB_0145e378;
        uVar11 = uVar11 & 0xfffffffffffffffd;
        lVar9 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(in_x10 + -1) + 0x13);
        if (((int)uVar11 != (int)lVar9) &&
           ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_9 - 1) + 7) != 0xab ||
            (*(int *)(uVar11 + 0x27b) != *(int *)(lVar9 + 0x27b))))) goto LAB_0145e378;
      }
    }
    uVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    if ((uVar11 & 1) != 0) {
      if (((int)uVar11 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) || ((int)uVar11 != 3)) {
        FUN_0145d388();
        return;
      }
LAB_0145e378:
      *(int *)(param_6 + -0x20) = (iVar6 + -1) * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f10));
    }
  }
LAB_0145d478:
                    /* WARNING: Could not recover jumptable at 0x0145d494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(lVar8 + -0x18) + unaff_x19 + 0xd) * 8))
            (uVar11);
  return;
}

