
/* v8::internal::Expression::IsCompileTimeValue() */

uint __thiscall v8::internal::Expression::IsCompileTimeValue(Expression *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 4);
  uVar1 = uVar2 & 0x3f;
  if (uVar1 == 0x29) {
    return 1;
  }
  if (((uVar2 + 0x2b & 0x3f) < 3) && ((uVar1 == 0x16 || (uVar1 == 0x17)))) {
    return uVar2 >> 8 & 1;
  }
  return 0;
}

