
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00d86004 */
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
           *this,undefined8 param_2,undefined8 param_3,basic_string *param_4)

{
  long lVar1;
  __tree_node_base **pp_Var2;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  __tree_node_base *p_Var5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00d85fe8 to 00e86003 has its CatchHandler @ 00d861ac */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00d86004 to 00e8624f has its CatchHandler @ 00d8556c */
  pp_Var2 = __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this,param_2,&local_50,auStack_58,param_3);
  p_Var5 = *pp_Var2;
  if (p_Var5 == (__tree_node_base *)0x0) {
    p_Var5 = operator_new(0x40);
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (p_Var5 + 0x20),param_4);
    uVar4 = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *(undefined8 *)(p_Var5 + 0x38) = uVar4;
    *(undefined8 *)(p_Var5 + 0x10) = local_50;
    *pp_Var2 = p_Var5;
    p_Var3 = p_Var5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var3 = *pp_Var2;
    }
    __tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var3);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
                    /* catch() { ... } // from try @ 00d85c80 with catch @ 00d86078 */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00d85c28 with catch @ 00d86088 */
                    /* catch() { ... } // from try @ 00d85d94 with catch @ 00d86098
                       catch() { ... } // from try @ 00d85e68 with catch @ 00d86098 */
                    /* catch() { ... } // from try @ 00d85c98 with catch @ 00d8609c */
  return p_Var5;
}

