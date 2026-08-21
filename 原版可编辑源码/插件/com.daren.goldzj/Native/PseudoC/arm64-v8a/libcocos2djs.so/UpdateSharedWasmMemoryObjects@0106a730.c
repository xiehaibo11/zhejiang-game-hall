
/* v8::internal::GlobalBackingStoreRegistry::UpdateSharedWasmMemoryObjects(v8::internal::Isolate*)
    */

void v8::internal::GlobalBackingStoreRegistry::UpdateSharedWasmMemoryObjects(Isolate *param_1)

{
  __shared_weak_count *p_Var1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  __shared_weak_count *p_Var8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_78;
  __shared_weak_count *local_70;
  ulong local_68;
  long local_60;
  __shared_weak_count *local_58;
  
  pIVar2 = param_1 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar12 = *(ulong *)(param_1 + 0xfc8);
  if (1 < *(int *)(uVar12 + 7)) {
    lVar14 = 0;
    do {
      uVar5 = *(uint *)(uVar12 + (long)((int)lVar14 << 2) + 0xb);
      if ((uVar5 != 3) && ((uVar5 & 1) != 0)) {
        uVar12 = (ulong)uVar5 & 0xfffffffffffffffd | uVar12 & 0xffffffff00000000;
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar9 = *(ulong **)pIVar2;
          if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
            puVar9 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar9 + 1;
          *puVar9 = uVar12;
        }
        else {
          puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
          uVar12 = *puVar9;
        }
        uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xb);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)pIVar2;
          if (puVar10 == *(ulong **)(param_1 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar2 = puVar10 + 1;
          *puVar10 = uVar12;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
          uVar12 = *puVar10;
        }
        local_68 = uVar12;
        JSArrayBuffer::GetBackingStore((JSArrayBuffer *)&local_68);
        p_Var8 = local_58;
        lVar13 = local_60;
        if (*(long *)(*puVar10 + 0xb) != *(long *)(local_60 + 8)) {
          local_60 = 0;
          local_58 = (__shared_weak_count *)0x0;
          local_78 = lVar13;
          local_70 = p_Var8;
          uVar11 = Factory::NewJSSharedArrayBuffer((Factory *)param_1,&local_78);
          p_Var8 = local_70;
          if (local_70 != (__shared_weak_count *)0x0) {
            p_Var1 = local_70 + 8;
            do {
              lVar13 = *(long *)p_Var1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar7) {
                *(long *)p_Var1 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*(long *)local_70 + 0x10))(local_70);
              std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
            }
          }
          local_68 = *puVar9;
          WasmMemoryObject::update_instances((WasmMemoryObject *)&local_68,param_1,uVar11);
        }
        p_Var8 = local_58;
        if (local_58 != (__shared_weak_count *)0x0) {
          p_Var1 = local_58 + 8;
          do {
            lVar13 = *(long *)p_Var1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar7) {
              *(long *)p_Var1 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 == 0) {
            (**(code **)(*(long *)local_58 + 0x10))(local_58);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          }
        }
        uVar12 = *(ulong *)(param_1 + 0xfc8);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(uVar12 + 7) >> 1);
    if (param_1 == (Isolate *)0x0) {
      return;
    }
  }
  *(long *)pIVar2 = lVar3;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar4) {
    *(long *)(param_1 + 0x95a8) = lVar4;
    HandleScope::DeleteExtensions(param_1);
  }
  return;
}

