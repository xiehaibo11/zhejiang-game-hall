
/* dragonBones::ArmatureData::addSkin(dragonBones::SkinData*) */

void __thiscall dragonBones::ArmatureData::addSkin(ArmatureData *this,SkinData *param_1)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
  *this_00;
  basic_string *pbVar1;
  long lVar2;
  ArmatureData *pAVar3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  __tree_node_base *p_Var6;
  __tree_end_node *local_60;
  long local_58;
  
                    /* try { // try from 00d87b3c to 00e87b4f has its CatchHandler @ 00d87f58 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
             *)(this + 0x108);
  pbVar1 = (basic_string *)(param_1 + 0x10);
                    /* try { // try from 00d87b60 to 00e87b67 has its CatchHandler @ 00d87f50 */
                    /* try { // try from 00d87b6c to 00e87b83 has its CatchHandler @ 00d87f54 */
  pAVar3 = (ArmatureData *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,pbVar1);
  if (this + 0x110 == pAVar3) {
                    /* try { // try from 00d87b84 to 00e87b93 has its CatchHandler @ 00d87f4c */
    *(ArmatureData **)(param_1 + 0x40) = this;
    pp_Var4 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SkinData*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (this_00,&local_60,pbVar1);
    p_Var6 = *pp_Var4;
    if (p_Var6 == (__tree_node_base *)0x0) {
      p_Var6 = operator_new(0x40);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(p_Var6 + 0x20),pbVar1);
      *(undefined8 *)(p_Var6 + 0x38) = 0;
      *(undefined8 *)p_Var6 = 0;
      *(undefined8 *)(p_Var6 + 8) = 0;
      *(__tree_end_node **)(p_Var6 + 0x10) = local_60;
      *pp_Var4 = p_Var6;
      p_Var5 = p_Var6;
      if (**(long **)this_00 != 0) {
        *(long *)this_00 = **(long **)this_00;
        p_Var5 = *pp_Var4;
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x110),p_Var5);
      *(long *)(this + 0x118) = *(long *)(this + 0x118) + 1;
    }
    *(SkinData **)(p_Var6 + 0x38) = param_1;
    if (*(long *)(this + 0x138) == 0) {
      *(SkinData **)(this + 0x138) = param_1;
    }
  }
                    /* try { // try from 00d87c18 to 00e87cbf has its CatchHandler @ 00d86504 */
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

