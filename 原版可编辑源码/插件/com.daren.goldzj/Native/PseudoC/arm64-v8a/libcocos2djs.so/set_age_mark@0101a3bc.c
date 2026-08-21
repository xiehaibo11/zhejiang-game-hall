
/* v8::internal::SemiSpace::set_age_mark(unsigned long) */

void __thiscall v8::internal::SemiSpace::set_age_mark(SemiSpace *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  *(ulong *)(this + 0x80) = param_1;
  uVar1 = *(ulong *)((param_1 - 4 & 0xfffffffffffc0000) + 0xe0);
  for (uVar2 = *(ulong *)(*(long *)(this + 0x20) + 0x20) & 0xfffffffffffc0000; uVar1 != uVar2;
      uVar2 = *(ulong *)(uVar2 + 0xe0)) {
    *(ulong *)(uVar2 + 8) = *(ulong *)(uVar2 + 8) | 0x80000;
  }
  return;
}

