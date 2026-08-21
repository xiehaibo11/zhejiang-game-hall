
void FUN_014a6aa4(Isolate *param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_4,
                 int param_5,ulong *param_6)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_90;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = *param_4 & 0xffffffff00000000;
  uVar2 = *(uint *)(*param_4 + 0x23);
  uVar9 = *(ulong *)(uVar10 + 0xa0);
  if (uVar2 != (uint)uVar9) {
    uVar9 = (ulong)*(uint *)((uVar10 | uVar2) + 0x17);
  }
  pIVar1 = param_1 + 0x95a0;
  if (((uVar9 & 1) != 0) && ((int)uVar9 == *(int *)(param_1 + 0xa0))) {
    puVar5 = (ulong *)v8::ObjectTemplate::New(param_1,param_4);
    pIVar6 = param_1 + *(uint *)(*param_4 + 0x23);
    if ((int)pIVar6 == *(int *)(param_1 + 0xa0)) {
      pIVar6 = (Isolate *)
               v8::internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,param_4)
      ;
    }
    uVar9 = *puVar5;
    *(int *)(pIVar6 + 0x17) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar10 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar10 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(pIVar6,pIVar6 + 0x17,uVar9);
        uVar10 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar10 & 0x18) != 0) &&
         ((*(byte *)(((ulong)pIVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(pIVar6,pIVar6 + 0x17,uVar9);
      }
    }
  }
  uVar9 = *param_4 & 0xffffffff00000000;
  uVar2 = *(uint *)(*param_4 + 0x23);
  uVar10 = *(ulong *)(uVar9 + 0xa0);
  if (uVar2 != (uint)uVar10) {
    uVar10 = uVar9 | *(uint *)((uVar9 | uVar2) + 0x17);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar10;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
  }
  puVar7 = (ulong *)v8::internal::ApiNatives::InstantiateObject(param_1,puVar5,param_3);
  puVar5 = puVar7;
  if (puVar7 != (ulong *)0x0) {
    *param_6 = *puVar7;
    uVar2 = *(uint *)(*param_4 + 0x17);
    if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
      uVar9 = *param_4 & 0xffffffff00000000;
      uVar10 = uVar9 | uVar2;
      v8::internal::FunctionCallbackArguments::FunctionCallbackArguments
                ((FunctionCallbackArguments *)&local_c0,param_1,uVar9 | *(uint *)(uVar10 + 0xb),
                 *param_2,*puVar7,*param_3,param_6 + -1,param_5 + -5);
      puVar8 = (ulong *)v8::internal::FunctionCallbackArguments::Call
                                  ((FunctionCallbackArguments *)&local_c0,uVar10);
      if (*(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0xa8)) {
        if (puVar8 == (ulong *)0x0) {
          bVar4 = false;
        }
        else {
          uVar9 = *puVar8;
          if (((uVar9 & 1) == 0) ||
             (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xa9)) {
            bVar4 = true;
            puVar5 = (ulong *)0x0;
          }
          else if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar5 = *(ulong **)pIVar1;
            if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
              puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
            }
            bVar4 = false;
            *(ulong **)pIVar1 = puVar5 + 1;
            *puVar5 = uVar9;
          }
          else {
            puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
            bVar4 = false;
          }
        }
      }
      else {
        v8::internal::Isolate::PromoteScheduledException(param_1);
        puVar5 = (ulong *)0x0;
        bVar4 = false;
      }
      local_c0 = &PTR__Relocatable_01cacc40;
      local_90 = 0x1baddead0baddeaf;
      *(undefined8 *)(local_b8 + 0xb790) = uStack_b0;
      if (!bVar4) goto LAB_014a6d3c;
    }
    puVar5 = puVar7;
  }
LAB_014a6d3c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5);
}

