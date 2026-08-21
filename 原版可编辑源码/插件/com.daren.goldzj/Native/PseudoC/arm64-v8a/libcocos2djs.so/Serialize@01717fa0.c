
/* v8::internal::compiler::NativeContextRef::Serialize() */

void __thiscall v8::internal::compiler::NativeContextRef::Serialize(NativeContextRef *this)

{
  NativeContextData *this_00;
  
  if (*(int *)(*(long *)this + 8) == 2) {
    return;
  }
  if (*(int *)(*(long *)(this + 8) + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","broker()->mode() == JSHeapBroker::kSerializing");
  }
  this_00 = (NativeContextData *)ObjectRef::data((ObjectRef *)this);
  if (*(int *)(this_00 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0x8f) {
    NativeContextData::Serialize(this_00,*(JSHeapBroker **)(this + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsNativeContext()");
}

