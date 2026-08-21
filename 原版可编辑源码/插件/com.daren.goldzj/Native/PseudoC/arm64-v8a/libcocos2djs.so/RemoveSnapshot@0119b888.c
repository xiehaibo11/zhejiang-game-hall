
/* v8::internal::HeapProfiler::RemoveSnapshot(v8::internal::HeapSnapshot*) */

void __thiscall v8::internal::HeapProfiler::RemoveSnapshot(HeapProfiler *this,HeapSnapshot *param_1)

{
  undefined8 *puVar1;
  HeapSnapshot *pHVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = *(undefined8 **)(this + 0x10);
  puVar5 = *(undefined8 **)(this + 0x18);
  if ((puVar4 != puVar5) && ((HeapSnapshot *)*puVar4 != param_1)) {
    puVar3 = puVar4;
    do {
      puVar4 = puVar5;
      if (puVar5 + -1 == puVar3) break;
      puVar1 = puVar3 + 1;
      puVar4 = puVar3 + 1;
      puVar3 = puVar4;
    } while ((HeapSnapshot *)*puVar1 != param_1);
  }
  if (puVar4 + 1 != puVar5) {
    do {
      pHVar2 = (HeapSnapshot *)*puVar4;
      *puVar4 = puVar4[1];
      puVar4[1] = 0;
      if (pHVar2 != (HeapSnapshot *)0x0) {
        HeapSnapshot::~HeapSnapshot(pHVar2);
        operator_delete(pHVar2);
      }
      puVar4 = puVar4 + 1;
    } while (puVar5 + -1 != puVar4);
    puVar5 = *(undefined8 **)(this + 0x18);
    if (puVar5 == puVar4) goto LAB_0119b958;
  }
  do {
    puVar5 = puVar5 + -1;
    pHVar2 = (HeapSnapshot *)*puVar5;
    *puVar5 = 0;
    if (pHVar2 != (HeapSnapshot *)0x0) {
      HeapSnapshot::~HeapSnapshot(pHVar2);
      operator_delete(pHVar2);
    }
  } while (puVar4 != puVar5);
LAB_0119b958:
  *(undefined8 **)(this + 0x18) = puVar4;
  return;
}

