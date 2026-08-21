
/* v8::internal::Runtime_GetUndetectable(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_GetUndetectable(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  ObjectTemplate *this;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    this = (ObjectTemplate *)ObjectTemplate::New(param_3,0);
    ObjectTemplate::MarkAsUndetectable(this);
    ObjectTemplate::SetCallAsFunctionHandler(this,FUN_015af948,0);
    uVar2 = v8::Isolate::GetCurrentContext((Isolate *)param_3);
    puVar3 = (undefined8 *)ObjectTemplate::NewInstance(this,uVar2);
    if (puVar3 == (undefined8 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar3;
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar2;
  }
  uVar4 = FUN_0159f314(param_1,param_2,param_3);
  return uVar4;
}

