
void FUN_014396a0(ulong param_1)

{
  long lVar1;
  byte bVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  int extraout_w8;
  ulong uVar9;
  ulong extraout_x9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = (int)unaff_x19 * 2;
  iVar8 = (int)*(char *)(unaff_x20 + unaff_x19 + 2);
  uVar9 = (ulong)*(byte *)(unaff_x20 + unaff_x19 + 3);
  uVar6 = *(undefined8 *)(unaff_x29 + (long)*(char *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar7 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(uVar7 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    uVar7 = *(ulong *)(unaff_x26 + 0xa0);
  }
  lVar11 = *(long *)(unaff_x29 + -8);
  uVar4 = *(undefined8 *)(unaff_x26 + 0xa0);
  lVar5 = unaff_x29;
  if ((int)uVar7 == (int)uVar4) goto LAB_01439754;
  lVar10 = (ulong)*(byte *)(unaff_x20 + unaff_x19 + 4) * 4;
  lVar1 = lVar10 + 0x23;
  lVar10 = lVar10 + 0x1f;
  *(int *)(uVar7 + lVar1) = (int)unaff_x26 + *(int *)(uVar7 + lVar1) + 4;
  uVar12 = (int)unaff_x26 + *(int *)(uVar7 + lVar10);
  if (((uVar12 & 0xfffffffd) == (uint)param_1) ||
     (uVar14 = (uint)*(undefined8 *)(unaff_x26 + 0xb88), uVar12 == uVar14)) goto LAB_01439754;
  if ((uVar12 & 3) == 3) {
    if (uVar12 == 3) goto LAB_014397f4;
  }
  else if (uVar12 == (uint)*(undefined8 *)(unaff_x26 + 0xc08)) {
LAB_014397f4:
    uVar13 = param_1;
    if ((param_1 & 1) != 0) {
      while (sVar3 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7), sVar3 == 0x438) {
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
      }
      if ((sVar3 == 0x439) &&
         (*(int *)(unaff_x26 + (ulong)*(uint *)(lVar11 + -1) + 0x13) ==
          *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) +
                  0x13))) {
        *(int *)(uVar7 + lVar10) = (int)(param_1 | 3);
        if ((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
           ((((param_1 | 3) & 1) != 0 &&
            (((uint)*(undefined8 *)
                     ((unaff_x26 + (param_1 & 0xffffffff | 3) & 0xfffffffffffc0000) + 8) >> 1 & 1)
             != 0)))) {
          FUN_0133eb00(uVar7,uVar7 + lVar10,0,2);
          uVar9 = extraout_x9;
          iVar8 = extraout_w8;
        }
        *(undefined4 *)(uVar7 + 0x17) = 0;
        goto LAB_01439754;
      }
    }
  }
  *(uint *)(uVar7 + lVar10) = uVar14;
  *(undefined4 *)(uVar7 + 0x17) = 0;
LAB_01439754:
  uVar6 = FUN_01347660(uVar9,uVar6,uVar4,param_1,lVar5 + (long)iVar8 * 8);
  lVar11 = *(long *)(unaff_x29 + -0x18);
  lVar5 = (long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21;
  bVar2 = *(byte *)(lVar11 + lVar5 + 5);
  if (bVar2 == 0x26) {
    *(undefined8 *)(unaff_x29 + (long)*(char *)(lVar11 + lVar5 + 6) * 8) = uVar6;
    bVar2 = *(byte *)(lVar11 + lVar5 + 7);
  }
                    /* WARNING: Could not recover jumptable at 0x014397c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) + (ulong)bVar2 * 8))();
  return;
}

