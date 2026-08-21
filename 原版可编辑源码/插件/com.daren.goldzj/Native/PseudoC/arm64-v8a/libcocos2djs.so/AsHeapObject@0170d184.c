
/* v8::internal::compiler::ObjectData::AsHeapObject() */

void __thiscall v8::internal::compiler::ObjectData::AsHeapObject(ObjectData *this)

{
  if (*(int *)(this + 8) == 1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

