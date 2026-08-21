
/* v8::internal::Runtime_ThrowNotSuperConstructor(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_ThrowNotSuperConstructor(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  Isolate *pIVar7;
  CanonicalHandleScope *pCVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar11 = FUN_0155632c(param_1,param_2,param_3);
    return uVar11;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar12 = param_2[-1];
  if (((uVar12 & 1) == 0) ||
     (*(short *)((uVar12 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x439)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsJSFunction()");
  }
  uVar12 = *param_2;
  if ((uVar12 & 1) == 0) {
LAB_01556064:
    pIVar7 = (Isolate *)Object::NoSideEffectsToString(param_3,param_2);
  }
  else {
    uVar14 = uVar12 & 0xffffffff00000000;
    uVar13 = uVar14 | 7;
    if (*(short *)(uVar13 + *(uint *)(uVar12 - 1)) == 0x439) {
      uVar15 = uVar14 | *(uint *)(uVar12 + 0xb);
      uVar5 = *(uint *)(uVar15 + 7);
      uVar12 = uVar14 | uVar5;
      if (((uVar5 & 1) == 0) || (*(short *)(uVar13 + *(uint *)(uVar12 - 1)) != 0x83)) {
        if (uVar5 != 0) {
          if ((uVar5 & 1) != 0) goto LAB_0155627c;
          goto LAB_015562bc;
        }
LAB_015562b8:
        uVar12 = *(ulong *)(uVar14 + 200);
LAB_015562bc:
        pCVar8 = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      }
      else {
        local_48 = uVar12;
        uVar12 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_48);
        if ((uVar12 & 1) == 0) goto LAB_015562b8;
        uVar5 = *(uint *)(uVar15 + 7);
        uVar12 = uVar14 | uVar5;
        if ((uVar5 & 1) == 0) goto LAB_015562bc;
LAB_0155627c:
        if (*(short *)(uVar13 + *(uint *)(uVar12 - 1)) != 0x83) goto LAB_015562bc;
        local_48 = uVar12;
        uVar13 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_48);
        if ((uVar13 & 1) == 0) goto LAB_015562b8;
        local_48 = uVar12;
        uVar12 = ScopeInfo::FunctionName((ScopeInfo *)&local_48);
        pCVar8 = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      }
      if (pCVar8 == (CanonicalHandleScope *)0x0) {
        pIVar7 = *(Isolate **)pIVar1;
        if (pIVar7 == *(Isolate **)(param_3 + 0x95a8)) {
          pIVar7 = (Isolate *)HandleScope::Extend(param_3);
        }
        *(Isolate **)pIVar1 = pIVar7 + 8;
        *(ulong *)pIVar7 = uVar12;
      }
      else {
        pIVar7 = (Isolate *)CanonicalHandleScope::Lookup(pCVar8,uVar12);
      }
    }
    else {
      if (*(short *)(uVar13 + *(uint *)(uVar12 - 1)) != 0x43) goto LAB_01556064;
      pIVar7 = param_3 + 0x878;
    }
  }
  uVar12 = param_2[-1] & 0xffffffff00000000;
  uVar14 = uVar12 | *(uint *)(param_2[-1] + 0xb);
  uVar5 = *(uint *)(uVar14 + 7);
  pIVar2 = param_3 + 0x878;
  if (*(int *)(*(ulong *)pIVar7 + 7) != 0) {
    pIVar2 = pIVar7;
  }
  uVar13 = uVar12 | uVar5;
  if (((uVar5 & 1) == 0) || (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x83)) {
    if (uVar5 != 0) goto joined_r0x015560e0;
LAB_01556184:
    uVar13 = *(ulong *)(uVar12 + 200);
  }
  else {
    local_48 = uVar13;
    uVar13 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_48);
    if ((uVar13 & 1) == 0) goto LAB_01556184;
    uVar5 = *(uint *)(uVar14 + 7);
    uVar13 = uVar12 | uVar5;
joined_r0x015560e0:
    if (((uVar5 & 1) != 0) && (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x83)) {
      local_48 = uVar13;
      uVar14 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_48);
      if ((uVar14 & 1) != 0) {
        local_48 = uVar13;
        uVar13 = ScopeInfo::FunctionName((ScopeInfo *)&local_48);
        pCVar8 = *(CanonicalHandleScope **)(param_3 + 0x95b8);
        goto joined_r0x0155618c;
      }
      goto LAB_01556184;
    }
  }
  pCVar8 = *(CanonicalHandleScope **)(param_3 + 0x95b8);
joined_r0x0155618c:
  if (pCVar8 == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)pIVar1;
    if (puVar9 == *(ulong **)(param_3 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar13;
    iVar6 = *(int *)(uVar13 + 7);
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup(pCVar8,uVar13);
    iVar6 = *(int *)(*puVar9 + 7);
  }
  if (iVar6 == 0) {
    uVar11 = 0x65;
    puVar9 = (ulong *)0x0;
  }
  else {
    uVar11 = 100;
  }
  puVar10 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,uVar11,pIVar2,puVar9,0);
  uVar11 = Isolate::Throw(param_3,*puVar10,0);
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar11;
}

