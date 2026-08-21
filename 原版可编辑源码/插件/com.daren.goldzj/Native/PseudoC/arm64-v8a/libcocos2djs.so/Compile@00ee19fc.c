
/* v8::internal::Compiler::Compile(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Compiler::ClearExceptionFlag, v8::internal::IsCompiledScope*) */

undefined8 v8::internal::Compiler::Compile(ulong *param_1,undefined4 param_2,ulong *param_3)

{
  uint uVar1;
  CanonicalHandleScope *pCVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  ulong local_60;
  char local_58;
  
  local_60 = *param_1;
  JSFunction::ResetIfBytecodeFlushed((JSFunction *)&local_60);
  pIVar7 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar2 = *(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8);
  uVar8 = (ulong)pIVar7 | (ulong)*(uint *)(*param_1 + 0xb);
  if (pCVar2 == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar8;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(pCVar2,uVar8);
  }
  IsCompiledScope::IsCompiledScope
            ((IsCompiledScope *)&local_60,*puVar3,*puVar3 & 0xffffffff00000000);
  *param_3 = local_60;
  *(char *)(param_3 + 1) = local_58;
  if ((local_58 == '\0') && (uVar8 = Compile(puVar3,param_2,param_3), (uVar8 & 1) == 0)) {
    uVar5 = 0;
  }
  else {
    local_60 = *puVar3;
    uVar8 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_60);
    pCVar2 = *(CanonicalHandleScope **)((ulong)pIVar7 | 0x95b8);
    if (pCVar2 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar7 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar7);
      }
      *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar8;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup(pCVar2,uVar8);
    }
    JSFunction::InitializeFeedbackCell(param_1);
    if (FLAG_always_opt != '\0') {
      uVar8 = *param_1 & 0xffffffff00000000;
      uVar1 = *(uint *)((uVar8 | *(uint *)(*param_1 + 0xb)) + 3);
      if (((uVar1 & 1) == 0) ||
         (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar1) - 1)) != 0x57)) {
        if (FLAG_trace_opt != '\0') {
          PrintF("[optimizing ");
          local_60 = *param_1;
          Object::ShortPrint((Object *)&local_60,(__sFILE *)waitpid);
          PrintF(" because --always-opt]\n");
        }
        puVar4 = (ulong *)FUN_00ee1db0(param_1,0,0xffffffff,0);
        if (puVar4 != (ulong *)0x0) {
          puVar3 = puVar4;
        }
      }
    }
    uVar8 = *param_1;
    uVar6 = *puVar3;
    *(int *)(uVar8 + 0x17) = (int)uVar6;
    if (((uVar6 & 1) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar8,uVar8 + 0x17);
    }
    uVar5 = 1;
  }
  return uVar5;
}

