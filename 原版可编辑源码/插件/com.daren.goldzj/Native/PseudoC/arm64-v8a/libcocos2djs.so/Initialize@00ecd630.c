
/* v8::Isolate::Initialize(v8::Isolate*, v8::Isolate::CreateParams const&) */

void v8::Isolate::Initialize(Isolate *param_1,CreateParams *param_2)

{
  Isolate *pIVar1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *p_Var4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  _func_void_JitCodeEvent_ptr *p_Var8;
  __shared_weak_count *p_Var9;
  long local_28;
  
  lVar7 = *(long *)(param_2 + 0x68);
  p_Var4 = *(__shared_weak_count **)(param_2 + 0x70);
  if (p_Var4 != (__shared_weak_count *)0x0) {
    p_Var9 = p_Var4 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
      if (bVar3) {
        *(long *)p_Var9 = *(long *)p_Var9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(param_2 + 0x60);
  if (lVar7 == 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(params.array_buffer_allocator) != nullptr");
    }
    *(long *)(param_1 + 0xc690) = lVar6;
    if (p_Var4 == (__shared_weak_count *)0x0) goto LAB_00ecd704;
    p_Var9 = p_Var4 + 8;
    do {
      lVar7 = *(long *)p_Var9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
      if (bVar3) {
        *(long *)p_Var9 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 != 0) goto LAB_00ecd704;
    (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
  }
  else {
    if ((lVar6 != lVar7) && (lVar6 != 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "params.array_buffer_allocator == nullptr || params.array_buffer_allocator == allocator.get()"
              );
    }
    p_Var9 = *(__shared_weak_count **)(param_1 + 0xc6a0);
    *(long *)(param_1 + 0xc690) = lVar7;
    *(long *)(param_1 + 0xc698) = lVar7;
    *(__shared_weak_count **)(param_1 + 0xc6a0) = p_Var4;
    if (p_Var9 == (__shared_weak_count *)0x0) goto LAB_00ecd704;
    p_Var4 = p_Var9 + 8;
    do {
      lVar7 = *(long *)p_Var4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var4,0x10);
      if (bVar3) {
        *(long *)p_Var4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 != 0) goto LAB_00ecd704;
    (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
    p_Var4 = p_Var9;
  }
  std::__ndk1::__shared_weak_count::__release_weak(p_Var4);
LAB_00ecd704:
  lVar7 = *(long *)(param_2 + 0x40);
  pIVar1 = param_1 + 0x9520;
  if (lVar7 == 0) {
    lVar7 = internal::Snapshot::DefaultSnapshotBlob();
  }
  *(long *)(param_1 + 0xb7e8) = lVar7;
  p_Var8 = *(_func_void_JitCodeEvent_ptr **)param_2;
  if (p_Var8 != (_func_void_JitCodeEvent_ptr *)0x0) {
    internal::Isolate::InitializeLoggingAndCounters((Isolate *)param_1);
    internal::Logger::SetCodeEventHandler(*(Logger **)(param_1 + 0x9558),0,p_Var8);
  }
  if (*(_func_int_ptr_char_ptr **)(param_2 + 0x48) != (_func_int_ptr_char_ptr *)0x0) {
    internal::Counters::ResetCounterFunction
              (*(Counters **)pIVar1,*(_func_int_ptr_char_ptr **)(param_2 + 0x48));
  }
  if (*(_func_void_ptr_char_ptr_int_int_ulong **)(param_2 + 0x50) !=
      (_func_void_ptr_char_ptr_int_int_ulong *)0x0) {
    internal::Counters::ResetCreateHistogramFunction
              (*(Counters **)pIVar1,*(_func_void_ptr_char_ptr_int_int_ulong **)(param_2 + 0x50));
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    *(long *)(*(long *)pIVar1 + 0x28) = *(long *)(param_2 + 0x58);
  }
  *(undefined8 *)(param_1 + 0xb7a8) = *(undefined8 *)(param_2 + 0x78);
  param_1[0xc728] = *(Isolate *)(param_2 + 0x80);
  internal::Heap::ConfigureHeap((Heap *)(param_1 + 0x8850),(ResourceConstraints *)(param_2 + 8));
  if (*(ulong *)(param_2 + 0x38) != 0) {
    internal::StackGuard::SetStackLimit((StackGuard *)(param_1 + 0x48),*(ulong *)(param_2 + 0x38));
  }
  internal::Isolate::Enter((Isolate *)param_1);
  uVar5 = internal::Snapshot::Initialize((Isolate *)param_1);
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0xb7e8) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal(
              "Failed to deserialize the V8 snapshot blob. This can mean that the snapshot blob file is corrupted or missing."
              );
    }
    if (internal::FLAG_profile_deserialization == '\0') {
      lVar7 = 0;
    }
    else {
      lVar7 = base::TimeTicks::HighResolutionNow();
    }
    internal::Isolate::InitWithoutSnapshot((Isolate *)param_1);
    if (internal::FLAG_profile_deserialization != '\0') {
      local_28 = base::TimeTicks::HighResolutionNow();
      local_28 = local_28 - lVar7;
      base::TimeDelta::InMillisecondsF((TimeDelta *)&local_28);
      internal::PrintF("[Initializing isolate from scratch took %0.3f ms]\n");
    }
  }
  param_1[0xb829] = *(Isolate *)(param_2 + 0x81);
  internal::Isolate::Exit((Isolate *)param_1);
  return;
}

