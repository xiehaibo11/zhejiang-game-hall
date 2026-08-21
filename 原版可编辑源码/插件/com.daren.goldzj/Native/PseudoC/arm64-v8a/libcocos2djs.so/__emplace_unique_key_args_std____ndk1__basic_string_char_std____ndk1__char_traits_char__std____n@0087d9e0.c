
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
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&&>&&, std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
       ::
       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                 (basic_string *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
                 )

{
  size_t sVar1;
  piecewise_construct_t *ppVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  uint uVar6;
  ulong uVar7;
  void *__s1;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  basic_string *pbVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x27;
  ulong uVar16;
  long lVar17;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar7 = *(ulong *)(param_2 + 8);
  ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    ppVar2 = param_2 + 1;
    uVar7 = (ulong)((byte)*param_2 >> 1);
  }
  uVar7 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_70,ppVar2,uVar7);
  uVar15 = *(ulong *)(param_1 + 8);
  if (uVar15 != 0) {
    uVar16 = uVar15 - 1;
    if ((uVar16 & uVar15) == 0) {
      unaff_x27 = uVar16 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar15 <= uVar7) {
        uVar10 = 0;
        if (uVar15 != 0) {
          uVar10 = uVar7 / uVar15;
        }
        unaff_x27 = uVar7 - uVar10 * uVar15;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)param_1 + unaff_x27 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar9, plVar14 != (long *)0x0)) {
      __n = (ulong)((byte)*param_2 >> 1);
      ppVar2 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
      }
      do {
        uVar10 = plVar14[1];
        if (uVar10 != uVar7) {
          if ((uVar16 & uVar15) == 0) {
            uVar10 = uVar10 & uVar16;
          }
          else if (uVar15 <= uVar10) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar10 / uVar15;
            }
            if (uVar10 - uVar4 * uVar15 == unaff_x27) goto LAB_0087dadc;
            break;
          }
          if (uVar10 != unaff_x27) break;
        }
LAB_0087dadc:
        bVar3 = *(byte *)(plVar14 + 2);
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = plVar14[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar14[4];
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)((long)plVar14 + 0x11);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              uVar10 = 0;
              while (*(piecewise_construct_t *)((long)plVar14 + uVar10 + 0x11) == ppVar2[uVar10]) {
                uVar10 = uVar10 + 1;
                if (bVar3 >> 1 == uVar10) goto LAB_0087dc14;
              }
              goto LAB_0087db4c;
            }
          }
          else if (__n != 0) {
            uVar6 = memcmp(__s1,ppVar2,__n);
            __s1 = (void *)(ulong)uVar6;
            if (uVar6 != 0) goto LAB_0087db4c;
          }
LAB_0087dc14:
          uVar8 = 0;
          goto LAB_0087dca8;
        }
LAB_0087db4c:
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = operator_new(0x38);
  plVar11 = *(long **)param_4;
  lVar17 = plVar11[1];
  lVar13 = *plVar11;
  plVar14[4] = plVar11[2];
  plVar14[3] = lVar17;
  plVar14[2] = lVar13;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *plVar11 = 0;
  __s1 = (void *)cocos2d::Value::Value((Value *)(plVar14 + 5));
  *plVar14 = 0;
  plVar14[1] = uVar7;
  if ((uVar15 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar15 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    if (uVar15 < 3) {
      uVar16 = 1;
    }
    else {
      uVar16 = (ulong)((uVar15 - 1 & uVar15) != 0);
    }
    uVar16 = uVar16 | uVar15 << 1;
    uVar15 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar15 <= uVar16) {
      uVar15 = uVar16;
    }
    __s1 = (void *)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                           *)param_1,uVar15);
    uVar15 = *(ulong *)(param_1 + 8);
    if ((uVar15 - 1 & uVar15) == 0) {
      unaff_x27 = uVar15 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar15 <= uVar7) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar7 / uVar15;
        }
        unaff_x27 = uVar7 - uVar16 * uVar15;
      }
    }
  }
  lVar13 = *(long *)param_1;
  plVar11 = *(long **)(lVar13 + unaff_x27 * 8);
  if (plVar11 == (long *)0x0) {
    pbVar12 = param_1 + 0x10;
    *plVar14 = *(long *)pbVar12;
    *(long **)pbVar12 = plVar14;
    *(basic_string **)(lVar13 + unaff_x27 * 8) = pbVar12;
    if (*plVar14 == 0) goto LAB_0087dc98;
    uVar7 = *(ulong *)(*plVar14 + 8);
    if ((uVar15 - 1 & uVar15) == 0) {
      uVar7 = uVar7 & uVar15 - 1;
    }
    else if (uVar15 <= uVar7) {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar7 / uVar15;
      }
      uVar7 = uVar7 - uVar16 * uVar15;
    }
    plVar11 = (long *)(*(long *)param_1 + uVar7 * 8);
  }
  else {
    *plVar14 = *plVar11;
  }
  *plVar11 = (long)plVar14;
LAB_0087dc98:
  uVar8 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_0087dca8:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1,uVar8);
  }
  return plVar14;
}

