
/* v8::internal::compiler::FunctionTemplateInfoRef::has_call_code() const */

bool __thiscall
v8::internal::compiler::FunctionTemplateInfoRef::has_call_code(FunctionTemplateInfoRef *this)

{
  long lVar1;
  CallOptimization aCStack_30 [8];
  char local_28;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    CallOptimization::CallOptimization(aCStack_30,**(undefined8 **)(this + 8),**(undefined8 **)this)
    ;
  }
  else {
    lVar1 = ObjectRef::data((ObjectRef *)this);
    if (*(int *)(lVar1 + 8) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar1 + 0x10) + 0x18) != 0x4e) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
    }
    local_28 = *(char *)(lVar1 + 0x1a);
  }
  return local_28 != '\0';
}

