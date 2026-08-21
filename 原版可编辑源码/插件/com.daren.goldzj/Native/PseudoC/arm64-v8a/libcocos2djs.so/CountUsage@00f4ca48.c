
/* v8::internal::Isolate::CountUsage(v8::Isolate::UseCounterFeature) */

void v8::internal::Isolate::CountUsage(Isolate *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x89c8) != 0) {
    Heap::IncrementDeferredCount((Heap *)(param_1 + 0x8850));
    return;
  }
  if (*(code **)(param_1 + 0xc658) != (code *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x95a0);
    lVar2 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
    (**(code **)(param_1 + 0xc658))(param_1);
    *(undefined8 *)(param_1 + 0x95a0) = uVar1;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar2) {
      *(long *)(param_1 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_1);
      return;
    }
  }
  return;
}

