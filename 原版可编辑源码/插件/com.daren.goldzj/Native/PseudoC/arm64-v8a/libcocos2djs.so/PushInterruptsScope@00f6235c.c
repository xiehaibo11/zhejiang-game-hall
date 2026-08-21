
/* v8::internal::StackGuard::PushInterruptsScope(v8::internal::InterruptsScope*) */

void __thiscall
v8::internal::StackGuard::PushInterruptsScope(StackGuard *this,InterruptsScope *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar1 + 0x9530));
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar4 = *(ulong *)(this + 0x30);
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x10) & uVar4;
    uVar4 = *(ulong *)(this + 0x30) & (*(ulong *)(param_1 + 0x10) & uVar4 ^ 0xffffffffffffffff);
    *(ulong *)(this + 0x30) = uVar4;
    if (uVar4 != 0) goto LAB_00f62418;
LAB_00f62408:
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 8);
    uVar3 = *(undefined8 *)(this + 0x10);
  }
  else {
    lVar2 = *(long *)(this + 0x28);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        uVar5 = *(ulong *)(lVar2 + 0x18);
        uVar6 = *(ulong *)(param_1 + 0x10);
        *(ulong *)(lVar2 + 0x18) = uVar5 & (uVar6 ^ 0xffffffffffffffff);
        lVar2 = *(long *)(lVar2 + 0x28);
        uVar4 = (ulong)(int)((uint)uVar6 & (uint)uVar5 | (uint)uVar4);
      } while (lVar2 != 0);
    }
    uVar5 = *(ulong *)(this + 0x30);
    *(ulong *)(this + 0x30) = uVar5 | uVar4;
    if ((uVar5 | uVar4) == 0) goto LAB_00f62408;
    uVar3 = 0xfffffffffffffffe;
    *(undefined8 *)(this + 0x18) = 0xfffffffffffffffe;
  }
  *(undefined8 *)(this + 0x20) = uVar3;
LAB_00f62418:
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x28);
  *(InterruptsScope **)(this + 0x28) = param_1;
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar1 + 0x9530));
  return;
}

