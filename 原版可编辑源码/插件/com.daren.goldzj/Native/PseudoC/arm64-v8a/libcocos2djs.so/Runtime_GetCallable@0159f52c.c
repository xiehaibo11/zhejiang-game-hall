
/* v8::internal::Runtime_GetCallable(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_GetCallable(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  FunctionTemplate *this;
  ObjectTemplate *pOVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    this = (FunctionTemplate *)FunctionTemplate::New(param_3,0,0,0,0,1,0);
    pOVar2 = (ObjectTemplate *)FunctionTemplate::InstanceTemplate(this);
    ObjectTemplate::SetCallAsFunctionHandler(pOVar2,FUN_015af958,0);
    v8::Isolate::GetCurrentContext((Isolate *)param_3);
    uVar3 = v8::Isolate::GetCurrentContext((Isolate *)param_3);
    lVar4 = FunctionTemplate::GetFunction(this,uVar3);
    if (lVar4 == 0) {
      v8::V8::ToLocalEmpty();
    }
    uVar3 = v8::Isolate::GetCurrentContext((Isolate *)param_3);
    puVar5 = (undefined8 *)Function::NewInstance(lVar4,uVar3,0,0);
    if (puVar5 == (undefined8 *)0x0) {
      v8::V8::ToLocalEmpty();
    }
    uVar3 = *puVar5;
    *(undefined8 *)(param_3 + 0x95a0) = uVar6;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
  uVar6 = FUN_0159f658(param_1,param_2,param_3);
  return uVar6;
}

