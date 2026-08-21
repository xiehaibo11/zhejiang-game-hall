
/* v8::internal::compiler::FunctionTemplateInfoRef::is_signature_undefined() const */

bool __thiscall
v8::internal::compiler::FunctionTemplateInfoRef::is_signature_undefined
          (FunctionTemplateInfoRef *this)

{
  uint uVar1;
  long lVar2;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    uVar1 = *(uint *)(*(long *)**(undefined8 **)this + 0x1f);
    if ((uVar1 & 1) == 0) {
      return false;
    }
    return uVar1 == *(uint *)(**(long **)(this + 8) + 0xa0);
  }
  lVar2 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar2 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
  }
  if (*(short *)(*(long *)(lVar2 + 0x10) + 0x18) == 0x4e) {
    return *(char *)(lVar2 + 0x18) != '\0';
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
}

