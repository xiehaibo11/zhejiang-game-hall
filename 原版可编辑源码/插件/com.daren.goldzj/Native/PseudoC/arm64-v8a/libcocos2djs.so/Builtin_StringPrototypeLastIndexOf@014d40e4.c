
/* v8::internal::Builtin_StringPrototypeLastIndexOf(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Builtin_StringPrototypeLastIndexOf(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  Isolate *pIVar5;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if (param_1 + -4 < 2) {
      pIVar4 = param_3 + 0xa0;
      pIVar5 = param_3 + 0xa0;
    }
    else {
      pIVar4 = (Isolate *)(param_2 + -1);
      if (param_1 + -4 == 2) {
        pIVar5 = param_3 + 0xa0;
      }
      else {
        pIVar5 = (Isolate *)(param_2 + -2);
      }
    }
    uVar2 = String::LastIndexOf(param_3,param_2,pIVar4,pIVar5);
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar2;
  }
  uVar3 = FUN_014d41b8(param_1,param_2,param_3);
  return uVar3;
}

