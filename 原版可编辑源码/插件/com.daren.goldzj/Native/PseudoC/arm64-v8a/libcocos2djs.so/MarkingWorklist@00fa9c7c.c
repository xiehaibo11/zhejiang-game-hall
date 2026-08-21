
/* v8::internal::MarkCompactCollector::MarkingWorklist::MarkingWorklist(v8::internal::Heap*) */

void __thiscall
v8::internal::MarkCompactCollector::MarkingWorklist::MarkingWorklist
          (MarkingWorklist *this,Heap *param_1)

{
  void *pvVar1;
  long lVar2;
  MarkingWorklist *pMVar3;
  
  base::Mutex::Mutex((Mutex *)(this + 0x280));
  lVar2 = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined4 *)(this + 0x2b0) = 8;
  pMVar3 = this + 8;
  do {
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)(pMVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)pMVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pMVar3 = pMVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x2b0));
  base::Mutex::Mutex((Mutex *)(this + 0x538));
  lVar2 = 0;
  *(undefined8 *)(this + 0x560) = 0;
  *(undefined4 *)(this + 0x568) = 8;
  pMVar3 = this + 0x2c0;
  do {
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)(pMVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x210);
    memset((void *)((long)pvVar1 + 8),0,0x208);
    *(void **)pMVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pMVar3 = pMVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x568));
  base::Mutex::Mutex((Mutex *)(this + 0x7f0));
  lVar2 = 0;
  *(undefined8 *)(this + 0x818) = 0;
  *(undefined4 *)(this + 0x820) = 8;
  pMVar3 = this + 0x578;
  do {
    pvVar1 = operator_new(0x90);
    *(undefined8 *)((long)pvVar1 + 0x10) = 0;
    *(undefined8 *)((long)pvVar1 + 8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x20) = 0;
    *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    *(undefined8 *)((long)pvVar1 + 0x30) = 0;
    *(undefined8 *)((long)pvVar1 + 0x28) = 0;
    *(undefined8 *)((long)pvVar1 + 0x40) = 0;
    *(undefined8 *)((long)pvVar1 + 0x38) = 0;
    *(undefined8 *)((long)pvVar1 + 0x50) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48) = 0;
    *(undefined8 *)((long)pvVar1 + 0x60) = 0;
    *(undefined8 *)((long)pvVar1 + 0x58) = 0;
    *(undefined8 *)((long)pvVar1 + 0x70) = 0;
    *(undefined8 *)((long)pvVar1 + 0x68) = 0;
    *(undefined8 *)((long)pvVar1 + 0x80) = 0;
    *(undefined8 *)((long)pvVar1 + 0x78) = 0;
    *(undefined8 *)((long)pvVar1 + 0x88) = 0;
    *(void **)(pMVar3 + -8) = pvVar1;
    pvVar1 = operator_new(0x90);
    *(undefined8 *)((long)pvVar1 + 0x10) = 0;
    *(undefined8 *)((long)pvVar1 + 8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x20) = 0;
    *(undefined8 *)((long)pvVar1 + 0x18) = 0;
    *(undefined8 *)((long)pvVar1 + 0x30) = 0;
    *(undefined8 *)((long)pvVar1 + 0x28) = 0;
    *(undefined8 *)((long)pvVar1 + 0x40) = 0;
    *(undefined8 *)((long)pvVar1 + 0x38) = 0;
    *(undefined8 *)((long)pvVar1 + 0x50) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48) = 0;
    *(undefined8 *)((long)pvVar1 + 0x60) = 0;
    *(undefined8 *)((long)pvVar1 + 0x58) = 0;
    *(undefined8 *)((long)pvVar1 + 0x70) = 0;
    *(undefined8 *)((long)pvVar1 + 0x68) = 0;
    *(undefined8 *)((long)pvVar1 + 0x80) = 0;
    *(undefined8 *)((long)pvVar1 + 0x78) = 0;
    *(undefined8 *)((long)pvVar1 + 0x88) = 0;
    *(void **)pMVar3 = pvVar1;
    lVar2 = lVar2 + 1;
    pMVar3 = pMVar3 + 0x50;
  } while (lVar2 < *(int *)(this + 0x820));
  return;
}

