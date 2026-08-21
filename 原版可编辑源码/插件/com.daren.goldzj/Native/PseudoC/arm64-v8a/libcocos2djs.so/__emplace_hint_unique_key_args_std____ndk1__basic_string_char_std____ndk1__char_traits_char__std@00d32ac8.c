
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00d32b08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* std::__ndk1::__tree_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*>,
   void*>*, long> std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*>,
   std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*>,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*> >
   >::__emplace_hint_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   dragonBones::AnimationData*>
   const&>(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, dragonBones::AnimationData*>,
   void*>*, long>, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   dragonBones::AnimationData*> const&) */

__tree_node_base * __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
::
__emplace_hint_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,dragonBones::AnimationData*>const&>
          (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
           *this,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  long lVar1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  __tree_node_base *p_Var5;
  ulong __n;
  void *__src;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pp_Var2 = __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this,param_2,&local_70,auStack_78,param_3);
  p_Var5 = *pp_Var2;
  if (p_Var5 != (__tree_node_base *)0x0) goto LAB_00d32bf4;
  p_Var5 = operator_new(0x40);
  *(undefined8 *)(p_Var5 + 0x20) = 0;
  *(undefined8 *)(p_Var5 + 0x28) = 0;
  *(undefined8 *)(p_Var5 + 0x30) = 0;
  if ((*param_4 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_4 + 8);
    uVar4 = *(undefined8 *)param_4;
    *(undefined8 *)(p_Var5 + 0x30) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(p_Var5 + 0x28) = uVar7;
    *(undefined8 *)(p_Var5 + 0x20) = uVar4;
  }
  else {
    __n = *(ulong *)(param_4 + 8);
    if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_4 + 0x10);
    if (__n < 0x17) {
      p_Var3 = p_Var5 + 0x21;
      p_Var5[0x20] = SUB41((int)__n << 1,0);
      if (__n != 0) goto LAB_00d32b98;
    }
    else {
      uVar6 = __n + 0x10 & 0xfffffffffffffff0;
      p_Var3 = operator_new(uVar6);
      *(ulong *)(p_Var5 + 0x28) = __n;
      *(__tree_node_base **)(p_Var5 + 0x30) = p_Var3;
      *(ulong *)(p_Var5 + 0x20) = uVar6 | 1;
LAB_00d32b98:
      memcpy(p_Var3,__src,__n);
    }
    p_Var3[__n] = (__tree_node_base)0x0;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)p_Var5 = 0;
  *(undefined8 *)(p_Var5 + 8) = 0;
  *(undefined8 *)(p_Var5 + 0x38) = uVar4;
  *(undefined8 *)(p_Var5 + 0x10) = local_70;
  *pp_Var2 = p_Var5;
  p_Var3 = p_Var5;
  if (**(long **)this != 0) {
    *(long *)this = **(long **)this;
    p_Var3 = *pp_Var2;
  }
  __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 8),p_Var3);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
LAB_00d32bf4:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return p_Var5;
}

