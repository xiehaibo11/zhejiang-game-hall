
/* v8::internal::Isolate::DiscardPerThreadDataForThisThread() */

void __thiscall v8::internal::Isolate::DiscardPerThreadDataForThisThread(Isolate *this)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  iVar2 = ThreadId::TryGetCurrent();
  if (iVar2 == -1) {
    return;
  }
  base::Mutex::Lock((Mutex *)(this + 0xc7a0));
  uVar3 = *(ulong *)(this + 0xc7d0);
  if (uVar3 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar5 = (ulong)iVar2;
    if (uVar4 < 2) {
      uVar6 = uVar3 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        uVar6 = uVar5 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(this + 0xc7c8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((int)plVar7[2] == iVar2) {
            pvVar9 = (void *)plVar7[3];
            if (pvVar9 != (void *)0x0) {
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::__unordered_map_hasher<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,v8::internal::Isolate::ThreadDataTable::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::equal_to<v8::internal::ThreadId>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>>
              ::__erase_unique<v8::internal::ThreadId>
                        ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::__unordered_map_hasher<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,v8::internal::Isolate::ThreadDataTable::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::ThreadId,std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>,std::__ndk1::equal_to<v8::internal::ThreadId>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::ThreadId,v8::internal::Isolate::PerIsolateThreadData*>>>
                          *)(this + 0xc7c8),(ThreadId *)((long)pvVar9 + 8));
              operator_delete(pvVar9);
            }
            break;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar8 = uVar8 & uVar3 - 1;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0xc7a0));
  return;
}

