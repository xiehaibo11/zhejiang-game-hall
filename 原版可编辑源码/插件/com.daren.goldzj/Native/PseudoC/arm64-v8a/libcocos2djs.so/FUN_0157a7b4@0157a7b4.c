
long * FUN_0157a7b4(Factory *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4,
                   undefined8 param_5,ulong param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_58;
  long local_38;
  
  plVar4 = (long *)v8::internal::Factory::NewJSPromiseWithoutHook(param_1);
  v8::internal::Isolate::RunPromiseHook((Isolate *)param_1,0,plVar4,param_3);
  local_38 = *plVar4;
  local_58 = *param_4;
  iVar3 = v8::internal::JSPromise::async_task_id((JSPromise *)&local_58);
  v8::internal::JSPromise::set_async_task_id((JSPromise *)&local_38,iVar3);
  *(uint *)(*plVar4 + 0xf) = *(uint *)(*plVar4 + 0xf) & 0xfffffffe | 8;
  if (*(char *)(*(long *)(param_1 + 0xb6c8) + 8) != '\0') {
    uVar6 = *param_2;
    if (((uVar6 & 1) != 0) &&
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x42d)) {
      lVar5 = v8::internal::Object::SetProperty(param_1,param_5,param_1 + 0xbb0,param_1 + 0xb8,0,1);
      if (lVar5 == 0) goto LAB_0157a8f8;
      uVar1 = *(int *)(*param_2 + 0xf) >> 1;
      uVar2 = uVar1 | 8;
      if ((param_6 & 1) == 0) {
        uVar2 = uVar1 & 0x7ffffff7;
      }
      *(int *)(*param_2 + 0xf) = uVar2 << 1;
    }
    lVar5 = v8::internal::Object::SetProperty(param_1,plVar4,param_1 + 3000,param_4,0,1);
    if (lVar5 == 0) {
LAB_0157a8f8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
  }
  return plVar4;
}

