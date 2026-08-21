
void FUN_0108dd40(undefined8 param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  byte bVar10;
  Isolate *pIVar11;
  ulong uVar12;
  byte bVar13;
  Factory *this;
  ulong uVar14;
  undefined8 *puVar15;
  
  pIVar11 = (Isolate *)(*param_2 & 0xffffffff00000000);
  puVar15 = (undefined8 *)((ulong)pIVar11 | 0x95b8);
  uVar12 = (ulong)pIVar11 | (ulong)*(uint *)(*param_2 - 1);
  if ((CanonicalHandleScope *)*puVar15 == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar12;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                ((CanonicalHandleScope *)*puVar15,uVar12);
    uVar12 = *puVar6;
  }
  bVar2 = *(byte *)(uVar12 + 10);
  bVar3 = bVar2 >> 3;
  bVar5 = bVar2 >> 3 & 1;
  bVar4 = *(byte *)(*param_3 + 10) >> 3;
  if ((0x2f < bVar2) || (bVar5 == 0)) {
switchD_0108de04_caseD_1:
    bVar10 = bVar4;
    goto switchD_0108de04_caseD_0;
  }
  bVar10 = 1;
  bVar13 = 7;
  switch(bVar4) {
  case 0:
    break;
  default:
    goto switchD_0108de04_caseD_1;
  case 2:
    bVar10 = 3;
    break;
  case 4:
    bVar10 = 5;
    break;
  case 6:
    goto switchD_0108de04_caseD_6;
  }
switchD_0108de04_caseD_0:
  bVar13 = bVar10;
  if (bVar3 != bVar10) {
switchD_0108de04_caseD_6:
    uVar12 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
    if ((CanonicalHandleScope *)*puVar15 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar11 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar11 + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar11);
      }
      *(ulong **)(pIVar11 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar12;
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  ((CanonicalHandleScope *)*puVar15,uVar12);
    }
    uVar1 = *(uint *)(*param_2 + 7);
    if ((uVar1 == *(uint *)(pIVar11 + 0x168)) ||
       (((bVar2 & 0xf0) == 0x20) == ((bVar13 & 0x1e) == 4))) {
      v8::internal::JSObject::MigrateToMap(pIVar11,param_2,param_3,0);
    }
    else {
      this = (Factory *)(*param_2 & 0xffffffff00000000);
      puVar7 = (ulong *)v8::internal::Factory::NewFixedDoubleArray
                                  (this,*(int *)(((ulong)this | (ulong)uVar1) + 3) >> 1);
      iVar8 = -1;
      if ((bVar2 < 0x28) && (bVar5 == 0)) {
        uVar12 = *param_2;
        if (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) == 0x423) {
          iVar8 = *(int *)(uVar12 + 0xb) >> 1;
        }
        else {
          iVar8 = -1;
        }
      }
      FUN_0108f4c0(this,*puVar6,0,*puVar7,bVar3,0,iVar8,0xffffffff);
      v8::internal::JSObject::MigrateToMap
                ((ulong)*(uint *)((long)param_2 + 4) << 0x20,param_2,param_3,0);
      uVar14 = *param_2;
      uVar12 = *puVar7;
      *(int *)(uVar14 + 7) = (int)uVar12;
      if ((uVar12 & 1) != 0) {
        uVar9 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar12);
          uVar9 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar12);
        }
      }
    }
    if (v8::internal::FLAG_trace_elements_transitions != '\0') {
      uVar12 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
      if ((CanonicalHandleScope *)*puVar15 == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar11 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar11 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(pIVar11);
        }
        *(ulong **)(pIVar11 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar12;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    ((CanonicalHandleScope *)*puVar15,uVar12);
      }
      v8::internal::JSObject::PrintElementsTransition(waitpid,param_2,bVar3,puVar6,bVar13,puVar7);
      return;
    }
  }
  return;
}

