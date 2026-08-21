
/* v8::internal::ScavengerCollector::ClearYoungEphemerons(v8::internal::Worklist<v8::internal::EphemeronHashTable,
   128>*) */

void __thiscall
v8::internal::ScavengerCollector::ClearYoungEphemerons(ScavengerCollector *this,Worklist *param_1)

{
  Worklist *pWVar1;
  Mutex *this_00;
  undefined8 *puVar2;
  Worklist *pWVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  
  if (0 < *(int *)(param_1 + 0x2b0)) {
    lVar4 = 0;
    pWVar3 = param_1 + 8;
    do {
      FUN_0100d6dc(*(undefined8 *)pWVar3,this);
      FUN_0100d6dc(*(undefined8 *)(pWVar3 + -8),this);
      lVar4 = lVar4 + 1;
      pWVar3 = pWVar3 + 0x50;
    } while (lVar4 < *(int *)(param_1 + 0x2b0));
  }
  this_00 = (Mutex *)(param_1 + 0x280);
  base::Mutex::Lock(this_00);
  for (plVar6 = *(long **)(param_1 + 0x2a8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    FUN_0100d6dc(plVar6,this);
  }
  base::Mutex::Unlock(this_00);
  if (0 < *(int *)(param_1 + 0x2b0)) {
    lVar4 = 0;
    pWVar3 = param_1 + 8;
    do {
      lVar4 = lVar4 + 1;
      *(undefined8 *)(*(long *)pWVar3 + 8) = 0;
      pWVar1 = pWVar3 + -8;
      pWVar3 = pWVar3 + 0x50;
      *(undefined8 *)(*(long *)pWVar1 + 8) = 0;
    } while (lVar4 < *(int *)(param_1 + 0x2b0));
  }
  base::Mutex::Lock(this_00);
  puVar2 = *(void **)(param_1 + 0x2a8);
  while (puVar2 != (void *)0x0) {
    pvVar5 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar5;
  }
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  base::Mutex::Unlock(this_00);
  return;
}

