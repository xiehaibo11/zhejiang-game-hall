
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,
   unsigned long>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,
   unsigned long>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::HeapObject>,
   std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>, unsigned long>,
   v8::internal::Handle<v8::internal::HeapObject>::hash, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::HeapObject>,
   std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>, unsigned long>,
   v8::internal::Handle<v8::internal::HeapObject>::equal_to, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,
   unsigned long> > >::__emplace_unique_key_args<v8::internal::Handle<v8::internal::HeapObject>,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::Handle<v8::internal::HeapObject> const&>, std::__ndk1::tuple<>
   >(v8::internal::Handle<v8::internal::HeapObject> const&, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<v8::internal::Handle<v8::internal::HeapObject> const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,v8::internal::Handle<v8::internal::HeapObject>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,v8::internal::Handle<v8::internal::HeapObject>::equal_to,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>>>
       ::
       __emplace_unique_key_args<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Handle<v8::internal::HeapObject>const&>,std::__ndk1::tuple<>>
                 (Handle *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x25;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar2 = v8::base::hash_value(*(ulong *)param_2);
  uVar8 = *(ulong *)(param_1 + 8);
  if (uVar8 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x25 = uVar8 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar8 <= uVar2) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar2 / uVar8;
        }
        unaff_x25 = uVar2 - uVar6 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 != uVar2) {
          if (uVar5 < 2) {
            uVar6 = uVar6 & uVar8 - 1;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            if (uVar6 - uVar1 * uVar8 == unaff_x25) goto LAB_00ede488;
            break;
          }
          if (uVar6 != unaff_x25) break;
        }
LAB_00ede488:
        if (plVar7[2] == *(long *)param_2) {
          return plVar7;
        }
      }
    }
  }
  plVar7 = operator_new(0x20);
  lVar3 = **(long **)param_4;
  *plVar7 = 0;
  plVar7[1] = uVar2;
  plVar7[2] = lVar3;
  plVar7[3] = 0;
  if ((uVar8 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar8 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar5 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,v8::internal::Handle<v8::internal::HeapObject>::hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::Handle<v8::internal::HeapObject>,std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>,v8::internal::Handle<v8::internal::HeapObject>::equal_to,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Handle<v8::internal::HeapObject>,unsigned_long>>>
            *)param_1,uVar5);
    uVar8 = *(ulong *)(param_1 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x25 = uVar8 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar8 <= uVar2) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar2 / uVar8;
        }
        unaff_x25 = uVar2 - uVar5 * uVar8;
      }
    }
  }
  lVar3 = *(long *)param_1;
  plVar4 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(param_1 + 0x10);
    *plVar7 = *plVar4;
    *plVar4 = (long)plVar7;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar4;
    if (*plVar7 == 0) goto LAB_00ede5dc;
    uVar2 = *(ulong *)(*plVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar2 = uVar2 & uVar8 - 1;
    }
    else if (uVar8 <= uVar2) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar2 / uVar8;
      }
      uVar2 = uVar2 - uVar5 * uVar8;
    }
    plVar4 = (long *)(*(long *)param_1 + uVar2 * 8);
  }
  else {
    *plVar7 = *plVar4;
  }
  *plVar4 = (long)plVar7;
LAB_00ede5dc:
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return plVar7;
}

