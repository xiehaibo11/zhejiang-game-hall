
Isolate * FUN_014a6d98(Isolate *param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4,
                      Isolate *param_5,int param_6,long param_7)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined **local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  undefined8 local_90;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pIVar1 = param_1 + 0x95a0;
  if ((*(byte *)(*param_4 + 0x2b) >> 6 & 1) == 0) {
    uVar9 = *(ulong *)param_5;
    ppuVar10 = (undefined **)(uVar9 & 0xffffffff00000000);
    if (*(short *)(((ulong)ppuVar10 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0xab) {
      if ((*(byte *)(((ulong)ppuVar10 | 9) + (ulong)*(uint *)(uVar9 - 1)) >> 5 & 1) != 0)
      goto LAB_014a6e88;
      goto LAB_014a6ee8;
    }
    local_c0 = (undefined **)ppuVar10[0x579];
    iVar4 = v8::internal::Context::global_object((Context *)&local_c0);
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 0;
    local_a0 = 0;
    local_c0 = ppuVar10;
    local_b8 = uVar9;
    v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_c0);
    if ((int)local_b8 == iVar4) goto LAB_014a6ee8;
LAB_014a6e88:
    uVar9 = *(ulong *)(param_1 + 0x2bc8);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    }
    uVar9 = v8::internal::Isolate::MayAccess(param_1,puVar6,param_5);
    if ((uVar9 & 1) != 0) goto LAB_014a6ee8;
    v8::internal::Isolate::ReportFailedAccessCheck(param_1,param_5);
    if (*(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0xa8)) {
      param_5 = param_1 + 0xa0;
      goto LAB_014a70f8;
    }
    v8::internal::Isolate::PromoteScheduledException(param_1);
  }
  else {
LAB_014a6ee8:
    uVar9 = *(ulong *)param_5;
    uVar2 = *(uint *)(*param_4 + 0x1f);
    if (((uVar2 & 1) == 0) ||
       (uVar8 = *param_4 & 0xffffffff00000000, ppuVar10 = (undefined **)(uVar8 | uVar2),
       *(short *)((uVar8 | 7) + (ulong)*(uint *)((long)ppuVar10 + -1)) != 0x4e)) goto LAB_014a6f60;
    uVar8 = uVar9 & 0xffffffff00000000;
    if (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xaa) goto LAB_014a70cc;
    local_c0 = ppuVar10;
    uVar5 = v8::internal::FunctionTemplateInfo::IsTemplateFor
                      ((FunctionTemplateInfo *)&local_c0,uVar8 | *(uint *)(uVar9 - 1));
    if ((uVar5 & 1) == 0) {
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0xab) {
        uVar9 = 0;
        goto LAB_014a6f60;
      }
      uVar2 = *(uint *)((uVar8 | *(uint *)(uVar9 - 1)) + 0xf);
      if (uVar2 != *(uint *)(param_1 + 0xb0)) {
        uVar9 = uVar8 | uVar2;
        uVar8 = v8::internal::FunctionTemplateInfo::IsTemplateFor
                          ((FunctionTemplateInfo *)&local_c0,uVar8 | *(uint *)(uVar9 - 1));
        if ((uVar8 & 1) != 0) goto LAB_014a6f60;
      }
    }
    else {
LAB_014a6f60:
      if ((int)uVar9 != 0) {
        uVar2 = *(uint *)(*param_4 + 0x17);
        if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
          uVar8 = *param_4 & 0xffffffff00000000;
          uVar5 = uVar8 | uVar2;
          v8::internal::FunctionCallbackArguments::FunctionCallbackArguments
                    ((FunctionCallbackArguments *)&local_c0,param_1,uVar8 | *(uint *)(uVar5 + 0xb),
                     *param_2,uVar9,*param_3,param_7 + -8,param_6 + -5);
          puVar6 = (ulong *)v8::internal::FunctionCallbackArguments::Call
                                      ((FunctionCallbackArguments *)&local_c0,uVar5);
          if (*(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0xa8)) {
            if (puVar6 == (ulong *)0x0) {
              param_5 = param_1 + 0xa0;
            }
            else {
              uVar9 = *puVar6;
              if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                param_5 = *(Isolate **)pIVar1;
                if (param_5 == *(Isolate **)(param_1 + 0x95a8)) {
                  param_5 = (Isolate *)v8::internal::HandleScope::Extend(param_1);
                }
                *(Isolate **)pIVar1 = param_5 + 8;
                *(ulong *)param_5 = uVar9;
              }
              else {
                param_5 = (Isolate *)
                          v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
              }
            }
          }
          else {
            v8::internal::Isolate::PromoteScheduledException(param_1);
            param_5 = (Isolate *)0x0;
          }
          local_c0 = &PTR__Relocatable_01cacc40;
          local_90 = 0x1baddead0baddeaf;
          *(undefined8 *)(local_b8 + 0xb790) = local_b0;
        }
        goto LAB_014a70f8;
      }
    }
LAB_014a70cc:
    puVar7 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_1,0x37,0,0,0);
    v8::internal::Isolate::Throw(param_1,*puVar7,0);
  }
  param_5 = (Isolate *)0x0;
LAB_014a70f8:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return param_5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

