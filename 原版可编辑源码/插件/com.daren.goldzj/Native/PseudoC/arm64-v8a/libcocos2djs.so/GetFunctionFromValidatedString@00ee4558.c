
/* v8::internal::Compiler::GetFunctionFromValidatedString(v8::internal::Handle<v8::internal::Context>,
   v8::internal::MaybeHandle<v8::internal::String>, v8::internal::ParseRestriction, int) */

undefined8
v8::internal::Compiler::GetFunctionFromValidatedString
          (ulong *param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  CanonicalHandleScope *pCVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  Isolate *pIVar6;
  ulong uVar7;
  ulong local_58;
  
  pIVar6 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
  uVar7 = (ulong)pIVar6 | (ulong)*(uint *)(((ulong)pIVar6 | (ulong)*(uint *)(*param_1 - 1)) + 0x13);
  if (pCVar1 == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar7;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(pCVar1,uVar7);
  }
  if (param_2 != 0) {
    uVar7 = *puVar2 & 0xffffffff00000000;
    pCVar1 = *(CanonicalHandleScope **)((ulong)pIVar6 | 0x95b8);
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*puVar2 + 0xaf)) + 0xb);
    if (pCVar1 == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar6 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)(pIVar6 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar7;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup(pCVar1,uVar7);
    }
    uVar5 = GetFunctionFromEval(param_2,puVar3,puVar2,0,param_3,param_4,0,0xffffffff);
    return uVar5;
  }
  local_58 = *puVar2;
  uVar5 = Context::ErrorMessageForCodeGenerationFromStrings((Context *)&local_58);
  puVar4 = (undefined8 *)Factory::NewEvalError((Factory *)pIVar6,0x152,uVar5,0,0);
  Isolate::Throw(pIVar6,*puVar4,0);
  return 0;
}

