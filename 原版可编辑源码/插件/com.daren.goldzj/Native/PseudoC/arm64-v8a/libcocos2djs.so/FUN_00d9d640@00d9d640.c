
void FUN_00d9d640(long param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulong uVar10;
  int *piVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 uVar14;
  
  iVar4 = *(int *)(param_1 + 0xe4);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0xc0);
  }
  else {
    iVar3 = -1;
    uVar10 = 0xfffffff0;
    do {
      iVar4 = iVar4 >> 1;
      iVar3 = iVar3 + 1;
      uVar1 = (int)uVar10 + 0x10;
      uVar10 = (ulong)uVar1;
    } while (iVar4 != 0);
    if (0xe < iVar3) {
      puVar5 = (undefined8 *)**(long **)(param_1 + 0xd8);
      *(undefined4 *)(puVar5 + 5) = 0x29;
      (*(code *)*puVar5)();
    }
    piVar11 = (int *)(param_1 + 0xc0);
    lVar6 = param_1 + (long)*(int *)(param_1 + 0xe0) * 8;
    if (*piVar11 == 0) {
      lVar6 = *(long *)(lVar6 + 0x60);
      FUN_00d9d2fc(param_1,*(undefined4 *)(lVar6 + (long)(int)uVar1 * 4),
                   *(undefined1 *)(lVar6 + (int)uVar1 + 0x400));
    }
    else {
      lVar6 = *(long *)(lVar6 + 0xa0);
      uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
      *(long *)(lVar6 + uVar10) = *(long *)(lVar6 + uVar10) + 1;
    }
    if (iVar3 != 0) {
      FUN_00d9d2fc(param_1,*(undefined4 *)(param_1 + 0xe4),iVar3);
    }
    iVar4 = *(int *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0xe4) = 0;
    if ((iVar4 != 0) && (*(int *)(param_1 + 0xc0) == 0)) {
      pbVar12 = *(byte **)(param_1 + 0xf0);
      do {
        iVar2 = *(int *)(param_1 + 0x20);
        iVar3 = iVar2 + 1;
        uVar10 = ((ulong)*pbVar12 & 1) << ((ulong)(0x17 - iVar2) & 0x3f) |
                 *(ulong *)(param_1 + 0x18);
        if (7 < iVar3) {
          iVar3 = -2 - iVar2;
          if (iVar3 < -0xf) {
            iVar3 = -0x10;
          }
          iVar13 = iVar2 + 9;
          uVar1 = iVar13 + iVar3;
          do {
            puVar7 = *(undefined1 **)(param_1 + 200);
            *(undefined1 **)(param_1 + 200) = puVar7 + 1;
            *puVar7 = (char)(uVar10 >> 0x10);
            lVar6 = *(long *)(param_1 + 0xd0) + -1;
            *(long *)(param_1 + 0xd0) = lVar6;
            if (lVar6 == 0) {
              puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
              iVar3 = (*(code *)puVar5[3])();
              if (iVar3 == 0) {
                puVar8 = (undefined8 *)**(long **)(param_1 + 0xd8);
                *(undefined4 *)(puVar8 + 5) = 0x19;
                (*(code *)*puVar8)();
              }
              uVar14 = *puVar5;
              *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
              *(undefined8 *)(param_1 + 200) = uVar14;
            }
            if ((((uint)uVar10 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
              puVar7 = *(undefined1 **)(param_1 + 200);
              *(undefined1 **)(param_1 + 200) = puVar7 + 1;
              *puVar7 = 0;
              lVar6 = *(long *)(param_1 + 0xd0) + -1;
              *(long *)(param_1 + 0xd0) = lVar6;
              if (lVar6 == 0) {
                puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
                iVar3 = (*(code *)puVar5[3])();
                if (iVar3 == 0) {
                  puVar8 = (undefined8 *)**(long **)(param_1 + 0xd8);
                  *(undefined4 *)(puVar8 + 5) = 0x19;
                  (*(code *)*puVar8)();
                }
                uVar14 = *puVar5;
                *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
                *(undefined8 *)(param_1 + 200) = uVar14;
              }
            }
            iVar13 = iVar13 + -8;
            uVar10 = uVar10 << 8;
          } while (0xf < iVar13);
          iVar3 = (iVar2 + -7) - (uVar1 & 0xfffffff8);
        }
        *(ulong *)(param_1 + 0x18) = uVar10;
        *(int *)(param_1 + 0x20) = iVar3;
        do {
          iVar4 = iVar4 + -1;
          if (iVar4 == 0) goto LAB_00d9d85c;
          pbVar12 = pbVar12 + 1;
        } while (*piVar11 != 0);
      } while( true );
    }
LAB_00d9d85c:
    *(undefined4 *)(param_1 + 0xe8) = 0;
    iVar4 = *piVar11;
  }
  if (iVar4 == 0) {
    FUN_00d9d4c0(param_1);
    puVar7 = *(undefined1 **)(param_1 + 200);
    *(undefined1 **)(param_1 + 200) = puVar7 + 1;
    *puVar7 = 0xff;
    lVar6 = *(long *)(param_1 + 0xd0) + -1;
    *(long *)(param_1 + 0xd0) = lVar6;
    if (lVar6 == 0) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
      iVar4 = (*(code *)puVar5[3])();
      if (iVar4 == 0) {
        puVar8 = (undefined8 *)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(puVar8 + 5) = 0x19;
        (*(code *)*puVar8)();
      }
      pcVar9 = (char *)*puVar5;
      *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
      *(char **)(param_1 + 200) = pcVar9;
    }
    else {
      pcVar9 = *(char **)(param_1 + 200);
    }
    *(char **)(param_1 + 200) = pcVar9 + 1;
    *pcVar9 = param_2 + -0x30;
    lVar6 = *(long *)(param_1 + 0xd0) + -1;
    *(long *)(param_1 + 0xd0) = lVar6;
    if (lVar6 == 0) {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
      iVar4 = (*(code *)puVar5[3])();
      if (iVar4 == 0) {
        puVar8 = (undefined8 *)**(long **)(param_1 + 0xd8);
        *(undefined4 *)(puVar8 + 5) = 0x19;
        (*(code *)*puVar8)();
      }
      uVar14 = *puVar5;
      *(undefined8 *)(param_1 + 0xd0) = puVar5[1];
      *(undefined8 *)(param_1 + 200) = uVar14;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0xd8) + 0x1cc) == 0) {
    if (0 < *(int *)(*(long *)(param_1 + 0xd8) + 0x174)) {
      lVar6 = 0;
      do {
        *(undefined4 *)(param_1 + 0x24 + lVar6 * 4) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(*(long *)(param_1 + 0xd8) + 0x174));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xe4) = 0;
  }
  return;
}

