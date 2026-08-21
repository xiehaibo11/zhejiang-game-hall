
/* v8::internal::Context::script_context() */

void __thiscall v8::internal::Context::script_context(Context *this)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)this;
  uVar1 = *(uint *)(uVar2 - 1);
  uVar3 = uVar2 & 0xffffffff00000000;
  while (*(short *)((uVar3 | uVar1) + 7) != 0x90) {
    uVar2 = uVar3 | *(uint *)(uVar2 + 0xb);
    uVar1 = *(uint *)(uVar2 - 1);
  }
  return;
}

