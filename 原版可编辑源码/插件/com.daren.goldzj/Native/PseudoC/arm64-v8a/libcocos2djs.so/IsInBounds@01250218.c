
/* v8::internal::WasmTableObject::IsInBounds(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmTableObject>, unsigned int) */

bool v8::internal::WasmTableObject::IsInBounds(undefined8 param_1,long *param_2,uint param_3)

{
  return param_3 < (uint)(*(int *)(*param_2 + 0xf) >> 1);
}

