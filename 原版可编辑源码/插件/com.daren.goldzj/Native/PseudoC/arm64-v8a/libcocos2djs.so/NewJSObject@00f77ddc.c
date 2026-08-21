
/* v8::internal::Factory::NewJSObject(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewJSObject(Factory *this,ulong *param_2,undefined4 param_3)

{
  Factory *pFVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  
  pFVar1 = this + 0x95a0;
  JSFunction::EnsureHasInitialMap(param_2);
  uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x1b);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pFVar1;
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
  }
  uVar4 = AllocateRawWithAllocationSite(this,puVar2,param_3,0);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
  }
  InitializeJSObjectFromMap(this,puVar3,this + 0x168,puVar2);
  return puVar3;
}

