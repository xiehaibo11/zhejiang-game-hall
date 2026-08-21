
/* v8::internal::Factory::NewJSArrayBufferAndBackingStore(unsigned long,
   v8::internal::InitializedFlag, v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewJSArrayBufferAndBackingStore
          (Factory *this,long param_1,undefined4 param_3,undefined4 param_4)

{
  __shared_weak_count *p_Var1;
  Factory *pFVar2;
  char cVar3;
  bool bVar4;
  __shared_weak_count *this_00;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long local_58;
  __shared_weak_count *local_50;
  ulong local_48;
  
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    BackingStore::Allocate((BackingStore *)&local_48,this,param_1,0,param_3);
    uVar9 = local_48;
    if (local_48 == 0) {
      return (ulong *)0x0;
    }
  }
  pFVar2 = this + 0x95a0;
  uVar7 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pFVar2;
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar2 = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
    uVar7 = *puVar5;
  }
  uVar7 = uVar7 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x23)) + 0x1b);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pFVar2;
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar2 = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  uVar7 = AllocateRawWithAllocationSite(this,puVar5,param_4,0);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pFVar2;
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar2 = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  InitializeJSObjectFromMap(this,puVar6,this + 0x168,puVar5);
  local_48 = *puVar6;
  local_58 = uVar9;
  if (uVar9 == 0) {
    local_50 = (__shared_weak_count *)0x0;
  }
  else {
    local_50 = operator_new(0x20);
    *(undefined8 *)(local_50 + 0x10) = 0;
    *(ulong *)(local_50 + 0x18) = uVar9;
    *(undefined ***)local_50 = &PTR____shared_weak_count_01c98518;
    *(undefined8 *)(local_50 + 8) = 0;
  }
  JSArrayBuffer::Setup((JSArrayBuffer *)&local_48,0,&local_58);
  this_00 = local_50;
  if (local_50 != (__shared_weak_count *)0x0) {
    p_Var1 = local_50 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)local_50 + 0x10))(local_50);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  return puVar6;
}

