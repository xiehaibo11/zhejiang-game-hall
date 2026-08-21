
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,
   std::__ndk1::unordered_set<v8::internal::HeapObject, v8::internal::Object::Hasher,
   std::__ndk1::equal_to<v8::internal::HeapObject>, std::__ndk1::allocator<v8::internal::HeapObject>
   >*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,
   std::__ndk1::unordered_set<v8::internal::HeapObject, v8::internal::Object::Hasher,
   std::__ndk1::equal_to<v8::internal::HeapObject>, std::__ndk1::allocator<v8::internal::HeapObject>
   >*>, std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,
   std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,
   std::__ndk1::unordered_set<v8::internal::HeapObject, v8::internal::Object::Hasher,
   std::__ndk1::equal_to<v8::internal::HeapObject>, std::__ndk1::allocator<v8::internal::HeapObject>
   >*>, std::__ndk1::hash<v8::internal::MemoryChunk*>, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,
   std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,
   std::__ndk1::unordered_set<v8::internal::HeapObject, v8::internal::Object::Hasher,
   std::__ndk1::equal_to<v8::internal::HeapObject>, std::__ndk1::allocator<v8::internal::HeapObject>
   >*>, std::__ndk1::equal_to<v8::internal::MemoryChunk*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,
   std::__ndk1::unordered_set<v8::internal::HeapObject, v8::internal::Object::Hasher,
   std::__ndk1::equal_to<v8::internal::HeapObject>, std::__ndk1::allocator<v8::internal::HeapObject>
   >*> > >::__emplace_unique_key_args<v8::internal::MemoryChunk*, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<v8::internal::MemoryChunk* const&>, std::__ndk1::tuple<>
   >(v8::internal::MemoryChunk* const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::MemoryChunk* const&>&&, std::__ndk1::tuple<>&&) */

MemoryChunk *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::hash<v8::internal::MemoryChunk*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>>>
::
__emplace_unique_key_args<v8::internal::MemoryChunk*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::MemoryChunk*const&>,std::__ndk1::tuple<>>
          (MemoryChunk **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  MemoryChunk **ppMVar4;
  MemoryChunk *pMVar5;
  ulong uVar6;
  MemoryChunk *pMVar7;
  MemoryChunk *pMVar8;
  MemoryChunk *pMVar9;
  MemoryChunk *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pMVar8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  pMVar9 = (MemoryChunk *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pMVar8 != (MemoryChunk *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)pMVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pMVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pMVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pMVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pMVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pMVar8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pMVar8 >> 8)),POPCOUNT((char)pMVar8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (MemoryChunk *)((ulong)pMVar9 & (ulong)(pMVar8 + -1));
    }
    else {
      unaff_x24 = pMVar9;
      if (pMVar8 <= pMVar9) {
        uVar1 = 0;
        if (pMVar8 != (MemoryChunk *)0x0) {
          uVar1 = (ulong)pMVar9 / (ulong)pMVar8;
        }
        unaff_x24 = pMVar9 + -(uVar1 * (long)pMVar8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pMVar7 = (MemoryChunk *)**(long **)(*param_1 + (long)unaff_x24 * 8);
          pMVar7 != (MemoryChunk *)0x0; pMVar7 = *(MemoryChunk **)pMVar7) {
        pMVar5 = *(MemoryChunk **)(pMVar7 + 8);
        if (pMVar5 != pMVar9) {
          if (uVar6 < 2) {
            pMVar5 = (MemoryChunk *)((ulong)pMVar5 & (ulong)(pMVar8 + -1));
          }
          else if (pMVar8 <= pMVar5) {
            uVar1 = 0;
            if (pMVar8 != (MemoryChunk *)0x0) {
              uVar1 = (ulong)pMVar5 / (ulong)pMVar8;
            }
            if (pMVar5 + -(uVar1 * (long)pMVar8) == unaff_x24) goto LAB_00f9ff84;
            break;
          }
          if (pMVar5 != unaff_x24) break;
        }
LAB_00f9ff84:
        if (*(ulong *)(pMVar7 + 0x10) == uVar2) {
          return pMVar7;
        }
      }
    }
  }
  pMVar7 = operator_new(0x20);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)pMVar7 = 0;
  *(MemoryChunk **)(pMVar7 + 8) = pMVar9;
  *(undefined8 *)(pMVar7 + 0x10) = uVar3;
  *(undefined8 *)(pMVar7 + 0x18) = 0;
  if ((pMVar8 == (MemoryChunk *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pMVar8 < (float)(param_1[3] + 1))) {
    uVar2 = (ulong)(pMVar8 < (MemoryChunk *)0x3 || ((ulong)pMVar8 & (ulong)(pMVar8 + -1)) != 0) |
            (long)pMVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::__unordered_map_hasher<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::hash<v8::internal::MemoryChunk*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::MemoryChunk*,std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>,std::__ndk1::equal_to<v8::internal::MemoryChunk*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::MemoryChunk*,std::__ndk1::unordered_set<v8::internal::HeapObject,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::HeapObject>,std::__ndk1::allocator<v8::internal::HeapObject>>*>>>
            *)param_1,uVar6);
    pMVar8 = param_1[1];
    if (((ulong)pMVar8 & (ulong)(pMVar8 + -1)) == 0) {
      unaff_x24 = (MemoryChunk *)((ulong)(pMVar8 + -1) & (ulong)pMVar9);
    }
    else {
      unaff_x24 = pMVar9;
      if (pMVar8 <= pMVar9) {
        uVar2 = 0;
        if (pMVar8 != (MemoryChunk *)0x0) {
          uVar2 = (ulong)pMVar9 / (ulong)pMVar8;
        }
        unaff_x24 = pMVar9 + -(uVar2 * (long)pMVar8);
      }
    }
  }
  pMVar5 = *param_1;
  pMVar9 = *(MemoryChunk **)(pMVar5 + (long)unaff_x24 * 8);
  if (pMVar9 == (MemoryChunk *)0x0) {
    ppMVar4 = param_1 + 2;
    *(MemoryChunk **)pMVar7 = *ppMVar4;
    *ppMVar4 = pMVar7;
    *(MemoryChunk ***)(pMVar5 + (long)unaff_x24 * 8) = ppMVar4;
    if (*(long *)pMVar7 == 0) goto LAB_00fa00d8;
    pMVar9 = *(MemoryChunk **)(*(long *)pMVar7 + 8);
    if (((ulong)pMVar8 & (ulong)(pMVar8 + -1)) == 0) {
      pMVar9 = (MemoryChunk *)((ulong)pMVar9 & (ulong)(pMVar8 + -1));
    }
    else if (pMVar8 <= pMVar9) {
      uVar2 = 0;
      if (pMVar8 != (MemoryChunk *)0x0) {
        uVar2 = (ulong)pMVar9 / (ulong)pMVar8;
      }
      pMVar9 = pMVar9 + -(uVar2 * (long)pMVar8);
    }
    pMVar9 = *param_1 + (long)pMVar9 * 8;
  }
  else {
    *(undefined8 *)pMVar7 = *(undefined8 *)pMVar9;
  }
  *(MemoryChunk **)pMVar9 = pMVar7;
LAB_00fa00d8:
  param_1[3] = param_1[3] + 1;
  return pMVar7;
}

