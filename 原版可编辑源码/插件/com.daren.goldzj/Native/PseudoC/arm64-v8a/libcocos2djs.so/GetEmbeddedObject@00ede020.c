
/* v8::internal::AssemblerBase::GetEmbeddedObject(unsigned long) const */

undefined8 __thiscall
v8::internal::AssemblerBase::GetEmbeddedObject(AssemblerBase *this,ulong param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x60) + param_1 * 8);
}

