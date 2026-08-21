
void FUN_00d9a318(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = *(long *)(param_1 + 0x230);
  if ((*(int *)(param_1 + 0x15c) != 0) && (iVar5 = *(int *)(lVar10 + 0xe4), iVar5 != 0)) {
    iVar3 = -1;
    uVar11 = 0xfffffff0;
    do {
      iVar5 = iVar5 >> 1;
      iVar3 = iVar3 + 1;
      uVar1 = (int)uVar11 + 0x10;
      uVar11 = (ulong)uVar1;
    } while (iVar5 != 0);
    if (0xe < iVar3) {
      puVar6 = (undefined8 *)**(long **)(lVar10 + 0xd8);
      *(undefined4 *)(puVar6 + 5) = 0x29;
      (*(code *)*puVar6)();
    }
    lVar7 = lVar10 + (long)*(int *)(lVar10 + 0xe0) * 8;
    if (*(int *)(lVar10 + 0xc0) == 0) {
      lVar7 = *(long *)(lVar7 + 0x60);
      FUN_00d9d2fc(lVar10,*(undefined4 *)(lVar7 + (long)(int)uVar1 * 4),
                   *(undefined1 *)(lVar7 + (int)uVar1 + 0x400));
    }
    else {
      lVar7 = *(long *)(lVar7 + 0xa0);
      uVar11 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
      *(long *)(lVar7 + uVar11) = *(long *)(lVar7 + uVar11) + 1;
    }
    if (iVar3 != 0) {
      FUN_00d9d2fc(lVar10,*(undefined4 *)(lVar10 + 0xe4),iVar3);
    }
    iVar5 = *(int *)(lVar10 + 0xe8);
    *(undefined4 *)(lVar10 + 0xe4) = 0;
    if ((iVar5 != 0) && (*(int *)(lVar10 + 0xc0) == 0)) {
      pbVar12 = *(byte **)(lVar10 + 0xf0);
      do {
        iVar2 = *(int *)(lVar10 + 0x20);
        iVar3 = iVar2 + 1;
        uVar11 = ((ulong)*pbVar12 & 1) << ((ulong)(0x17 - iVar2) & 0x3f) | *(ulong *)(lVar10 + 0x18)
        ;
        if (7 < iVar3) {
          iVar3 = -2 - iVar2;
          if (iVar3 < -0xf) {
            iVar3 = -0x10;
          }
          iVar13 = iVar2 + 9;
          uVar1 = iVar13 + iVar3;
          do {
            puVar8 = *(undefined1 **)(lVar10 + 200);
            *(undefined1 **)(lVar10 + 200) = puVar8 + 1;
            *puVar8 = (char)(uVar11 >> 0x10);
            lVar7 = *(long *)(lVar10 + 0xd0) + -1;
            *(long *)(lVar10 + 0xd0) = lVar7;
            if (lVar7 == 0) {
              puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0xd8) + 0x28);
              iVar3 = (*(code *)puVar6[3])();
              if (iVar3 == 0) {
                puVar9 = (undefined8 *)**(long **)(lVar10 + 0xd8);
                *(undefined4 *)(puVar9 + 5) = 0x19;
                (*(code *)*puVar9)();
              }
              uVar17 = *puVar6;
              *(undefined8 *)(lVar10 + 0xd0) = puVar6[1];
              *(undefined8 *)(lVar10 + 200) = uVar17;
            }
            if ((((uint)uVar11 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
              puVar8 = *(undefined1 **)(lVar10 + 200);
              *(undefined1 **)(lVar10 + 200) = puVar8 + 1;
              *puVar8 = 0;
              lVar7 = *(long *)(lVar10 + 0xd0) + -1;
              *(long *)(lVar10 + 0xd0) = lVar7;
              if (lVar7 == 0) {
                puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0xd8) + 0x28);
                iVar3 = (*(code *)puVar6[3])();
                if (iVar3 == 0) {
                  puVar9 = (undefined8 *)**(long **)(lVar10 + 0xd8);
                  *(undefined4 *)(puVar9 + 5) = 0x19;
                  (*(code *)*puVar9)();
                }
                uVar17 = *puVar6;
                *(undefined8 *)(lVar10 + 0xd0) = puVar6[1];
                *(undefined8 *)(lVar10 + 200) = uVar17;
              }
            }
            iVar13 = iVar13 + -8;
            uVar11 = uVar11 << 8;
          } while (0xf < iVar13);
          iVar3 = (iVar2 + -7) - (uVar1 & 0xfffffff8);
        }
        *(ulong *)(lVar10 + 0x18) = uVar11;
        *(int *)(lVar10 + 0x20) = iVar3;
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 == 0) goto LAB_00d9a534;
          pbVar12 = pbVar12 + 1;
        } while (*(int *)(lVar10 + 0xc0) != 0);
      } while( true );
    }
LAB_00d9a534:
    *(undefined4 *)(lVar10 + 0xe8) = 0;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (0 < *(int *)(param_1 + 0x174)) {
    lVar7 = 0x2f;
    do {
      lVar14 = *(long *)(param_1 + lVar7 * 8);
      if (((*(int *)(param_1 + 0x1cc) == 0) && (*(int *)(param_1 + 0x1d4) == 0)) &&
         (lVar15 = (long)*(int *)(lVar14 + 0x14), *(int *)((long)&uStack_70 + lVar15 * 4) == 0)) {
        plVar16 = (long *)(param_1 + lVar15 * 8 + 0xa0);
        lVar4 = *plVar16;
        if (lVar4 == 0) {
          lVar4 = jpeg_alloc_huff_table(param_1);
          *plVar16 = lVar4;
        }
        FUN_00d9d028(param_1,lVar4,*(undefined8 *)(lVar10 + lVar15 * 8 + 0x80));
        *(undefined4 *)((long)&uStack_70 + lVar15 * 4) = 1;
        iVar5 = *(int *)(param_1 + 0x1d0);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x1d0);
      }
      if ((iVar5 != 0) &&
         (lVar14 = (long)*(int *)(lVar14 + 0x18), *(int *)((long)&local_80 + lVar14 * 4) == 0)) {
        plVar16 = (long *)(param_1 + lVar14 * 8 + 0xc0);
        lVar15 = *plVar16;
        if (lVar15 == 0) {
          lVar15 = jpeg_alloc_huff_table(param_1);
          *plVar16 = lVar15;
        }
        FUN_00d9d028(param_1,lVar15,*(undefined8 *)(lVar10 + lVar14 * 8 + 0xa0));
        *(undefined4 *)((long)&local_80 + lVar14 * 4) = 1;
      }
      lVar14 = lVar7 + -0x2e;
      lVar7 = lVar7 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x174));
  }
  return;
}

