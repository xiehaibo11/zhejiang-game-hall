
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Value>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::Value>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Value&>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::Value&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
       ::
       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Value&>
                 (basic_string *param_1,basic_string *param_2,Value *param_3)

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
  pbVar5 = (basic_string *)
           __murmur2_or_cityhash<unsigned_long,64ul>::operator()
                     ((__murmur2_or_cityhash<unsigned_long,64ul> *)local_80,pbVar5,uVar9);
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
      __n = (ulong)((byte)*param_2 >> 1);
      __s2 = param_2 + 1;
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
            if (pbVar8 + -(uVar9 * (long)pbVar13) == unaff_x28) goto LAB_008df848;
            break;
          }
          if (pbVar8 != unaff_x28) break;
        }
LAB_008df848:
        bVar2 = *(byte *)(plVar11 + 2);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar11[3];
        }
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
                if (bVar2 >> 1 == uVar9) goto LAB_008df8d0;
              }
              goto LAB_008df8c0;
            }
          }
          else if (__n != 0) {
            uVar4 = memcmp(__s1,__s2,__n);
            __s1 = (void *)(ulong)uVar4;
            if (uVar4 != 0) goto LAB_008df8c0;
          }
LAB_008df8d0:
          uVar6 = 0;
          goto LAB_008dfa1c;
        }
LAB_008df8c0:
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  __s1 = (void *)__construct_node_hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,cocos2d::Value&>
                           ((ulong)param_1,pbVar5,param_3);
  if ((pbVar13 == (basic_string *)0x0) ||
     (*(float *)(param_1 + 0x20) * (float)pbVar13 < (float)(*(long *)(param_1 + 0x18) + 1))) {
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
    __s1 = (void *)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
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
  uVar6 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  plVar11 = local_80[0];
LAB_008dfa1c:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1,uVar6);
  }
  return plVar11;
}

