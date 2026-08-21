
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Map,
   v8::internal::FieldStatsCollector::JSObjectFieldStats>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Map,
   v8::internal::FieldStatsCollector::JSObjectFieldStats>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Map,
   std::__ndk1::__hash_value_type<v8::internal::Map,
   v8::internal::FieldStatsCollector::JSObjectFieldStats>, v8::internal::Object::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Map,
   std::__ndk1::__hash_value_type<v8::internal::Map,
   v8::internal::FieldStatsCollector::JSObjectFieldStats>, std::__ndk1::equal_to<v8::internal::Map>,
   true>, std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Map,
   v8::internal::FieldStatsCollector::JSObjectFieldStats> >
   >::__emplace_unique_key_args<v8::internal::Map, std::__ndk1::pair<v8::internal::Map,
   v8::internal::FieldStatsCollector::JSObjectFieldStats> >(v8::internal::Map const&,
   std::__ndk1::pair<v8::internal::Map, v8::internal::FieldStatsCollector::JSObjectFieldStats>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::__unordered_map_hasher<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::equal_to<v8::internal::Map>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>>>
::
__emplace_unique_key_args<v8::internal::Map,std::__ndk1::pair<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::__unordered_map_hasher<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::equal_to<v8::internal::Map>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>>>
           *this,Map *param_1,pair *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::__unordered_map_hasher<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::equal_to<v8::internal::Map>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>>>
  *p_Var6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar10 = *(ulong *)(this + 8);
  uVar1 = *(uint *)param_1;
  uVar11 = (ulong)uVar1;
  if (uVar10 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 != uVar11) {
          if (uVar7 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar8 / uVar10;
            }
            if (uVar8 - uVar3 * uVar10 == unaff_x24) goto LAB_00ffe850;
            break;
          }
          if (uVar8 != unaff_x24) break;
        }
LAB_00ffe850:
        if (*(uint *)(plVar9 + 2) == uVar1) {
          return plVar9;
        }
      }
    }
  }
  plVar9 = operator_new(0x20);
  lVar4 = *(long *)param_2;
  plVar9[1] = uVar11;
  plVar9[2] = lVar4;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *plVar9 = 0;
  *(undefined4 *)(plVar9 + 3) = uVar2;
  if ((uVar10 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar10 < (float)(*(long *)(this + 0x18) + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar7 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    rehash(this,uVar7);
    uVar10 = *(ulong *)(this + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar7 = 0;
        if (uVar10 != 0) {
          uVar7 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar7 * uVar10;
      }
    }
  }
  lVar4 = *(long *)this;
  plVar5 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    p_Var6 = this + 0x10;
    *plVar9 = *(long *)p_Var6;
    *(long **)p_Var6 = plVar9;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::__unordered_map_hasher<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Map,std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>,std::__ndk1::equal_to<v8::internal::Map>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Map,v8::internal::FieldStatsCollector::JSObjectFieldStats>>>
      **)(lVar4 + unaff_x24 * 8) = p_Var6;
    if (*plVar9 == 0) goto LAB_00ffe9ac;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar7 = 0;
      if (uVar10 != 0) {
        uVar7 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar7 * uVar10;
    }
    plVar5 = (long *)(*(long *)this + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar5;
  }
  *plVar5 = (long)plVar9;
LAB_00ffe9ac:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar9;
}

