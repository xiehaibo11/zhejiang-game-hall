
/* v8::internal::Builtin_ErrorPrototypeToString(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Builtin_ErrorPrototypeToString(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    pIVar3 = (Isolate *)ErrorUtils::ToString(param_3);
    pIVar1 = param_3 + 0x180;
    if (pIVar3 != (Isolate *)0x0) {
      pIVar1 = pIVar3;
    }
    uVar5 = *(undefined8 *)pIVar1;
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar5;
  }
  uVar4 = FUN_014c51ec(param_1,param_2,param_3);
  return uVar4;
}

