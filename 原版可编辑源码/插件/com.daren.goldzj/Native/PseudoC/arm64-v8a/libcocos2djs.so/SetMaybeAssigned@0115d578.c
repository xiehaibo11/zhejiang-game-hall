
/* v8::internal::Variable::SetMaybeAssigned() */

void __thiscall v8::internal::Variable::SetMaybeAssigned(Variable *this)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(this + 0x28);
  if ((uVar1 & 0xf) != 1) {
    if (((uVar1 >> 0xe & 1) == 0) && (*(Variable **)(this + 0x10) != (Variable *)0x0)) {
      SetMaybeAssigned(*(Variable **)(this + 0x10));
      uVar1 = *(ushort *)(this + 0x28);
    }
    *(ushort *)(this + 0x28) = uVar1 | 0x4000;
  }
  return;
}

