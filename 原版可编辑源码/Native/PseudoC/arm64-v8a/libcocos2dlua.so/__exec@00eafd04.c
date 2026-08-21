
/* std::__ndk1::__loop<char>::__exec(std::__ndk1::__state<char>&) const */

void __thiscall std::__ndk1::__loop<char>::__exec(__loop<char> *this,__state *param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  
  uVar4 = (ulong)*(uint *)(this + 0x28);
  lVar5 = *(long *)(param_1 + 0x38);
  puVar1 = (ulong *)(lVar5 + uVar4 * 0x10);
  if (*(int *)param_1 == -0x3df) {
    uVar7 = *puVar1 + 1;
    *puVar1 = uVar7;
    bVar3 = uVar7 < *(ulong *)(this + 0x20);
    if ((*(ulong *)(this + 0x18) <= uVar7) && (uVar7 < *(ulong *)(this + 0x20))) {
      bVar3 = *(long *)(lVar5 + uVar4 * 0x10 + 8) != *(long *)(param_1 + 0x10);
    }
    if ((*(ulong *)(this + 0x18) <= uVar7) && (bVar3)) {
LAB_00eafe14:
      *(undefined4 *)param_1 = 0xfffffc20;
      return;
    }
    *(undefined4 *)param_1 = 0xfffffc1e;
    if (bVar3) {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
      *(undefined8 *)(lVar5 + uVar4 * 0x10 + 8) = *(undefined8 *)(param_1 + 0x10);
      if (*(int *)(this + 0x2c) == *(int *)(this + 0x30)) {
        return;
      }
      uVar4 = (ulong)(*(int *)(this + 0x2c) - 1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      lVar5 = *(long *)(param_1 + 0x20);
      uVar7 = (ulong)(*(int *)(this + 0x30) - 1);
      uVar9 = uVar7 - uVar4;
      if (1 < uVar9) {
        uVar10 = uVar9 & 0xfffffffffffffffe;
        puVar11 = (undefined8 *)(lVar5 + uVar4 * 0x18 + 0x18);
        uVar12 = uVar10;
        do {
          puVar11[-3] = uVar2;
          puVar11[-2] = uVar2;
          *puVar11 = uVar2;
          puVar11[1] = uVar2;
          *(undefined1 *)(puVar11 + -1) = 0;
          *(undefined1 *)(puVar11 + 2) = 0;
          uVar12 = uVar12 - 2;
          puVar11 = puVar11 + 6;
        } while (uVar12 != 0);
        uVar4 = uVar10 + uVar4;
        if (uVar9 == uVar10) {
          return;
        }
      }
      lVar8 = uVar7 - uVar4;
      puVar6 = (undefined1 *)(lVar5 + uVar4 * 0x18 + 0x10);
      do {
        *(undefined8 *)(puVar6 + -0x10) = uVar2;
        *(undefined8 *)(puVar6 + -8) = uVar2;
        *puVar6 = 0;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 0x18;
      } while (lVar8 != 0);
      return;
    }
  }
  else {
    *puVar1 = 0;
    if (*(long *)(this + 0x20) != 0) {
      if (*(long *)(this + 0x18) != 0) {
        *(undefined4 *)param_1 = 0xfffffc1e;
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 8);
        *(undefined8 *)(lVar5 + uVar4 * 0x10 + 8) = *(undefined8 *)(param_1 + 0x10);
        if (*(int *)(this + 0x2c) == *(int *)(this + 0x30)) {
          return;
        }
        uVar4 = (ulong)(*(int *)(this + 0x2c) - 1);
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        lVar5 = *(long *)(param_1 + 0x20);
        uVar7 = (ulong)(*(int *)(this + 0x30) - 1);
        uVar9 = uVar7 - uVar4;
        if (1 < uVar9) {
          uVar10 = uVar9 & 0xfffffffffffffffe;
          puVar11 = (undefined8 *)(lVar5 + uVar4 * 0x18 + 0x18);
          uVar12 = uVar10;
          do {
            puVar11[-3] = uVar2;
            puVar11[-2] = uVar2;
            *puVar11 = uVar2;
            puVar11[1] = uVar2;
            *(undefined1 *)(puVar11 + -1) = 0;
            *(undefined1 *)(puVar11 + 2) = 0;
            uVar12 = uVar12 - 2;
            puVar11 = puVar11 + 6;
          } while (uVar12 != 0);
          uVar4 = uVar10 + uVar4;
          if (uVar9 == uVar10) {
            return;
          }
        }
        lVar8 = uVar7 - uVar4;
        puVar6 = (undefined1 *)(lVar5 + uVar4 * 0x18 + 0x10);
        do {
          *(undefined8 *)(puVar6 + -0x10) = uVar2;
          *(undefined8 *)(puVar6 + -8) = uVar2;
          *puVar6 = 0;
          lVar8 = lVar8 + -1;
          puVar6 = puVar6 + 0x18;
        } while (lVar8 != 0);
        return;
      }
      goto LAB_00eafe14;
    }
    *(undefined4 *)param_1 = 0xfffffc1e;
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(this + 0x10);
  return;
}

