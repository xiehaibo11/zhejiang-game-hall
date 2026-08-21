
/* v8::internal::SemiSpace::SetUp(unsigned long, unsigned long) */

void __thiscall v8::internal::SemiSpace::SetUp(SemiSpace *this,ulong param_1,ulong param_2)

{
  *(ulong *)(this + 0x70) = param_2 & 0xfffffffffffc0000;
  *(ulong *)(this + 0x78) = param_1 & 0xfffffffffffc0000;
  *(ulong *)(this + 0x68) = param_1 & 0xfffffffffffc0000;
  this[0x88] = (SemiSpace)0x0;
  return;
}

