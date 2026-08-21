
/* v8::internal::ArrayBufferTracker::FreeAll(v8::internal::Page*) */

void v8::internal::ArrayBufferTracker::FreeAll(Page *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  __shared_weak_count *this;
  long *plVar8;
  long lVar9;
  long lVar10;
  void *local_80 [2];
  char local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar8 = *(long **)(param_1 + 0xf8);
  if (plVar8 != (long *)0x0) {
    plVar6 = (long *)plVar8[3];
    if (plVar6 != (long *)0x0) {
      lVar9 = 0;
      do {
        if ((*(uint *)(plVar6[2] + 0x1b) >> 4 & 1) == 0) {
          lVar10 = *(long *)(plVar6[2] + 0xb);
        }
        else {
          lVar10 = 0;
        }
        plVar6 = (long *)*plVar6;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
        ::remove(local_80,plVar8 + 1);
        pvVar5 = local_80[0];
        local_80[0] = (void *)0x0;
        if (pvVar5 != (void *)0x0) {
          if ((local_70 != '\0') &&
             (this = *(__shared_weak_count **)((long)pvVar5 + 0x20),
             this != (__shared_weak_count *)0x0)) {
            p_Var1 = this + 8;
            do {
              lVar7 = *(long *)p_Var1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar3) {
                *(long *)p_Var1 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 == 0) {
              (**(code **)(*(long *)this + 0x10))(this);
              std::__ndk1::__shared_weak_count::__release_weak(this);
            }
          }
          operator_delete(pvVar5);
        }
        lVar9 = lVar10 + lVar9;
      } while (plVar6 != (long *)0x0);
      if (lVar9 != 0) {
        lVar10 = *plVar8;
        plVar6 = (long *)(lVar10 + 200);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 - lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar10 = *(long *)(lVar10 + 0x58);
        plVar6 = *(long **)(lVar10 + 0x30);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 - lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6 = (long *)(*(long *)(lVar10 + 0x40) + 0xa0);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 - lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6 = (long *)(*(long *)(*plVar8 + 0x18) + 0x28);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    if (plVar8[4] == 0) {
      MemoryChunk::ReleaseLocalTracker((MemoryChunk *)param_1);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

