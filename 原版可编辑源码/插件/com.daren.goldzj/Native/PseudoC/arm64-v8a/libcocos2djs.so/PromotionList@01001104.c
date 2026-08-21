
/* v8::internal::Scavenger::PromotionList::PromotionList(int) */

void __thiscall
v8::internal::Scavenger::PromotionList::PromotionList(PromotionList *this,int param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  PromotionList *pPVar5;
  
  base::Mutex::Mutex((Mutex *)(this + 0x280));
  *(undefined8 *)(this + 0x2a8) = 0;
  *(int *)(this + 0x2b0) = param_1;
  if (0 < param_1) {
    lVar4 = 0;
    do {
      pvVar2 = operator_new(0x1010);
      lVar3 = 0x10;
      *(undefined8 *)((long)pvVar2 + 8) = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar2 + lVar3);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
        lVar3 = lVar3 + 0x10;
      } while (puVar1 + 2 != (undefined8 *)((long)pvVar2 + 0x1010));
      *(void **)(this + lVar4 * 0x50) = pvVar2;
      pvVar2 = operator_new(0x1010);
      lVar3 = 0x10;
      *(undefined8 *)((long)pvVar2 + 8) = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar2 + lVar3);
        *puVar1 = 0;
        *(undefined4 *)(puVar1 + 1) = 0;
        lVar3 = lVar3 + 0x10;
      } while (puVar1 + 2 != (undefined8 *)((long)pvVar2 + 0x1010));
      *(void **)(this + lVar4 * 0x50 + 8) = pvVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x2b0));
  }
  base::Mutex::Mutex((Mutex *)(this + 0x538));
  *(undefined8 *)(this + 0x560) = 0;
  *(int *)(this + 0x568) = param_1;
  if (0 < param_1) {
    lVar4 = 0;
    pPVar5 = this + 0x2c0;
    do {
      pvVar2 = operator_new(0x70);
      *(undefined8 *)((long)pvVar2 + 0x10) = 0;
      *(undefined8 *)((long)pvVar2 + 0x18) = 0;
      *(undefined8 *)((long)pvVar2 + 8) = 0;
      *(undefined8 *)((long)pvVar2 + 0x28) = 0;
      *(undefined8 *)((long)pvVar2 + 0x30) = 0;
      *(undefined8 *)((long)pvVar2 + 0x40) = 0;
      *(undefined8 *)((long)pvVar2 + 0x48) = 0;
      *(undefined8 *)((long)pvVar2 + 0x58) = 0;
      *(undefined8 *)((long)pvVar2 + 0x60) = 0;
      *(void **)(pPVar5 + -8) = pvVar2;
      pvVar2 = operator_new(0x70);
      *(undefined8 *)((long)pvVar2 + 0x10) = 0;
      *(undefined8 *)((long)pvVar2 + 0x18) = 0;
      *(undefined8 *)((long)pvVar2 + 8) = 0;
      *(undefined8 *)((long)pvVar2 + 0x28) = 0;
      *(undefined8 *)((long)pvVar2 + 0x30) = 0;
      *(undefined8 *)((long)pvVar2 + 0x40) = 0;
      *(undefined8 *)((long)pvVar2 + 0x48) = 0;
      *(undefined8 *)((long)pvVar2 + 0x58) = 0;
      *(undefined8 *)((long)pvVar2 + 0x60) = 0;
      *(void **)pPVar5 = pvVar2;
      lVar4 = lVar4 + 1;
      pPVar5 = pPVar5 + 0x50;
    } while (lVar4 < *(int *)(this + 0x568));
  }
  return;
}

