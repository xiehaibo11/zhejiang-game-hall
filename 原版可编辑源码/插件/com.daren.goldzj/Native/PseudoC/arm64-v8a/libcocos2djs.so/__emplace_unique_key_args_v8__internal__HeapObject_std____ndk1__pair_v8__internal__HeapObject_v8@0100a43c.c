
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::HeapObject,
   v8::internal::Map>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,
   v8::internal::Map>, std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,
   std::__ndk1::__hash_value_type<v8::internal::HeapObject, v8::internal::Map>,
   v8::internal::Object::Hasher, true>, std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,
   std::__ndk1::__hash_value_type<v8::internal::HeapObject, v8::internal::Map>,
   std::__ndk1::equal_to<v8::internal::HeapObject>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,
   v8::internal::Map> > >::__emplace_unique_key_args<v8::internal::HeapObject,
   std::__ndk1::pair<v8::internal::HeapObject, v8::internal::Map>&>(v8::internal::HeapObject const&,
   std::__ndk1::pair<v8::internal::HeapObject, v8::internal::Map>&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
::
__emplace_unique_key_args<v8::internal::HeapObject,std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Map>&>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
           *this,HeapObject *param_1,pair *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
  *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  uVar9 = *(ulong *)(this + 8);
  uVar1 = *(uint *)param_1;
  uVar10 = (ulong)uVar1;
  if (uVar9 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if (uVar5 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar7 / uVar9;
            }
            if (uVar7 - uVar2 * uVar9 == unaff_x24) goto LAB_0100a4c8;
            break;
          }
          if (uVar7 != unaff_x24) break;
        }
LAB_0100a4c8:
        if (*(uint *)(plVar8 + 2) == uVar1) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x20);
  lVar13 = *(long *)(param_2 + 8);
  lVar6 = *(long *)param_2;
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[3] = lVar13;
  plVar8[2] = lVar6;
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar5 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    rehash(this,uVar5);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar5 * uVar9;
      }
    }
  }
  lVar6 = *(long *)this;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    p_Var4 = this + 0x10;
    *plVar8 = *(long *)p_Var4;
    *(long **)p_Var4 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
      **)(lVar6 + unaff_x24 * 8) = p_Var4;
    if (*plVar8 == 0) goto LAB_0100a61c;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar5 * uVar9;
    }
    plVar3 = (long *)(*(long *)this + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar3;
  }
  *plVar3 = (long)plVar8;
LAB_0100a61c:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar8;
}

