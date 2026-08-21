
/* v8::internal::Factory::NewJSArrayBuffer(std::__ndk1::shared_ptr<v8::internal::BackingStore>,
   v8::internal::AllocationType) */

ulong * __thiscall
v8::internal::Factory::NewJSArrayBuffer(Factory *this,undefined8 *param_2,undefined4 param_3)

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
  undefined8 local_60;
  __shared_weak_count *p_Stack_58;
  ulong local_48;
  
  uVar7 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar2 = this + 0x95a0;
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
  uVar7 = AllocateRawWithAllocationSite(this,puVar5,param_3,0);
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
  p_Stack_58 = (__shared_weak_count *)param_2[1];
  local_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  JSArrayBuffer::Setup((JSArrayBuffer *)&local_48,0,&local_60);
  this_00 = p_Stack_58;
  if (p_Stack_58 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_58 + 8;
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
      (**(code **)(*(long *)p_Stack_58 + 0x10))(p_Stack_58);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  return puVar6;
}

