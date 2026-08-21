
/* v8::debug::Coverage::FunctionData::BlockCount() const */

long __thiscall v8::debug::Coverage::FunctionData::BlockCount(FunctionData *this)

{
  return (*(long *)(*(long *)this + 0x20) - *(long *)(*(long *)this + 0x18) >> 2) *
         -0x5555555555555555;
}

