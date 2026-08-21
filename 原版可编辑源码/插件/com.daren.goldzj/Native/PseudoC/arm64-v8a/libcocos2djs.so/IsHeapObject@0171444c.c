
/* v8::internal::compiler::ObjectData::IsHeapObject() const */

byte __thiscall v8::internal::compiler::ObjectData::IsHeapObject(ObjectData *this)

{
  if (*(int *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 8) == 2) {
    return **(byte **)this & 1;
  }
  return 1;
}

