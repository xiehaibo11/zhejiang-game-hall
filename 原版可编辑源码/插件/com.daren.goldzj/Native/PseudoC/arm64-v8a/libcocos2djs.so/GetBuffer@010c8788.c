
/* v8::internal::JSTypedArray::GetBuffer() */

ulong * __thiscall v8::internal::JSTypedArray::GetBuffer(JSTypedArray *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this_00;
  BackingStore *this_01;
  CanonicalHandleScope *pCVar4;
  ulong *puVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  Isolate *pIVar11;
  ulong uVar12;
  size_t __n;
  ulong uVar13;
  undefined8 *local_60;
  __shared_weak_count *local_58;
  ulong local_50;
  BackingStore *local_48;
  
  uVar12 = *(ulong *)this;
  pIVar11 = (Isolate *)(uVar12 & 0xffffffff00000000);
  pCVar4 = *(CanonicalHandleScope **)((ulong)pIVar11 | 0x95b8);
  if (pCVar4 == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar12;
    pIVar7 = pIVar11;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(pCVar4,uVar12);
    uVar12 = *puVar5;
    pIVar7 = (Isolate *)(uVar12 & 0xffffffff00000000);
  }
  pCVar4 = *(CanonicalHandleScope **)((ulong)pIVar11 | 0x95b8);
  uVar12 = (ulong)pIVar7 | (ulong)*(uint *)(uVar12 + 0xb);
  if (pCVar4 == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar11 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar11 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar11);
    }
    *(ulong **)(pIVar11 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar12;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(pCVar4,uVar12);
  }
  if (*(int *)(*(long *)this + 0x2f) == *(int *)(*(long *)this + 7)) {
    __n = *(size_t *)(*puVar5 + 0x17);
    BackingStore::Allocate((BackingStore *)&local_48,pIVar11,__n,0,0);
    if (local_48 == (BackingStore *)0x0) {
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory((Heap *)(pIVar11 + 0x8850),"JSTypedArray::GetBuffer");
    }
    if (__n != 0) {
      memcpy(*(void **)local_48,
             (void *)(*(long *)(*puVar5 + 0x27) + (ulong)*(uint *)(*puVar5 + 0x2f)),__n);
    }
    local_50 = *puVar6;
    local_60 = (undefined8 *)local_48;
    if (local_48 == (BackingStore *)0x0) {
      local_58 = (__shared_weak_count *)0x0;
    }
    else {
      local_58 = operator_new(0x20);
      *(undefined8 *)(local_58 + 0x10) = 0;
      *(BackingStore **)(local_58 + 0x18) = local_48;
      *(undefined ***)local_58 = &PTR____shared_weak_count_01c98518;
      *(undefined8 *)(local_58 + 8) = 0;
    }
    local_48 = (BackingStore *)0x0;
    JSArrayBuffer::Setup((JSArrayBuffer *)&local_50,0,&local_60);
    this_00 = local_58;
    if (local_58 != (__shared_weak_count *)0x0) {
      p_Var1 = local_58 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
    uVar13 = *puVar5;
    uVar12 = *(ulong *)(pIVar11 + 0x3c0);
    *(int *)(uVar13 + 7) = (int)uVar12;
    if ((uVar12 & 1) != 0) {
      uVar8 = *(ulong *)((uVar12 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,uVar13 + 7,uVar12);
        uVar8 = *(ulong *)(uVar12 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,uVar13 + 7,uVar12);
      }
    }
    this_01 = local_48;
    uVar12 = *puVar5;
    uVar9 = *(undefined8 *)(*puVar6 + 0x13);
    *(undefined4 *)(uVar12 + 0x2f) = 0;
    *(undefined8 *)(uVar12 + 0x27) = uVar9;
    local_48 = (BackingStore *)0x0;
    if (this_01 != (BackingStore *)0x0) {
      BackingStore::~BackingStore(this_01);
      operator_delete(this_01);
    }
  }
  return puVar6;
}

