
/* v8::internal::compiler::JSFunctionRef::serialized() const */

bool __thiscall v8::internal::compiler::JSFunctionRef::serialized(JSFunctionRef *this)

{
  long lVar1;
  
  if (*(int *)(*(long *)this + 8) == 2) {
    return true;
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x439) {
      return *(char *)(lVar1 + 0xb4) != '\0';
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSFunction()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

