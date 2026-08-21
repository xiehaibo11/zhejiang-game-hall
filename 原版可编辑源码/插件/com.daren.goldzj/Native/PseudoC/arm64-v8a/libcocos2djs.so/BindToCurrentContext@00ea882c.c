
/* v8::UnboundScript::BindToCurrentContext() */

void __thiscall v8::UnboundScript::BindToCurrentContext(UnboundScript *this)

{
  CanonicalHandleScope *this_00;
  ulong *puVar1;
  ulong uVar2;
  Isolate *pIVar3;
  
  pIVar3 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
  uVar2 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
  this_00 = *(CanonicalHandleScope **)((ulong)*(uint *)(this + 4) << 0x20 | 0x95b8);
  uVar2 = uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)) + 0x13);
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar2;
  }
  else {
    puVar1 = (ulong *)internal::CanonicalHandleScope::Lookup(this_00,uVar2);
  }
  internal::Factory::NewFunctionFromSharedFunctionInfo((Factory *)pIVar3,this,puVar1,1);
  return;
}

