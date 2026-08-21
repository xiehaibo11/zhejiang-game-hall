
/* WARNING: Removing unreachable block (ram,0x011183d0) */
/* v8::internal::JSRegExp::MarkedForTierUp() */

bool __thiscall v8::internal::JSRegExp::MarkedForTierUp(JSRegExp *this)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(ulong *)this + 0xb);
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  uVar3 = uVar4 | uVar1;
  if (((((uVar1 & 1) != 0) && (uVar1 == *(uint *)(uVar4 + 0xa0))) ||
      (bVar2 = false, (*(uint *)(uVar3 + 7) & 0xfffffffe) != 2)) &&
     (bVar2 = false, FLAG_regexp_tier_up != '\0')) {
    bVar2 = *(uint *)(uVar3 + 0x2f) < 2;
  }
  return bVar2;
}

