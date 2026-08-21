
/* v8::internal::JSObject::NormalizeElements(v8::internal::Handle<v8::internal::JSObject>) */

ulong * v8::internal::JSObject::NormalizeElements(ulong *param_1)

{
  byte bVar1;
  ulong *puVar2;
  long *plVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  Isolate *pIVar13;
  long lVar14;
  ulong uVar15;
  
  uVar9 = *param_1;
  pIVar13 = (Isolate *)(uVar9 & 0xffffffff00000000);
  uVar15 = (ulong)pIVar13 | (ulong)*(uint *)(uVar9 + 7);
  bVar1 = *(byte *)(((ulong)pIVar13 | 10) + (ulong)*(uint *)(uVar9 - 1)) >> 3;
  if ((byte)(bVar1 - 0xd) < 2) {
    uVar15 = (ulong)pIVar13 | (ulong)*(uint *)(uVar15 + 0xb);
  }
  if (*(short *)((uVar15 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar15 - 1)) == 0x7b) {
    if (*(CanonicalHandleScope **)(pIVar13 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar13 + 0x95b8),uVar15);
      return puVar2;
    }
    puVar2 = *(ulong **)(pIVar13 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar13 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar13);
    }
    *(ulong **)(pIVar13 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar15;
    return puVar2;
  }
  plVar3 = *(long **)(ElementsAccessor::elements_accessors_ +
                     ((ulong)*(byte *)(((ulong)pIVar13 | 10) + (ulong)*(uint *)(uVar9 - 1)) & 0xf8))
  ;
  puVar2 = (ulong *)(**(code **)(*plVar3 + 0xb0))(plVar3,param_1);
  uVar9 = *param_1;
  pIVar4 = (Isolate *)(uVar9 & 0xffffffff00000000);
  if ((byte)(bVar1 - 0xd) < 2) {
    uVar9 = (ulong)pIVar4 | (ulong)*(uint *)(uVar9 - 1);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
    }
    uVar6 = Map::TransitionElementsTo((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar5,0xe);
    MigrateToMap(pIVar13,param_1,uVar6,0);
    uVar15 = *puVar2;
    uVar9 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 7);
    *(int *)(uVar9 + 0xb) = (int)uVar15;
    if ((uVar15 & 1) == 0) goto LAB_010d5f1c;
    uVar11 = uVar15 & 0xfffffffffffc0000;
    uVar10 = *(ulong *)(uVar11 + 8);
    lVar14 = uVar9 + 0xb;
    uVar8 = (uint)uVar10;
  }
  else {
    uVar12 = 0x10;
    if ((*(byte *)(((ulong)pIVar4 | 10) + (ulong)*(uint *)(uVar9 - 1)) & 0xf8) != 0x78) {
      uVar12 = 0xc;
    }
    uVar9 = (ulong)pIVar4 | (ulong)*(uint *)(uVar9 - 1);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
    }
    uVar6 = Map::TransitionElementsTo((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar5,uVar12);
    MigrateToMap(pIVar13,param_1,uVar6,0);
    uVar9 = *param_1;
    uVar15 = *puVar2;
    *(int *)(uVar9 + 7) = (int)uVar15;
    if ((uVar15 & 1) == 0) goto LAB_010d5f1c;
    uVar11 = uVar15 & 0xfffffffffffc0000;
    uVar10 = *(ulong *)(uVar11 + 8);
    lVar14 = uVar9 + 7;
    uVar8 = (uint)uVar10;
  }
  if ((uVar8 >> 0x12 & 1) != 0) {
    Heap_MarkingBarrierSlow(uVar9,lVar14,uVar15);
    uVar10 = *(ulong *)(uVar11 | 8);
  }
  if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(uVar9,lVar14,uVar15);
  }
LAB_010d5f1c:
  lVar14 = *(long *)(pIVar13 + 0x9520);
  if (*(char *)(lVar14 + 0x1838) == '\0') {
    *(char *)(lVar14 + 0x1838) = '\x01';
    piVar7 = (int *)StatsCounterBase::FindLocationInStatsTable
                              ((StatsCounterBase *)(lVar14 + 0x1820));
    *(int **)(lVar14 + 0x1830) = piVar7;
  }
  else {
    piVar7 = *(int **)(lVar14 + 0x1830);
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  return puVar2;
}

