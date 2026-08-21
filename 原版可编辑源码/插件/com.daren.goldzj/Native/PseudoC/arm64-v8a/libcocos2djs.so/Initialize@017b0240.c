
/* v8::internal::CallOptimization::Initialize(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FunctionTemplateInfo>) */

void __thiscall
v8::internal::CallOptimization::Initialize(CallOptimization *this,Isolate *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(*param_3 + 0x17);
  if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
    pIVar1 = param_1 + 0x95a0;
    uVar4 = *param_3 & 0xffffffff00000000 | (ulong)uVar2;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
    *(ulong **)(this + 0x18) = puVar3;
    uVar2 = *(uint *)(*param_3 + 0x1f);
    if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
      uVar4 = *param_3 & 0xffffffff00000000 | (ulong)uVar2;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)pIVar1;
        if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar3 + 1;
        *puVar3 = uVar4;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      }
      *(ulong **)(this + 0x10) = puVar3;
    }
    this[8] = (CallOptimization)0x1;
  }
  return;
}

