
/* v8::internal::Accessors::MakeArrayLengthInfo(v8::internal::Isolate*) */

void v8::internal::Accessors::MakeArrayLengthInfo(Isolate *param_1)

{
  MakeAccessor(param_1,param_1 + 0x7b8,ArrayLengthGetter,ArrayLengthSetter);
  return;
}

