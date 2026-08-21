
undefined8 FUN_010f7670(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  
                    /* catch() { ... } // from try @ 010f763c with catch @ 010f768c */
  lVar9 = *(long *)(param_1 + 0x230);
  uVar13 = **(undefined8 **)(param_1 + 0x28);
  *(undefined8 *)(lVar9 + 0xd0) = (*(undefined8 **)(param_1 + 0x28))[1];
  *(undefined8 *)(lVar9 + 200) = uVar13;
  if ((*(int *)(param_1 + 0x13c) != 0) && (*(int *)(lVar9 + 0x38) == 0)) {
    FUN_010f9ae8(lVar9,*(undefined4 *)(lVar9 + 0x3c));
  }
  iVar4 = *(int *)(param_1 + 0x1a0);
  if (0 < iVar4) {
    lVar10 = 0;
    uVar2 = *(uint *)(param_1 + 0x1d8);
    do {
      if (*(int *)(lVar9 + 0xc0) == 0) {
        iVar3 = *(int *)(lVar9 + 0x20);
        iVar8 = iVar3 + 1;
                    /* catch() { ... } // from try @ 010f7764 with catch @ 010f7710 */
        uVar12 = (ulong)((uint)(int)**(short **)(param_2 + lVar10 * 8) >> (ulong)(uVar2 & 0x1f) & 1)
                 << ((ulong)(0x17 - iVar3) & 0x3f) | *(ulong *)(lVar9 + 0x18);
        if (7 < iVar8) {
          iVar4 = -2 - iVar3;
          if (iVar4 < -0xf) {
            iVar4 = -0x10;
          }
          iVar8 = iVar3 + 9;
          uVar1 = iVar8 + iVar4;
          do {
            puVar5 = *(undefined1 **)(lVar9 + 200);
            *(undefined1 **)(lVar9 + 200) = puVar5 + 1;
            *puVar5 = (char)(uVar12 >> 0x10);
                    /* try { // try from 010f775c to 011f7763 has its CatchHandler @ 010f77d4 */
            lVar6 = *(long *)(lVar9 + 0xd0) + -1;
            *(long *)(lVar9 + 0xd0) = lVar6;
                    /* try { // try from 010f7764 to 011f77ef has its CatchHandler @ 010f7710 */
            if (lVar6 == 0) {
              puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0xd8) + 0x28);
              iVar4 = (*(code *)puVar11[3])();
              if (iVar4 == 0) {
                puVar7 = (undefined8 *)**(long **)(lVar9 + 0xd8);
                *(undefined4 *)(puVar7 + 5) = 0x19;
                (*(code *)*puVar7)();
              }
              uVar13 = *puVar11;
              *(undefined8 *)(lVar9 + 0xd0) = puVar11[1];
              *(undefined8 *)(lVar9 + 200) = uVar13;
            }
            if ((((uint)uVar12 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
              puVar5 = *(undefined1 **)(lVar9 + 200);
              *(undefined1 **)(lVar9 + 200) = puVar5 + 1;
              *puVar5 = 0;
              lVar6 = *(long *)(lVar9 + 0xd0) + -1;
              *(long *)(lVar9 + 0xd0) = lVar6;
              if (lVar6 == 0) {
                puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0xd8) + 0x28);
                iVar4 = (*(code *)puVar11[3])();
                    /* catch() { ... } // from try @ 010f775c with catch @ 010f77d4 */
                if (iVar4 == 0) {
                  puVar7 = (undefined8 *)**(long **)(lVar9 + 0xd8);
                  *(undefined4 *)(puVar7 + 5) = 0x19;
                  (*(code *)*puVar7)();
                }
                uVar13 = *puVar11;
                *(undefined8 *)(lVar9 + 0xd0) = puVar11[1];
                *(undefined8 *)(lVar9 + 200) = uVar13;
              }
            }
            iVar8 = iVar8 + -8;
            uVar12 = uVar12 << 8;
          } while (0xf < iVar8);
          iVar4 = *(int *)(param_1 + 0x1a0);
          iVar8 = (iVar3 + -7) - (uVar1 & 0xfffffff8);
        }
        *(ulong *)(lVar9 + 0x18) = uVar12;
        *(int *)(lVar9 + 0x20) = iVar8;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar4);
  }
  uVar13 = *(undefined8 *)(lVar9 + 200);
  puVar11 = *(undefined8 **)(param_1 + 0x28);
  puVar11[1] = *(undefined8 *)(lVar9 + 0xd0);
  *puVar11 = uVar13;
  iVar4 = *(int *)(param_1 + 0x13c);
  if (iVar4 != 0) {
    iVar8 = *(int *)(lVar9 + 0x38);
    if (*(int *)(lVar9 + 0x38) == 0) {
      *(int *)(lVar9 + 0x38) = iVar4;
      *(uint *)(lVar9 + 0x3c) = *(int *)(lVar9 + 0x3c) + 1U & 7;
      iVar8 = iVar4;
    }
    *(int *)(lVar9 + 0x38) = iVar8 + -1;
  }
  return 1;
}

