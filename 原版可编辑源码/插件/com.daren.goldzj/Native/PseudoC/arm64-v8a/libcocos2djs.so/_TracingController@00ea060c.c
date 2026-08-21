
/* v8::platform::tracing::TracingController::~TracingController() */

void __thiscall
v8::platform::tracing::TracingController::~TracingController(TracingController *this)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *__ptr;
  byte *pbVar4;
  long *plVar5;
  byte *pbVar6;
  Mutex *pMVar7;
  void *pvVar8;
  byte *pbVar9;
  
  *(undefined ***)this = &PTR__TracingController_01c98208;
  StopTracing(this);
  pMVar7 = *(Mutex **)(this + 0x18);
  base::Mutex::Lock(pMVar7);
  uVar3 = g_category_index;
  while (uVar3 = uVar3 - 1, 2 < uVar3) {
    __ptr = (&g_category_groups)[uVar3];
    (&g_category_groups)[uVar3] = (undefined *)0x0;
    free(__ptr);
  }
  g_category_index = 3;
  base::Mutex::Unlock(pMVar7);
  puVar2 = *(void **)(this + 0x30);
  while (puVar2 != (void *)0x0) {
    pvVar8 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar8;
  }
  pvVar8 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x20) = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  pMVar7 = *(Mutex **)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (pMVar7 != (Mutex *)0x0) {
    base::Mutex::~Mutex(pMVar7);
    operator_delete(pMVar7);
  }
  pvVar8 = *(void **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  if (pvVar8 != (void *)0x0) {
    pbVar9 = *(byte **)((long)pvVar8 + 8);
    if (pbVar9 != (byte *)0x0) {
      pbVar6 = *(byte **)((long)pvVar8 + 0x10);
      pbVar4 = pbVar9;
      if (pbVar6 != pbVar9) {
        bVar1 = pbVar6[-0x18];
        pbVar4 = pbVar6 + -0x18;
        while( true ) {
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar6 + -8));
          }
          if (pbVar9 == pbVar4) break;
          bVar1 = pbVar4[-0x18];
          pbVar6 = pbVar4;
          pbVar4 = pbVar4 + -0x18;
        }
        pbVar4 = *(byte **)((long)pvVar8 + 8);
      }
      *(byte **)((long)pvVar8 + 0x10) = pbVar9;
      operator_delete(pbVar4);
    }
    operator_delete(pvVar8);
  }
  plVar5 = *(long **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ea0760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))();
  return;
}

