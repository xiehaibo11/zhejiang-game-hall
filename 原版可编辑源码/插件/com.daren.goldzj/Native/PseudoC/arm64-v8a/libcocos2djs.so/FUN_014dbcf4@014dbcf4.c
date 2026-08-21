
ulong FUN_014dbcf4(int param_1,long param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong *puVar6;
  CanonicalHandleScope *this;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_48;
  
  pIVar1 = param_3 + 0x95a0;
  piVar10 = (int *)(param_2 - (param_1 * 8 + -8));
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar11 = (ulong *)(param_2 - (param_1 * 8 + -0x10));
  if (*piVar10 == *(int *)(param_3 + 0xa0)) {
    uVar9 = *puVar11;
    uVar12 = uVar9 & 0xffffffff00000000;
    uVar13 = uVar12 | *(uint *)(uVar9 + 0xb);
    uVar5 = *(uint *)(uVar13 + 7);
    uVar9 = uVar12 | uVar5;
    if (((uVar5 & 1) == 0) || (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x83)) {
      if (uVar5 != 0) {
        if ((uVar5 & 1) != 0) goto LAB_014dbdf8;
        goto LAB_014dbe4c;
      }
LAB_014dbe48:
      uVar9 = *(ulong *)(uVar12 + 200);
LAB_014dbe4c:
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      if (this != (CanonicalHandleScope *)0x0) goto LAB_014dbe54;
LAB_014dbe64:
      puVar11 = *(ulong **)pIVar1;
      if (puVar11 == *(ulong **)(param_3 + 0x95a8)) {
        puVar11 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar11 + 1;
      *puVar11 = uVar9;
    }
    else {
      local_48 = uVar9;
      uVar9 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_48);
      if ((uVar9 & 1) == 0) goto LAB_014dbe48;
      uVar5 = *(uint *)(uVar13 + 7);
      uVar9 = uVar12 | uVar5;
      if ((uVar5 & 1) == 0) goto LAB_014dbe4c;
LAB_014dbdf8:
      if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0x83) goto LAB_014dbe4c;
      local_48 = uVar9;
      uVar13 = v8::internal::ScopeInfo::HasFunctionName((ScopeInfo *)&local_48);
      if ((uVar13 & 1) == 0) goto LAB_014dbe48;
      local_48 = uVar9;
      uVar9 = v8::internal::ScopeInfo::FunctionName((ScopeInfo *)&local_48);
      this = *(CanonicalHandleScope **)(param_3 + 0x95b8);
      if (this == (CanonicalHandleScope *)0x0) goto LAB_014dbe64;
LAB_014dbe54:
      puVar11 = (ulong *)v8::internal::CanonicalHandleScope::Lookup(this,uVar9);
    }
    uVar8 = 0x27;
  }
  else {
    pIVar2 = (Isolate *)(param_2 + -8);
    if (param_1 < 6) {
      pIVar2 = param_3 + 0xa0;
    }
    uVar9 = *(ulong *)pIVar2;
    if (((uVar9 & 1) != 0) &&
       (0xa8 < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)))) {
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = puVar3;
        if (puVar4 == puVar3) {
          puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar9;
      }
      else {
        puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
      }
      v8::internal::Heap::KeepDuringJob((Heap *)(param_3 + 0x8850),puVar6);
      puVar11 = (ulong *)v8::internal::JSObject::New(puVar11,piVar10,0);
      if (puVar11 == (ulong *)0x0) {
        uVar9 = *(ulong *)(param_3 + 0x180);
      }
      else {
        uVar12 = *puVar11;
        uVar9 = *puVar6;
        *(int *)(uVar12 + 0xb) = (int)uVar9;
        if ((uVar9 & 1) != 0) {
          uVar13 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar13 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar12,uVar12 + 0xb,uVar9);
            uVar13 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar12,uVar12 + 0xb,uVar9);
          }
        }
        uVar9 = *puVar11;
      }
      goto LAB_014dbeb0;
    }
    uVar8 = 0x177;
    puVar11 = (ulong *)0x0;
  }
  puVar7 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,uVar8,puVar11,0,0);
  uVar9 = v8::internal::Isolate::Throw(param_3,*puVar7,0);
LAB_014dbeb0:
  *(ulong **)pIVar1 = puVar3;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar4) {
    *(ulong **)(param_3 + 0x95a8) = puVar4;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

