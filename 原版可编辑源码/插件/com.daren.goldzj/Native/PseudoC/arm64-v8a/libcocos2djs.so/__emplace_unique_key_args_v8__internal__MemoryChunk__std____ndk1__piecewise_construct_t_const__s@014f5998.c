
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,
   v8::internal::MemoryChunkData>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,
   v8::internal::MemoryChunkData>, std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,
   std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*, v8::internal::MemoryChunkData>,
   v8::internal::MemoryChunk::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,
   std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*, v8::internal::MemoryChunkData>,
   std::__ndk1::equal_to<v8::internal::MemoryChunk*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,
   v8::internal::MemoryChunkData> > >::__emplace_unique_key_args<v8::internal::MemoryChunk*,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::MemoryChunk* const&>,
   std::__ndk1::tuple<> >(v8::internal::MemoryChunk* const&, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<v8::internal::MemoryChunk* const&>&&, std::__ndk1::tuple<>&&) */

MemoryChunk *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>>>
::
__emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
          (MemoryChunk **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined8 uVar1;
  MemoryChunk **ppMVar2;
  ulong uVar3;
  ulong uVar4;
  MemoryChunk *pMVar5;
  MemoryChunk *pMVar6;
  MemoryChunk *pMVar7;
  MemoryChunk *pMVar8;
  MemoryChunk *unaff_x24;
  undefined2 uVar9;
  
  pMVar7 = param_1[1];
  pMVar8 = (MemoryChunk *)(*(ulong *)param_2 >> 0x12);
  if (pMVar7 != (MemoryChunk *)0x0) {
    uVar1 = CONCAT17(POPCOUNT((char)((ulong)pMVar7 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pMVar7 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pMVar7 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pMVar7 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pMVar7 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pMVar7 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pMVar7 >> 8)),POPCOUNT((char)pMVar7))))))));
    uVar9 = NEON_uaddlv(uVar1,1);
    uVar3 = CONCAT62((int6)((ulong)uVar1 >> 0x10),uVar9) & 0xffffffff;
    if (uVar3 < 2) {
      unaff_x24 = (MemoryChunk *)((ulong)(pMVar7 + -1) & (ulong)pMVar8);
    }
    else {
      unaff_x24 = pMVar8;
      if (pMVar7 <= pMVar8) {
        uVar4 = 0;
        if (pMVar7 != (MemoryChunk *)0x0) {
          uVar4 = (ulong)pMVar8 / (ulong)pMVar7;
        }
        unaff_x24 = pMVar8 + -(uVar4 * (long)pMVar7);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pMVar6 = (MemoryChunk *)**(long **)(*param_1 + (long)unaff_x24 * 8);
          pMVar6 != (MemoryChunk *)0x0; pMVar6 = *(MemoryChunk **)pMVar6) {
        pMVar5 = *(MemoryChunk **)(pMVar6 + 8);
        if (pMVar5 != pMVar8) {
          if (uVar3 < 2) {
            pMVar5 = (MemoryChunk *)((ulong)pMVar5 & (ulong)(pMVar7 + -1));
          }
          else if (pMVar7 <= pMVar5) {
            uVar4 = 0;
            if (pMVar7 != (MemoryChunk *)0x0) {
              uVar4 = (ulong)pMVar5 / (ulong)pMVar7;
            }
            if (pMVar5 + -(uVar4 * (long)pMVar7) == unaff_x24) goto LAB_014f5a28;
            break;
          }
          if (pMVar5 != unaff_x24) break;
        }
LAB_014f5a28:
        if (*(ulong *)(pMVar6 + 0x10) == *(ulong *)param_2) {
          return pMVar6;
        }
      }
    }
  }
  pMVar6 = operator_new(0x28);
  uVar1 = **(undefined8 **)param_4;
  *(undefined8 *)(pMVar6 + 0x18) = 0;
  *(undefined8 *)(pMVar6 + 0x20) = 0;
  *(undefined8 *)pMVar6 = 0;
  *(MemoryChunk **)(pMVar6 + 8) = pMVar8;
  *(undefined8 *)(pMVar6 + 0x10) = uVar1;
  if ((pMVar7 == (MemoryChunk *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pMVar7 < (float)(param_1[3] + 1))) {
    uVar3 = (ulong)(pMVar7 < (MemoryChunk *)0x3 || ((ulong)pMVar7 & (ulong)(pMVar7 + -1)) != 0) |
            (long)pMVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,v8::internal::MemoryChunkData>>>
            *)param_1,uVar4);
    pMVar7 = param_1[1];
    if (((ulong)pMVar7 & (ulong)(pMVar7 + -1)) == 0) {
      unaff_x24 = (MemoryChunk *)((ulong)(pMVar7 + -1) & (ulong)pMVar8);
    }
    else {
      unaff_x24 = pMVar8;
      if (pMVar7 <= pMVar8) {
        uVar3 = 0;
        if (pMVar7 != (MemoryChunk *)0x0) {
          uVar3 = (ulong)pMVar8 / (ulong)pMVar7;
        }
        unaff_x24 = pMVar8 + -(uVar3 * (long)pMVar7);
      }
    }
  }
  pMVar5 = *param_1;
  pMVar8 = *(MemoryChunk **)(pMVar5 + (long)unaff_x24 * 8);
  if (pMVar8 == (MemoryChunk *)0x0) {
    ppMVar2 = param_1 + 2;
    *(MemoryChunk **)pMVar6 = *ppMVar2;
    *ppMVar2 = pMVar6;
    *(MemoryChunk ***)(pMVar5 + (long)unaff_x24 * 8) = ppMVar2;
    if (*(long *)pMVar6 == 0) goto LAB_014f5b80;
    pMVar8 = *(MemoryChunk **)(*(long *)pMVar6 + 8);
    if (((ulong)pMVar7 & (ulong)(pMVar7 + -1)) == 0) {
      pMVar8 = (MemoryChunk *)((ulong)pMVar8 & (ulong)(pMVar7 + -1));
    }
    else if (pMVar7 <= pMVar8) {
      uVar3 = 0;
      if (pMVar7 != (MemoryChunk *)0x0) {
        uVar3 = (ulong)pMVar8 / (ulong)pMVar7;
      }
      pMVar8 = pMVar8 + -(uVar3 * (long)pMVar7);
    }
    pMVar8 = *param_1 + (long)pMVar8 * 8;
  }
  else {
    *(undefined8 *)pMVar6 = *(undefined8 *)pMVar8;
  }
  *(MemoryChunk **)pMVar8 = pMVar6;
LAB_014f5b80:
  param_1[3] = param_1[3] + 1;
  return pMVar6;
}

