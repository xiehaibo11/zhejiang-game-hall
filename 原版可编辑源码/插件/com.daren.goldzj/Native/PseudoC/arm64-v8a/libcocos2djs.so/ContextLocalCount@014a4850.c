
/* v8::internal::Scope::ContextLocalCount() const */

int __thiscall v8::internal::Scope::ContextLocalCount(Scope *this)

{
  Scope SVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x7c) == 0) {
    return 0;
  }
  SVar1 = this[0x80];
  uVar2 = 0;
  if ((SVar1 != (Scope)0x7) && (SVar1 != (Scope)0x3)) {
    uVar2 = 0;
    if ((SVar1 == (Scope)0x2) && (uVar2 = 0, *(long *)(this + 0xb8) != 0)) {
      uVar2 = (uint)((*(ushort *)(*(long *)(this + 0xb8) + 0x28) & 0x380) == 0x180);
    }
    if (((byte)this[0x81] >> 2 & 1) == 0) {
      iVar3 = -2;
      goto LAB_014a48a4;
    }
  }
  iVar3 = -3;
LAB_014a48a4:
  return (*(int *)(this + 0x7c) - uVar2) + iVar3;
}

