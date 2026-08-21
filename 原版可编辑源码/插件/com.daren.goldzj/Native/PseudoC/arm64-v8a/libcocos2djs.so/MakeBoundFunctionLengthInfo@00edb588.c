
/* v8::internal::Accessors::MakeBoundFunctionLengthInfo(v8::internal::Isolate*) */

void v8::internal::Accessors::MakeBoundFunctionLengthInfo(Isolate *param_1)

{
  MakeAccessor(param_1,param_1 + 0x7b8,BoundFunctionLengthGetter,ReconfigureToDataProperty);
  return;
}

