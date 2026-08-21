
/* v8::internal::Runtime_ThrowConstructorNonCallableError(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_ThrowConstructorNonCallableError(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  CanonicalHandleScope *this;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_58;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_015554a0(param_1,param_2,param_3);
    return uVar7;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if ((uVar8 & 1) == 0) {
LAB_0155548c:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSFunction()");
  }
  uVar9 = uVar8 & 0xffffffff00000000;
  uVar10 = uVar9 | 7;
  if (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) != 0x439) goto LAB_0155548c;
  uVar11 = uVar9 | *(uint *)(uVar8 + 0xb);
  uVar4 = *(uint *)(uVar11 + 7);
  uVar8 = uVar9 | uVar4;
  if (((uVar4 & 1) == 0) || (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) != 0x83)) {
    if (uVar4 != 0) goto joined_r0x0155537c;
LAB_015553bc:
    uVar8 = *(ulong *)(uVar9 + 200);
  }
  else {
    local_58 = uVar8;
    uVar8 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_58);
    if ((uVar8 & 1) == 0) goto LAB_015553bc;
    uVar4 = *(uint *)(uVar11 + 7);
    uVar8 = uVar9 | uVar4;
joined_r0x0155537c:
    if (((uVar4 & 1) != 0) && (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x83)) {
      local_58 = uVar8;
      uVar10 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_58);
      if ((uVar10 & 1) != 0) {
        local_58 = uVar8;
        uVar8 = ScopeInfo::FunctionName((ScopeInfo *)&local_58);
        this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
        goto joined_r0x015553c4;
      }
      goto LAB_015553bc;
    }
  }
  this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
joined_r0x015553c4:
  if (this == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(this,uVar8);
  }
  puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_3,0x26,puVar5,0,0);
  uVar7 = Isolate::Throw(param_3,*puVar6,0);
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

