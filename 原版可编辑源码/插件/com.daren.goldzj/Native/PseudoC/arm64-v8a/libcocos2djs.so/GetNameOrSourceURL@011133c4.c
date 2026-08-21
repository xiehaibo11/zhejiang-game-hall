
/* v8::internal::Script::GetNameOrSourceURL() */

ulong __thiscall v8::internal::Script::GetNameOrSourceURL(Script *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)this;
  uVar1 = *(uint *)(uVar3 + 0x33);
  uVar4 = uVar3 & 0xffffffff00000000;
  uVar2 = uVar4 | uVar1;
  if (((uVar1 & 1) != 0) && (uVar1 == *(uint *)(uVar4 + 0xa0))) {
    uVar2 = uVar4 | *(uint *)(uVar3 + 7);
  }
  return uVar2;
}

