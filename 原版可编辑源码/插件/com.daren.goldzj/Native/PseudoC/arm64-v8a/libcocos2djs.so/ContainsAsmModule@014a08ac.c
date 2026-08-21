
/* v8::internal::Scope::ContainsAsmModule() const */

undefined8 __thiscall v8::internal::Scope::ContainsAsmModule(Scope *this)

{
  ulong uVar1;
  undefined8 uVar2;
  Scope *this_00;
  
  if ((this[0x80] == (Scope)0x2) && (((byte)this[0x83] >> 1 & 1) != 0)) {
LAB_014a0910:
    uVar2 = 1;
  }
  else {
    for (this_00 = *(Scope **)(this + 0x10); this_00 != (Scope *)0x0;
        this_00 = *(Scope **)(this_00 + 0x18)) {
      if (((this_00[0x80] != (Scope)0x2) || (((byte)this_00[0x83] & 0x44) != 0)) &&
         (uVar1 = ContainsAsmModule(this_00), (uVar1 & 1) != 0)) goto LAB_014a0910;
    }
    uVar2 = 0;
  }
  return uVar2;
}

