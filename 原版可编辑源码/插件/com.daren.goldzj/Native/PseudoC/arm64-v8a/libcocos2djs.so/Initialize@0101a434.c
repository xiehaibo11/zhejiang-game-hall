
/* v8::internal::SemiSpaceObjectIterator::Initialize(unsigned long, unsigned long) */

void __thiscall
v8::internal::SemiSpaceObjectIterator::Initialize
          (SemiSpaceObjectIterator *this,ulong param_1,ulong param_2)

{
  *(ulong *)(this + 8) = param_1;
  *(ulong *)(this + 0x10) = param_2;
  return;
}

