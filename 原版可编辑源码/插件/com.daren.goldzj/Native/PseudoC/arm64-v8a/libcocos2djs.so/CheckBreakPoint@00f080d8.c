
/* v8::internal::Debug::CheckBreakPoint(v8::internal::Handle<v8::internal::BreakPoint>, bool) */

uint __thiscall v8::internal::Debug::CheckBreakPoint(Debug *this,ulong *param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  Isolate *pIVar9;
  ulong uVar10;
  undefined8 local_58;
  
  pIVar9 = *(Isolate **)(this + 0x88);
  uVar1 = *(undefined8 *)(pIVar9 + 0x95a0);
  lVar2 = *(long *)(pIVar9 + 0x95a8);
  *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + 1;
  uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 7);
  if (*(int *)(uVar10 + 7) == 0) {
    uVar3 = 1;
    goto joined_r0x00f08200;
  }
  pIVar4 = *(Isolate **)(this + 0x88);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar10;
    uVar6 = *(undefined8 *)(this + 0x88);
    if ((param_3 & 1) != 0) goto LAB_00f08158;
LAB_00f081c0:
    puVar7 = (undefined8 *)DebugEvaluate::Local(uVar6,*(undefined4 *)(this + 0x48),0,puVar5,0);
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar10);
    uVar6 = *(undefined8 *)(this + 0x88);
    if ((param_3 & 1) == 0) goto LAB_00f081c0;
LAB_00f08158:
    puVar7 = (undefined8 *)DebugEvaluate::WithTopmostArguments(uVar6,puVar5);
  }
  if (puVar7 == (undefined8 *)0x0) {
    lVar8 = *(long *)(this + 0x88);
    if (((*(ulong *)(lVar8 + 0x2bd8) & 1) == 0) ||
       ((int)*(ulong *)(lVar8 + 0x2bd8) != (int)*(undefined8 *)(lVar8 + 0xa8))) {
      *(undefined8 *)(lVar8 + 0x2bd8) = *(undefined8 *)(lVar8 + 0xa8);
    }
    uVar3 = 0;
  }
  else {
    local_58 = *puVar7;
    uVar3 = Object::BooleanValue((Object *)&local_58,*(Isolate **)(this + 0x88));
  }
joined_r0x00f08200:
  if (pIVar9 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar9 + 0x95a0) = uVar1;
    *(int *)(pIVar9 + 0x95b0) = *(int *)(pIVar9 + 0x95b0) + -1;
    if (*(long *)(pIVar9 + 0x95a8) != lVar2) {
      *(long *)(pIVar9 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar9);
    }
  }
  return uVar3 & 1;
}

