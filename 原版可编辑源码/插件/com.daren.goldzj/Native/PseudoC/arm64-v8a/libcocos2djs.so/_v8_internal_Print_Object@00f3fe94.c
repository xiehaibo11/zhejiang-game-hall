
/* _v8_internal_Print_Object(void*) */

void _v8_internal_Print_Object(void *param_1)

{
  ulong uVar1;
  void *local_8;
  
  if ((ulong)param_1 >> 0x20 == 0) {
    uVar1 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
    param_1 = (void *)(uVar1 & 0xffffffff00000000 | (ulong)param_1 & 0xffffffff);
  }
  local_8 = param_1;
  v8::internal::Object::Print((Object *)&local_8);
  return;
}

