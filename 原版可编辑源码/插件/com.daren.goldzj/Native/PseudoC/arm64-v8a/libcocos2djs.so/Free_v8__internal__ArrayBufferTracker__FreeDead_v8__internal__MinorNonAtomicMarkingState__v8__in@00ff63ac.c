
/* void 
   v8::internal::LocalArrayBufferTracker::Free<v8::internal::ArrayBufferTracker::FreeDead<v8::internal::MinorNonAtomicMarkingState>(v8::internal::Page*,
   v8::internal::MinorNonAtomicMarkingState*)::{lambda(v8::internal::JSArrayBuffer)#1}>(v8::internal::ArrayBufferTracker::FreeDead<v8::internal::MinorNonAtomicMarkingState>(v8::internal::Page*,
   v8::internal::MinorNonAtomicMarkingState*)::{lambda(v8::internal::JSArrayBuffer)#1}) */

void v8::internal::LocalArrayBufferTracker::
     Free<v8::internal::ArrayBufferTracker::FreeDead<v8::internal::MinorNonAtomicMarkingState>(v8::internal::Page*,v8::internal::MinorNonAtomicMarkingState*)::_lambda(v8::internal::JSArrayBuffer)_1_>
               (long *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  __shared_weak_count *this;
  long lVar10;
  long lVar11;
  void *local_70 [2];
  char local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar6 = (long *)param_1[3];
  if (plVar6 != (long *)0x0) {
    lVar10 = 0;
    do {
      while( true ) {
        uVar7 = plVar6[2];
        if ((*(uint *)(uVar7 + 0x1b) >> 4 & 1) == 0) {
          lVar11 = *(long *)(uVar7 + 0xb);
        }
        else {
          lVar11 = 0;
        }
        uVar8 = uVar7 - (uVar7 & 0xfffffffffffc0000);
        if ((*(uint *)(*(long *)((uVar7 & 0xfffffffffffc0000) + 0x108) +
                      (uVar8 >> 7 & 0x1ffffff) * 4) >> (ulong)((uint)(uVar8 >> 2) & 0x1f) & 1) != 0)
        break;
        plVar6 = (long *)*plVar6;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
        ::remove(local_70,param_1 + 1);
        pvVar5 = local_70[0];
        local_70[0] = (void *)0x0;
        if (pvVar5 != (void *)0x0) {
          if ((local_60 != '\0') &&
             (this = *(__shared_weak_count **)((long)pvVar5 + 0x20),
             this != (__shared_weak_count *)0x0)) {
            p_Var1 = this + 8;
            do {
              lVar9 = *(long *)p_Var1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar3) {
                *(long *)p_Var1 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*(long *)this + 0x10))(this);
              std::__ndk1::__shared_weak_count::__release_weak(this);
            }
          }
          operator_delete(pvVar5);
        }
        lVar10 = lVar11 + lVar10;
        if (plVar6 == (long *)0x0) goto LAB_00ff649c;
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
LAB_00ff649c:
    if (lVar10 != 0) {
      lVar11 = *param_1;
      plVar6 = (long *)(lVar11 + 200);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 - lVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar11 = *(long *)(lVar11 + 0x58);
      plVar6 = *(long **)(lVar11 + 0x30);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 - lVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)(*(long *)(lVar11 + 0x40) + 0xa0);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 - lVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar6 = (long *)(*(long *)(*param_1 + 0x18) + 0x28);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + lVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

