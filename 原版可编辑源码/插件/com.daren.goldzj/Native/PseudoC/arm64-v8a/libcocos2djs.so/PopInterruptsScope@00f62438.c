
/* v8::internal::StackGuard::PopInterruptsScope() */

void __thiscall v8::internal::StackGuard::PopInterruptsScope(StackGuard *this)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *(long *)this;
  base::RecursiveMutex::Lock((RecursiveMutex *)(lVar2 + 0x9530));
  lVar4 = *(long *)(this + 0x28);
  if (*(int *)(lVar4 + 0x20) == 0) {
    uVar3 = *(ulong *)(this + 0x30) | *(ulong *)(lVar4 + 0x18);
  }
  else {
    if (*(InterruptsScope **)(lVar4 + 0x28) == (InterruptsScope *)0x0) goto LAB_00f62584;
    uVar3 = *(ulong *)(this + 0x30);
    if ((uVar3 & 1) != 0) {
      uVar1 = InterruptsScope::Intercept(*(InterruptsScope **)(lVar4 + 0x28),1);
      uVar3 = *(ulong *)(this + 0x30);
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 & 0xfffffffffffffffe;
        *(ulong *)(this + 0x30) = uVar3;
      }
    }
    if (((uint)uVar3 >> 1 & 1) != 0) {
      uVar1 = InterruptsScope::Intercept(*(InterruptsScope **)(lVar4 + 0x28),2);
      uVar3 = *(ulong *)(this + 0x30);
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 & 0xfffffffffffffffd;
        *(ulong *)(this + 0x30) = uVar3;
      }
    }
    if (((uint)uVar3 >> 2 & 1) != 0) {
      uVar1 = InterruptsScope::Intercept(*(InterruptsScope **)(lVar4 + 0x28),4);
      uVar3 = *(ulong *)(this + 0x30);
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 & 0xfffffffffffffffb;
        *(ulong *)(this + 0x30) = uVar3;
      }
    }
    if (((uint)uVar3 >> 3 & 1) != 0) {
      uVar1 = InterruptsScope::Intercept(*(InterruptsScope **)(lVar4 + 0x28),8);
      uVar3 = *(ulong *)(this + 0x30);
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 & 0xfffffffffffffff7;
        *(ulong *)(this + 0x30) = uVar3;
      }
    }
    if (((uint)uVar3 >> 4 & 1) != 0) {
      uVar1 = InterruptsScope::Intercept(*(InterruptsScope **)(lVar4 + 0x28),0x10);
      uVar3 = *(ulong *)(this + 0x30);
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 & 0xffffffffffffffef;
        *(ulong *)(this + 0x30) = uVar3;
      }
    }
    if (((uint)uVar3 >> 5 & 1) != 0) {
      uVar1 = InterruptsScope::Intercept(*(InterruptsScope **)(lVar4 + 0x28),0x20);
      uVar3 = *(ulong *)(this + 0x30);
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 & 0xffffffffffffffdf;
        *(ulong *)(this + 0x30) = uVar3;
      }
    }
    if (((uint)uVar3 >> 6 & 1) != 0) {
      uVar1 = InterruptsScope::Intercept(*(InterruptsScope **)(lVar4 + 0x28),0x40);
      uVar3 = *(ulong *)(this + 0x30);
      if ((uVar1 & 1) != 0) {
        uVar3 = uVar3 & 0xffffffffffffffbf;
        *(ulong *)(this + 0x30) = uVar3;
      }
    }
    if ((((uint)uVar3 >> 7 & 1) == 0) ||
       (uVar3 = InterruptsScope::Intercept(*(InterruptsScope **)(lVar4 + 0x28),0x80),
       (uVar3 & 1) == 0)) goto LAB_00f62584;
    uVar3 = *(ulong *)(this + 0x30) & 0xffffffffffffff7f;
  }
  *(ulong *)(this + 0x30) = uVar3;
LAB_00f62584:
  if (*(long *)(this + 0x30) != 0) {
    *(undefined8 *)(this + 0x18) = 0xfffffffffffffffe;
    *(undefined8 *)(this + 0x20) = 0xfffffffffffffffe;
  }
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(lVar4 + 0x28);
  base::RecursiveMutex::Unlock((RecursiveMutex *)(lVar2 + 0x9530));
  return;
}

