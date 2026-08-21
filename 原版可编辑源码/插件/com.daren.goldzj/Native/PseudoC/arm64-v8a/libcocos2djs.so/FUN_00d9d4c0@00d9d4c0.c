
void FUN_00d9d4c0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if (*(int *)(param_1 + 0xc0) == 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar4 = iVar2 + 7;
    uVar8 = 0x7fL << ((ulong)(0x11 - iVar2) & 0x3f) | *(ulong *)(param_1 + 0x18);
    if (7 < iVar4) {
      iVar3 = -8 - iVar2;
      iVar4 = iVar2 + 0xf;
      if (iVar3 < -0xf) {
        iVar3 = -0x10;
      }
      uVar1 = iVar4 + iVar3;
      do {
        puVar5 = *(undefined1 **)(param_1 + 200);
        *(undefined1 **)(param_1 + 200) = puVar5 + 1;
        *puVar5 = (char)(uVar8 >> 0x10);
        lVar6 = *(long *)(param_1 + 0xd0) + -1;
        *(long *)(param_1 + 0xd0) = lVar6;
        if (lVar6 == 0) {
          puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
          iVar3 = (*(code *)puVar9[3])();
          if (iVar3 == 0) {
            puVar7 = (undefined8 *)**(long **)(param_1 + 0xd8);
            *(undefined4 *)(puVar7 + 5) = 0x19;
            (*(code *)*puVar7)();
          }
          uVar10 = *puVar9;
          *(undefined8 *)(param_1 + 0xd0) = puVar9[1];
          *(undefined8 *)(param_1 + 200) = uVar10;
        }
        if ((((uint)uVar8 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
          puVar5 = *(undefined1 **)(param_1 + 200);
          *(undefined1 **)(param_1 + 200) = puVar5 + 1;
          *puVar5 = 0;
          lVar6 = *(long *)(param_1 + 0xd0) + -1;
          *(long *)(param_1 + 0xd0) = lVar6;
          if (lVar6 == 0) {
            puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
            iVar3 = (*(code *)puVar9[3])();
            if (iVar3 == 0) {
              puVar7 = (undefined8 *)**(long **)(param_1 + 0xd8);
              *(undefined4 *)(puVar7 + 5) = 0x19;
              (*(code *)*puVar7)();
            }
            uVar10 = *puVar9;
            *(undefined8 *)(param_1 + 0xd0) = puVar9[1];
            *(undefined8 *)(param_1 + 200) = uVar10;
          }
        }
        iVar4 = iVar4 + -8;
        uVar8 = uVar8 << 8;
      } while (0xf < iVar4);
      iVar4 = (iVar2 + -1) - (uVar1 & 0xfffffff8);
    }
    *(ulong *)(param_1 + 0x18) = uVar8;
    *(int *)(param_1 + 0x20) = iVar4;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

