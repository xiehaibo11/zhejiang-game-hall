
/* v8::internal::Accessors::MakeFunctionNameInfo(v8::internal::Isolate*) */

void v8::internal::Accessors::MakeFunctionNameInfo(Isolate *param_1)

{
  MakeAccessor(param_1,param_1 + 0x820,FunctionNameGetter,ReconfigureToDataProperty);
  return;
}

