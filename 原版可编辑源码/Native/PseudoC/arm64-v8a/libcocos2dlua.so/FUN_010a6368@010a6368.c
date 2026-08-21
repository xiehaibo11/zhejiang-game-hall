
void FUN_010a6368(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  long lVar18;
  ushort uVar19;
  
  puVar7 = *(ushort **)(param_1 + 0x30);
  iVar4 = *(int *)(param_1 + 0x2c);
  puVar14 = *(undefined8 **)(param_1 + 0x40);
  iVar5 = *(int *)(param_1 + 0x3c);
  puVar13 = puVar7 + (long)iVar4 * 0x28;
  if (param_2 == 0) {
    if (0 < iVar4) {
      puVar15 = puVar13;
      if (puVar13 <= puVar7 + 0x28) {
        puVar15 = puVar7 + 0x28;
      }
      uVar1 = ((long)puVar15 + ~(ulong)puVar7) / 0x50 + 1;
      puVar15 = puVar7;
      if ((1 < uVar1) && (uVar10 = uVar1 & 0x7fffffffffffffe, uVar10 != 0)) {
        puVar15 = puVar7 + uVar10 * 0x28;
        puVar17 = puVar7 + 0x2c;
        uVar12 = uVar10;
        do {
          uVar12 = uVar12 - 2;
          *(undefined8 *)(puVar17 + -0x14) = *(undefined8 *)(puVar17 + -0x1c);
          *(undefined8 *)(puVar17 + -0x10) = *(undefined8 *)(puVar17 + -0x28);
          *(undefined8 *)(puVar17 + 0x14) = *(undefined8 *)(puVar17 + 0xc);
          *(undefined8 *)(puVar17 + 0x18) = *(undefined8 *)puVar17;
          puVar17 = puVar17 + 0x50;
        } while (uVar12 != 0);
        if (uVar1 == uVar10) goto LAB_010a64f8;
      }
      do {
        *(undefined8 *)(puVar15 + 0x18) = *(undefined8 *)(puVar15 + 0x10);
        *(undefined8 *)(puVar15 + 0x1c) = *(undefined8 *)(puVar15 + 4);
        puVar15 = puVar15 + 0x28;
      } while (puVar15 < puVar13);
    }
LAB_010a64f8:
    uVar19 = 4;
    goto joined_r0x010a6500;
  }
  if (0 < iVar4) {
    puVar15 = puVar13;
    if (puVar13 <= puVar7 + 0x28) {
      puVar15 = puVar7 + 0x28;
    }
    uVar1 = ((long)puVar15 + ~(ulong)puVar7) / 0x50 + 1;
    puVar15 = puVar7;
    if ((1 < uVar1) && (uVar10 = uVar1 & 0x7fffffffffffffe, uVar10 != 0)) {
      puVar15 = puVar7 + uVar10 * 0x28;
      puVar17 = puVar7 + 0x44;
      uVar12 = uVar10;
      do {
        uVar12 = uVar12 - 2;
        *(undefined8 *)(puVar17 + -0x2c) = *(undefined8 *)(puVar17 + -0x30);
        *(undefined8 *)(puVar17 + -0x28) = *(undefined8 *)(puVar17 + -0x3c);
        *(undefined8 *)(puVar17 + -4) = *(undefined8 *)(puVar17 + -8);
        *(undefined8 *)puVar17 = *(undefined8 *)(puVar17 + -0x14);
        puVar17 = puVar17 + 0x50;
      } while (uVar12 != 0);
      if (uVar1 == uVar10) goto LAB_010a6450;
    }
    do {
      *(undefined8 *)(puVar15 + 0x18) = *(undefined8 *)(puVar15 + 0x14);
      *(undefined8 *)(puVar15 + 0x1c) = *(undefined8 *)(puVar15 + 8);
      puVar15 = puVar15 + 0x28;
    } while (puVar15 < puVar13);
  }
LAB_010a6450:
  uVar19 = 8;
joined_r0x010a6500:
  if (0 < iVar5) {
    puVar2 = puVar14 + iVar5;
    do {
      puVar17 = (ushort *)*puVar14;
      puVar15 = *(ushort **)(puVar17 + 0x24);
      if (puVar17 <= puVar15) {
        lVar18 = 0;
LAB_010a6520:
        if ((uVar19 & *(ushort *)((long)puVar17 + lVar18)) == 0) goto code_r0x010a652c;
        puVar3 = (ushort *)((long)puVar17 + lVar18);
        puVar16 = puVar3;
        if (puVar3 < puVar15) goto LAB_010a657c;
LAB_010a6550:
        bVar8 = false;
        puVar11 = puVar16;
        while (puVar6 = puVar11, puVar11 = puVar6 + 0x28, puVar11 <= puVar15) {
          if ((uVar19 & *puVar11) != 0) {
            FUN_010a6a24(puVar16 + 0x28,puVar6,puVar16,puVar11);
            puVar16 = puVar11;
            while( true ) {
              if (puVar15 <= puVar16) goto LAB_010a6550;
LAB_010a657c:
              if ((uVar19 & puVar16[0x28]) == 0) break;
              puVar16 = puVar16 + 0x28;
            }
            bVar8 = true;
            puVar11 = puVar16;
          }
        }
        if ((long)puVar17 + (lVar18 - (long)puVar16) == 0) {
          lVar9 = *(long *)((long)puVar17 + lVar18 + 0x30) -
                  *(long *)((long)puVar17 + lVar18 + 0x38);
          if (lVar9 != 0) {
            if (puVar17 < puVar3) {
              uVar1 = (lVar18 - 1U) / 0x50 + 1;
              puVar16 = puVar17;
              if ((1 < uVar1) && (uVar10 = uVar1 & 0x7fffffffffffffe, uVar10 != 0)) {
                puVar16 = puVar17 + uVar10 * 0x28;
                puVar11 = puVar17 + 0x44;
                uVar12 = uVar10;
                do {
                  uVar12 = uVar12 - 2;
                  *(long *)(puVar11 + -0x2c) = *(long *)(puVar11 + -0x28) + lVar9;
                  *(long *)(puVar11 + -4) = *(long *)puVar11 + lVar9;
                  puVar11 = puVar11 + 0x50;
                } while (uVar12 != 0);
                if (uVar1 == uVar10) goto LAB_010a669c;
              }
              do {
                *(long *)(puVar16 + 0x18) = *(long *)(puVar16 + 0x1c) + lVar9;
                puVar16 = puVar16 + 0x28;
              } while (puVar16 < puVar3);
            }
LAB_010a669c:
            puVar17 = (ushort *)((long)puVar17 + lVar18);
            while (puVar17 + 0x28 <= puVar15) {
              *(long *)(puVar17 + 0x40) = *(long *)(puVar17 + 0x44) + lVar9;
              puVar17 = puVar17 + 0x28;
            }
          }
        }
        else {
          if (bVar8) {
            FUN_010a6a24(puVar16 + 0x28,puVar15,puVar16,puVar3);
          }
          if (puVar7 < puVar3) {
            FUN_010a6a24(puVar17,(long)puVar17 + lVar18 + -0x50,puVar16);
          }
        }
      }
LAB_010a66bc:
      puVar14 = puVar14 + 1;
    } while (puVar14 < puVar2);
  }
  if (param_2 == 0) {
    if (0 < iVar4) {
      puVar15 = puVar13;
      if (puVar13 <= puVar7 + 0x28) {
        puVar15 = puVar7 + 0x28;
      }
      uVar1 = ((long)puVar15 + ~(ulong)puVar7) / 0x50 + 1;
      puVar15 = puVar7;
      if ((1 < uVar1) && (uVar10 = uVar1 & 0x7fffffffffffffe, uVar10 != 0)) {
        puVar15 = puVar7 + uVar10 * 0x28;
        puVar7 = puVar7 + 0x40;
        uVar12 = uVar10;
        do {
          uVar12 = uVar12 - 2;
          *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x28);
          *(undefined8 *)(puVar7 + -8) = *(undefined8 *)puVar7;
          puVar7 = puVar7 + 0x50;
        } while (uVar12 != 0);
        if (uVar1 == uVar10) {
          return;
        }
      }
      do {
        *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)(puVar15 + 0x18);
        puVar15 = puVar15 + 0x28;
      } while (puVar15 < puVar13);
    }
  }
  else if (0 < iVar4) {
    puVar15 = puVar13;
    if (puVar13 <= puVar7 + 0x28) {
      puVar15 = puVar7 + 0x28;
    }
    uVar1 = ((long)puVar15 + ~(ulong)puVar7) / 0x50 + 1;
    puVar15 = puVar7;
    if ((1 < uVar1) && (uVar10 = uVar1 & 0x7fffffffffffffe, uVar10 != 0)) {
      puVar15 = puVar7 + uVar10 * 0x28;
      puVar7 = puVar7 + 0x40;
      uVar12 = uVar10;
      do {
        uVar12 = uVar12 - 2;
        *(undefined8 *)(puVar7 + -0x2c) = *(undefined8 *)(puVar7 + -0x28);
        *(undefined8 *)(puVar7 + -4) = *(undefined8 *)puVar7;
        puVar7 = puVar7 + 0x50;
      } while (uVar12 != 0);
      if (uVar1 == uVar10) {
        return;
      }
    }
    do {
      *(undefined8 *)(puVar15 + 0x14) = *(undefined8 *)(puVar15 + 0x18);
      puVar15 = puVar15 + 0x28;
    } while (puVar15 < puVar13);
  }
  return;
code_r0x010a652c:
  lVar18 = lVar18 + 0x50;
  if (puVar15 < (ushort *)((long)puVar17 + lVar18)) goto LAB_010a66bc;
  goto LAB_010a6520;
}

