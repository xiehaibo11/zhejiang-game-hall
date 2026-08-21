
void FUN_00c154e0(void)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x17;
  long unaff_x19;
  long unaff_x21;
  undefined4 *puVar7;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x25;
  long unaff_x27;
  long unaff_x28;
  double dVar8;
  double dVar9;
  
  uVar4 = *(ulong *)(unaff_x19 + unaff_x27 * 8);
  uVar6 = *(ulong *)(unaff_x19 + unaff_x28 * 8);
  puVar1 = (undefined4 *)(unaff_x21 + 4);
  uVar5 = uVar4 >> 0x20;
  puVar7 = puVar1 + ((ulong)*(ushort *)(unaff_x21 + 2) - 0x8000);
  if (unaff_x25 == uVar5) {
    iVar3 = (int)uVar4;
    if (unaff_x25 == uVar6 >> 0x20) {
      if ((int)uVar6 <= iVar3) {
        puVar7 = puVar1;
      }
      goto LAB_00c15510;
    }
    dVar9 = *(double *)(unaff_x19 + unaff_x28 * 8);
    if (unaff_x25 < uVar6 >> 0x20) goto LAB_00c178d4;
    dVar8 = (double)iVar3;
  }
  else {
    dVar8 = *(double *)(unaff_x19 + unaff_x27 * 8);
    if (unaff_x25 < uVar5) {
LAB_00c178d4:
      *(long *)(unaff_x23 + 0x20) = unaff_x19;
      uVar5 = FUN_00c1db68();
      if (uVar5 < 2) {
        if (uVar5 != 0) {
          puVar1 = puVar1 + ((ulong)*(ushort *)(unaff_x21 + 2) - 0x8000);
        }
                    /* WARNING: Could not recover jumptable at 0x00c17924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + (ulong)(byte)*puVar1 * 8 + 0x2a0))();
        return;
      }
      *(long *)(uVar5 - 0x18) = unaff_x21;
      lVar2 = (uVar5 - unaff_x19) + 2;
      uVar4 = *(ulong *)(uVar5 - 0x10);
      if ((long)uVar4 >> 0x2f == -9) {
        *(long *)(uVar5 - 8) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00c17680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + (ulong)(byte)**(undefined4 **)((uVar4 & 0x7fffffffffff) + 0x20) * 8
                    + 0x2a0))();
        return;
      }
      *(undefined8 *)(unaff_x23 + 0x20) = extraout_x17;
      FUN_00c1dec8();
      uVar4 = *(ulong *)(uVar5 - 0x10);
      *(long *)(uVar5 - 8) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00c17a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + (ulong)(byte)**(undefined4 **)((uVar4 & 0x7fffffffffff) + 0x20) * 8 +
                  0x2a0))();
      return;
    }
    dVar9 = *(double *)(unaff_x19 + unaff_x28 * 8);
    if (unaff_x25 <= uVar6 >> 0x20) {
      if (unaff_x25 != uVar6 >> 0x20) goto LAB_00c178d4;
      dVar9 = (double)(int)uVar6;
    }
  }
  if (dVar9 <= dVar8) {
    puVar7 = puVar1;
  }
LAB_00c15510:
                    /* WARNING: Could not recover jumptable at 0x00c15524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + (ulong)(byte)*puVar7 * 8 + 0x2a0))();
  return;
}

