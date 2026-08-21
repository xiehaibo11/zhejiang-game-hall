
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::DebugEvaluate::Global(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>, v8::debug::EvaluateGlobalMode,
   v8::internal::REPLMode) */

undefined8
v8::internal::DebugEvaluate::Global
          (Isolate *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  Isolate *pIVar1;
  undefined1 uVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong local_98 [2];
  Isolate *pIStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_1 + 0xb6c8);
  uVar2 = *(undefined1 *)(lVar8 + 0xc);
  *(bool *)(lVar8 + 0xc) = param_3 - 1U < 2;
  uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  pIStack_88 = param_1 + 200;
  local_98[1] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = param_4;
  lVar5 = Compiler::GetSharedFunctionInfoForScript(param_1,param_2,local_98 + 1,2,0,0,0,0,0);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = Factory::NewFunctionFromSharedFunctionInfo((Factory *)param_1,lVar5,puVar4,1);
    if (param_3 == 2) {
      Debug::StartSideEffectCheckMode(*(Debug **)(param_1 + 0xb6c8));
    }
    local_98[0] = *puVar4;
    uVar7 = Context::global_proxy((Context *)local_98);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    }
    uVar6 = Execution::Call(param_1,uVar6,puVar4,0,0);
    if (param_3 == 2) {
      Debug::StopSideEffectCheckMode(*(Debug **)(param_1 + 0xb6c8));
    }
  }
  *(undefined1 *)(lVar8 + 0xc) = uVar2;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

