
/* v8::internal::ICStats::GetOrCacheScriptName(v8::internal::Script) */

ulong * __thiscall v8::internal::ICStats::GetOrCacheScriptName(ICStats *this,ulong *param_2)

{
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
  *this_00;
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long *plVar7;
  ulong *puVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong *local_40;
  undefined8 *local_38;
  ulong local_30;
  undefined8 *local_28;
  
  puVar4 = *(ulong **)(this + 0x28);
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
             *)(this + 0x20);
  local_28 = param_2;
  if (puVar4 != (ulong *)0x0) {
    uVar10 = CONCAT17(POPCOUNT((char)((ulong)puVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)puVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)puVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)puVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)puVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)puVar4 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  puVar4 >> 8)),POPCOUNT((char)puVar4))))))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      puVar6 = (ulong *)((long)puVar4 - 1U & (ulong)param_2);
    }
    else {
      puVar6 = param_2;
      if (puVar4 <= param_2) {
        uVar1 = 0;
        if (puVar4 != (ulong *)0x0) {
          uVar1 = (ulong)param_2 / (ulong)puVar4;
        }
        puVar6 = (ulong *)((long)param_2 - uVar1 * (long)puVar4);
      }
    }
    plVar7 = *(long **)(*(long *)this_00 + (long)puVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        puVar8 = (ulong *)plVar7[1];
        if (puVar8 == param_2) {
          if ((ulong *)plVar7[2] == param_2) {
            local_40 = (ulong *)&local_28;
            lVar3 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
                    ::
                    __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                              ((ulong *)this_00,(piecewise_construct_t *)&local_28,
                               (tuple *)&DAT_019c72c0,(tuple *)&local_40);
            return *(void **)(lVar3 + 0x18);
          }
        }
        else {
          if (uVar5 < 2) {
            puVar8 = (ulong *)((ulong)puVar8 & (long)puVar4 - 1U);
          }
          else if (puVar4 <= puVar8) {
            uVar1 = 0;
            if (puVar4 != (ulong *)0x0) {
              uVar1 = (ulong)puVar8 / (ulong)puVar4;
            }
            puVar8 = (ulong *)((long)puVar8 - uVar1 * (long)puVar4);
          }
          if (puVar8 != puVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  if (((*(uint *)((long)param_2 + 7) & 1) == 0) ||
     (local_30 = (ulong)param_2 & 0xffffffff00000000 | (ulong)*(uint *)((long)param_2 + 7),
     0x3f < *(ushort *)(((ulong)param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_30 - 1)))
     ) {
    local_38 = (void *)0x0;
    local_40 = param_2;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
    ::
    __emplace_unique_key_args<unsigned_long,std::__ndk1::pair<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>
              (this_00,(ulong *)&local_40,(pair *)&local_40);
    puVar2 = local_38;
    local_38 = (undefined8 *)0x0;
    if (puVar2 != (void *)0x0) {
      operator_delete__(puVar2);
    }
    puVar4 = (ulong *)0x0;
  }
  else {
    String::ToCString(&local_40,&local_30,1,0,0);
    puVar4 = local_40;
    local_40 = local_28;
    local_38 = puVar4;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
    ::
    __emplace_unique_key_args<unsigned_long,std::__ndk1::pair<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>
              (this_00,(ulong *)&local_40,(pair *)&local_40);
    puVar2 = local_38;
    local_38 = (undefined8 *)0x0;
    if (puVar2 != (ulong *)0x0) {
      operator_delete__(puVar2);
    }
  }
  return puVar4;
}

