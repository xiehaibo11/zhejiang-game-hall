
/* v8::internal::BasicBlockProfiler::Data::GetCounterAddress(unsigned long) */

long __thiscall v8::internal::BasicBlockProfiler::Data::GetCounterAddress(Data *this,ulong param_1)

{
  return *(long *)(this + 0x20) + param_1 * 4;
}

