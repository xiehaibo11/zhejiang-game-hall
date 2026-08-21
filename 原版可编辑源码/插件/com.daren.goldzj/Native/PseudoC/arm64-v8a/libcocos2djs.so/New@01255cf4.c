
/* v8::internal::WasmExceptionTag::New(v8::internal::Isolate*, int) */

void v8::internal::WasmExceptionTag::New(Isolate *param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = (long *)Factory::NewStruct((Factory *)param_1,0x72,1);
  *(int *)(*plVar1 + 3) = param_2 << 1;
  return;
}

