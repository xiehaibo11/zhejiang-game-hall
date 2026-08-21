
undefined8 FUN_014acf9c(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  Isolate *pIVar5;
  CanonicalHandleScope *this;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  double dVar13;
  ulong local_38;
  
  pIVar1 = param_3 + 0x95a0;
  piVar9 = (int *)(param_2 - (param_1 * 8 + -8));
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar10 = (ulong *)(param_2 - (param_1 * 8 + -0x10));
  if (*piVar9 == *(int *)(param_3 + 0xa0)) {
    uVar8 = *puVar10;
    uVar11 = uVar8 & 0xffffffff00000000;
    uVar12 = uVar11 | *(uint *)(uVar8 + 0xb);
    uVar4 = *(uint *)(uVar12 + 7);
    uVar8 = uVar11 | uVar4;
    if (((uVar4 & 1) == 0) || (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83)) {
      if (uVar4 != 0) {
        if ((uVar4 & 1) != 0) goto LAB_014ad0b0;
        goto LAB_014ad0f4;
      }
LAB_014ad0f0:
      uVar8 = *(ulong *)(uVar11 + 200);
LAB_014ad0f4:
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      if (this != (CanonicalHandleScope *)0x0) goto LAB_014ad0fc;
LAB_014ad114:
      puVar10 = *(ulong **)pIVar1;
      if (puVar10 == *(ulong **)(param_3 + 0x95a8)) {
        puVar10 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar10 + 1;
      *puVar10 = uVar8;
    }
    else {
      local_38 = uVar8;
      uVar8 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
      if ((uVar8 & 1) == 0) goto LAB_014ad0f0;
      uVar4 = *(uint *)(uVar12 + 7);
      uVar8 = uVar11 | uVar4;
      if ((uVar4 & 1) == 0) goto LAB_014ad0f4;
LAB_014ad0b0:
      if (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83) goto LAB_014ad0f4;
      local_38 = uVar8;
      uVar12 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_38);
      if ((uVar12 & 1) == 0) goto LAB_014ad0f0;
      local_38 = uVar8;
      uVar8 = v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_38);
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      if (this == (CanonicalHandleScope *)0x0) goto LAB_014ad114;
LAB_014ad0fc:
      puVar10 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar8);
    }
    puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x27,puVar10,0,0);
  }
  else {
    pIVar5 = (Isolate *)(param_2 + -8);
    if (param_1 < 6) {
      pIVar5 = param_3 + 0xa0;
    }
    if (((byte)*pIVar5 & 1) != 0) {
      pIVar5 = (Isolate *)v8::internal::Object::ConvertToInteger(param_3,pIVar5);
    }
    if (pIVar5 == (Isolate *)0x0) {
      uVar7 = *(undefined8 *)(param_3 + 0x180);
      goto LAB_014ad188;
    }
    uVar8 = *(ulong *)pIVar5;
    if ((uVar8 & 1) == 0) {
      dVar13 = (double)((int)uVar8 >> 1);
    }
    else {
      dVar13 = *(double *)(uVar8 + 3);
    }
    if (0.0 <= dVar13) {
      uVar7 = FUN_014ae180(param_3,puVar10,piVar9,pIVar5,1);
      goto LAB_014ad188;
    }
    puVar6 = (undefined8 *)v8::internal::Factory::NewRangeError((Factory *)param_3,0xbb,0,0,0);
  }
  uVar7 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
LAB_014ad188:
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

