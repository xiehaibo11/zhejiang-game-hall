
/* v8::internal::Factory::NewJSDataView(v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned
   long, unsigned long) */

void __thiscall
v8::internal::Factory::NewJSDataView(Factory *this,long *param_2,long param_3,undefined8 param_4)

{
  Factory *pFVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar1 = this + 0x95a0;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
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
    uVar4 = *puVar2;
  }
  uVar4 = uVar4 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xa3)) + 0x1b);
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
  plVar3 = (long *)NewJSArrayBufferView(this,puVar2,this + 0x168,param_2,param_3,param_4);
  *(long *)(*plVar3 + 0x1f) = *(long *)(*param_2 + 0x13) + param_3;
  return;
}

