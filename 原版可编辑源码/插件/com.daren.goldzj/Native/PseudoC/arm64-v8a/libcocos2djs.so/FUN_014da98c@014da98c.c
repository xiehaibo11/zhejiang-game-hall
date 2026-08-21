
ulong FUN_014da98c(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  CanonicalHandleScope *this;
  undefined8 *puVar6;
  ulong *puVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_68;
  
  pIVar1 = param_3 + 0x95a0;
  piVar8 = (int *)(param_2 - (param_1 * 8 + -8));
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar11 = (ulong *)(param_2 - (param_1 * 8 + -0x10));
  if (*piVar8 == *(int *)(param_3 + 0xa0)) {
    uVar10 = *puVar11;
    uVar12 = uVar10 & 0xffffffff00000000;
    uVar13 = uVar12 | *(uint *)(uVar10 + 0xb);
    uVar5 = *(uint *)(uVar13 + 7);
    uVar10 = uVar12 | uVar5;
    if (((uVar5 & 1) == 0) || (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x83)) {
      if (uVar5 != 0) {
        if ((uVar5 & 1) != 0) goto LAB_014daa8c;
        goto LAB_014daad0;
      }
LAB_014daacc:
      uVar10 = *(ulong *)(uVar12 + 200);
LAB_014daad0:
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      if (this != (CanonicalHandleScope *)0x0) goto LAB_014daad8;
LAB_014daae8:
      puVar11 = *(ulong **)pIVar1;
      if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
        puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar11 + 1;
      *puVar11 = uVar10;
    }
    else {
      local_68 = uVar10;
      uVar10 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_68);
      if ((uVar10 & 1) == 0) goto LAB_014daacc;
      uVar5 = *(uint *)(uVar13 + 7);
      uVar10 = uVar12 | uVar5;
      if ((uVar5 & 1) == 0) goto LAB_014daad0;
LAB_014daa8c:
      if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x83) goto LAB_014daad0;
      local_68 = uVar10;
      uVar13 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_68);
      if ((uVar13 & 1) == 0) goto LAB_014daacc;
      local_68 = uVar10;
      uVar10 = v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_68);
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      if (this == (CanonicalHandleScope *)0x0) goto LAB_014daae8;
LAB_014daad8:
      puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar10);
    }
    uVar9 = 0x27;
  }
  else {
    pIVar2 = (Isolate *)(param_2 + -8);
    if (param_1 < 6) {
      pIVar2 = param_3 + 0xa0;
    }
    uVar10 = *(ulong *)pIVar2;
    if (((uVar10 & 1) != 0) &&
       ((*(byte *)((uVar10 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar10 - 1)) >> 1 & 1) != 0)
       ) {
      puVar11 = (ulong *)v8::internal::JSObject::New(puVar11,piVar8,0);
      if (puVar11 == (ulong *)0x0) {
        uVar10 = *(ulong *)(param_3 + 0x180);
        goto LAB_014dab34;
      }
      uVar12 = *puVar11;
      uVar10 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
      uVar5 = *(uint *)((uVar10 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
      uVar10 = uVar10 | uVar5;
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_3 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar10;
        *(uint *)(uVar12 + 0xb) = uVar5;
        if ((uVar5 & 1) != 0) goto LAB_014dac00;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar10);
        uVar10 = *puVar7;
        *(int *)(uVar12 + 0xb) = (int)uVar10;
        if ((uVar10 & 1) != 0) {
LAB_014dac00:
          uVar13 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xb,uVar10);
            uVar13 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xb,uVar10);
          }
        }
      }
      uVar12 = *puVar11;
      uVar10 = *(ulong *)pIVar2;
      *(int *)(uVar12 + 0xf) = (int)uVar10;
      if ((uVar10 & 1) != 0) {
        uVar13 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xf,uVar10);
          uVar13 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xf,uVar10);
        }
      }
      *(undefined4 *)(*puVar11 + 0x23) = 0;
      uVar10 = *puVar11;
      goto LAB_014dab34;
    }
    uVar9 = 0x174;
    puVar11 = (ulong *)0x0;
  }
  puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,uVar9,puVar11,0,0);
  uVar10 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
LAB_014dab34:
  *(long *)pIVar1 = lVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar4) {
    *(long *)(param_3 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

