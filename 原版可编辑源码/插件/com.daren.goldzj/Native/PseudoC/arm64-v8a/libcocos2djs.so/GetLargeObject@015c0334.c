
/* v8::internal::DeserializerAllocator::GetLargeObject(unsigned int) */

undefined8 __thiscall
v8::internal::DeserializerAllocator::GetLargeObject(DeserializerAllocator *this,uint param_1)

{
  return *(undefined8 *)(*(long *)(this + 0xe8) + (ulong)param_1 * 8);
}

