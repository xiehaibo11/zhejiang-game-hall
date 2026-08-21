
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<void*,
   int>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<void*, int>,
   std::__ndk1::__unordered_map_hasher<void*, std::__ndk1::__hash_value_type<void*, int>,
   std::__ndk1::hash<void*>, true>, std::__ndk1::__unordered_map_equal<void*,
   std::__ndk1::__hash_value_type<void*, int>, std::__ndk1::equal_to<void*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*, int> >
   >::__emplace_unique_key_args<void*, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<void* const&>, std::__ndk1::tuple<> >(void* const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<void* const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,int>>>
       ::
       __emplace_unique_key_args<void*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<void*const&>,std::__ndk1::tuple<>>
                 (void **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  void **ppvVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  void *pvVar9;
  void *pvVar10;
  void *unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pvVar9 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
                    /* catch() { ... } // from try @ 009e4718 with catch @ 009e47a4 */
                    /* catch() { ... } // from try @ 009e4694 with catch @ 009e47a8 */
  pvVar10 = (void *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pvVar9 != (void *)0x0) {
    uVar12 = CONCAT17(POPCOUNT((char)((ulong)pvVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)pvVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)pvVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)pvVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)pvVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)pvVar9 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  pvVar9 >> 8)),POPCOUNT((char)pvVar9))))))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (void *)((ulong)pvVar10 & (long)pvVar9 - 1U);
    }
    else {
      unaff_x24 = pvVar10;
      if (pvVar9 <= pvVar10) {
        uVar1 = 0;
        if (pvVar9 != (void *)0x0) {
          uVar1 = (ulong)pvVar10 / (ulong)pvVar9;
        }
        unaff_x24 = (void *)((long)pvVar10 - uVar1 * (long)pvVar9);
      }
    }
    plVar8 = *(long **)((long)*param_1 + (long)unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        pvVar7 = (void *)plVar8[1];
        if (pvVar7 != pvVar10) {
          if (uVar6 < 2) {
                    /* try { // try from 009e4808 to 00ae485b has its CatchHandler @ 009e4808
                       catch() { ... } // from try @ 009e4808 with catch @ 009e4808
                       catch() { ... } // from try @ 009e4874 with catch @ 009e4808
                       catch() { ... } // from try @ 009e48e8 with catch @ 009e4808 */
            pvVar7 = (void *)((ulong)pvVar7 & (long)pvVar9 - 1U);
          }
          else if (pvVar9 <= pvVar7) {
            uVar1 = 0;
            if (pvVar9 != (void *)0x0) {
              uVar1 = (ulong)pvVar7 / (ulong)pvVar9;
            }
            if ((void *)((long)pvVar7 - uVar1 * (long)pvVar9) == unaff_x24) goto LAB_009e4814;
            break;
          }
          if (pvVar7 != unaff_x24) break;
        }
LAB_009e4814:
        if (plVar8[2] == uVar2) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x20);
                    /* try { // try from 009e485c to 00ae4873 has its CatchHandler @ 009e4970 */
  lVar3 = **(long **)param_4;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = 0;
  plVar8[1] = (long)pvVar10;
  plVar8[2] = lVar3;
                    /* try { // try from 009e4874 to 00ae48df has its CatchHandler @ 009e4808 */
  if ((pvVar9 == (void *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pvVar9 < (float)((long)param_1[3] + 1))) {
    uVar2 = (ulong)(pvVar9 < (void *)0x3 || ((ulong)pvVar9 & (long)pvVar9 - 1U) != 0) |
            (long)pvVar9 << 1;
    uVar6 = (ulong)((float)((long)param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,int>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,int>>>
            *)param_1,uVar6);
    pvVar9 = param_1[1];
    if (((ulong)pvVar9 & (long)pvVar9 - 1U) == 0) {
      unaff_x24 = (void *)((long)pvVar9 - 1U & (ulong)pvVar10);
    }
    else {
      unaff_x24 = pvVar10;
                    /* try { // try from 009e48e0 to 00ae48e7 has its CatchHandler @ 009e496c */
      if (pvVar9 <= pvVar10) {
        uVar2 = 0;
        if (pvVar9 != (void *)0x0) {
          uVar2 = (ulong)pvVar10 / (ulong)pvVar9;
        }
        unaff_x24 = (void *)((long)pvVar10 - uVar2 * (long)pvVar9);
      }
    }
  }
  pvVar10 = *param_1;
  plVar4 = *(long **)((long)pvVar10 + (long)unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    ppvVar5 = param_1 + 2;
    *plVar8 = (long)*ppvVar5;
    *ppvVar5 = plVar8;
    *(void ***)((long)pvVar10 + (long)unaff_x24 * 8) = ppvVar5;
    if (*plVar8 == 0) goto LAB_009e496c;
    pvVar10 = *(void **)(*plVar8 + 8);
    if (((ulong)pvVar9 & (long)pvVar9 - 1U) == 0) {
      pvVar10 = (void *)((ulong)pvVar10 & (long)pvVar9 - 1U);
    }
    else if (pvVar9 <= pvVar10) {
      uVar2 = 0;
      if (pvVar9 != (void *)0x0) {
        uVar2 = (ulong)pvVar10 / (ulong)pvVar9;
      }
      pvVar10 = (void *)((long)pvVar10 - uVar2 * (long)pvVar9);
    }
    plVar4 = (long *)((long)*param_1 + (long)pvVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_009e496c:
                    /* catch() { ... } // from try @ 009e48e0 with catch @ 009e496c */
                    /* catch() { ... } // from try @ 009e485c with catch @ 009e4970 */
  param_1[3] = (void *)((long)param_1[3] + 1);
  return plVar8;
}

