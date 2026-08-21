
/* v8::internal::ExternalReference::runtime_function_table_address(v8::internal::Isolate*) */

void __thiscall
v8::internal::ExternalReference::runtime_function_table_address
          (ExternalReference *this,Isolate *param_1)

{
  Runtime::RuntimeFunctionTable((Runtime *)this,param_1);
  return;
}

