
void FUN_0142f394(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,ulong param_8,ulong param_9)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  code *pcVar6;
  int iVar7;
  long in_x10;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x21;
  long lVar12;
  long unaff_x26;
  long local_40;
  long local_38;
  
  iVar7 = (int)unaff_x19;
  lVar11 = unaff_x19;
  if (*(int *)(param_1 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
    *(int *)(param_6 + -0x20) = iVar7 * 2;
    if (((long)*(int *)(param_1 + 0x17) & 0x80000000U) == 0) {
      pcVar6 = (code *)(param_1 + 0x3f);
    }
    else {
      pcVar6 = *(code **)((long)*(int *)(param_1 + 0x27) * 8 + unaff_x26 + 0x2c78);
    }
    uVar10 = (*pcVar6)(param_2,param_9,param_4,param_7);
  }
  else {
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
    lVar8 = 0;
    if (((int)lVar1 != 0) && (*(int *)(lVar1 + 3) != 0)) goto LAB_0143019c;
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
    if (((lVar1 << 0x20) >> 0x21 & 0x30U) != 0) {
      if (((uint)((int)lVar1 >> 1) >> 4 & 1) == 0) {
        uVar9 = unaff_x26 + (ulong)*(uint *)(param_9 + 3);
        if ((uVar9 & 1) == 0) {
          uVar9 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar10 = (ulong)(*(uint *)(param_4 + 3) >> 3);
        while( true ) {
          uVar10 = uVar10 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21) - 1U
          ;
          lVar1 = uVar10 * 3;
          lVar12 = (lVar1 + 5) * 4;
          iVar2 = *(int *)(uVar9 + lVar12 + 7);
          if (iVar2 == (int)param_8) break;
          if (iVar2 == (int)param_4) {
            if ((ulong)((long)((ulong)*(uint *)(uVar9 + 3) << 0x20) >> 0x21) <= lVar1 + 6U) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0,0x142f47c);
              (*pcVar6)();
            }
            uVar10 = unaff_x26 + (ulong)*(uint *)(uVar9 + lVar12 + 0xb);
            if ((*(int *)(uVar9 + lVar12 + 0xf) >> 1 & 1U) == 0) goto LAB_0142f2b8;
            if (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar8 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
              sVar4 = *(short *)(lVar8 + 7);
              if (sVar4 == 0x423) {
                if (*(int *)(uVar10 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))
                goto LAB_0143019c;
                uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
              }
              else if (sVar4 == 0x439) {
                if ((*(int *)(uVar10 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x908)) ||
                   ((((bVar3 = *(byte *)(lVar8 + 9), (bVar3 & 0xc0) != 0xc0 &&
                      (3 < (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_9 + 0xb) + 0x1b) & 0x1f) -
                           0xd)) || ((bVar3 & 1) != 0)) ||
                    (uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 0x1b),
                    (int)uVar10 == (int)*(undefined8 *)(unaff_x26 + 0xa8))))) goto LAB_0143019c;
                if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf);
                }
              }
              else {
                if (((sVar4 != 0x411) ||
                    (*(int *)(uVar10 + 3) != (int)*(undefined8 *)(unaff_x26 + 0x7b8))) ||
                   ((uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb), (uVar10 & 1) == 0 ||
                    (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7)))))
                goto LAB_0143019c;
                uVar10 = (ulong)(uint)(*(int *)(uVar10 + 7) * 2);
              }
              goto LAB_0142f2b8;
            }
            lVar8 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
            lVar1 = unaff_x26 + (ulong)*(uint *)(lVar8 + -1);
            if ((*(byte *)(lVar1 + 9) >> 1 & 1) != 0) {
              *(int *)(param_6 + -0x20) = iVar7 * 2;
              uVar10 = FUN_0133fcc0(0);
              param_6 = local_38;
              lVar11 = local_40;
              unaff_x21 = unaff_x19;
              goto LAB_0142f2b8;
            }
            uVar10 = param_8;
            if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0142f2b8;
            if (*(int *)(lVar8 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
              uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 - 1);
              iVar2 = *(int *)(uVar10 - 1);
              while (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0x13);
                iVar2 = *(int *)(uVar10 - 1);
              }
              if ((uVar10 & 1) == 0) goto LAB_0143019c;
              lVar11 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
              sVar4 = *(short *)(lVar11 + 7);
              if (sVar4 != 0x439) {
                if (sVar4 == 0x417) {
                  uVar10 = unaff_x26 + (ulong)*(uint *)(param_9 + 0xb);
                }
                else {
                  uVar10 = param_9;
                  if ((int)lVar11 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_0143019c;
                }
              }
              uVar5 = *(ushort *)
                       (unaff_x26 +
                        (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) + -1) + 7);
              if (uVar5 < 0x88 || 0x91 < uVar5) goto LAB_0143019c;
              *(int *)(param_6 + -0x20) = iVar7 * 2;
              uVar10 = FUN_01341080(param_2,lVar8,0);
              param_6 = local_38;
              lVar11 = local_40;
              unaff_x21 = unaff_x19;
              goto LAB_0142f2b8;
            }
            goto LAB_0143019c;
          }
          lVar8 = lVar8 + 1;
          uVar10 = uVar10 + lVar8;
        }
      }
      else {
        uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
        if ((int)uVar10 == 3) goto LAB_0143019c;
        uVar10 = uVar10 & 0xfffffffffffffffd;
        lVar8 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(in_x10 + -1) + 0x13);
        if (((int)uVar10 != (int)lVar8) &&
           ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_9 - 1) + 7) != 0xab ||
            (*(int *)(uVar10 + 0x27b) != *(int *)(lVar8 + 0x27b))))) goto LAB_0143019c;
      }
    }
    uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    if ((uVar10 & 1) != 0) {
      if (((int)uVar10 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) || ((int)uVar10 != 3)) {
        FUN_0142f1c8();
        return;
      }
LAB_0143019c:
      *(int *)(param_6 + -0x20) = iVar7 * 2;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f10));
    }
  }
LAB_0142f2b8:
  lVar8 = *(long *)(param_6 + -0x18);
  bVar3 = *(byte *)(lVar8 + lVar11 + 4);
  if (bVar3 == 0x26) {
    *(ulong *)(param_6 + (long)*(char *)(lVar8 + lVar11 + 5) * 8) = uVar10;
    bVar3 = *(byte *)(lVar8 + lVar11 + 6);
  }
                    /* WARNING: Could not recover jumptable at 0x0142f2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)bVar3 * 8))(uVar10);
  return;
}

