
/* v8::internal::Debug::RemoveBreakInfoAndMaybeFree(v8::internal::Handle<v8::internal::DebugInfo>)
    */

void __thiscall v8::internal::Debug::RemoveBreakInfoAndMaybeFree(Debug *this,long *param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  DebugInfoListNode *pDVar4;
  DebugInfoListNode *pDVar5;
  DebugInfoListNode *pDVar6;
  long lVar7;
  long *plVar8;
  long local_28;
  
  local_28 = *param_2;
  DebugInfo::ClearBreakInfo((DebugInfo *)&local_28,*(Isolate **)(this + 0x88));
  local_28 = *param_2;
  uVar3 = DebugInfo::IsEmpty((DebugInfo *)&local_28);
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(this + 0x88);
    piVar1 = (int *)(lVar7 + 0x95b0);
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
    pDVar5 = *(DebugInfoListNode **)(this + 0x18);
    if (pDVar5 == (DebugInfoListNode *)0x0) {
LAB_00f08e74:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    plVar8 = *(long **)pDVar5;
    if (plVar8 == param_2) {
      pDVar4 = (DebugInfoListNode *)0x0;
    }
    else {
      pDVar4 = (DebugInfoListNode *)0x0;
      do {
        pDVar6 = pDVar5;
        if (((param_2 != (long *)0x0) && (plVar8 != (long *)0x0)) &&
           (pDVar5 = pDVar6, *plVar8 == *param_2)) break;
        pDVar5 = *(DebugInfoListNode **)(pDVar6 + 8);
        if (pDVar5 == (DebugInfoListNode *)0x0) goto LAB_00f08e74;
        plVar8 = *(long **)pDVar5;
        pDVar4 = pDVar6;
      } while (plVar8 != param_2);
    }
    if (lVar7 != 0) {
      *piVar1 = iVar2;
    }
    FreeDebugInfoListNode(this,pDVar4,pDVar5);
  }
  return;
}

