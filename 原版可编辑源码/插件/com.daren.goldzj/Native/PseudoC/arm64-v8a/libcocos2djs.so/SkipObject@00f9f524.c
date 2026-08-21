
/* v8::internal::UnreachableObjectsFilter::SkipObject(v8::internal::HeapObject) */

bool __thiscall
v8::internal::UnreachableObjectsFilter::SkipObject(UnreachableObjectsFilter *this,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong local_30 [2];
  undefined1 *local_8;
  
  local_8 = (undefined1 *)local_30;
  if ((*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) | 1) != 0xa1)
  {
    local_30[0] = param_2 & 0xfffffffffffc0000;
    uVar3 = *(ulong *)(this + 0x20);
    if (uVar3 != 0) {
      uVar4 = (((ulong)(uint)((int)param_2 << 3) & 0xffe00000 | 8) ^ param_2 >> 0x20) *
              -0x622015f714c7d297;
      uVar11 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar3 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar3
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar3
                                                                                        ))))))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar5 = (uVar4 ^ param_2 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
      uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
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
      plVar8 = *(long **)(*(MemoryChunk **)(this + 0x18) + uVar6 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        do {
          uVar9 = plVar8[1];
          if (uVar5 - uVar9 == 0) {
            if (plVar8[2] == local_30[0]) {
              lVar2 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::hash<v8::internal::MemoryChunk*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>>>
                      ::
                      __emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
                                ((MemoryChunk **)(this + 0x18),(piecewise_construct_t *)local_30,
                                 (tuple *)&DAT_019c33c0,(tuple *)&local_8);
              uVar3 = (*(long **)(lVar2 + 0x18))[1];
              if (uVar3 == 0) goto LAB_00f9f730;
              uVar11 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                                CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                                         CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                                  CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                           CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                                    CONCAT12(POPCOUNT((char)(uVar3 
                                                  >> 0x10)),
                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 8)),
                                                           POPCOUNT((char)uVar3))))))));
              uVar10 = NEON_uaddlv(uVar11,1);
              uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
              uVar5 = param_2 & 0xffffffff;
              if (uVar4 < 2) {
                uVar6 = (int)uVar3 - 1 & uVar5;
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
              plVar7 = *(long **)(**(long **)(lVar2 + 0x18) + uVar6 * 8);
              plVar8 = (long *)0x0;
              if ((plVar7 == (long *)0x0) || (plVar8 = (long *)*plVar7, plVar8 == (long *)0x0))
              goto LAB_00f9f734;
              goto LAB_00f9f6f4;
            }
          }
          else {
            if (uVar4 < 2) {
              uVar9 = uVar9 & uVar3 - 1;
            }
            else if (uVar3 <= uVar9) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar9 / uVar3;
              }
              uVar9 = uVar9 - uVar1 * uVar3;
            }
            if (uVar9 != uVar6) {
              return true;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return true;
LAB_00f9f730:
  plVar8 = (long *)0x0;
  goto LAB_00f9f734;
LAB_00f9f6f4:
  do {
    uVar9 = plVar8[1];
    if (uVar5 == uVar9) {
      if ((int)plVar8[2] == (int)param_2) break;
    }
    else {
      if (uVar4 < 2) {
        uVar9 = uVar9 & uVar3 - 1;
      }
      else if (uVar3 <= uVar9) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar9 / uVar3;
        }
        if (uVar9 - uVar1 * uVar3 == uVar6) goto LAB_00f9f6ec;
        goto LAB_00f9f730;
      }
      if (uVar9 != uVar6) goto LAB_00f9f730;
    }
LAB_00f9f6ec:
    plVar8 = (long *)*plVar8;
  } while (plVar8 != (long *)0x0);
LAB_00f9f734:
  return plVar8 == (long *)0x0;
}

