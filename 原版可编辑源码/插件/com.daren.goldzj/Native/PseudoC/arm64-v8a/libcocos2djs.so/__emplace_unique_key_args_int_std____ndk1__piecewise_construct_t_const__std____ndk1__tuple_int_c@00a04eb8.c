
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float)> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float)> >, std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float)> >, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::function<void (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float)> >, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, std::__ndk1::function<void
   (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float)> > > >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<int const&>, std::__ndk1::tuple<> >(int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<int const&>&&,
   std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>>>
::
__emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int_const&>,std::__ndk1::tuple<>>
          (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar9 = *(ulong *)(param_1 + 2);
  uVar10 = (ulong)*(int *)param_2;
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar4 & uVar9) == 0) {
      unaff_x24 = uVar4 & uVar10;
    }
    else {
                    /* try { // try from 00a04ef0 to 00b04f33 has its CatchHandler @ 00a0503c */
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_00a04f6c;
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if ((uVar4 & uVar9) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar7 / uVar9;
            }
            if (uVar7 - uVar2 * uVar9 == unaff_x24) goto LAB_00a04f58;
            goto LAB_00a04f6c;
          }
          if (uVar7 != unaff_x24) goto LAB_00a04f6c;
        }
LAB_00a04f58:
      } while ((int)plVar8[2] != *(int *)param_2);
      uVar3 = 0;
      goto LAB_00a05094;
    }
  }
LAB_00a04f6c:
                    /* try { // try from 00a04f6c to 00b04f77 has its CatchHandler @ 00a05038 */
  plVar8 = operator_new(0x50);
  uVar1 = **(undefined4 **)param_4;
  plVar8[8] = 0;
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = uVar1;
                    /* try { // try from 00a04fa0 to 00b04fbf has its CatchHandler @ 00a0503c */
  if ((uVar9 == 0) || ((float)param_1[8] * (float)uVar9 < (float)(*(long *)(param_1 + 6) + 1))) {
    if (uVar9 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar9 - 1 & uVar9) != 0);
                    /* try { // try from 00a04fc8 to 00b04fcf has its CatchHandler @ 00a05034 */
    }
                    /* try { // try from 00a04fd0 to 00b05057 has its CatchHandler @ 00a04ea4 */
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::function<void(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,float)>>>>
            *)param_1,uVar9);
    uVar9 = *(ulong *)(param_1 + 2);
    if ((uVar9 - 1 & uVar9) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar4 * uVar9;
      }
    }
  }
  lVar6 = *(long *)param_1;
  plVar5 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)(param_1 + 4);
                    /* catch() { ... } // from try @ 00a04fc8 with catch @ 00a05034 */
                    /* catch() { ... } // from try @ 00a04f6c with catch @ 00a05038 */
                    /* catch() { ... } // from try @ 00a04ef0 with catch @ 00a0503c
                       catch() { ... } // from try @ 00a04fa0 with catch @ 00a0503c */
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar5;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 - 1 & uVar9) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar4 * uVar9;
      }
      plVar5 = (long *)(*(long *)param_1 + uVar10 * 8);
      goto LAB_00a05080;
    }
  }
  else {
    *plVar8 = *plVar5;
LAB_00a05080:
    *plVar5 = (long)plVar8;
  }
  uVar3 = 1;
                    /* try { // try from 00a0508c to 00b0508f has its CatchHandler @ 00a050a4 */
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
LAB_00a05094:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0508c with catch @ 00a050a4
                        */
  return auVar11;
}

