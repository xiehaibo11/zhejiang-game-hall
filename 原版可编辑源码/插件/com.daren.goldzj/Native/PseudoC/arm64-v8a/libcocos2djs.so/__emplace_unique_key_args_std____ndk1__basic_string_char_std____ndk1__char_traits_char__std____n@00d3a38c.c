
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::TextureData*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::TextureData*>,
   void*>*, long>, bool>
   std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::TextureData*>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::TextureData*>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::TextureData*> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>&&, std::__ndk1::tuple<>&&)
    */

__tree_node_base *
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
::
__emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
          (basic_string *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  long lVar1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  __tree_node_base **extraout_x0;
  undefined8 uVar4;
  byte *pbVar5;
  __tree_node_base *p_Var6;
  ulong __n;
  void *__src;
  ulong uVar7;
  undefined8 uVar8;
  __tree_end_node *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pp_Var2 = __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
                        *)param_1,&local_60,(basic_string *)param_2);
  p_Var6 = *pp_Var2;
  if (p_Var6 != (__tree_node_base *)0x0) {
    uVar4 = 0;
    goto LAB_00d3a4bc;
  }
  p_Var6 = operator_new(0x40);
  pbVar5 = *(byte **)param_4;
  *(undefined8 *)(p_Var6 + 0x20) = 0;
  *(undefined8 *)(p_Var6 + 0x28) = 0;
  *(undefined8 *)(p_Var6 + 0x30) = 0;
  if ((*pbVar5 & 1) == 0) {
    uVar8 = *(undefined8 *)(pbVar5 + 8);
    uVar4 = *(undefined8 *)pbVar5;
    *(undefined8 *)(p_Var6 + 0x30) = *(undefined8 *)(pbVar5 + 0x10);
    *(undefined8 *)(p_Var6 + 0x28) = uVar8;
    *(undefined8 *)(p_Var6 + 0x20) = uVar4;
  }
  else {
    __n = *(ulong *)(pbVar5 + 8);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(pbVar5 + 0x10);
    if (__n < 0x17) {
      p_Var3 = p_Var6 + 0x21;
      p_Var6[0x20] = SUB41((int)__n << 1,0);
      if (__n != 0) goto LAB_00d3a460;
    }
    else {
      uVar7 = __n + 0x10 & 0xfffffffffffffff0;
      p_Var3 = operator_new(uVar7);
      *(ulong *)(p_Var6 + 0x28) = __n;
      *(__tree_node_base **)(p_Var6 + 0x30) = p_Var3;
      *(ulong *)(p_Var6 + 0x20) = uVar7 | 1;
LAB_00d3a460:
      memcpy(p_Var3,__src,__n);
    }
    p_Var3[__n] = (__tree_node_base)0x0;
  }
  *(undefined8 *)(p_Var6 + 0x38) = 0;
  *(undefined8 *)p_Var6 = 0;
  *(undefined8 *)(p_Var6 + 8) = 0;
  *(__tree_end_node **)(p_Var6 + 0x10) = local_60;
  *pp_Var2 = p_Var6;
  p_Var3 = p_Var6;
  if (**(long **)param_1 != 0) {
    *(long *)param_1 = **(long **)param_1;
    p_Var3 = *pp_Var2;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(param_1 + 8),p_Var3);
  uVar4 = 1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  pp_Var2 = extraout_x0;
LAB_00d3a4bc:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pp_Var2,uVar4);
  }
  return p_Var6;
}

