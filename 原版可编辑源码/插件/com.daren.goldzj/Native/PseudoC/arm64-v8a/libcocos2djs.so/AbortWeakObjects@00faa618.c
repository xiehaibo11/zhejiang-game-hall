
/* v8::internal::MarkCompactCollector::AbortWeakObjects() */

void __thiscall v8::internal::MarkCompactCollector::AbortWeakObjects(MarkCompactCollector *this)

{
  MarkCompactCollector *pMVar1;
  undefined8 *puVar2;
  long lVar3;
  MarkCompactCollector *pMVar4;
  void *pvVar5;
  
  if (0 < *(int *)(this + 0xb30)) {
    lVar3 = 0;
    pMVar4 = this + 0x888;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0xb30));
  }
  base::Mutex::Lock((Mutex *)(this + 0xb00));
  puVar2 = *(void **)(this + 0xb28);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0xb28) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0xb00));
  if (0 < *(int *)(this + 0xde8)) {
    lVar3 = 0;
    pMVar4 = this + 0xb40;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0xde8));
  }
  base::Mutex::Lock((Mutex *)(this + 0xdb8));
  puVar2 = *(void **)(this + 0xde0);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0xde0) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0xdb8));
  if (0 < *(int *)(this + 0x10a0)) {
    lVar3 = 0;
    pMVar4 = this + 0xdf8;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x10a0));
  }
  base::Mutex::Lock((Mutex *)(this + 0x1070));
  puVar2 = *(void **)(this + 0x1098);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x1098) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x1070));
  if (0 < *(int *)(this + 0x1358)) {
    lVar3 = 0;
    pMVar4 = this + 0x10b0;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x1358));
  }
  base::Mutex::Lock((Mutex *)(this + 0x1328));
  puVar2 = *(void **)(this + 0x1350);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x1350) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x1328));
  if (0 < *(int *)(this + 0x1610)) {
    lVar3 = 0;
    pMVar4 = this + 0x1368;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x1610));
  }
  base::Mutex::Lock((Mutex *)(this + 0x15e0));
  puVar2 = *(void **)(this + 0x1608);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x1608) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x15e0));
  if (0 < *(int *)(this + 0x18c8)) {
    lVar3 = 0;
    pMVar4 = this + 0x1620;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x18c8));
  }
  base::Mutex::Lock((Mutex *)(this + 0x1898));
  puVar2 = *(void **)(this + 0x18c0);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x18c0) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x1898));
  if (0 < *(int *)(this + 0x1b80)) {
    lVar3 = 0;
    pMVar4 = this + 0x18d8;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x1b80));
  }
  base::Mutex::Lock((Mutex *)(this + 0x1b50));
  puVar2 = *(void **)(this + 0x1b78);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x1b78) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x1b50));
  if (0 < *(int *)(this + 0x1e38)) {
    lVar3 = 0;
    pMVar4 = this + 0x1b90;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x1e38));
  }
  base::Mutex::Lock((Mutex *)(this + 0x1e08));
  puVar2 = *(void **)(this + 0x1e30);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x1e30) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x1e08));
  if (0 < *(int *)(this + 0x20f0)) {
    lVar3 = 0;
    pMVar4 = this + 0x1e48;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x20f0));
  }
  base::Mutex::Lock((Mutex *)(this + 0x20c0));
  puVar2 = *(void **)(this + 0x20e8);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x20e8) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x20c0));
  if (0 < *(int *)(this + 0x23a8)) {
    lVar3 = 0;
    pMVar4 = this + 0x2100;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x23a8));
  }
  base::Mutex::Lock((Mutex *)(this + 0x2378));
  puVar2 = *(void **)(this + 0x23a0);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x23a0) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x2378));
  if (0 < *(int *)(this + 0x2660)) {
    lVar3 = 0;
    pMVar4 = this + 0x23b8;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*(long *)pMVar4 + 8) = 0;
      pMVar1 = pMVar4 + -8;
      pMVar4 = pMVar4 + 0x50;
      *(undefined8 *)(*(long *)pMVar1 + 8) = 0;
    } while (lVar3 < *(int *)(this + 0x2660));
  }
  base::Mutex::Lock((Mutex *)(this + 0x2630));
  puVar2 = *(void **)(this + 0x2658);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(this + 0x2658) = 0;
  base::Mutex::Unlock((Mutex *)(this + 0x2630));
  return;
}

