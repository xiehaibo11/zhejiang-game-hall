
/* v8::internal::JSRegExp::ShouldProduceBytecode() */

bool __thiscall v8::internal::JSRegExp::ShouldProduceBytecode(JSRegExp *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (FLAG_regexp_interpret_all != '\0') {
    return true;
  }
  if (FLAG_regexp_tier_up != '\0') {
    uVar1 = *(uint *)(*(ulong *)this + 0xb);
    uVar3 = *(ulong *)this & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    if ((((uVar1 & 1) == 0) || (uVar1 != *(uint *)(uVar3 + 0xa0))) &&
       ((*(uint *)(uVar2 + 7) & 0xfffffffe) == 2)) {
      return true;
    }
    return 1 < *(uint *)(uVar2 + 0x2f);
  }
  return false;
}

