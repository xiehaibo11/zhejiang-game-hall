
/* v8::internal::BasicBlockProfiler::Data::SetBlockRpoNumber(unsigned long, int) */

void __thiscall
v8::internal::BasicBlockProfiler::Data::SetBlockRpoNumber(Data *this,ulong param_1,int param_2)

{
  *(int *)(*(long *)(this + 8) + param_1 * 4) = param_2;
  return;
}

