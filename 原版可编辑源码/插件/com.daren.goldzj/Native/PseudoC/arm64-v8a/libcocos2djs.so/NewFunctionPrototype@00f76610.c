
/* v8::internal::Factory::NewFunctionPrototype(v8::internal::Handle<v8::internal::JSFunction>) */

ulong * __thiscall v8::internal::Factory::NewFunctionPrototype(Factory *this,ulong *param_2)

{
  Factory *pFVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  CanonicalHandleScope *this_00;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = *param_2 & 0xffffffff00000000;
  pFVar1 = this + 0x95a0;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*param_2 + 0xf)) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pFVar1;
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  uVar7 = *param_2;
  if (((*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) + 0x1b) & 0x1f) - 0xd
      & 0xff) < 2) {
    uVar7 = *puVar4;
    uVar2 = *(uint *)(uVar7 + 0xdb);
  }
  else {
    uVar2 = *(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) + 0x1b) & 0x1f;
    if ((6 < uVar2 - 10) && (1 < uVar2 - 1)) {
      uVar7 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 499);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)pFVar1;
        if (puVar4 == *(ulong **)(this + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)pFVar1 = puVar4 + 1;
        *puVar4 = uVar7;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
        uVar7 = *puVar4;
      }
      this_00 = *(CanonicalHandleScope **)(this + 0x95b8);
      uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x1b);
      goto joined_r0x00f76760;
    }
    uVar7 = *puVar4;
    uVar2 = *(uint *)(uVar7 + 0xd7);
  }
  this_00 = *(CanonicalHandleScope **)(this + 0x95b8);
  uVar7 = uVar7 & 0xffffffff00000000 | (ulong)uVar2;
joined_r0x00f76760:
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pFVar1;
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar4 + 1;
    *puVar4 = uVar7;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(this_00,uVar7);
  }
  lVar8 = *(long *)(this + 0x8938);
  lVar3 = *(long *)(lVar8 + 0x68);
  uVar7 = (ulong)*(byte *)(*puVar4 + 3) * 4;
  if ((((ulong)(*(long *)(lVar8 + 0x70) - lVar3) < uVar7) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar7,0,1,0);
  }
  else {
    uVar5 = lVar3 + 1;
    *(ulong *)(lVar8 + 0x68) = lVar3 + uVar7;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar3,uVar7,1,1);
  }
  *(int *)(uVar5 - 1) = (int)*puVar4;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pFVar1;
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
  }
  InitializeJSObjectFromMap(this,puVar6,this + 0x168,puVar4);
  uVar2 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 0x1b) &
          0x1f;
  if ((6 < uVar2 - 10) && (1 < uVar2 - 1)) {
    JSObject::AddProperty(this,puVar6,this + 0x5d0,param_2,2);
  }
  return puVar6;
}

