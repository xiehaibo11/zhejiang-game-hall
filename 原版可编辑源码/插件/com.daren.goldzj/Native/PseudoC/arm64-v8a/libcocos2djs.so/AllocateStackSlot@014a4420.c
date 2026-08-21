
/* v8::internal::Scope::AllocateStackSlot(v8::internal::Variable*) */

void __thiscall v8::internal::Scope::AllocateStackSlot(Scope *this,Variable *param_1)

{
  int iVar1;
  
  while ((this[0x80] == (Scope)0x6 || (this[0x80] == (Scope)0x0))) {
    do {
      this = *(Scope **)(this + 8);
    } while (((byte)this[0x82] & 1) == 0);
  }
  iVar1 = *(int *)(this + 0x78);
  *(int *)(this + 0x78) = iVar1 + 1;
  *(int *)(param_1 + 0x20) = iVar1;
  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) & 0xfc7f | 0x100;
  return;
}

