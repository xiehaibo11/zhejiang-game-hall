
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::ICStats::GetOrCacheFunctionName(v8::internal::JSFunction) */

ulong *** __thiscall v8::internal::ICStats::GetOrCacheFunctionName(ICStats *this,ulong ***param_2)

{
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
  *this_00;
  uint uVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  byte bVar5;
  ulong ***pppuVar6;
  ulong uVar7;
  ulong ***pppuVar8;
  long *plVar9;
  ulong ***pppuVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined8 ****local_48;
  ulong ***local_40;
  undefined8 local_38;
  ulong local_30;
  ulong ***local_28;
  
  pppuVar6 = *(ulong ****)(this + 0x50);
  this_00 = (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
             *)(this + 0x48);
  local_28 = param_2;
  if (pppuVar6 != (ulong ***)0x0) {
    uVar12 = CONCAT17(POPCOUNT((char)((ulong)pppuVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)pppuVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)pppuVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)pppuVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)pppuVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)pppuVar6
                                                                                  >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  pppuVar6 >> 8)),POPCOUNT((char)pppuVar6))))))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar7 < 2) {
      pppuVar8 = (ulong ***)((long)pppuVar6 - 1U & (ulong)param_2);
    }
    else {
      pppuVar8 = param_2;
      if (pppuVar6 <= param_2) {
        uVar2 = 0;
        if (pppuVar6 != (ulong ***)0x0) {
          uVar2 = (ulong)param_2 / (ulong)pppuVar6;
        }
        pppuVar8 = (ulong ***)((long)param_2 - uVar2 * (long)pppuVar6);
      }
    }
    plVar9 = *(long **)(*(long *)this_00 + (long)pppuVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        pppuVar10 = (ulong ***)plVar9[1];
        if (pppuVar10 == param_2) {
          if ((ulong ***)plVar9[2] == param_2) {
            local_48 = &local_28;
            lVar4 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
                    ::
                    __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                              ((ulong *)this_00,(piecewise_construct_t *)&local_28,
                               (tuple *)&DAT_019c72c0,(tuple *)&local_48);
            return *(void **)(lVar4 + 0x18);
          }
        }
        else {
          if (uVar7 < 2) {
            pppuVar10 = (ulong ***)((ulong)pppuVar10 & (long)pppuVar6 - 1U);
          }
          else if (pppuVar6 <= pppuVar10) {
            uVar2 = 0;
            if (pppuVar6 != (ulong ***)0x0) {
              uVar2 = (ulong)pppuVar10 / (ulong)pppuVar6;
            }
            pppuVar10 = (ulong ***)((long)pppuVar10 - uVar2 * (long)pppuVar6);
          }
          if (pppuVar10 != pppuVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  uVar7 = (ulong)param_2 & 0xffffffff00000000;
  local_30 = uVar7 | *(uint *)((long)param_2 + 0xb);
  if (*(int *)((uVar7 | *(uint *)((long)param_2 + 0x17)) + 0x27) != 0x42) {
    uVar1 = *(uint *)((uVar7 | *(uint *)((long)param_2 + 0xb)) + 3);
    if ((uVar1 != 0x84) &&
       ((((uVar1 & 1) == 0 ||
         (1 < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar1) - 1)) - 0x95)) &&
        ((*(byte *)((uVar7 | *(uint *)((long)param_2 + 0x17)) + 0x17) & 0x3e) == 0)))) {
      bVar5 = ~(byte)*(undefined4 *)
                      ((uVar7 | *(uint *)((uVar7 | *(uint *)((long)param_2 + 0x17)) + 0xf)) + 7) & 1
      ;
      goto LAB_01025c68;
    }
  }
  bVar5 = 0;
LAB_01025c68:
  *(byte *)(*(long *)(this + 8) + (long)*(int *)(this + 0x70) * 0x80 + 0x39) = bVar5;
  local_38 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_30);
  String::ToCString(&local_48,&local_38,1,1,0);
  ppppuVar3 = local_48;
  local_48 = (undefined8 ****)local_28;
  local_40 = (ulong ***)ppppuVar3;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
  ::
  __emplace_unique_key_args<unsigned_long,std::__ndk1::pair<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>
            (this_00,(ulong *)&local_48,(pair *)&local_48);
  pppuVar6 = local_40;
  local_40 = (ulong ***)0x0;
  if (pppuVar6 != (ulong ***)0x0) {
    operator_delete__(pppuVar6);
  }
  return (ulong ***)ppppuVar3;
}

