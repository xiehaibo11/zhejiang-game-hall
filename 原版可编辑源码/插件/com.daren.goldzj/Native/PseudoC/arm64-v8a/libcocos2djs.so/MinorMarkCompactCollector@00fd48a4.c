
/* v8::internal::MinorMarkCompactCollector::MinorMarkCompactCollector(v8::internal::Heap*) */

void __thiscall
v8::internal::MinorMarkCompactCollector::MinorMarkCompactCollector
          (MinorMarkCompactCollector *this,Heap *param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__MinorMarkCompactCollector_01ca80f0;
  *(Heap **)(this + 8) = param_1;
  pvVar1 = operator_new(0x2b8);
  base::Mutex::Mutex((Mutex *)((long)pvVar1 + 0x280));
  lVar4 = 0;
  *(undefined8 *)((long)pvVar1 + 0x2a8) = 0;
  *(undefined4 *)((long)pvVar1 + 0x2b0) = 8;
  puVar3 = (undefined8 *)((long)pvVar1 + 8);
  do {
    pvVar2 = operator_new(0x210);
    memset((void *)((long)pvVar2 + 8),0,0x208);
    puVar3[-1] = pvVar2;
    pvVar2 = operator_new(0x210);
    memset((void *)((long)pvVar2 + 8),0,0x208);
    *puVar3 = pvVar2;
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 10;
  } while (lVar4 < *(int *)((long)pvVar1 + 0x2b0));
  *(void **)(this + 0x18) = pvVar1;
  puVar3 = operator_new(0x20);
  *(undefined4 *)(puVar3 + 2) = 0;
  puVar3[3] = this + 0x68;
  *puVar3 = &PTR__ObjectVisitor_01ca8820;
  puVar3[1] = pvVar1;
  *(undefined8 **)(this + 0x20) = puVar3;
  base::Semaphore::Semaphore((Semaphore *)(this + 0x28),0);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

