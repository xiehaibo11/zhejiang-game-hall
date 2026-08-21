
/* v8::internal::Worklist<v8::internal::Scavenger::PromotionListEntry, 4>::Pop(int,
   v8::internal::Scavenger::PromotionListEntry*) */

undefined8 __thiscall
v8::internal::Worklist<v8::internal::Scavenger::PromotionListEntry,4>::Pop
          (Worklist<v8::internal::Scavenger::PromotionListEntry,4> *this,int param_1,
          PromotionListEntry *param_2)

{
  Mutex *this_00;
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  Worklist<v8::internal::Scavenger::PromotionListEntry,4> *pWVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pWVar4 = this + (long)param_1 * 0x50 + 8;
  lVar1 = *(long *)pWVar4;
  if (*(long *)(lVar1 + 8) == 0) {
    puVar2 = *(undefined8 **)(this + (long)param_1 * 0x50);
    if (puVar2[1] == 0) {
      if (*(long *)(this + 0x2a8) == 0) {
        return 0;
      }
      this_00 = (Mutex *)(this + 0x280);
      base::Mutex::Lock(this_00);
      puVar2 = *(undefined8 **)(this + 0x2a8);
      if (puVar2 == (undefined8 *)0x0) {
        base::Mutex::Unlock(this_00);
        return 0;
      }
      *(undefined8 *)(this + 0x2a8) = *puVar2;
      base::Mutex::Unlock(this_00);
      if (*(void **)pWVar4 != (void *)0x0) {
        operator_delete(*(void **)pWVar4);
      }
      *(undefined8 **)pWVar4 = puVar2;
      lVar1 = puVar2[1];
    }
    else {
      *(undefined8 **)pWVar4 = puVar2;
      *(long *)(this + (long)param_1 * 0x50) = lVar1;
      lVar1 = puVar2[1];
    }
    if (lVar1 == 0) {
      return 1;
    }
    puVar2[1] = lVar1 + -1;
    puVar2 = puVar2 + (lVar1 + -1) * 3;
  }
  else {
    lVar3 = *(long *)(lVar1 + 8) + -1;
    *(long *)(lVar1 + 8) = lVar3;
    puVar2 = (undefined8 *)(lVar1 + lVar3 * 0x18);
  }
  uVar6 = puVar2[3];
  uVar5 = puVar2[2];
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(puVar2 + 4);
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)param_2 = uVar5;
  return 1;
}

