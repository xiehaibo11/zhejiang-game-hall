
void FUN_010af404(undefined8 param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong *puVar5;
  ulong *puVar6;
  byte bVar7;
  Isolate *pIVar8;
  ulong uVar9;
  byte bVar10;
  undefined8 *puVar11;
  
  pIVar8 = (Isolate *)(*param_2 & 0xffffffff00000000);
  puVar11 = (undefined8 *)((ulong)pIVar8 | 0x95b8);
  uVar9 = (ulong)pIVar8 | (ulong)*(uint *)(*param_2 - 1);
  if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                ((CanonicalHandleScope *)*puVar11,uVar9);
    uVar9 = *puVar5;
  }
  bVar2 = *(byte *)(uVar9 + 10);
  bVar3 = bVar2 >> 3;
  bVar4 = *(byte *)(*param_3 + 10) >> 3;
  if ((0x2f < bVar2) || ((bVar2 >> 3 & 1) == 0)) {
switchD_010af4c4_caseD_1:
    bVar7 = bVar4;
    goto switchD_010af4c4_caseD_0;
  }
  bVar7 = 1;
  bVar10 = 7;
  switch(bVar4) {
  case 0:
    break;
  default:
    goto switchD_010af4c4_caseD_1;
  case 2:
    bVar7 = 3;
    break;
  case 4:
    bVar7 = 5;
    break;
  case 6:
    goto switchD_010af4c4_caseD_6;
  }
switchD_010af4c4_caseD_0:
  bVar10 = bVar7;
  if (bVar3 != bVar7) {
switchD_010af4c4_caseD_6:
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
    if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar9;
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  ((CanonicalHandleScope *)*puVar11,uVar9);
    }
    uVar1 = *(uint *)(*param_2 + 7);
    if ((uVar1 != *(uint *)(pIVar8 + 0x168)) && (((bVar2 & 0xf0) == 0x20) != ((bVar10 & 0x1e) == 4))
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_010b08a4(param_2,puVar5,bVar3,
                   *(int *)((*param_2 & 0xffffffff00000000 | (ulong)uVar1) + 3) >> 1);
    }
    v8::internal::JSObject::MigrateToMap(pIVar8,param_2,param_3,0);
    if (v8::internal::FLAG_trace_elements_transitions != '\0') {
      uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
      if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar9;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    ((CanonicalHandleScope *)*puVar11,uVar9);
      }
      v8::internal::JSObject::PrintElementsTransition(waitpid,param_2,bVar3,puVar5,bVar10,puVar6);
      return;
    }
  }
  return;
}

