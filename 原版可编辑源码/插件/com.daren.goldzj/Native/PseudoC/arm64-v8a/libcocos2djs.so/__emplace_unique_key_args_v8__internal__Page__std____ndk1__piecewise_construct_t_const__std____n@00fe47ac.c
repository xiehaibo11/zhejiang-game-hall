
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Page*,
   long>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Page*, long>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Page*,
   std::__ndk1::__hash_value_type<v8::internal::Page*, long>, v8::internal::MemoryChunk::Hasher,
   true>, std::__ndk1::__unordered_map_equal<v8::internal::Page*,
   std::__ndk1::__hash_value_type<v8::internal::Page*, long>,
   std::__ndk1::equal_to<v8::internal::Page*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Page*, long> >
   >::__emplace_unique_key_args<v8::internal::Page*, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::Page*&&>, std::__ndk1::tuple<> >(v8::internal::Page* const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::Page*&&>&&,
   std::__ndk1::tuple<>&&) */

Page * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::__unordered_map_hasher<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::equal_to<v8::internal::Page*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Page*,long>>>
       ::
       __emplace_unique_key_args<v8::internal::Page*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Page*&&>,std::__ndk1::tuple<>>
                 (Page **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined8 uVar1;
  Page **ppPVar2;
  ulong uVar3;
  ulong uVar4;
  Page *pPVar5;
  Page *pPVar6;
  Page *pPVar7;
  Page *pPVar8;
  Page *unaff_x24;
  undefined2 uVar9;
  
  pPVar7 = param_1[1];
  pPVar8 = (Page *)(*(ulong *)param_2 >> 0x12);
  if (pPVar7 != (Page *)0x0) {
    uVar1 = CONCAT17(POPCOUNT((char)((ulong)pPVar7 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pPVar7 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pPVar7 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pPVar7 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pPVar7 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pPVar7 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pPVar7 >> 8)),POPCOUNT((char)pPVar7))))))));
    uVar9 = NEON_uaddlv(uVar1,1);
    uVar3 = CONCAT62((int6)((ulong)uVar1 >> 0x10),uVar9) & 0xffffffff;
    if (uVar3 < 2) {
      unaff_x24 = (Page *)((ulong)(pPVar7 + -1) & (ulong)pPVar8);
    }
    else {
      unaff_x24 = pPVar8;
      if (pPVar7 <= pPVar8) {
        uVar4 = 0;
        if (pPVar7 != (Page *)0x0) {
          uVar4 = (ulong)pPVar8 / (ulong)pPVar7;
        }
        unaff_x24 = pPVar8 + -(uVar4 * (long)pPVar7);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pPVar6 = (Page *)**(long **)(*param_1 + (long)unaff_x24 * 8); pPVar6 != (Page *)0x0;
          pPVar6 = *(Page **)pPVar6) {
        pPVar5 = *(Page **)(pPVar6 + 8);
        if (pPVar5 != pPVar8) {
          if (uVar3 < 2) {
            pPVar5 = (Page *)((ulong)pPVar5 & (ulong)(pPVar7 + -1));
          }
          else if (pPVar7 <= pPVar5) {
            uVar4 = 0;
            if (pPVar7 != (Page *)0x0) {
              uVar4 = (ulong)pPVar5 / (ulong)pPVar7;
            }
            if (pPVar5 + -(uVar4 * (long)pPVar7) == unaff_x24) goto LAB_00fe483c;
            break;
          }
          if (pPVar5 != unaff_x24) break;
        }
LAB_00fe483c:
        if (*(ulong *)(pPVar6 + 0x10) == *(ulong *)param_2) {
          return pPVar6;
        }
      }
    }
  }
  pPVar6 = operator_new(0x20);
  uVar1 = **(undefined8 **)param_4;
  *(undefined8 *)pPVar6 = 0;
  *(Page **)(pPVar6 + 8) = pPVar8;
  *(undefined8 *)(pPVar6 + 0x10) = uVar1;
  *(undefined8 *)(pPVar6 + 0x18) = 0;
  if ((pPVar7 == (Page *)0x0) || (*(float *)(param_1 + 4) * (float)pPVar7 < (float)(param_1[3] + 1))
     ) {
    uVar3 = (ulong)(pPVar7 < (Page *)0x3 || ((ulong)pPVar7 & (ulong)(pPVar7 + -1)) != 0) |
            (long)pPVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::__unordered_map_hasher<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::equal_to<v8::internal::Page*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Page*,long>>>
            *)param_1,uVar4);
    pPVar7 = param_1[1];
    if (((ulong)pPVar7 & (ulong)(pPVar7 + -1)) == 0) {
      unaff_x24 = (Page *)((ulong)(pPVar7 + -1) & (ulong)pPVar8);
    }
    else {
      unaff_x24 = pPVar8;
      if (pPVar7 <= pPVar8) {
        uVar3 = 0;
        if (pPVar7 != (Page *)0x0) {
          uVar3 = (ulong)pPVar8 / (ulong)pPVar7;
        }
        unaff_x24 = pPVar8 + -(uVar3 * (long)pPVar7);
      }
    }
  }
  pPVar5 = *param_1;
  pPVar8 = *(Page **)(pPVar5 + (long)unaff_x24 * 8);
  if (pPVar8 == (Page *)0x0) {
    ppPVar2 = param_1 + 2;
    *(Page **)pPVar6 = *ppPVar2;
    *ppPVar2 = pPVar6;
    *(Page ***)(pPVar5 + (long)unaff_x24 * 8) = ppPVar2;
    if (*(long *)pPVar6 == 0) goto LAB_00fe4990;
    pPVar8 = *(Page **)(*(long *)pPVar6 + 8);
    if (((ulong)pPVar7 & (ulong)(pPVar7 + -1)) == 0) {
      pPVar8 = (Page *)((ulong)pPVar8 & (ulong)(pPVar7 + -1));
    }
    else if (pPVar7 <= pPVar8) {
      uVar3 = 0;
      if (pPVar7 != (Page *)0x0) {
        uVar3 = (ulong)pPVar8 / (ulong)pPVar7;
      }
      pPVar8 = pPVar8 + -(uVar3 * (long)pPVar7);
    }
    pPVar8 = *param_1 + (long)pPVar8 * 8;
  }
  else {
    *(undefined8 *)pPVar6 = *(undefined8 *)pPVar8;
  }
  *(Page **)pPVar8 = pPVar6;
LAB_00fe4990:
  param_1[3] = param_1[3] + 1;
  return pPVar6;
}

