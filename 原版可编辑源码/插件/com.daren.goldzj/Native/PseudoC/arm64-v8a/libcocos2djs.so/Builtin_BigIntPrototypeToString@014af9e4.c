
/* v8::internal::Builtin_BigIntPrototypeToString(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Builtin_BigIntPrototypeToString(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x95a0);
    lVar2 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    pIVar1 = (Isolate *)(param_2 + -1);
    if (param_1 < 6) {
      pIVar1 = param_3 + 0xa0;
    }
    uVar3 = FUN_014aff58(param_2,pIVar1,param_3,"BigInt.prototype.toString");
    *(undefined8 *)(param_3 + 0x95a0) = uVar4;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar2) {
      *(long *)(param_3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar3;
  }
  uVar4 = FUN_014afaa8(param_1,param_2,param_3);
  return uVar4;
}

