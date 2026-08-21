
/* v8::V8::SetFinalizationCallbackTraced(unsigned long*, void*, void (*)(v8::WeakCallbackInfo<void>
   const&)) */

void v8::V8::SetFinalizationCallbackTraced
               (ulong *param_1,void *param_2,_func_void_WeakCallbackInfo_ptr *param_3)

{
  internal::GlobalHandles::SetFinalizationCallbackForTraced(param_1,param_2,param_3);
  return;
}

