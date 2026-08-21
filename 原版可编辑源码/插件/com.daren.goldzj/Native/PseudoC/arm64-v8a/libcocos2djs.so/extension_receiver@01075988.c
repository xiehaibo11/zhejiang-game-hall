
/* v8::internal::Context::extension_receiver() */

ulong __thiscall v8::internal::Context::extension_receiver(Context *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)this;
  uVar3 = uVar4 & 0xffffffff00000000;
  uVar1 = uVar3 | *(uint *)(uVar4 + 0xf);
  uVar2 = uVar1;
  if ((*(short *)((uVar3 | *(uint *)(uVar4 - 1)) + 7) != 0x91) &&
     (uVar2 = 0, *(uint *)(uVar4 + 0xf) != *(uint *)(uVar3 + 0xa0))) {
    uVar2 = uVar1;
  }
  return uVar2;
}

