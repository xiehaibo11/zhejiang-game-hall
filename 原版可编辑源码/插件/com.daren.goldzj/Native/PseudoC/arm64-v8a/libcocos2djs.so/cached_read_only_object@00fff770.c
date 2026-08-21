
/* v8::internal::ReadOnlyHeap::cached_read_only_object(unsigned long) const */

undefined8 __thiscall
v8::internal::ReadOnlyHeap::cached_read_only_object(ReadOnlyHeap *this,ulong param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x10) + param_1 * 8);
}

