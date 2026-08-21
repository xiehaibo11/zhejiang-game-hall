
/* v8::internal::Code::GetName(v8::internal::Isolate*) const */

void __thiscall v8::internal::Code::GetName(Code *this,Isolate *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  if ((*(uint *)(lVar1 + 0x17) & 0x3e) == 2) {
    interpreter::Interpreter::LookupNameOfBytecodeHandler(*(Interpreter **)(param_1 + 0xb6e8),lVar1)
    ;
    return;
  }
  Builtins::Lookup((Builtins *)(param_1 + 0x9e00),lVar1 + 0x3f);
  return;
}

