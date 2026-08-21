
void FUN_01080894(undefined8 param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  byte bVar8;
  Isolate *pIVar9;
  ulong uVar10;
  byte bVar11;
  Factory *this;
  ulong uVar12;
  undefined8 *puVar13;
  
  pIVar9 = (Isolate *)(*param_2 & 0xffffffff00000000);
  puVar13 = (undefined8 *)((ulong)pIVar9 | 0x95b8);
  uVar10 = (ulong)pIVar9 | (ulong)*(uint *)(*param_2 - 1);
  if ((CanonicalHandleScope *)*puVar13 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar10;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                ((CanonicalHandleScope *)*puVar13,uVar10);
    uVar10 = *puVar5;
  }
  bVar2 = *(byte *)(uVar10 + 10);
  bVar3 = bVar2 >> 3;
  bVar4 = *(byte *)(*param_3 + 10) >> 3;
  if ((0x2f < bVar2) || ((bVar2 >> 3 & 1) == 0)) {
switchD_01080958_caseD_1:
    bVar8 = bVar4;
    goto switchD_01080958_caseD_0;
  }
  bVar8 = 1;
  bVar11 = 7;
  switch(bVar4) {
  case 0:
    break;
  default:
    goto switchD_01080958_caseD_1;
  case 2:
    bVar8 = 3;
    break;
  case 4:
    bVar8 = 5;
    break;
  case 6:
    goto switchD_01080958_caseD_6;
  }
switchD_01080958_caseD_0:
  bVar11 = bVar8;
  if (bVar3 != bVar8) {
switchD_01080958_caseD_6:
    uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
    if ((CanonicalHandleScope *)*puVar13 == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar10;
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  ((CanonicalHandleScope *)*puVar13,uVar10);
    }
    uVar1 = *(uint *)(*param_2 + 7);
    if ((uVar1 == *(uint *)(pIVar9 + 0x168)) || (((bVar2 & 0xf0) == 0x20) == ((bVar11 & 0x1e) == 4))
       ) {
      v8::internal::JSObject::MigrateToMap(pIVar9,param_2,param_3,0);
    }
    else {
      this = (Factory *)(*param_2 & 0xffffffff00000000);
      puVar6 = (ulong *)v8::internal::Factory::NewUninitializedFixedArray
                                  (this,*(int *)(((ulong)this | (ulong)uVar1) + 3) >> 1);
      FUN_010821fc(this,*puVar5,0,*puVar6,bVar3,0,0xffffffff);
      v8::internal::JSObject::MigrateToMap
                ((ulong)*(uint *)((long)param_2 + 4) << 0x20,param_2,param_3,0);
      uVar12 = *param_2;
      uVar10 = *puVar6;
      *(int *)(uVar12 + 7) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar7 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar12,uVar12 + 7,uVar10);
          uVar7 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar12,uVar12 + 7,uVar10);
        }
      }
    }
    if (v8::internal::FLAG_trace_elements_transitions != '\0') {
      uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
      if ((CanonicalHandleScope *)*puVar13 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar10;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    ((CanonicalHandleScope *)*puVar13,uVar10);
      }
      v8::internal::JSObject::PrintElementsTransition(waitpid,param_2,bVar3,puVar5,bVar11,puVar6);
      return;
    }
  }
  return;
}

