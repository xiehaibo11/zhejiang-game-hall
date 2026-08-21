
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::ManifestAsset>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::ManifestAsset>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::ManifestAsset>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::ManifestAsset>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::ManifestAsset> > >::__emplace_unique_key_args<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   cocos2d::extension::ManifestAsset&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   cocos2d::extension::ManifestAsset&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
       ::
       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::ManifestAsset&>
                 (basic_string *param_1,basic_string *param_2,ManifestAsset *param_3)

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
  long *plVar10;
  ulong uVar11;
  basic_string *pbVar12;
  basic_string *unaff_x28;
  undefined2 uVar13;
  long *local_80 [3];
  long local_68;
  
                    /* try { // try from 00e002a8 to 00f0032f has its CatchHandler @ 00e002a8
                       catch() { ... } // from try @ 00e002a8 with catch @ 00e002a8
                       catch() { ... } // from try @ 00e0033c with catch @ 00e002a8 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar11 = *(ulong *)(param_2 + 8);
  pbVar5 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar11 = (ulong)((byte)*param_2 >> 1);
  }
  pbVar5 = (basic_string *)
           __murmur2_or_cityhash<unsigned_long,64ul>::operator()
                     ((__murmur2_or_cityhash<unsigned_long,64ul> *)local_80,pbVar5,uVar11);
  pbVar12 = *(basic_string **)(param_1 + 8);
  if (pbVar12 != (basic_string *)0x0) {
    uVar6 = CONCAT17(POPCOUNT((char)((ulong)pbVar12 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pbVar12 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pbVar12 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pbVar12 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pbVar12 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pbVar12 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pbVar12 >> 8)),POPCOUNT((char)pbVar12))))))));
    uVar13 = NEON_uaddlv(uVar6,1);
    uVar11 = CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar13) & 0xffffffff;
    if (uVar11 < 2) {
                    /* try { // try from 00e0033c to 00f00397 has its CatchHandler @ 00e002a8 */
      unaff_x28 = (basic_string *)((ulong)(pbVar12 + -1) & (ulong)pbVar5);
    }
    else {
      unaff_x28 = pbVar5;
      if (pbVar12 <= pbVar5) {
        uVar9 = 0;
        if (pbVar12 != (basic_string *)0x0) {
          uVar9 = (ulong)pbVar5 / (ulong)pbVar12;
        }
        unaff_x28 = pbVar5 + -(uVar9 * (long)pbVar12);
                    /* try { // try from 00e00330 to 00f0033b has its CatchHandler @ 00e0037c */
      }
    }
    puVar7 = *(undefined8 **)(*(long *)param_1 + (long)unaff_x28 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar10 = (long *)*puVar7, plVar10 != (long *)0x0)) {
      __n = (ulong)((byte)*param_2 >> 1);
      __s2 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        __s2 = *(basic_string **)(param_2 + 0x10);
      }
      do {
        pbVar8 = (basic_string *)plVar10[1];
        if (pbVar8 != pbVar5) {
          if (uVar11 < 2) {
            pbVar8 = (basic_string *)((ulong)pbVar8 & (ulong)(pbVar12 + -1));
          }
          else {
                    /* try { // try from 00e00398 to 00f0041f has its CatchHandler @ 00e00398
                       catch() { ... } // from try @ 00e00398 with catch @ 00e00398
                       catch() { ... } // from try @ 00e0042c with catch @ 00e00398 */
            if (pbVar12 <= pbVar8) {
              uVar9 = 0;
              if (pbVar12 != (basic_string *)0x0) {
                uVar9 = (ulong)pbVar8 / (ulong)pbVar12;
              }
              if (pbVar8 + -(uVar9 * (long)pbVar12) == unaff_x28) goto LAB_00e003c4;
              break;
            }
          }
          if (pbVar8 != unaff_x28) break;
        }
LAB_00e003c4:
        bVar2 = *(byte *)(plVar10 + 2);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar10[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar10[4];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar10 + 0x11);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              uVar9 = 0;
              while (*(basic_string *)((long)plVar10 + uVar9 + 0x11) == __s2[uVar9]) {
                uVar9 = uVar9 + 1;
                if (bVar2 >> 1 == uVar9) goto LAB_00e00434;
              }
              goto LAB_00e0037c;
            }
          }
          else {
                    /* try { // try from 00e00420 to 00f0042b has its CatchHandler @ 00e0046c */
            if (__n != 0) {
                    /* try { // try from 00e0042c to 00f00487 has its CatchHandler @ 00e00398 */
              uVar4 = memcmp(__s1,__s2,__n);
              __s1 = (void *)(ulong)uVar4;
              if (uVar4 != 0) goto LAB_00e0037c;
            }
          }
LAB_00e00434:
          uVar6 = 0;
          goto LAB_00e00578;
        }
LAB_00e0037c:
                    /* catch() { ... } // from try @ 00e00330 with catch @ 00e0037c */
        plVar10 = (long *)*plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  __s1 = (void *)__construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::ManifestAsset&>
                           ((ulong)param_1,pbVar5,param_3);
                    /* catch() { ... } // from try @ 00e00420 with catch @ 00e0046c */
  if ((pbVar12 == (basic_string *)0x0) ||
     (*(float *)(param_1 + 0x20) * (float)pbVar12 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar11 = (ulong)(pbVar12 < (basic_string *)0x3 || ((ulong)pbVar12 & (ulong)(pbVar12 + -1)) != 0)
             | (long)pbVar12 << 1;
    uVar9 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    __s1 = (void *)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::ManifestAsset>>>
                           *)param_1,uVar9);
    pbVar12 = *(basic_string **)(param_1 + 8);
    if (((ulong)pbVar12 & (ulong)(pbVar12 + -1)) == 0) {
      unaff_x28 = (basic_string *)((ulong)(pbVar12 + -1) & (ulong)pbVar5);
    }
    else {
      unaff_x28 = pbVar5;
      if (pbVar12 <= pbVar5) {
        uVar11 = 0;
        if (pbVar12 != (basic_string *)0x0) {
          uVar11 = (ulong)pbVar5 / (ulong)pbVar12;
        }
        unaff_x28 = pbVar5 + -(uVar11 * (long)pbVar12);
      }
    }
  }
  plVar10 = *(long **)(*(long *)param_1 + (long)unaff_x28 * 8);
  if (plVar10 == (long *)0x0) {
    pbVar5 = param_1 + 0x10;
    *local_80[0] = *(long *)pbVar5;
    *(long **)pbVar5 = local_80[0];
    *(basic_string **)(*(long *)param_1 + (long)unaff_x28 * 8) = pbVar5;
    if (*local_80[0] != 0) {
      pbVar5 = *(basic_string **)(*local_80[0] + 8);
      if (((ulong)pbVar12 & (ulong)(pbVar12 + -1)) == 0) {
        pbVar5 = (basic_string *)((ulong)pbVar5 & (ulong)(pbVar12 + -1));
      }
      else if (pbVar12 <= pbVar5) {
        uVar11 = 0;
        if (pbVar12 != (basic_string *)0x0) {
          uVar11 = (ulong)pbVar5 / (ulong)pbVar12;
        }
        pbVar5 = pbVar5 + -(uVar11 * (long)pbVar12);
      }
      *(long **)(*(long *)param_1 + (long)pbVar5 * 8) = local_80[0];
    }
  }
  else {
    *local_80[0] = *plVar10;
    *plVar10 = (long)local_80[0];
  }
  uVar6 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  plVar10 = local_80[0];
LAB_00e00578:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1,uVar6);
  }
  return plVar10;
}

