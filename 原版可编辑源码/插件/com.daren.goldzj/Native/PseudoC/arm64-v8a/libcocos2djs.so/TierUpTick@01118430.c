
/* v8::internal::JSRegExp::TierUpTick() */

void __thiscall v8::internal::JSRegExp::TierUpTick(JSRegExp *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  uVar1 = *(uint *)(uVar2 + 0x2f);
  if (1 < uVar1) {
    *(uint *)(uVar2 + 0x2f) = uVar1 - 2 & 0xfffffffe;
  }
  return;
}

