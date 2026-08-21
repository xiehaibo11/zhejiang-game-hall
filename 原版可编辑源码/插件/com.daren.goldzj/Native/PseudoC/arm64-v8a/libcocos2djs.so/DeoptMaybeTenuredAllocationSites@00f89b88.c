
/* v8::internal::Heap::DeoptMaybeTenuredAllocationSites() */

bool __thiscall v8::internal::Heap::DeoptMaybeTenuredAllocationSites(Heap *this)

{
  if (*(long *)(*(long *)(this + 0xe8) + 0x138) == *(long *)(*(long *)(this + 0xe8) + 0x140)) {
    return *(int *)(this + 0x7dc) == 0;
  }
  return false;
}

