
/* v8::internal::Runtime_ThrowSuperAlreadyCalledError(int, unsigned long*, v8::internal::Isolate*)
    */

undefined8
v8::internal::Runtime_ThrowSuperAlreadyCalledError(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    puVar2 = (undefined8 *)Factory::NewReferenceError((Factory *)param_3,0xb3,0,0,0);
    uVar3 = Isolate::Throw(param_3,*puVar2,0);
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar4;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return uVar3;
  }
  uVar4 = FUN_01555b30(param_1,param_2,param_3);
  return uVar4;
}

