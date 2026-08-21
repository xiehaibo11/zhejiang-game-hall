
/* v8::internal::compiler::CreateFunctionContextParameters::CreateFunctionContextParameters(v8::internal::Handle<v8::internal::ScopeInfo>,
   int, v8::internal::ScopeType) */

void __thiscall
v8::internal::compiler::CreateFunctionContextParameters::CreateFunctionContextParameters
          (CreateFunctionContextParameters *this,undefined8 param_2,undefined4 param_3,
          CreateFunctionContextParameters param_4)

{
  *(undefined8 *)this = param_2;
  *(undefined4 *)(this + 8) = param_3;
  this[0xc] = param_4;
  return;
}

