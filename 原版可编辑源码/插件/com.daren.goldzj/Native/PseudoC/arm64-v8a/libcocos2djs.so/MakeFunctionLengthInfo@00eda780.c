
/* v8::internal::Accessors::MakeFunctionLengthInfo(v8::internal::Isolate*) */

void v8::internal::Accessors::MakeFunctionLengthInfo(Isolate *param_1)

{
  MakeAccessor(param_1,param_1 + 0x7b8,FunctionLengthGetter,ReconfigureToDataProperty);
  return;
}

