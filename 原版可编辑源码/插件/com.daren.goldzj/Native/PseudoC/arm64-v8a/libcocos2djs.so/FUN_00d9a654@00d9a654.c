
void FUN_00d9a654(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  puVar7 = (undefined8 *)param_1[5];
  lVar10 = param_1[0x46];
  puVar12 = (undefined1 *)*puVar7;
  if (*(int *)((long)param_1 + 0x15c) == 0) {
    uVar2 = *(undefined4 *)(lVar10 + 0x34);
    lVar8 = puVar7[1];
    uVar15 = *(ulong *)(lVar10 + 0x18);
    iVar11 = *(int *)(lVar10 + 0x20);
    uVar19 = *(undefined8 *)(lVar10 + 0x2c);
    uVar18 = *(undefined8 *)(lVar10 + 0x24);
    if (iVar11 < 1) {
      uVar15 = 0;
      iVar11 = 0;
    }
    else {
      iVar4 = iVar11 + 0xf;
      uVar16 = 0x7fL << ((ulong)(0x11 - iVar11) & 0x3f) | uVar15;
      do {
        lVar8 = lVar8 + -1;
        puVar13 = puVar12 + 1;
        *puVar12 = (char)(uVar16 >> 0x10);
        if (lVar8 == 0) {
          puVar7 = (undefined8 *)param_1[5];
          iVar5 = (*(code *)puVar7[3])(param_1);
          puVar12 = puVar13;
          if (iVar5 != 0) {
            puVar13 = (undefined1 *)*puVar7;
            lVar8 = puVar7[1];
            goto LAB_00d9a924;
          }
LAB_00d9a99c:
          puVar7 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar7 + 5) = 0x19;
          (*(code *)*puVar7)(param_1);
          lVar8 = 0;
          goto LAB_00d9a9bc;
        }
LAB_00d9a924:
        puVar12 = puVar13;
        if ((((uint)uVar16 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
          lVar8 = lVar8 + -1;
          puVar12 = puVar13 + 1;
          *puVar13 = 0;
          if (lVar8 == 0) {
            puVar7 = (undefined8 *)param_1[5];
            iVar5 = (*(code *)puVar7[3])(param_1);
            if (iVar5 == 0) goto LAB_00d9a99c;
            puVar12 = (undefined1 *)*puVar7;
            lVar8 = puVar7[1];
          }
        }
        iVar4 = iVar4 + -8;
        uVar16 = uVar16 << 8;
      } while (0xf < iVar4);
      uVar15 = 0;
      iVar11 = 0;
    }
LAB_00d9a9bc:
    puVar7 = (undefined8 *)param_1[5];
    *puVar7 = puVar12;
    puVar7[1] = lVar8;
    *(ulong *)(lVar10 + 0x18) = uVar15;
    *(int *)(lVar10 + 0x20) = iVar11;
    *(undefined4 *)(lVar10 + 0x34) = uVar2;
    *(undefined8 *)(lVar10 + 0x2c) = uVar19;
    *(undefined8 *)(lVar10 + 0x24) = uVar18;
  }
  else {
    *(undefined1 **)(lVar10 + 200) = puVar12;
    iVar11 = *(int *)(lVar10 + 0xe4);
    *(undefined8 *)(lVar10 + 0xd0) = puVar7[1];
    if (iVar11 != 0) {
      iVar4 = -1;
      uVar15 = 0xfffffff0;
      do {
        iVar11 = iVar11 >> 1;
        iVar4 = iVar4 + 1;
        uVar1 = (int)uVar15 + 0x10;
        uVar15 = (ulong)uVar1;
      } while (iVar11 != 0);
      if (0xe < iVar4) {
        puVar7 = (undefined8 *)**(long **)(lVar10 + 0xd8);
        *(undefined4 *)(puVar7 + 5) = 0x29;
        (*(code *)*puVar7)();
      }
      lVar8 = lVar10 + (long)*(int *)(lVar10 + 0xe0) * 8;
      if (*(int *)(lVar10 + 0xc0) == 0) {
        lVar8 = *(long *)(lVar8 + 0x60);
        FUN_00d9d2fc(lVar10,*(undefined4 *)(lVar8 + (long)(int)uVar1 * 4),
                     *(undefined1 *)(lVar8 + (int)uVar1 + 0x400));
      }
      else {
        lVar8 = *(long *)(lVar8 + 0xa0);
        uVar15 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3;
        *(long *)(lVar8 + uVar15) = *(long *)(lVar8 + uVar15) + 1;
      }
      if (iVar4 != 0) {
        FUN_00d9d2fc(lVar10,*(undefined4 *)(lVar10 + 0xe4),iVar4);
      }
      iVar11 = *(int *)(lVar10 + 0xe8);
      *(undefined4 *)(lVar10 + 0xe4) = 0;
      if ((iVar11 != 0) && (*(int *)(lVar10 + 0xc0) == 0)) {
        pbVar17 = *(byte **)(lVar10 + 0xf0);
        do {
          iVar5 = *(int *)(lVar10 + 0x20);
          iVar4 = iVar5 + 1;
          uVar15 = ((ulong)*pbVar17 & 1) << ((ulong)(0x17 - iVar5) & 0x3f) |
                   *(ulong *)(lVar10 + 0x18);
          if (7 < iVar4) {
            iVar4 = -2 - iVar5;
            if (iVar4 < -0xf) {
              iVar4 = -0x10;
            }
            iVar14 = iVar5 + 9;
            uVar1 = iVar14 + iVar4;
            do {
              puVar12 = *(undefined1 **)(lVar10 + 200);
              *(undefined1 **)(lVar10 + 200) = puVar12 + 1;
              *puVar12 = (char)(uVar15 >> 0x10);
              lVar8 = *(long *)(lVar10 + 0xd0) + -1;
              *(long *)(lVar10 + 0xd0) = lVar8;
              if (lVar8 == 0) {
                puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0xd8) + 0x28);
                iVar4 = (*(code *)puVar7[3])();
                if (iVar4 == 0) {
                  puVar9 = (undefined8 *)**(long **)(lVar10 + 0xd8);
                  *(undefined4 *)(puVar9 + 5) = 0x19;
                  (*(code *)*puVar9)();
                }
                uVar18 = *puVar7;
                *(undefined8 *)(lVar10 + 0xd0) = puVar7[1];
                *(undefined8 *)(lVar10 + 200) = uVar18;
              }
              if ((((uint)uVar15 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
                puVar12 = *(undefined1 **)(lVar10 + 200);
                *(undefined1 **)(lVar10 + 200) = puVar12 + 1;
                *puVar12 = 0;
                lVar8 = *(long *)(lVar10 + 0xd0) + -1;
                *(long *)(lVar10 + 0xd0) = lVar8;
                if (lVar8 == 0) {
                  puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0xd8) + 0x28);
                  iVar4 = (*(code *)puVar7[3])();
                  if (iVar4 == 0) {
                    puVar9 = (undefined8 *)**(long **)(lVar10 + 0xd8);
                    *(undefined4 *)(puVar9 + 5) = 0x19;
                    (*(code *)*puVar9)();
                  }
                  uVar18 = *puVar7;
                  *(undefined8 *)(lVar10 + 0xd0) = puVar7[1];
                  *(undefined8 *)(lVar10 + 200) = uVar18;
                }
              }
              iVar14 = iVar14 + -8;
              uVar15 = uVar15 << 8;
            } while (0xf < iVar14);
            iVar4 = (iVar5 + -7) - (uVar1 & 0xfffffff8);
          }
          *(ulong *)(lVar10 + 0x18) = uVar15;
          *(int *)(lVar10 + 0x20) = iVar4;
          do {
            iVar11 = iVar11 + -1;
            if (iVar11 == 0) goto LAB_00d9a894;
            pbVar17 = pbVar17 + 1;
          } while (*(int *)(lVar10 + 0xc0) != 0);
        } while( true );
      }
LAB_00d9a894:
      *(undefined4 *)(lVar10 + 0xe8) = 0;
    }
    FUN_00d9d4c0(lVar10);
    puVar7 = (undefined8 *)param_1[5];
    uVar18 = *(undefined8 *)(lVar10 + 200);
    puVar7[1] = *(undefined8 *)(lVar10 + 0xd0);
    *puVar7 = uVar18;
  }
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

