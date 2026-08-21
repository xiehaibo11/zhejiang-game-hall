
undefined8 FUN_014db914(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *local_50;
  undefined8 uStack_48;
  
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x42b)) {
    uStack_48 = __strlen_chk("next",5);
    local_50 = "next";
    lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_50,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar6 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_3,0x3d,lVar5,param_2,0);
    uVar7 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
  }
  else {
    uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = puVar2;
      if (puVar3 == puVar2) {
        puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar8;
    }
    else {
      puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
      uVar8 = *puVar4;
    }
    if (*(short *)((uVar8 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0x17)) - 1
                                  )) == 0xa8) {
      uVar8 = v8::internal::JSFinalizationGroup::PopClearedCellHoldings(puVar4,param_3);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar1;
        if (puVar4 == *(ulong **)(param_3 + 0x95a8)) {
          puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar8;
      }
      else {
        puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
      }
      uVar7 = 0;
    }
    else {
      uVar8 = *(ulong *)(param_3 + 0xa0);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar1;
        if (puVar4 == *(ulong **)(param_3 + 0x95a8)) {
          puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar8;
      }
      else {
        puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
      }
      uVar7 = 1;
    }
    puVar6 = (undefined8 *)
             v8::internal::Factory::NewJSIteratorResult((Factory *)param_3,puVar4,uVar7);
    uVar7 = *puVar6;
  }
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

