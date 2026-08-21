
/* v8::internal::compiler::FunctionTemplateInfoRef::accept_any_receiver() const */

bool __thiscall
v8::internal::compiler::FunctionTemplateInfoRef::accept_any_receiver(FunctionTemplateInfoRef *this)

{
  long lVar1;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    return (bool)(*(byte *)(*(long *)**(undefined8 **)this + 0x2b) >> 6 & 1);
  }
  lVar1 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar1 + 8) == 1) {
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) == 0x4e) {
      return *(char *)(lVar1 + 0x19) != '\0';
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

