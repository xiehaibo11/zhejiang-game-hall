
/* v8::internal::Debug::IsBreakAtReturn(v8::internal::JavaScriptFrame*) */

bool __thiscall v8::internal::Debug::IsBreakAtReturn(Debug *this,JavaScriptFrame *param_1)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  ulong local_78;
  int local_6c;
  
  pIVar7 = *(Isolate **)(this + 0x88);
  uVar1 = *(undefined8 *)(pIVar7 + 0x95a0);
  lVar2 = *(long *)(pIVar7 + 0x95a8);
  *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + 1;
  uVar4 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  pIVar5 = *(Isolate **)(this + 0x88);
  local_78 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar5 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar5);
    }
    *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
    *puVar6 = local_78;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),local_78);
    local_78 = *puVar6;
  }
  uVar4 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_78);
  if ((uVar4 & 1) == 0) {
    bVar3 = false;
  }
  else {
    pIVar5 = *(Isolate **)(this + 0x88);
    uVar4 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 + 0xf);
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar4;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar4);
    }
    BreakLocation::FromFrame((BreakLocation *)&local_78,puVar6,param_1);
    bVar3 = local_6c == 4;
  }
  if (pIVar7 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar7 + 0x95a0) = uVar1;
    *(int *)(pIVar7 + 0x95b0) = *(int *)(pIVar7 + 0x95b0) + -1;
    if (*(long *)(pIVar7 + 0x95a8) != lVar2) {
      *(long *)(pIVar7 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar7);
    }
  }
  return bVar3;
}

