
/* v8::internal::ObjectLiteralProperty::IsCompileTimeValue() const */

uint __thiscall v8::internal::ObjectLiteralProperty::IsCompileTimeValue(ObjectLiteralProperty *this)

{
  uint uVar1;
  uint uVar2;
  
  if (this[0x10] == (ObjectLiteralProperty)0x0) {
    return 1;
  }
  if (this[0x10] == (ObjectLiteralProperty)0x2) {
    uVar2 = *(uint *)(*(long *)(this + 8) + 4);
    uVar1 = uVar2 & 0x3f;
    if (uVar1 == 0x29) {
      return 1;
    }
    if (((uVar2 + 0x2b & 0x3f) < 3) && ((uVar1 == 0x16 || (uVar1 == 0x17)))) {
      return uVar2 >> 8 & 1;
    }
  }
  return 0;
}

