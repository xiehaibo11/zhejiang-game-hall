
/* v8::internal::CodeEventLogger::CodeEventLogger(v8::internal::Isolate*) */

void __thiscall
v8::internal::CodeEventLogger::CodeEventLogger(CodeEventLogger *this,Isolate *param_1)

{
  undefined4 *puVar1;
  
  *(undefined ***)this = &PTR__CodeEventLogger_01cb1f20;
  *(Isolate **)(this + 8) = param_1;
  puVar1 = operator_new(0x204);
  *puVar1 = 0;
  *(undefined4 **)(this + 0x10) = puVar1;
  return;
}

