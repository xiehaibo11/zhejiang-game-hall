
/* v8::internal::Scope::MustAllocateInContext(v8::internal::Variable*) */

byte __thiscall v8::internal::Scope::MustAllocateInContext(Scope *this,Variable *param_1)

{
  ushort uVar1;
  Scope SVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x28) & 0xf;
  if (uVar1 == 3) {
    return 0;
  }
  SVar2 = this[0x80];
  if (SVar2 != (Scope)0x1) {
    if (SVar2 == (Scope)0x5) {
      return 1;
    }
    if (SVar2 != (Scope)0x4) goto LAB_014a4408;
  }
  if (uVar1 < 2) {
    return 1;
  }
LAB_014a4408:
  if ((*(ushort *)(param_1 + 0x28) >> 10 & 1) != 0) {
    return 1;
  }
  return (byte)this[0x81] >> 6 & 1;
}

