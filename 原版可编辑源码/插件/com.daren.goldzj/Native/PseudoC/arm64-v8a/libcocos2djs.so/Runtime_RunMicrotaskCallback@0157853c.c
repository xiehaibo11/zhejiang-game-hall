
/* v8::internal::Runtime_RunMicrotaskCallback(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_RunMicrotaskCallback(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x95a0);
    lVar1 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    if ((int)*param_2 == 0) {
      pcVar4 = (code *)0x0;
    }
    else {
      pcVar4 = *(code **)(*param_2 + 3);
    }
    if ((int)param_2[-1] == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_2[-1] + 3);
    }
    (*pcVar4)(uVar2);
    if (*(int *)(param_3 + 0x2c20) == *(int *)(param_3 + 0xa8)) {
      uVar2 = *(undefined8 *)(param_3 + 0xa0);
    }
    else {
      uVar2 = Isolate::PromoteScheduledException(param_3);
    }
    *(undefined8 *)(param_3 + 0x95a0) = uVar3;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar1) {
      *(long *)(param_3 + 0x95a8) = lVar1;
      HandleScope::DeleteExtensions(param_3);
    }
    return uVar2;
  }
  uVar3 = FUN_01578620(param_1,param_2,param_3);
  return uVar3;
}

