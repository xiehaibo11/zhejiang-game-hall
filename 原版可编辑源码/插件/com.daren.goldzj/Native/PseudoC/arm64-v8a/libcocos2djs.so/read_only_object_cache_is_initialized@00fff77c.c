
/* v8::internal::ReadOnlyHeap::read_only_object_cache_is_initialized() const */

bool __thiscall
v8::internal::ReadOnlyHeap::read_only_object_cache_is_initialized(ReadOnlyHeap *this)

{
  return *(long *)(this + 0x18) != *(long *)(this + 0x10);
}

