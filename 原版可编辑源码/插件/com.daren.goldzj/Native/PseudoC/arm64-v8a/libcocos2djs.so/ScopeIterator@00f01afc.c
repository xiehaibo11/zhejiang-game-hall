
/* v8::internal::ScopeIterator::ScopeIterator(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSGeneratorObject>) */

void __thiscall
v8::internal::ScopeIterator::ScopeIterator(ScopeIterator *this,Isolate *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_28;
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(ulong **)(this + 0x18) = param_3;
  uVar5 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xb);
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
  *(ulong **)(this + 0x20) = puVar3;
  uVar5 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + 0xf);
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
  uVar5 = **(ulong **)(this + 0x20) & 0xffffffff00000000;
  uVar4 = uVar5 | *(uint *)((uVar5 | *(uint *)(**(ulong **)(this + 0x20) + 0xb)) + 0xf);
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
    uVar4 = uVar5 | *(uint *)(uVar4 + 0xb);
  }
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
  *(ulong **)(this + 0x30) = puVar3;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x58] = (ScopeIterator)0x0;
  uVar4 = **(ulong **)(this + 0x20) & 0xffffffff00000000;
  uVar6 = uVar4 | *(uint *)(**(ulong **)(this + 0x20) + 0xb);
  uVar5 = uVar4 | *(uint *)(uVar6 + 0xf);
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
    uVar5 = uVar4 | *(uint *)(uVar5 + 0xb);
  }
  if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa0))) {
    local_28 = uVar5;
    uVar5 = Script::IsUserJavaScript((Script *)&local_28);
    if (((uVar5 & 1) != 0) &&
       ((uVar2 = *(uint *)(uVar6 + 3), (uVar2 & 1) == 0 ||
        (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar2) - 1)) != 0x57)))) {
      TryParseAndRetrieveScopes(this,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",&BYTE_019a74cc);
}

