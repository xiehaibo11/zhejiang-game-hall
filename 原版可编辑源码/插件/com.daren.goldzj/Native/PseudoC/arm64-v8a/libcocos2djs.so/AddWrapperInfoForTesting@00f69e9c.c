
/* v8::internal::LocalEmbedderHeapTracer::ProcessingScope::AddWrapperInfoForTesting(std::__ndk1::pair<void*,
   void*>) */

void v8::internal::LocalEmbedderHeapTracer::ProcessingScope::AddWrapperInfoForTesting
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)param_1[2];
  local_40 = param_2;
  uStack_38 = param_3;
  if (puVar1 == (undefined8 *)param_1[3]) {
    std::__ndk1::
    vector<std::__ndk1::pair<void*,void*>,std::__ndk1::allocator<std::__ndk1::pair<void*,void*>>>::
    __push_back_slow_path<std::__ndk1::pair<void*,void*>const&>
              ((vector<std::__ndk1::pair<void*,void*>,std::__ndk1::allocator<std::__ndk1::pair<void*,void*>>>
                *)(param_1 + 1),(pair *)&local_40);
    lVar3 = param_1[2];
  }
  else {
    puVar1[1] = param_3;
    *puVar1 = param_2;
    lVar3 = param_1[2] + 0x10;
    param_1[2] = lVar3;
  }
  if (lVar3 == param_1[3]) {
    (**(code **)(**(long **)(*param_1 + 8) + 0x10))
              (*(long **)(*param_1 + 8),
               (vector<std::__ndk1::pair<void*,void*>,std::__ndk1::allocator<std::__ndk1::pair<void*,void*>>>
                *)(param_1 + 1));
    pvVar4 = (void *)param_1[1];
    param_1[2] = (long)pvVar4;
    if ((ulong)(param_1[3] - (long)pvVar4 >> 4) < 1000) {
      pvVar2 = operator_new(16000);
      param_1[1] = (long)pvVar2;
      param_1[2] = (long)pvVar2;
      param_1[3] = (long)pvVar2 + 16000;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
  }
  return;
}

