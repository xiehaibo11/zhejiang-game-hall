
/* v8::internal::ValueSerializer::WriteWasmMemory(v8::internal::Handle<v8::internal::WasmMemoryObject>)
    */

undefined2 __thiscall
v8::internal::ValueSerializer::WriteWasmMemory(ValueSerializer *this,ulong *param_2)

{
  __shared_weak_count *p_Var1;
  size_t __size;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  void *pvVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_58 [8];
  __shared_weak_count *local_50;
  undefined1 local_44;
  size_t local_28;
  
  local_28 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if ((*(uint *)(local_28 + 0x1b) >> 4 & 1) == 0) {
    ThrowDataCloneError(this,0x168,param_2);
    return 0;
  }
  JSArrayBuffer::GetBackingStore((JSArrayBuffer *)&local_28);
  GlobalBackingStoreRegistry::Register(auStack_58);
  if (local_50 != (__shared_weak_count *)0x0) {
    p_Var1 = local_50 + 8;
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
      (**(code **)(*(long *)local_50 + 0x10))(local_50);
      std::__ndk1::__shared_weak_count::__release_weak(local_50);
    }
  }
  local_44 = 0x6d;
  lVar10 = *(long *)(this + 0x18);
  uVar11 = lVar10 + 1;
  if (*(ulong *)(this + 0x20) < uVar11) {
    local_28 = 0;
    uVar9 = *(ulong *)(this + 0x20) * 2;
    plVar2 = *(long **)(this + 8);
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    __size = uVar9 + 0x40;
    if (plVar2 == (long *)0x0) {
      pvVar6 = realloc(*(void **)(this + 0x10),__size);
      local_28 = __size;
    }
    else {
      pvVar6 = (void *)(**(code **)(*plVar2 + 0x30))
                                 (plVar2,*(void **)(this + 0x10),__size,&local_28);
    }
    if (pvVar6 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_011437ec;
    }
    *(void **)(this + 0x10) = pvVar6;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar6 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar11;
  *(undefined1 *)((long)pvVar6 + lVar10) = local_44;
LAB_011437ec:
  WriteVarint<unsigned_int>
            (this,*(uint *)(*param_2 + 0xf) & 0xfffffffe ^ (int)*(uint *)(*param_2 + 0xf) >> 0x1f);
  pIVar7 = *(Isolate **)this;
  uVar11 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar7 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar7);
    }
    *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar11;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar11);
  }
  uVar5 = WriteJSReceiver(this,puVar8);
  return uVar5;
}

