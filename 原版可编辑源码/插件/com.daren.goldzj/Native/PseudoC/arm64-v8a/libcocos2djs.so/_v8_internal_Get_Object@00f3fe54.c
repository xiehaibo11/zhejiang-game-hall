
/* _v8_internal_Get_Object(void*) */

void * _v8_internal_Get_Object(void *param_1)

{
  ulong uVar1;
  
  if ((ulong)param_1 >> 0x20 == 0) {
    uVar1 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
    param_1 = (void *)(uVar1 & 0xffffffff00000000 | (ulong)param_1 & 0xffffffff);
  }
  return param_1;
}

