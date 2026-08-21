
/* v8::internal::JSRegExp::ResetLastTierUpTick() */

void __thiscall v8::internal::JSRegExp::ResetLastTierUpTick(JSRegExp *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  *(uint *)(uVar1 + 0x2f) = *(int *)(uVar1 + 0x2f) + 2U & 0xfffffffe;
  return;
}

