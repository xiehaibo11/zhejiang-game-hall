
/* v8::internal::CallOptimization::AnalyzePossibleApiFunction(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall
v8::internal::CallOptimization::AnalyzePossibleApiFunction
          (CallOptimization *this,Isolate *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar5 = *param_3 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar5 | *(uint *)(*param_3 + 0xb)) + 3);
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar2) - 1)) == 0x4e)) {
    pIVar1 = param_1 + 0x95a0;
    uVar5 = *param_3 & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*param_3 + 0xb)) + 3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar5;
      uVar2 = *(uint *)(uVar5 + 0x17);
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      uVar5 = *puVar3;
      uVar2 = *(uint *)(uVar5 + 0x17);
    }
    if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
      uVar5 = uVar5 & 0xffffffff00000000 | (ulong)uVar2;
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pIVar1;
        if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar4 + 1;
        *puVar4 = uVar5;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
      *(ulong **)(this + 0x18) = puVar4;
      uVar2 = *(uint *)(*puVar3 + 0x1f);
      if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
        uVar5 = *puVar3 & 0xffffffff00000000 | (ulong)uVar2;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)pIVar1;
          if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar3 + 1;
          *puVar3 = uVar5;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
        }
        *(ulong **)(this + 0x10) = puVar3;
      }
      this[8] = (CallOptimization)0x1;
    }
  }
  return;
}

