
/* std::__ndk1::__loop<char>::__exec_split(bool, std::__ndk1::__state<char>&) const */

void __thiscall
std::__ndk1::__loop<char>::__exec_split(__loop<char> *this,bool param_1,__state *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  *(undefined4 *)param_2 = 0xfffffc1e;
  if (this[0x34] == (__loop<char>)param_1) {
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(this + 0x10);
    return;
  }
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(this + 8);
  *(undefined8 *)(*(long *)(param_2 + 0x38) + (ulong)*(uint *)(this + 0x28) * 0x10 + 8) =
       *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(this + 0x2c) != *(int *)(this + 0x30)) {
    uVar8 = (ulong)(*(int *)(this + 0x2c) - 1);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    uVar4 = (ulong)(*(int *)(this + 0x30) - 1);
    uVar6 = uVar4 - uVar8;
    if (1 < uVar6) {
      uVar7 = uVar6 & 0xfffffffffffffffe;
      puVar9 = (undefined8 *)(lVar2 + uVar8 * 0x18 + 0x18);
      uVar10 = uVar7;
      do {
        puVar9[-3] = uVar1;
        puVar9[-2] = uVar1;
        *puVar9 = uVar1;
        puVar9[1] = uVar1;
        *(undefined1 *)(puVar9 + -1) = 0;
        *(undefined1 *)(puVar9 + 2) = 0;
        uVar10 = uVar10 - 2;
        puVar9 = puVar9 + 6;
      } while (uVar10 != 0);
      uVar8 = uVar7 + uVar8;
      if (uVar6 == uVar7) {
        return;
      }
    }
    lVar5 = uVar4 - uVar8;
    puVar3 = (undefined1 *)(lVar2 + uVar8 * 0x18 + 0x10);
    do {
      *(undefined8 *)(puVar3 + -0x10) = uVar1;
      *(undefined8 *)(puVar3 + -8) = uVar1;
      *puVar3 = 0;
      lVar5 = lVar5 + -1;
      puVar3 = puVar3 + 0x18;
    } while (lVar5 != 0);
  }
  return;
}

