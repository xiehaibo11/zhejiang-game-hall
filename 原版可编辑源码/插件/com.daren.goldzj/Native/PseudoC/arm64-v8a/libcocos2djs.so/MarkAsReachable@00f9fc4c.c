
/* v8::internal::UnreachableObjectsFilter::MarkAsReachable(v8::internal::HeapObject) */

undefined8 __thiscall
v8::internal::UnreachableObjectsFilter::MarkAsReachable
          (UnreachableObjectsFilter *this,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong local_48;
  ulong local_40 [2];
  ulong *local_18;
  
  local_48 = param_2 & 0xfffffffffffc0000;
  uVar4 = *(ulong *)(this + 0x20);
  this = this + 0x18;
  local_40[0] = param_2;
  if (uVar4 != 0) {
    uVar5 = (((ulong)(uint)((int)param_2 << 3) & 0xffe00000 | 8) ^ param_2 >> 0x20) *
            -0x622015f714c7d297;
    uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = (uVar5 ^ param_2 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar7 = uVar4 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    if ((*(long **)(*(MemoryChunk **)this + uVar7 * 8) != (long *)0x0) &&
       (plVar8 = (long *)**(long **)(*(MemoryChunk **)this + uVar7 * 8), plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar6 - uVar9 == 0) {
          if (plVar8[2] == local_48) goto LAB_00f9fd98;
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  puVar2 = operator_new(0x28);
  local_18 = &local_48;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 4) = 0x3f800000;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::hash<v8::internal::MemoryChunk*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>>>
          ::
          __emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
                    ((MemoryChunk **)this,(piecewise_construct_t *)&local_48,(tuple *)&DAT_019c33c0,
                     (tuple *)&local_18);
  *(undefined8 **)(lVar3 + 0x18) = puVar2;
  param_2 = local_40[0] & 0xffffffff;
LAB_00f9fd98:
  local_18 = &local_48;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::hash<v8::internal::MemoryChunk*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>>>
          ::
          __emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
                    ((MemoryChunk **)this,(piecewise_construct_t *)&local_48,(tuple *)&DAT_019c33c0,
                     (tuple *)&local_18);
  uVar4 = (*(long **)(lVar3 + 0x18))[1];
  if (uVar4 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = param_2 & 0xffffffff;
    if (uVar5 < 2) {
      uVar7 = (int)uVar4 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(**(long **)(lVar3 + 0x18) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar6 == uVar9) {
          if ((int)plVar8[2] == (int)param_2) {
            return 0;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  local_18 = &local_48;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::hash<v8::internal::MemoryChunk*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>>>
          ::
          __emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
                    ((MemoryChunk **)this,(piecewise_construct_t *)&local_48,(tuple *)&DAT_019c33c0,
                     (tuple *)&local_18);
  std::__ndk1::
  __hash_table<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>
  ::__emplace_unique_key_args<v8::internal::HeapObject,v8::internal::HeapObject_const&>
            (*(__hash_table<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>
               **)(lVar3 + 0x18),(HeapObject *)local_40,(HeapObject *)local_40);
  return 1;
}

