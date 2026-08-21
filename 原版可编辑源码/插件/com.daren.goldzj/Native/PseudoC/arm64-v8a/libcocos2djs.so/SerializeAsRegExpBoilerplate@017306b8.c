
/* v8::internal::compiler::JSRegExpRef::SerializeAsRegExpBoilerplate() */

void __thiscall v8::internal::compiler::JSRegExpRef::SerializeAsRegExpBoilerplate(JSRegExpRef *this)

{
  JSRegExpData *this_00;
  
  if (*(int *)(*(long *)(this + 8) + 0x70) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","broker()->mode() == JSHeapBroker::kSerializing");
  }
  this_00 = (JSRegExpData *)ObjectRef::data((ObjectRef *)this);
  if (*(int *)(this_00 + 8) == 1) {
    if (*(short *)(*(long *)(this_00 + 0x10) + 0x18) == 0x42e) {
      JSRegExpData::SerializeAsRegExpBoilerplate(this_00,*(JSHeapBroker **)(this + 8));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSRegExp()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

