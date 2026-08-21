
/* v8::internal::WasmMemoryObject::New(v8::internal::Isolate*,
   v8::internal::MaybeHandle<v8::internal::JSArrayBuffer>, unsigned int) */

ulong * v8::internal::WasmMemoryObject::New(Isolate *param_1,ulong *param_2,int param_3)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  Isolate *pIVar3;
  char cVar4;
  bool bVar5;
  BackingStore *this;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong local_78;
  BackingStore *local_70;
  __shared_weak_count *local_68;
  long local_60;
  __shared_weak_count *local_58;
  
  pIVar3 = param_1 + 0x95a0;
  if (param_2 == (ulong *)0x0) {
    BackingStore::AllocateWasmMemory((BackingStore *)&local_70,param_1,0,0,0);
    local_60 = (long)local_70;
    if (local_70 == (BackingStore *)0x0) {
      local_58 = (__shared_weak_count *)0x0;
    }
    else {
      local_58 = operator_new(0x20);
      *(undefined8 *)(local_58 + 0x10) = 0;
      *(BackingStore **)(local_58 + 0x18) = local_70;
      *(undefined ***)local_58 = &PTR____shared_weak_count_01c98518;
      *(undefined8 *)(local_58 + 8) = 0;
    }
    local_70 = (BackingStore *)0x0;
    param_2 = (ulong *)Factory::NewJSArrayBuffer((Factory *)param_1,&local_60,0);
    p_Var2 = local_58;
    if (local_58 != (__shared_weak_count *)0x0) {
      p_Var1 = local_58 + 8;
      do {
        lVar9 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*(long *)local_58 + 0x10))(local_58);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
      }
    }
    this = local_70;
    local_70 = (BackingStore *)0x0;
    if (this != (BackingStore *)0x0) {
      BackingStore::~BackingStore(this);
      operator_delete(this);
    }
  }
  uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar3;
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    uVar7 = *puVar6;
  }
  uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x327);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pIVar3;
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar3 = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  puVar6 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar6,1);
  uVar10 = *puVar6;
  uVar7 = *param_2;
  *(int *)(uVar10 + 0xb) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,uVar10 + 0xb,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,uVar10 + 0xb,uVar7);
    }
  }
  *(int *)(*puVar6 + 0xf) = param_3 << 1;
  local_78 = *param_2;
  if ((*(uint *)(local_78 + 0x1b) >> 4 & 1) != 0) {
    JSArrayBuffer::GetBackingStore((JSArrayBuffer *)&local_78);
    BackingStore::AttachSharedWasmMemoryObject(local_70,param_1,puVar6);
    if (local_68 != (__shared_weak_count *)0x0) {
      p_Var2 = local_68 + 8;
      do {
        lVar9 = *(long *)p_Var2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar5) {
          *(long *)p_Var2 = lVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*(long *)local_68 + 0x10))(local_68);
        std::__ndk1::__shared_weak_count::__release_weak(local_68);
      }
    }
  }
  return puVar6;
}

