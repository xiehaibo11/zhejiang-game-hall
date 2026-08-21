
void FUN_00d9d2fc(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  if (param_3 == 0) {
    puVar9 = (undefined8 *)**(long **)(param_1 + 0xd8);
    *(undefined4 *)(puVar9 + 5) = 0x29;
    (*(code *)*puVar9)();
    iVar8 = *(int *)(param_1 + 0xc0);
  }
  else {
    iVar8 = *(int *)(param_1 + 0xc0);
  }
  if (iVar8 == 0) {
    uVar2 = *(int *)(param_1 + 0x20) + param_3;
    uVar7 = (ulong)((int)(1L << ((ulong)param_3 & 0x3f)) - 1U & param_2) <<
            ((ulong)(0x18 - uVar2) & 0x3f) | *(ulong *)(param_1 + 0x18);
    if (7 < (int)uVar2) {
      uVar6 = 0xfffffff0;
      if (-0x10 < (int)~uVar2) {
        uVar6 = ~uVar2;
      }
      iVar8 = uVar2 + 8;
      do {
        puVar3 = *(undefined1 **)(param_1 + 200);
        *(undefined1 **)(param_1 + 200) = puVar3 + 1;
        *puVar3 = (char)(uVar7 >> 0x10);
        lVar4 = *(long *)(param_1 + 0xd0) + -1;
        *(long *)(param_1 + 0xd0) = lVar4;
        if (lVar4 == 0) {
          puVar9 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x28);
          iVar1 = (*(code *)puVar9[3])();
          if (iVar1 == 0) {
            puVar5 = (undefined8 *)**(long **)(param_1 + 0xd8);
            *(undefined4 *)(puVar5 + 5) = 0x19;
            (*(code *)*puVar5)();
          }
          uVar10 = *puVar9;
          *(undefined8 *)(param_1 + 0xd0) = puVar9[1];
          *(undefined8 *)(param_1 + 200) = uVar10;
        }
        if ((((uint)uVar7 >> 0x10 ^ 0xffffffff) & 0xff) == 0) {
          puVar3 = *(undefined1 **)(param_1 + 200);
          *(undefined1 **)(param_1 + 200) = puVar3 + 1;
          *puVar3 = 0;
          lVar4 = *(long *)(param_1 + 0xd0) + -1;
          *(long *)(param_1 + 0xd0) = lVar4;
          if (lVar4 == 0) {
            FUN_00d9d470(param_1);
          }
        }
        iVar8 = iVar8 + -8;
        uVar7 = uVar7 << 8;
      } while (0xf < iVar8);
      uVar2 = (uVar2 - 8) - (uVar2 + uVar6 + 8 & 0xfffffff8);
    }
    *(ulong *)(param_1 + 0x18) = uVar7;
    *(uint *)(param_1 + 0x20) = uVar2;
  }
  return;
}

