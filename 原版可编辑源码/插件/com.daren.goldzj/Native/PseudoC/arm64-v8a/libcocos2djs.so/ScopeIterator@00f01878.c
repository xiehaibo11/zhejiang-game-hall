
/* v8::internal::ScopeIterator::ScopeIterator(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSFunction>) */

void __thiscall
v8::internal::ScopeIterator::ScopeIterator(ScopeIterator *this,Isolate *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  uVar5 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xf);
  pIVar1 = param_1 + 0x95a0;
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
  *(ulong **)(this + 0x28) = puVar3;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x51) = 0;
  *(undefined8 *)(this + 0x49) = 0;
  uVar5 = *param_3 & 0xffffffff00000000;
  uVar6 = uVar5 | *(uint *)(*param_3 + 0xb);
  local_38 = uVar5 | *(uint *)(uVar6 + 0xf);
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(local_38 - 1)) == 0x5b) {
    local_38 = uVar5 | *(uint *)(local_38 + 0xb);
  }
  if (((((local_38 & 1) == 0) || ((int)local_38 != *(int *)((local_38 & 0xffffffff00000000) + 0xa0))
       ) && (uVar4 = Script::IsUserJavaScript((Script *)&local_38), (uVar4 & 1) != 0)) &&
     ((uVar2 = *(uint *)(uVar6 + 3), (uVar2 & 1) == 0 ||
      (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar2) - 1)) != 0x57)))) {
    uVar5 = *param_3 & 0xffffffff00000000;
    uVar6 = uVar5 | *(uint *)((uVar5 | *(uint *)(*param_3 + 0xb)) + 0xf);
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x5b) {
      uVar6 = uVar5 | *(uint *)(uVar6 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    *(ulong **)(this + 0x30) = puVar3;
    UnwrapEvaluationContext(this);
    return;
  }
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

