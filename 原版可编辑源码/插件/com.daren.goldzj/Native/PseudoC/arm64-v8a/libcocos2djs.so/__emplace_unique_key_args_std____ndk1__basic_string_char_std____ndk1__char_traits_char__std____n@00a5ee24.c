
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
  ulong uVar11;
  long *plVar12;
  basic_string *pbVar13;
  basic_string *pbVar14;
  basic_string *unaff_x28;
  long *local_80 [3];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar10 = *(ulong *)(param_2 + 8);
  pbVar5 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
    uVar10 = (ulong)((byte)*param_2 >> 1);
  }
                    /* try { // try from 00a5ee7c to 00b5ef87 has its CatchHandler @ 00a5ecf0 */
  pbVar5 = (basic_string *)
           __murmur2_or_cityhash<unsigned_long,64ul>::operator()
                     ((__murmur2_or_cityhash<unsigned_long,64ul> *)local_80,pbVar5,uVar10);
  pbVar14 = *(basic_string **)(param_1 + 8);
  if (pbVar14 != (basic_string *)0x0) {
    pbVar13 = pbVar14 + -1;
    if (((ulong)pbVar13 & (ulong)pbVar14) == 0) {
      unaff_x28 = (basic_string *)((ulong)pbVar13 & (ulong)pbVar5);
    }
    else {
      unaff_x28 = pbVar5;
      if (pbVar14 <= pbVar5) {
        uVar10 = 0;
        if (pbVar14 != (basic_string *)0x0) {
          uVar10 = (ulong)pbVar5 / (ulong)pbVar14;
        }
        unaff_x28 = pbVar5 + -(uVar10 * (long)pbVar14);
      }
    }
    puVar7 = *(undefined8 **)(*(long *)param_1 + (long)unaff_x28 * 8);
    if ((puVar7 != (undefined8 *)0x0) && (plVar12 = (long *)*puVar7, plVar12 != (long *)0x0)) {
      __n = (ulong)((byte)*param_2 >> 1);
      __s2 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        __s2 = *(basic_string **)(param_2 + 0x10);
      }
      do {
                    /* catch() { ... } // from try @ 00a5eda4 with catch @ 00a5eef0 */
        pbVar8 = (basic_string *)plVar12[1];
                    /* catch() { ... } // from try @ 00a5ed94 with catch @ 00a5eef8 */
        if (pbVar8 != pbVar5) {
          if (((ulong)pbVar13 & (ulong)pbVar14) == 0) {
            pbVar8 = (basic_string *)((ulong)pbVar8 & (ulong)pbVar13);
          }
          else {
                    /* catch() { ... } // from try @ 00a5ed70 with catch @ 00a5ef00 */
                    /* catch() { ... } // from try @ 00a5ed64 with catch @ 00a5ef04 */
            if (pbVar14 <= pbVar8) {
                    /* catch() { ... } // from try @ 00a5ed44 with catch @ 00a5ef08 */
              uVar10 = 0;
              if (pbVar14 != (basic_string *)0x0) {
                uVar10 = (ulong)pbVar8 / (ulong)pbVar14;
              }
              if (pbVar8 + -(uVar10 * (long)pbVar14) == unaff_x28) goto LAB_00a5ef28;
              break;
            }
          }
          if (pbVar8 != unaff_x28) break;
        }
LAB_00a5ef28:
        bVar2 = *(byte *)(plVar12 + 2);
                    /* catch() { ... } // from try @ 00a5ed7c with catch @ 00a5ef30
                       catch() { ... } // from try @ 00a5edfc with catch @ 00a5ef30 */
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar12[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar12[4];
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)((long)plVar12 + 0x11);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              uVar10 = 0;
              while (*(basic_string *)((long)plVar12 + uVar10 + 0x11) == __s2[uVar10]) {
                uVar10 = uVar10 + 1;
                if (bVar2 >> 1 == uVar10) goto LAB_00a5efb0;
              }
              goto LAB_00a5efa0;
            }
          }
          else if (__n != 0) {
                    /* try { // try from 00a5ef88 to 00b5efdb has its CatchHandler @ 00a5ef88
                       catch() { ... } // from try @ 00a5ef88 with catch @ 00a5ef88
                       catch() { ... } // from try @ 00a5f140 with catch @ 00a5ef88 */
            uVar4 = memcmp(__s1,__s2,__n);
            __s1 = (void *)(ulong)uVar4;
            if (uVar4 != 0) goto LAB_00a5efa0;
          }
LAB_00a5efb0:
          uVar6 = 0;
          goto LAB_00a5f108;
        }
LAB_00a5efa0:
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
  __construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&,cocos2d::extension::DownloadUnit&>
            ((ulong)param_1,pbVar5,param_3);
                    /* try { // try from 00a5efdc to 00b5eff3 has its CatchHandler @ 00a5f1ac */
  if ((pbVar14 == (basic_string *)0x0) ||
     (*(float *)(param_1 + 0x20) * (float)pbVar14 < (float)(*(long *)(param_1 + 0x18) + 1))) {
                    /* try { // try from 00a5effc to 00b5f007 has its CatchHandler @ 00a5f190 */
    if (pbVar14 < (basic_string *)0x3) {
      uVar10 = 1;
    }
    else {
                    /* try { // try from 00a5f008 to 00b5f013 has its CatchHandler @ 00a5f18c */
      uVar10 = (ulong)(((ulong)(pbVar14 + -1) & (ulong)pbVar14) != 0);
                    /* try { // try from 00a5f014 to 00b5f01b has its CatchHandler @ 00a5f1bc */
    }
    uVar10 = uVar10 | (long)pbVar14 << 1;
    uVar11 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar11 <= uVar10) {
      uVar11 = uVar10;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
            *)param_1,uVar11);
                    /* try { // try from 00a5f038 to 00b5f04b has its CatchHandler @ 00a5f194 */
    pbVar14 = *(basic_string **)(param_1 + 8);
    if (((ulong)(pbVar14 + -1) & (ulong)pbVar14) == 0) {
      unaff_x28 = (basic_string *)((ulong)(pbVar14 + -1) & (ulong)pbVar5);
    }
    else {
      unaff_x28 = pbVar5;
      if (pbVar14 <= pbVar5) {
        uVar10 = 0;
        if (pbVar14 != (basic_string *)0x0) {
          uVar10 = (ulong)pbVar5 / (ulong)pbVar14;
        }
        unaff_x28 = pbVar5 + -(uVar10 * (long)pbVar14);
      }
    }
  }
  plVar12 = local_80[0];
                    /* try { // try from 00a5f06c to 00b5f0c3 has its CatchHandler @ 00a5f1bc */
  plVar9 = *(long **)(*(long *)param_1 + (long)unaff_x28 * 8);
  if (plVar9 == (long *)0x0) {
    pbVar5 = param_1 + 0x10;
    *local_80[0] = *(long *)pbVar5;
    *(long **)pbVar5 = local_80[0];
    *(basic_string **)(*(long *)param_1 + (long)unaff_x28 * 8) = pbVar5;
    if (*local_80[0] != 0) {
      pbVar5 = *(basic_string **)(*local_80[0] + 8);
      if (((ulong)(pbVar14 + -1) & (ulong)pbVar14) == 0) {
        pbVar5 = (basic_string *)((ulong)pbVar5 & (ulong)(pbVar14 + -1));
      }
      else if (pbVar14 <= pbVar5) {
        uVar10 = 0;
        if (pbVar14 != (basic_string *)0x0) {
          uVar10 = (ulong)pbVar5 / (ulong)pbVar14;
        }
        pbVar5 = pbVar5 + -(uVar10 * (long)pbVar14);
      }
      *(long **)(*(long *)param_1 + (long)pbVar5 * 8) = local_80[0];
    }
  }
  else {
    *local_80[0] = *plVar9;
    *plVar9 = (long)local_80[0];
  }
  local_80[0] = (long *)0x0;
                    /* try { // try from 00a5f0fc to 00b5f13f has its CatchHandler @ 00a5f194 */
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  __s1 = (void *)FUN_00a5f374(local_80);
  uVar6 = 1;
LAB_00a5f108:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1,uVar6);
  }
  return plVar12;
}

