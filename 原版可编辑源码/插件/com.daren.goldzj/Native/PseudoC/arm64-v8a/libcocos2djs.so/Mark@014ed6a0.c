
/* v8::internal::CpuTraceMarkExtension::Mark(v8::FunctionCallbackInfo<v8::Value> const&) */

void v8::internal::CpuTraceMarkExtension::Mark(FunctionCallbackInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  Isolate *pIVar3;
  
  if ((0 < *(int *)(param_1 + 0x10)) &&
     (uVar1 = v8::Value::IsUint32(*(Value **)(param_1 + 8)), (uVar1 & 1) != 0)) {
    return;
  }
  pIVar3 = *(Isolate **)(*(long *)param_1 + 8);
  lVar2 = v8::String::NewFromUtf8
                    (pIVar3,"First parameter to cputracemark() must be a unsigned int32.",0,
                     0xffffffff);
  if (lVar2 == 0) {
    v8::V8::ToLocalEmpty();
  }
  v8::Isolate::ThrowException(pIVar3,lVar2);
  return;
}

