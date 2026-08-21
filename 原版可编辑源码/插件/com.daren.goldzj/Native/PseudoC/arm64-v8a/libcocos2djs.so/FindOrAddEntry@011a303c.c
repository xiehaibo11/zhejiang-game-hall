
/* v8::internal::HeapSnapshotGenerator::FindOrAddEntry(void*, v8::internal::HeapEntriesAllocator*)
    */

long __thiscall
v8::internal::HeapSnapshotGenerator::FindOrAddEntry
          (HeapSnapshotGenerator *this,void *param_1,HeapEntriesAllocator *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  HeapEntry *local_28;
  void *local_8;
  
  uVar3 = *(ulong *)(this + 0x120);
  if (uVar3 != 0) {
    uVar4 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar10 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = (uVar4 ^ (ulong)param_1 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
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
    plVar7 = *(long **)(*(long *)(this + 0x118) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((void *)plVar7[2] == param_1) {
            if (plVar7[3] != 0) {
              return plVar7[3];
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
  local_8 = param_1;
  local_28 = (HeapEntry *)(**(code **)(*(long *)param_2 + 0x10))(param_2);
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>>>
          ::__emplace_unique_key_args<void*,void*&,v8::internal::HeapEntry*>
                    ((__hash_table<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>>>
                      *)(this + 0x118),&local_8,&local_8,&local_28);
  return *(long *)(lVar2 + 0x18);
}

