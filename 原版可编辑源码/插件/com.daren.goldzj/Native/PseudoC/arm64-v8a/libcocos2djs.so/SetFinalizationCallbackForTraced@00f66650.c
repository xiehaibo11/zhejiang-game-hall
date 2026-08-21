
/* v8::internal::GlobalHandles::SetFinalizationCallbackForTraced(unsigned long*, void*, void
   (*)(v8::WeakCallbackInfo<void> const&)) */

void v8::internal::GlobalHandles::SetFinalizationCallbackForTraced
               (ulong *param_1,void *param_2,_func_void_WeakCallbackInfo_ptr *param_3)

{
  param_1[2] = (ulong)param_2;
  param_1[3] = (ulong)param_3;
  return;
}

