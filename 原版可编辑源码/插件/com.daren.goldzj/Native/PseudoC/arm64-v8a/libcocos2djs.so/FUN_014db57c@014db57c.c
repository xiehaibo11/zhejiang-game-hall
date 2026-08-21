
undefined8 FUN_014db57c(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  Isolate *pIVar2;
  Isolate *pIVar3;
  Isolate *pIVar4;
  Isolate *pIVar5;
  char cVar6;
  Isolate *pIVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  char *local_60;
  undefined8 uStack_58;
  
  pIVar2 = param_3 + 0x95a0;
  pIVar4 = *(Isolate **)pIVar2;
  pIVar5 = *(Isolate **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar11 = *param_2;
  if (((uVar11 & 1) == 0) ||
     (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x42a)) {
    uStack_58 = __strlen_chk("FinalizationGroup.prototype.cleanupSome",0x28);
    local_60 = "FinalizationGroup.prototype.cleanupSome";
    lVar10 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_60,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar9 = 0x3d;
  }
  else {
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xf);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar7 = pIVar4;
      if (pIVar5 == pIVar4) {
        pIVar7 = (Isolate *)v8::internal::HandleScope::Extend(param_3);
      }
      *(Isolate **)pIVar2 = pIVar7 + 8;
      *(ulong *)pIVar7 = uVar11;
    }
    else {
      pIVar7 = (Isolate *)
               v8::internal::CanonicalHandleScope::Lookup
                         (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar11);
    }
    pIVar1 = param_3 + 0xa0;
    pIVar3 = (Isolate *)(param_2 + -1);
    if (param_1 < 6) {
      pIVar3 = pIVar1;
    }
    uVar11 = *(ulong *)pIVar3;
    if (((uVar11 & 1) != 0) &&
       (((int)uVar11 == *(int *)pIVar1 ||
        (pIVar7 = pIVar3,
        (*(byte *)((uVar11 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar11 - 1)) >> 1 & 1) != 0)
        ))) {
      cVar6 = v8::internal::JSFinalizationGroup::Cleanup(param_3,param_2,pIVar7);
      if (cVar6 == '\0') {
        uVar9 = *(undefined8 *)(param_3 + 0x180);
      }
      else {
        uVar9 = *(undefined8 *)pIVar1;
      }
      goto LAB_014db654;
    }
    uVar9 = 0x174;
    lVar10 = 0;
    param_2 = (ulong *)0x0;
  }
  puVar8 = (undefined8 *)
           v8::internal::Factory::NewTypeError((Factory *)param_3,uVar9,lVar10,param_2,0);
  uVar9 = v8::internal::Isolate::Throw(param_3,*puVar8,0);
LAB_014db654:
  *(Isolate **)pIVar2 = pIVar4;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(Isolate **)(param_3 + 0x95a8) != pIVar5) {
    *(Isolate **)(param_3 + 0x95a8) = pIVar5;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

