
/* v8::internal::Runtime_CreateIterResultObject(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_CreateIterResultObject(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong local_28;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    local_28 = param_2[-1];
    uVar2 = Object::BooleanValue((Object *)&local_28,param_3);
    puVar3 = (undefined8 *)Factory::NewJSIteratorResult((Factory *)param_3,param_2,uVar2 & 1);
    uVar5 = *puVar3;
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar5;
  }
  uVar4 = FUN_011d42f8(param_1,param_2,param_3);
  return uVar4;
}

