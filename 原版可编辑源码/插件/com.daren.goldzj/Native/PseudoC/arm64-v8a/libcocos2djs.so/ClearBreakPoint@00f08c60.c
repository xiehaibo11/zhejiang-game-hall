
/* v8::internal::Debug::ClearBreakPoint(v8::internal::Handle<v8::internal::BreakPoint>) */

void __thiscall v8::internal::Debug::ClearBreakPoint(Debug *this,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  Debug *pDVar4;
  ulong uVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_58;
  
  pIVar7 = *(Isolate **)(this + 0x88);
  uVar1 = *(undefined8 *)(pIVar7 + 0x95a0);
  lVar2 = *(long *)(pIVar7 + 0x95a8);
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
  puVar9 = *(undefined8 **)(this + 0x18);
  do {
    if (puVar9 == (undefined8 *)0x0) {
joined_r0x00f08d8c:
      if (pIVar7 != (Isolate *)0x0) {
        *(undefined8 *)(pIVar7 + 0x95a0) = uVar1;
        *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
        if (*(long *)(pIVar7 + 0x95a8) != lVar2) {
          *(long *)(pIVar7 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(pIVar7);
        }
      }
      return;
    }
    local_58 = *(undefined8 *)*puVar9;
    uVar5 = DebugInfo::HasBreakInfo((DebugInfo *)&local_58);
    if ((uVar5 & 1) != 0) {
      puVar6 = (ulong *)DebugInfo::FindBreakPointInfo(*(undefined8 *)(this + 0x88),*puVar9,param_2);
      if (((*puVar6 & 1) == 0) || ((int)*puVar6 != *(int *)(*(long *)(this + 0x88) + 0xa0))) {
        puVar8 = (undefined8 *)*puVar9;
        pDVar4 = (Debug *)DebugInfo::ClearBreakPoint(*(long *)(this + 0x88),puVar8,param_2);
        if (((ulong)pDVar4 & 1) != 0) {
          ClearBreakPoints(pDVar4,puVar8);
          local_58 = *puVar8;
          iVar3 = DebugInfo::GetBreakPointCount((DebugInfo *)&local_58,*(Isolate **)(this + 0x88));
          if (iVar3 == 0) {
            RemoveBreakInfoAndMaybeFree(this,puVar8);
          }
          else {
            ApplyBreakPoints(this,puVar8);
          }
          goto joined_r0x00f08d8c;
        }
      }
    }
    puVar9 = (undefined8 *)puVar9[1];
  } while( true );
}

