
/* v8::internal::ReturnValueScope::ReturnValueScope(v8::internal::Debug*) */

void __thiscall
v8::internal::ReturnValueScope::ReturnValueScope(ReturnValueScope *this,Debug *param_1)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  
  *(Debug **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  pIVar2 = *(Isolate **)(param_1 + 0x88);
  uVar3 = *(ulong *)(param_1 + 0x68);
  if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar3);
  }
  *(ulong **)(this + 8) = puVar1;
  return;
}

