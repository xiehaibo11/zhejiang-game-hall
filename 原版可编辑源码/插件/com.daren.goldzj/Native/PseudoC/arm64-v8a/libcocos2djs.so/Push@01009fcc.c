
/* v8::internal::Worklist<std::__ndk1::pair<v8::internal::HeapObject, int>, 256>::Push(int,
   std::__ndk1::pair<v8::internal::HeapObject, int>) */

undefined8
v8::internal::Worklist<std::__ndk1::pair<v8::internal::HeapObject,int>,256>::Push
          (long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  void *pvVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)(param_1 + (long)param_2 * 0x50);
  puVar4 = (undefined8 *)*puVar3;
  lVar2 = puVar4[1];
  if (lVar2 == 0x100) {
    base::Mutex::Lock((Mutex *)(param_1 + 0x280));
    *puVar4 = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined8 **)(param_1 + 0x2a8) = puVar4;
    base::Mutex::Unlock((Mutex *)(param_1 + 0x280));
    pvVar1 = operator_new(0x1010);
    lVar2 = 0x10;
    *(undefined8 *)((long)pvVar1 + 8) = 0;
    do {
      puVar4 = (undefined8 *)((long)pvVar1 + lVar2);
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      lVar2 = lVar2 + 0x10;
    } while (puVar4 + 2 != (undefined8 *)((long)pvVar1 + 0x1010));
    *puVar3 = pvVar1;
    lVar2 = *(long *)((long)pvVar1 + 8);
    if (lVar2 == 0x100) {
      return 1;
    }
    puVar3 = (undefined8 *)((long)pvVar1 + lVar2 * 0x10);
    *(long *)((long)pvVar1 + 8) = lVar2 + 1;
  }
  else {
    puVar3 = puVar4 + lVar2 * 2;
    puVar4[1] = lVar2 + 1;
  }
  puVar3[2] = param_3;
  *(undefined4 *)(puVar3 + 3) = param_4;
  return 1;
}

