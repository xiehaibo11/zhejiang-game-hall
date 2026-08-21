
/* v8::internal::MarkCompactCollector::MarkingWorklist::Clear() */

void __thiscall v8::internal::MarkCompactCollector::MarkingWorklist::Clear(MarkingWorklist *this)

{
  MarkingWorklist *pMVar1;
  undefined8 *puVar2;
  long lVar3;
  MarkingWorklist *pMVar4;
  void *pvVar5;
  
  if (0 < *(int *)(this + 0x2b0)) {
    lVar3 = 0;
    pMVar4 = this + 8;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x2b0));
  }
  base::Mutex::Lock((Mutex *)(this + 0x280));
  puVar2 = *(void **)(this + 0x2a8);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x2a8) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x280));
  if (0 < *(int *)(this + 0x568)) {
    lVar3 = 0;
    pMVar4 = this + 0x2c0;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x568));
  }
  base::Mutex::Lock((Mutex *)(this + 0x538));
  puVar2 = *(void **)(this + 0x560);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x560) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x538));
  if (0 < *(int *)(this + 0x820)) {
    lVar3 = 0;
    pMVar4 = this + 0x578;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x820));
  }
  base::Mutex::Lock((Mutex *)(this + 0x7f0));
  puVar2 = *(void **)(this + 0x818);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x818) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x7f0));
  return;
}

