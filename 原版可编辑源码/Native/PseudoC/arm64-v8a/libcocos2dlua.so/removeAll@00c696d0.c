
/* cocostudio::TriggerMng::removeAll() */

void __thiscall cocostudio::TriggerMng::removeAll(TriggerMng *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  for (plVar4 = *(long **)(this + 0x18); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    (**(code **)(*(long *)plVar4[3] + 0x28))();
    if ((long *)plVar4[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[3] + 8))();
    }
    plVar4[3] = 0;
  }
  if (*(long *)(this + 0x20) != 0) {
    puVar1 = *(void **)(this + 0x18);
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 0x10);
    *(undefined8 *)(this + 0x18) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  return;
}

