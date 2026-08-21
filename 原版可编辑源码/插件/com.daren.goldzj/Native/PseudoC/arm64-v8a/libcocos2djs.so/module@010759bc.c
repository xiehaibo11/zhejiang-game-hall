
/* v8::internal::Context::module() */

ulong __thiscall v8::internal::Context::module(Context *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this;
  uVar1 = *(uint *)(uVar3 - 1);
  uVar2 = uVar3 & 0xffffffff00000000;
  while (*(short *)((uVar2 | uVar1) + 7) != 0x8e) {
    uVar3 = uVar2 | *(uint *)(uVar3 + 0xb);
    uVar1 = *(uint *)(uVar3 - 1);
  }
  return uVar2 | *(uint *)(uVar3 + 0xf);
}

