
/* v8::internal::Heap::CanMoveObjectStart(v8::internal::HeapObject) */

bool __thiscall v8::internal::Heap::CanMoveObjectStart(Heap *this,ulong param_2)

{
  if (((FLAG_move_object_start != '\0') && (*(long *)(*(long *)(this + 0x2e80) + 0x68) == 0)) &&
     ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) >> 5 & 1) == 0)) {
    return *(long *)((param_2 & 0xfffffffffffc0000) + 0xa8) == 0;
  }
  return false;
}

