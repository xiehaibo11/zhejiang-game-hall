
/* v8::internal::Runtime_AllocateHeapNumber(int, unsigned long*, v8::internal::Isolate*) */

long v8::internal::Runtime_AllocateHeapNumber(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x95a0);
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    plVar2 = (long *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>((Factory *)param_3);
    *(undefined8 *)(*plVar2 + 3) = 0;
    lVar4 = *plVar2;
    if (param_3 != (Isolate *)0x0) {
      *(undefined8 *)(param_3 + 0x95a0) = uVar1;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar3) {
        *(long *)(param_3 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(param_3);
      }
    }
    return lVar4;
  }
  lVar3 = FUN_011ce6e4(param_1,param_2,param_3);
  return lVar3;
}

