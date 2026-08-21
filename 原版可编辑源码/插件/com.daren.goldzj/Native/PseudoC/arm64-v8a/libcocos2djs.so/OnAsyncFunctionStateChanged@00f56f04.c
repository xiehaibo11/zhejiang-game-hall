
/* v8::internal::Isolate::OnAsyncFunctionStateChanged(v8::internal::Handle<v8::internal::JSPromise>,
   v8::debug::DebugAsyncActionType) */

void __thiscall
v8::internal::Isolate::OnAsyncFunctionStateChanged
          (Isolate *this,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 local_18;
  
  if (*(long *)(this + 0xc710) != 0) {
    local_18 = *param_2;
    iVar1 = JSPromise::async_task_id((JSPromise *)&local_18);
    if (iVar1 == 0) {
      local_18 = *param_2;
      iVar1 = *(int *)(this + 0xc71c);
      *(int *)(this + 0xc71c) = iVar1 + 1;
      JSPromise::set_async_task_id((JSPromise *)&local_18,iVar1 + 1);
    }
    local_18 = *param_2;
    plVar3 = *(long **)(this + 0xc710);
    uVar2 = JSPromise::async_task_id((JSPromise *)&local_18);
    (**(code **)(*plVar3 + 0x10))(plVar3,param_3,uVar2,0);
  }
  return;
}

