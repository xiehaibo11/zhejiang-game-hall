
/* v8::internal::Scope::HasThisReference() const */

undefined8 __thiscall v8::internal::Scope::HasThisReference(Scope *this)

{
  ulong uVar1;
  undefined8 uVar2;
  Scope *this_00;
  
  if ((((byte)this[0x82] & 1) == 0) || (((byte)this[0x84] >> 3 & 1) == 0)) {
    for (this_00 = *(Scope **)(this + 0x10); this_00 != (Scope *)0x0;
        this_00 = *(Scope **)(this_00 + 0x18)) {
      if (((((byte)this_00[0x82] & 1) == 0) || (((byte)this_00[0x84] >> 4 & 1) == 0)) &&
         (uVar1 = HasThisReference(this_00), (uVar1 & 1) != 0)) goto LAB_014a3830;
    }
    uVar2 = 0;
  }
  else {
LAB_014a3830:
    uVar2 = 1;
  }
  return uVar2;
}

