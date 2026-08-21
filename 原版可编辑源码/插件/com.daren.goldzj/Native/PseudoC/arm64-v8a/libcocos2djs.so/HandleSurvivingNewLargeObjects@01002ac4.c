
/* v8::internal::ScavengerCollector::HandleSurvivingNewLargeObjects() */

void __thiscall
v8::internal::ScavengerCollector::HandleSurvivingNewLargeObjects(ScavengerCollector *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  for (plVar5 = *(long **)(this + 0x30); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    uVar2 = plVar5[2];
    *(undefined4 *)(uVar2 - 1) = *(undefined4 *)(plVar5 + 3);
    OldLargeObjectSpace::PromoteNewLargeObject
              (*(OldLargeObjectSpace **)(*(long *)(this + 8) + 0x108),
               (LargePage *)(uVar2 & 0xfffffffffffc0000));
  }
  if (*(long *)(this + 0x38) != 0) {
    puVar1 = *(void **)(this + 0x30);
    while (puVar1 != (void *)0x0) {
      pvVar6 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar6;
    }
    lVar3 = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x30) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x20) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x38) = 0;
  }
  return;
}

