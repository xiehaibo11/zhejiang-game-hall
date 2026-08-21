
/* v8::internal::JSObject::TransitionElementsKind(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::ElementsKind) */

void v8::internal::JSObject::TransitionElementsKind(ulong *param_1,ulong param_2)

{
  byte bVar1;
  long *plVar2;
  CanonicalHandleScope *pCVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  
  bVar1 = *(byte *)((*param_1 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_1 - 1));
  if (0x2f < bVar1 || (bVar1 & 8) == 0) {
switchD_010d609c_caseD_1:
    uVar6 = param_2 & 0xffffffff;
    goto switchD_010d609c_caseD_0;
  }
  uVar7 = 7;
  uVar6 = 1;
  switch(param_2 & 0xff) {
  case 0:
    break;
  default:
    goto switchD_010d609c_caseD_1;
  case 2:
    uVar6 = 3;
    break;
  case 4:
    uVar6 = 5;
    break;
  case 6:
    goto switchD_010d609c_caseD_6;
  }
switchD_010d609c_caseD_0:
  uVar7 = uVar6;
  if ((uint)(bVar1 >> 3) != ((uint)uVar6 & 0xff)) {
switchD_010d609c_caseD_6:
    UpdateAllocationSite<(v8::internal::AllocationSiteUpdateMode)0>(param_1,uVar7);
    uVar6 = *param_1;
    pIVar8 = (Isolate *)(uVar6 & 0xffffffff00000000);
    if ((*(uint *)(uVar6 + 7) != *(uint *)(pIVar8 + 0x168)) &&
       (((bVar1 & 0xf0) == 0x20) != (((uint)uVar7 & 0xfe) == 4))) {
      plVar2 = *(long **)(ElementsAccessor::elements_accessors_ + (uVar7 & 0xff) * 8);
                    /* WARNING: Could not recover jumptable at 0x010d606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x70))
                (plVar2,param_1,*(int *)(((ulong)pIVar8 | (ulong)*(uint *)(uVar6 + 7)) + 3) >> 1);
      return;
    }
    pCVar3 = *(CanonicalHandleScope **)(pIVar8 + 0x95b8);
    uVar6 = (ulong)pIVar8 | (ulong)*(uint *)(uVar6 - 1);
    if (pCVar3 == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup(pCVar3,uVar6);
    }
    uVar5 = Map::TransitionElementsTo((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar4,uVar7);
    MigrateToMap(pIVar8,param_1,uVar5,0);
    if (FLAG_trace_elements_transitions != '\0') {
      pCVar3 = *(CanonicalHandleScope **)(pIVar8 + 0x95b8);
      uVar6 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 7);
      if (pCVar3 == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar8 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar8 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar8);
        }
        *(ulong **)(pIVar8 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar6;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup(pCVar3,uVar6);
      }
      PrintElementsTransition(waitpid,param_1,bVar1 >> 3,puVar4,uVar7,puVar4);
      return;
    }
  }
  return;
}

