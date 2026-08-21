
/* v8::internal::Context::closure_context() */

void __thiscall v8::internal::Context::closure_context(Context *this)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar1 = *(ulong *)this;
  uVar2 = uVar1 & 0xffffffff00000000;
  if (*(short *)((uVar2 | *(uint *)(uVar1 - 1)) + 7) != 0x8d) {
    while (((puVar3 = (uint *)(uVar1 - 1), *(short *)((uVar2 | *(uint *)(uVar1 - 1)) + 7) != 0x90 &&
            (*(short *)((uVar2 | *puVar3) + 7) != 0x8e)) &&
           (*(short *)((uVar2 | 7) + (ulong)*puVar3) != 0x8f))) {
      if (*(short *)((uVar2 | *puVar3) + 7) == 0x8c) {
        return;
      }
      uVar1 = uVar2 | *(uint *)(uVar1 + 0xb);
      if (*(short *)((uVar2 | *(uint *)(uVar1 - 1)) + 7) == 0x8d) {
        return;
      }
    }
  }
  return;
}

