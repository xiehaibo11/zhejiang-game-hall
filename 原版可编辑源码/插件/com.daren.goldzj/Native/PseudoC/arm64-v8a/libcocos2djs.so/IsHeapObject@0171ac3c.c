
/* v8::internal::compiler::ObjectRef::IsHeapObject() const */

byte __thiscall v8::internal::compiler::ObjectRef::IsHeapObject(ObjectRef *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)data(this);
  if (*(int *)(puVar1 + 1) == 0) {
    return 0;
  }
  if (*(int *)(puVar1 + 1) == 2) {
    return *(byte *)*puVar1 & 1;
  }
  return 1;
}

