
/* v8::internal::Factory::NewJSSharedArrayBuffer(std::__ndk1::shared_ptr<v8::internal::BackingStore>)
    */

ulong * __thiscall v8::internal::Factory::NewJSSharedArrayBuffer(Factory *this,undefined8 *param_2)

{
  __shared_weak_count *p_Var1;
  Factory *pFVar2;
  char cVar3;
  bool bVar4;
  __shared_weak_count *this_00;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_60;
  __shared_weak_count *p_Stack_58;
  ulong local_48;
  
  uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar2 = this + 0x95a0;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pFVar2;
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar2 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
    uVar8 = *puVar5;
  }
  uVar8 = uVar8 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0x28b)) + 0x1b);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pFVar2;
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar2 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
    uVar8 = *puVar5;
  }
  lVar9 = *(long *)(this + 0x8938);
  lVar10 = *(long *)(lVar9 + 0x68);
  uVar8 = (ulong)*(byte *)(uVar8 + 3) * 4;
  if ((((ulong)(*(long *)(lVar9 + 0x70) - lVar10) < uVar8) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar6 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar8,0,1,0);
  }
  else {
    uVar6 = lVar10 + 1;
    *(ulong *)(lVar9 + 0x68) = lVar10 + uVar8;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar10,uVar8,1,1);
  }
  *(int *)(uVar6 - 1) = (int)*puVar5;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pFVar2;
    if (puVar7 == *(ulong **)(this + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar2 = puVar7 + 1;
    *puVar7 = uVar6;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
  }
  InitializeJSObjectFromMap(this,puVar7,this + 0x168,puVar5);
  local_48 = *puVar7;
  p_Stack_58 = (__shared_weak_count *)param_2[1];
  local_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  JSArrayBuffer::Setup((JSArrayBuffer *)&local_48,1,&local_60);
  this_00 = p_Stack_58;
  if (p_Stack_58 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_58 + 8;
    do {
      lVar10 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)p_Stack_58 + 0x10))(p_Stack_58);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  return puVar7;
}

