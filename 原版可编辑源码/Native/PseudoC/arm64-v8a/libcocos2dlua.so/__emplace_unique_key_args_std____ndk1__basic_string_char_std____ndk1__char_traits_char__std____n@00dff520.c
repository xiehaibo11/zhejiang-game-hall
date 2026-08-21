
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::DownloadUnit>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::DownloadUnit>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>
   > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&,
   cocos2d::extension::DownloadUnit&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   cocos2d::extension::DownloadUnit&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
       ::
       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::DownloadUnit&>
                 (basic_string *param_1,basic_string *param_2,DownloadUnit *param_3)

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
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  basic_string *pbVar13;
  basic_string *unaff_x28;
  undefined2 uVar14;
  long *local_80 [3];
  long local_68;
  
                    /* try { // try from 00dff520 to 00eff5cf has its CatchHandler @ 00dff520
                       catch() { ... } // from try @ 00dff520 with catch @ 00dff520
                       catch() { ... } // from try @ 00dff5e0 with catch @ 00dff520
                       catch() { ... } // from try @ 00dff608 with catch @ 00dff520
                       catch() { ... } // from try @ 00dff630 with catch @ 00dff520 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar12 = *(ulong *)(param_2 + 8);
  pbVar5 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar12 = (ulong)((byte)*param_2 >> 1);
  }
  pbVar5 = (basic_string *)
           __murmur2_or_cityhash<unsigned_long,64ul>::operator()
                     ((__murmur2_or_cityhash<unsigned_long,64ul> *)local_80,pbVar5,uVar12);
  pbVar13 = *(basic_string **)(param_1 + 8);
  if (pbVar13 != (basic_string *)0x0) {
    uVar6 = CONCAT17(POPCOUNT((char)((ulong)pbVar13 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pbVar13 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pbVar13 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pbVar13 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pbVar13 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pbVar13 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pbVar13 >> 8)),POPCOUNT((char)pbVar13))))))));
    uVar14 = NEON_uaddlv(uVar6,1);
    uVar12 = CONCAT62((int6)((ulong)uVar6 >> 0x10),uVar14) & 0xffffffff;
    if (uVar12 < 2) {
      unaff_x28 = (basic_string *)((ulong)(pbVar13 + -1) & (ulong)pbVar5);
    }
    else {
      unaff_x28 = pbVar5;
      if (pbVar13 <= pbVar5) {
        uVar10 = 0;
        if (pbVar13 != (basic_string *)0x0) {
          uVar10 = (ulong)pbVar5 / (ulong)pbVar13;
        }
        unaff_x28 = pbVar5 + -(uVar10 * (long)pbVar13);
      }
    }
    puVar7 = *(undefined8 **)(*(long *)param_1 + (long)unaff_x28 * 8);
                    /* try { // try from 00dff5d0 to 00eff5df has its CatchHandler @ 00dff678 */
    if ((puVar7 != (undefined8 *)0x0) && (plVar11 = (long *)*puVar7, plVar11 != (long *)0x0)) {
                    /* try { // try from 00dff5e0 to 00eff5f7 has its CatchHandler @ 00dff520 */
      __n = (ulong)((byte)*param_2 >> 1);
      __s2 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
                    /* try { // try from 00dff5f8 to 00eff607 has its CatchHandler @ 00dff674 */
        __n = *(size_t *)(param_2 + 8);
        __s2 = *(basic_string **)(param_2 + 0x10);
      }
      do {
                    /* try { // try from 00dff608 to 00eff61f has its CatchHandler @ 00dff520 */
        pbVar8 = (basic_string *)plVar11[1];
        if (pbVar8 != pbVar5) {
          if (uVar12 < 2) {
            pbVar8 = (basic_string *)((ulong)pbVar8 & (ulong)(pbVar13 + -1));
          }
          else {
                    /* try { // try from 00dff620 to 00eff62f has its CatchHandler @ 00dff670 */
            if (pbVar13 <= pbVar8) {
              uVar10 = 0;
              if (pbVar13 != (basic_string *)0x0) {
                uVar10 = (ulong)pbVar8 / (ulong)pbVar13;
              }
                    /* try { // try from 00dff630 to 00eff693 has its CatchHandler @ 00dff520 */
              if (pbVar8 + -(uVar10 * (long)pbVar13) == unaff_x28) goto LAB_00dff648;
              break;
            }
          }
          if (pbVar8 != unaff_x28) break;
        }
LAB_00dff648:
        bVar2 = *(byte *)(plVar11 + 2);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar11[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar11[4];
                    /* catch() { ... } // from try @ 00dff620 with catch @ 00dff670 */
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar11 + 0x11);
          }
                    /* catch() { ... } // from try @ 00dff5f8 with catch @ 00dff674 */
          if ((bVar2 & 1) == 0) {
                    /* catch() { ... } // from try @ 00dff5d0 with catch @ 00dff678 */
            if (__n != 0) {
              uVar10 = 0;
              while (*(basic_string *)((long)plVar11 + uVar10 + 0x11) == __s2[uVar10]) {
                uVar10 = uVar10 + 1;
                if (bVar2 >> 1 == uVar10) goto LAB_00dff6b8;
              }
              goto LAB_00dff600;
            }
          }
          else if (__n != 0) {
            uVar4 = memcmp(__s1,__s2,__n);
            __s1 = (void *)(ulong)uVar4;
            if (uVar4 != 0) goto LAB_00dff600;
          }
LAB_00dff6b8:
          uVar6 = 0;
          goto LAB_00dff808;
        }
LAB_00dff600:
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  __construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::DownloadUnit&>
            ((ulong)param_1,pbVar5,param_3);
  if ((pbVar13 == (basic_string *)0x0) ||
     (*(float *)(param_1 + 0x20) * (float)pbVar13 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar12 = (ulong)(pbVar13 < (basic_string *)0x3 || ((ulong)pbVar13 & (ulong)(pbVar13 + -1)) != 0)
             | (long)pbVar13 << 1;
    uVar10 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
            *)param_1,uVar10);
    pbVar13 = *(basic_string **)(param_1 + 8);
    if (((ulong)pbVar13 & (ulong)(pbVar13 + -1)) == 0) {
      unaff_x28 = (basic_string *)((ulong)(pbVar13 + -1) & (ulong)pbVar5);
    }
    else {
      unaff_x28 = pbVar5;
      if (pbVar13 <= pbVar5) {
        uVar12 = 0;
        if (pbVar13 != (basic_string *)0x0) {
          uVar12 = (ulong)pbVar5 / (ulong)pbVar13;
        }
        unaff_x28 = pbVar5 + -(uVar12 * (long)pbVar13);
      }
    }
  }
  plVar11 = local_80[0];
  plVar9 = *(long **)(*(long *)param_1 + (long)unaff_x28 * 8);
  if (plVar9 == (long *)0x0) {
    pbVar5 = param_1 + 0x10;
    *local_80[0] = *(long *)pbVar5;
    *(long **)pbVar5 = local_80[0];
    *(basic_string **)(*(long *)param_1 + (long)unaff_x28 * 8) = pbVar5;
    if (*local_80[0] != 0) {
      pbVar5 = *(basic_string **)(*local_80[0] + 8);
      if (((ulong)pbVar13 & (ulong)(pbVar13 + -1)) == 0) {
        pbVar5 = (basic_string *)((ulong)pbVar5 & (ulong)(pbVar13 + -1));
      }
      else if (pbVar13 <= pbVar5) {
        uVar12 = 0;
        if (pbVar13 != (basic_string *)0x0) {
          uVar12 = (ulong)pbVar5 / (ulong)pbVar13;
        }
        pbVar5 = pbVar5 + -(uVar12 * (long)pbVar13);
      }
      *(long **)(*(long *)param_1 + (long)pbVar5 * 8) = local_80[0];
    }
  }
  else {
    *local_80[0] = *plVar9;
    *plVar9 = (long)local_80[0];
  }
  local_80[0] = (long *)0x0;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  __s1 = (void *)FUN_00dffa68(local_80);
  uVar6 = 1;
LAB_00dff808:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1,uVar6);
  }
  return plVar11;
}

