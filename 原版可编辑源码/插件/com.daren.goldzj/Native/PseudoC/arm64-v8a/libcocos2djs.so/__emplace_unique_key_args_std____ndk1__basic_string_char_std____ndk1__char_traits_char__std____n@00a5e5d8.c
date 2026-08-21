
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::Manifest::AssetDiff>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::Manifest::AssetDiff> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&,
   cocos2d::extension::Manifest::AssetDiff&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   cocos2d::extension::Manifest::AssetDiff&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
       ::
       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
                 (basic_string *param_1,basic_string *param_2,AssetDiff *param_3)

{
  basic_string *__s2;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  size_t __n;
  uint uVar4;
  basic_string *pbVar5;
  void *__s1;
  undefined8 uVar6;
  undefined8 *puVar7;
  basic_string *pbVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  basic_string *unaff_x28;
  long *local_80 [3];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar9 = *(ulong *)(param_2 + 8);
  pbVar5 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar9 = (ulong)((byte)*param_2 >> 1);
  }
                    /* catch() { ... } // from try @ 00a5e490 with catch @ 00a5e630 */
  pbVar5 = (basic_string *)
           __murmur2_or_cityhash<unsigned_long,64ul>::operator()
                     ((__murmur2_or_cityhash<unsigned_long,64ul> *)local_80,pbVar5,uVar9);
                    /* catch() { ... } // from try @ 00a5e484 with catch @ 00a5e634
                       catch() { ... } // from try @ 00a5e4e8 with catch @ 00a5e634 */
  pbVar13 = *(basic_string **)(param_1 + 8);
  if (pbVar13 != (basic_string *)0x0) {
    pbVar12 = pbVar13 + -1;
    if (((ulong)pbVar12 & (ulong)pbVar13) == 0) {
      unaff_x28 = (basic_string *)((ulong)pbVar12 & (ulong)pbVar5);
    }
    else {
      unaff_x28 = pbVar5;
      if (pbVar13 <= pbVar5) {
        uVar9 = 0;
        if (pbVar13 != (basic_string *)0x0) {
          uVar9 = (ulong)pbVar5 / (ulong)pbVar13;
        }
        unaff_x28 = pbVar5 + -(uVar9 * (long)pbVar13);
      }
    }
    puVar7 = *(undefined8 **)(*(long *)param_1 + (long)unaff_x28 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar7, plVar11 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 00a5e454 with catch @ 00a5e684 */
                    /* catch() { ... } // from try @ 00a5e448 with catch @ 00a5e688 */
                    /* catch() { ... } // from try @ 00a5e428 with catch @ 00a5e68c */
      __n = (ulong)((byte)*param_2 >> 1);
      __s2 = param_2 + 1;
                    /* catch() { ... } // from try @ 00a5e460 with catch @ 00a5e69c
                       catch() { ... } // from try @ 00a5e4c8 with catch @ 00a5e69c
                       catch() { ... } // from try @ 00a5e57c with catch @ 00a5e69c */
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        __s2 = *(basic_string **)(param_2 + 0x10);
      }
      do {
        pbVar8 = (basic_string *)plVar11[1];
        if (pbVar8 != pbVar5) {
          if (((ulong)pbVar12 & (ulong)pbVar13) == 0) {
            pbVar8 = (basic_string *)((ulong)pbVar8 & (ulong)pbVar12);
          }
          else if (pbVar13 <= pbVar8) {
            uVar9 = 0;
            if (pbVar13 != (basic_string *)0x0) {
              uVar9 = (ulong)pbVar8 / (ulong)pbVar13;
            }
            if (pbVar8 + -(uVar9 * (long)pbVar13) == unaff_x28) goto LAB_00a5e6dc;
            break;
          }
          if (pbVar8 != unaff_x28) break;
        }
LAB_00a5e6dc:
        bVar2 = *(byte *)(plVar11 + 2);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar11[3];
        }
                    /* try { // try from 00a5e6f4 to 00b5e747 has its CatchHandler @ 00a5e6f4
                       catch() { ... } // from try @ 00a5e6f4 with catch @ 00a5e6f4
                       catch() { ... } // from try @ 00a5e89c with catch @ 00a5e6f4 */
        if (sVar1 == __n) {
          __s1 = (void *)plVar11[4];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar11 + 0x11);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              uVar9 = 0;
              while (*(basic_string *)((long)plVar11 + uVar9 + 0x11) == __s2[uVar9]) {
                uVar9 = uVar9 + 1;
                if (bVar2 >> 1 == uVar9) goto LAB_00a5e764;
              }
              goto LAB_00a5e754;
            }
          }
          else if (__n != 0) {
                    /* try { // try from 00a5e748 to 00b5e75f has its CatchHandler @ 00a5e934 */
            uVar4 = memcmp(__s1,__s2,__n);
            __s1 = (void *)(ulong)uVar4;
            if (uVar4 != 0) goto LAB_00a5e754;
          }
LAB_00a5e764:
                    /* try { // try from 00a5e768 to 00b5e773 has its CatchHandler @ 00a5e930 */
          uVar6 = 0;
          goto LAB_00a5e8b0;
        }
LAB_00a5e754:
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
                    /* try { // try from 00a5e774 to 00b5e77f has its CatchHandler @ 00a5e92c */
                    /* try { // try from 00a5e780 to 00b5e787 has its CatchHandler @ 00a5e944 */
  __s1 = (void *)__construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::Manifest::AssetDiff&>
                           ((ulong)param_1,pbVar5,param_3);
                    /* try { // try from 00a5e7a4 to 00b5e7ab has its CatchHandler @ 00a5e914 */
  if ((pbVar13 == (basic_string *)0x0) ||
     (*(float *)(param_1 + 0x20) * (float)pbVar13 < (float)(*(long *)(param_1 + 0x18) + 1))) {
                    /* try { // try from 00a5e7b0 to 00b5e7cf has its CatchHandler @ 00a5e910 */
    if (pbVar13 < (basic_string *)0x3) {
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)(((ulong)(pbVar13 + -1) & (ulong)pbVar13) != 0);
    }
    uVar9 = uVar9 | (long)pbVar13 << 1;
    uVar10 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar10 <= uVar9) {
      uVar10 = uVar9;
    }
                    /* try { // try from 00a5e7e4 to 00b5e7ff has its CatchHandler @ 00a5e944 */
    __s1 = (void *)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::Manifest::AssetDiff>>>
                           *)param_1,uVar10);
    pbVar13 = *(basic_string **)(param_1 + 8);
    if (((ulong)(pbVar13 + -1) & (ulong)pbVar13) == 0) {
      unaff_x28 = (basic_string *)((ulong)(pbVar13 + -1) & (ulong)pbVar5);
    }
    else {
      unaff_x28 = pbVar5;
      if (pbVar13 <= pbVar5) {
        uVar9 = 0;
        if (pbVar13 != (basic_string *)0x0) {
          uVar9 = (ulong)pbVar5 / (ulong)pbVar13;
        }
        unaff_x28 = pbVar5 + -(uVar9 * (long)pbVar13);
      }
    }
  }
  plVar11 = *(long **)(*(long *)param_1 + (long)unaff_x28 * 8);
  if (plVar11 == (long *)0x0) {
    pbVar5 = param_1 + 0x10;
    *local_80[0] = *(long *)pbVar5;
    *(long **)pbVar5 = local_80[0];
    *(basic_string **)(*(long *)param_1 + (long)unaff_x28 * 8) = pbVar5;
                    /* try { // try from 00a5e860 to 00b5e89b has its CatchHandler @ 00a5e944 */
    if (*local_80[0] != 0) {
      pbVar5 = *(basic_string **)(*local_80[0] + 8);
      if (((ulong)(pbVar13 + -1) & (ulong)pbVar13) == 0) {
        pbVar5 = (basic_string *)((ulong)pbVar5 & (ulong)(pbVar13 + -1));
      }
      else if (pbVar13 <= pbVar5) {
        uVar9 = 0;
        if (pbVar13 != (basic_string *)0x0) {
          uVar9 = (ulong)pbVar5 / (ulong)pbVar13;
        }
        pbVar5 = pbVar5 + -(uVar9 * (long)pbVar13);
      }
      *(long **)(*(long *)param_1 + (long)pbVar5 * 8) = local_80[0];
    }
  }
  else {
    *local_80[0] = *plVar11;
    *plVar11 = (long)local_80[0];
  }
                    /* try { // try from 00a5e89c to 00b5e99b has its CatchHandler @ 00a5e6f4 */
  uVar6 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  plVar11 = local_80[0];
LAB_00a5e8b0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1,uVar6);
  }
  return plVar11;
}

