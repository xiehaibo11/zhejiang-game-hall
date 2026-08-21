
undefined8 FUN_00d7bd3c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined2 uVar17;
  int iVar18;
  int iVar19;
  
  puVar14 = (undefined8 *)*param_1;
  uVar13 = *(uint *)((long)puVar14 + 0x14);
  uVar9 = *(undefined8 *)*puVar14;
  if ((uVar13 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_error(uVar9,"png_write_image: internal call error");
  }
  iVar18 = *(int *)(puVar14 + 2);
  uVar7 = uVar13 & 2 | 1;
  uVar15 = (ulong)uVar7;
  uVar4 = param_1[7];
  if ((uVar13 & 0x20) != 0) {
    uVar15 = 0xffffffffffffffff;
    uVar4 = param_1[7] + 2;
  }
  if (iVar18 != 0) {
    iVar1 = uVar7 + 1;
    iVar19 = iVar18 + -1;
    uVar7 = *(int *)((long)puVar14 + 0xc) * iVar1;
    if (uVar7 == 0) {
      png_write_row(uVar9);
      if (iVar19 != 0) {
        iVar18 = 1 - iVar18;
        do {
          png_write_row(uVar9,param_1[7]);
          iVar18 = iVar18 + 1;
        } while (iVar18 != 0);
      }
    }
    else {
      lVar16 = param_1[5];
      lVar2 = (ulong)(uVar13 & 2) * 2 + 4;
      uVar8 = uVar4;
      lVar10 = lVar16;
      if ((uVar13 & 0x20) != 0) {
        lVar10 = lVar16 + 2;
        lVar16 = lVar16 + 2;
      }
      do {
        do {
          uVar5 = *(ushort *)(lVar10 + uVar15 * 2);
          *(ushort *)(uVar8 + uVar15 * 2) = uVar5;
          if (uVar5 == 0) {
            uVar13 = 0;
LAB_00d7be38:
            lVar12 = 0;
            iVar18 = iVar1;
            do {
              uVar6 = *(ushort *)(lVar10 + lVar12);
              if (uVar6 < uVar5) {
                uVar17 = 0;
                if (uVar6 != 0) {
                  uVar17 = (undefined2)(uVar13 * uVar6 + 0x4000 >> 0xf);
                }
              }
              else {
                uVar17 = 0xffff;
              }
              iVar18 = iVar18 + -1;
              *(undefined2 *)(uVar8 + lVar12) = uVar17;
              lVar12 = lVar12 + 2;
            } while (1 < iVar18);
          }
          else {
            uVar11 = (uint)uVar5;
            if (uVar11 != 0xffff) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = (uVar5 >> 1 | 0x7fff8000) / uVar11;
              }
              goto LAB_00d7be38;
            }
            lVar12 = 0;
            iVar18 = iVar1;
            do {
              iVar18 = iVar18 + -1;
              *(undefined2 *)(uVar8 + lVar12) = *(undefined2 *)(lVar10 + lVar12);
              lVar12 = lVar12 + 2;
            } while (1 < iVar18);
          }
          uVar8 = uVar8 + lVar2;
          lVar10 = lVar10 + lVar2;
        } while (uVar8 < uVar4 + (ulong)uVar7 * 2);
        png_write_row(uVar9,param_1[7]);
        lVar10 = lVar16 + (param_1[6] & 0xfffffffffffffffe);
        bVar3 = iVar19 != 0;
        uVar8 = uVar4;
        lVar16 = lVar10;
        iVar19 = iVar19 + -1;
      } while (bVar3);
    }
  }
  return 1;
}

