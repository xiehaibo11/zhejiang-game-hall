
/* v8::internal::DeserializerAllocator::GetMap(unsigned int) */

long __thiscall
v8::internal::DeserializerAllocator::GetMap(DeserializerAllocator *this,uint param_1)

{
  return *(long *)(*(long *)(this + 0xd0) + (ulong)param_1 * 8) + 1;
}

