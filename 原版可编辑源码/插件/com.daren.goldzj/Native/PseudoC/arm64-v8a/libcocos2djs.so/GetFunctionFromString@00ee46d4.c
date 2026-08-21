
/* v8::internal::Compiler::GetFunctionFromString(v8::internal::Handle<v8::internal::Context>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::ParseRestriction, int) */

void v8::internal::Compiler::GetFunctionFromString
               (ulong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  
  pIVar3 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar4 = (ulong)pIVar3 | (ulong)*(uint *)(((ulong)pIVar3 | (ulong)*(uint *)(*param_1 - 1)) + 0x13);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar4);
  }
  uVar2 = ValidateDynamicCompilationSource(pIVar3,param_1,param_2);
  GetFunctionFromValidatedString(param_1,uVar2,param_3,param_4);
  return;
}

