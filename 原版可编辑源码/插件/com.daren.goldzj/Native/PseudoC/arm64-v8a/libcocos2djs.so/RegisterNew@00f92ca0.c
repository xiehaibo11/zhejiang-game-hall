
/* v8::internal::ArrayBufferTracker::RegisterNew(v8::internal::Heap*, v8::internal::JSArrayBuffer,
   std::__ndk1::shared_ptr<v8::internal::BackingStore>) */

void v8::internal::ArrayBufferTracker::RegisterNew(long param_1,ulong param_2,long *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  Mutex *this_00;
  Page *this_01;
  ulong local_58;
  long lStack_50;
  __shared_weak_count *local_48;
  
  if (((long *)*param_3 != (long *)0x0) && (*(long *)*param_3 != 0)) {
    this_01 = (Page *)(param_2 & 0xfffffffffffc0000);
    this_00 = *(Mutex **)(this_01 + 0xa0);
    base::Mutex::Lock(this_00);
    plVar4 = *(long **)(this_01 + 0xf8);
    if (plVar4 == (long *)0x0) {
      Page::AllocateLocalTracker(this_01);
      plVar4 = *(long **)(this_01 + 0xf8);
    }
    lStack_50 = *param_3;
    local_48 = (__shared_weak_count *)param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    lVar5 = 0;
    if ((*(uint *)(param_2 + 0x1b) >> 4 & 1) == 0) {
      lVar5 = *(long *)(param_2 + 0xb);
    }
    lVar6 = *plVar4;
    plVar7 = (long *)(lVar6 + 200);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *(long *)(lVar6 + 0x58);
    plVar7 = *(long **)(lVar6 + 0x30);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar7 = (long *)(*(long *)(lVar6 + 0x40) + 0xa0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + lVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_58 = param_2;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
    ::
    __emplace_unique_key_args<v8::internal::JSArrayBuffer,std::__ndk1::pair<v8::internal::JSArrayBuffer_const,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>
              ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::__unordered_map_hasher<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,v8::internal::LocalArrayBufferTracker::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::JSArrayBuffer,std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>,std::__ndk1::equal_to<v8::internal::JSArrayBuffer>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::JSArrayBuffer,std::__ndk1::shared_ptr<v8::internal::BackingStore>>>>
                *)(plVar4 + 1),(JSArrayBuffer *)&local_58,(pair *)&local_58);
    this = local_48;
    if (local_48 != (__shared_weak_count *)0x0) {
      p_Var1 = local_48 + 8;
      do {
        lVar5 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*(long *)local_48 + 0x10))(local_48);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
    base::Mutex::Unlock(this_00);
    if ((*(uint *)(param_2 + 0x1b) >> 4 & 1) == 0) {
      lVar5 = *(long *)(param_2 + 0xb);
    }
    else {
      lVar5 = 0;
    }
    lVar6 = *(long *)(param_1 + -0x8830) + lVar5;
    *(long *)(param_1 + -0x8830) = lVar6;
    if (0x2000000 < lVar6 - *(long *)(param_1 + -0x8820)) {
      v8::Isolate::CheckMemoryPressure((Isolate *)(param_1 + -0x8850));
    }
    if (lVar5 < 0) {
      lVar5 = *(long *)(param_1 + -0x8828) + lVar5;
      if (0x4000000 < lVar5) {
        *(long *)(param_1 + -0x8828) = lVar5;
      }
    }
    else if ((lVar5 != 0) && (*(long *)(param_1 + -0x8828) < lVar6)) {
      v8::Isolate::ReportExternalAllocationLimitReached((Isolate *)(param_1 + -0x8850));
    }
  }
  return;
}

