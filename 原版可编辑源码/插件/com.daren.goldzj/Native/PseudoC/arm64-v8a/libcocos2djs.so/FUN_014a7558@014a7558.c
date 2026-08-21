
undefined8 FUN_014a7558(Isolate *param_1,ulong param_2,int param_3,ulong *param_4)

{
  uint *puVar1;
  Isolate *pIVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  Logger *this;
  undefined **local_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_90;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar11 = *param_4;
  uVar9 = uVar11;
  if ((param_2 & 1) == 0) {
    uVar9 = *(ulong *)(param_1 + 0xa0);
  }
  uVar8 = uVar11 & 0xffffffff00000000;
  uVar5 = *(uint *)((uVar8 | *(uint *)(uVar11 - 1)) + 0x13);
  uVar12 = uVar8 | uVar5;
  if ((uVar5 & 1) != 0) {
    do {
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0xa2) break;
      puVar1 = (uint *)(uVar12 + 0x13);
      uVar12 = uVar8 | *puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  uVar8 = uVar12 & 0xffffffff00000000;
  uVar13 = *(ulong *)(uVar8 + 0xa0);
  uVar5 = *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(uVar12 + 0xb)) + 3)) + 0x23);
  if (uVar5 != (uint)uVar13) {
    uVar13 = uVar8 | *(uint *)((uVar8 | uVar5) + 0x1b);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar3 = *(undefined8 *)(param_1 + 0x95a0);
  lVar4 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar8 = v8::internal::Logger::is_logging(this);
  if ((uVar8 & 1) != 0) {
    v8::internal::Logger::ApiObjectAccess(this,"call non-function",uVar11);
  }
  v8::internal::FunctionCallbackArguments::FunctionCallbackArguments
            ((FunctionCallbackArguments *)&local_c0,param_1,
             uVar13 & 0xffffffff00000000 | (ulong)*(uint *)(uVar13 + 0xb),uVar12,uVar11,uVar9,
             param_4 + -1,param_3 + -5);
  pIVar7 = (Isolate *)
           v8::internal::FunctionCallbackArguments::Call
                     ((FunctionCallbackArguments *)&local_c0,uVar13);
  pIVar2 = param_1 + 0xa0;
  if (pIVar7 != (Isolate *)0x0) {
    pIVar2 = pIVar7;
  }
  local_c0 = &PTR__Relocatable_01cacc40;
  uVar10 = *(undefined8 *)pIVar2;
  local_90 = 0x1baddead0baddeaf;
  *(undefined8 *)(local_b8 + 0xb790) = uStack_b0;
  *(undefined8 *)(param_1 + 0x95a0) = uVar3;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar4) {
    *(long *)(param_1 + 0x95a8) = lVar4;
    v8::internal::HandleScope::DeleteExtensions(param_1);
  }
  if (*(int *)(param_1 + 0x2c20) != *(int *)(param_1 + 0xa8)) {
    uVar10 = v8::internal::Isolate::PromoteScheduledException(param_1);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

