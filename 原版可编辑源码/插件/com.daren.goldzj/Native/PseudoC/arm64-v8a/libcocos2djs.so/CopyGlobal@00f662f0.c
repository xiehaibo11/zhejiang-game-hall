
/* v8::internal::GlobalHandles::CopyGlobal(unsigned long*) */

void v8::internal::GlobalHandles::CopyGlobal(ulong *param_1)

{
  GlobalHandles *pGVar1;
  ulong local_28;
  
  pGVar1 = (GlobalHandles *)param_1[(ulong)*(byte *)((long)param_1 + 10) * -4 + 0x401];
  if (FLAG_verify_heap != '\0') {
    local_28 = *param_1;
    Object::ObjectVerify((Object *)&local_28,*(Isolate **)pGVar1);
  }
  Create(pGVar1,*param_1);
  return;
}

