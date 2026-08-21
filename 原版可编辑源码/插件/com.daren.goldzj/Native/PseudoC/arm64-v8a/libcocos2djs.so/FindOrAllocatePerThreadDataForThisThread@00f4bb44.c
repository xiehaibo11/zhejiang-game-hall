
/* v8::internal::Isolate::FindOrAllocatePerThreadDataForThisThread() */

undefined8 * __thiscall
v8::internal::Isolate::FindOrAllocatePerThreadDataForThisThread(Isolate *this)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong extraout_x1;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong local_50;
  undefined8 *puStack_48;
  ulong uVar11;
  
  uVar2 = ThreadId::GetCurrentThreadId();
  base::Mutex::Lock((Mutex *)(this + 0xc7a0));
  uVar4 = *(ulong *)(this + 0xc7d0);
  if (uVar4 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
    uVar5 = (ulong)(int)uVar2;
    if ((uVar11 & 0xffffffff) < 2) {
      uVar6 = uVar4 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)(this + 0xc7c8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if (*(uint *)(plVar7 + 2) == uVar2) {
            puVar3 = (undefined8 *)plVar7[3];
            if (puVar3 != (undefined8 *)0x0) goto LAB_00f4bc80;
            break;
          }
        }
        else {
          if ((uVar11 & 0xffffffff) < 2) {
            uVar8 = uVar8 & uVar4 - 1;
          }
          else if (uVar4 <= uVar8) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar8 / uVar4;
            }
            uVar8 = uVar8 - uVar1 * uVar4;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  if (FLAG_adjust_os_scheduling_parameters != '\0') {
    base::OS::AdjustSchedulingParams();
  }
  puVar3 = operator_new(0x20);
  *puVar3 = this;
  *(uint *)(puVar3 + 1) = uVar2;
  puVar3[2] = 0;
  puVar3[3] = 0;
  local_50 = (ulong)uVar2;
  puStack_48 = puVar3;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::__unordered_map_hasher<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,v8::internal::Isolate::ThreadDataTable::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::equal_to<v8::internal::ThreadId>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>>
  ::
  __emplace_unique_key_args<v8::internal::ThreadId,std::__ndk1::pair<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>
            ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::__unordered_map_hasher<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,v8::internal::Isolate::ThreadDataTable::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::equal_to<v8::internal::ThreadId>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>>
              *)(this + 0xc7c8),(ThreadId *)&local_50,(pair *)&local_50);
  if ((extraout_x1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","inserted");
  }
LAB_00f4bc80:
  base::Mutex::Unlock((Mutex *)(this + 0xc7a0));
  return puVar3;
}

