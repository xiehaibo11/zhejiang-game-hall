
/* dragonBones::ArmatureData::addAnimation(dragonBones::AnimationData*) */

void __thiscall dragonBones::ArmatureData::addAnimation(ArmatureData *this,AnimationData *param_1)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
  *this_00;
  basic_string *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  long lVar2;
  ArmatureData *pAVar3;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  long lVar6;
  __tree_node_base *p_Var7;
  __tree_end_node *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
             *)(this + 0x120);
  pbVar1 = (basic_string *)(param_1 + 0x38);
  pAVar3 = (ArmatureData *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,pbVar1);
  if (this + 0x128 == pAVar3) {
    *(ArmatureData **)(param_1 + 0xf0) = this;
    pp_Var4 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (this_00,&local_60,pbVar1);
    p_Var7 = *pp_Var4;
    if (p_Var7 == (__tree_node_base *)0x0) {
      p_Var7 = operator_new(0x40);
                    /* try { // try from 00d87cc0 to 00e87cc7 has its CatchHandler @ 00d87f44 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(p_Var7 + 0x20),pbVar1);
                    /* try { // try from 00d87cc8 to 00e87ccf has its CatchHandler @ 00d87f3c */
      *(undefined8 *)(p_Var7 + 0x38) = 0;
      *(undefined8 *)p_Var7 = 0;
      *(undefined8 *)(p_Var7 + 8) = 0;
                    /* try { // try from 00d87cd0 to 00e87cd7 has its CatchHandler @ 00d87f48 */
      *(__tree_end_node **)(p_Var7 + 0x10) = local_60;
      *pp_Var4 = p_Var7;
                    /* try { // try from 00d87cd8 to 00e87cdf has its CatchHandler @ 00d87f38 */
                    /* try { // try from 00d87ce0 to 00e87ce7 has its CatchHandler @ 00d87f34 */
      p_Var5 = p_Var7;
      if (**(long **)this_00 != 0) {
        *(long *)this_00 = **(long **)this_00;
                    /* try { // try from 00d87ce8 to 00e87cef has its CatchHandler @ 00d87f48 */
        p_Var5 = *pp_Var4;
      }
                    /* try { // try from 00d87cf8 to 00e87cff has its CatchHandler @ 00d87f2c */
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x128),p_Var5);
                    /* try { // try from 00d87d00 to 00e87d07 has its CatchHandler @ 00d87f28 */
      *(long *)(this + 0x130) = *(long *)(this + 0x130) + 1;
    }
                    /* try { // try from 00d87d08 to 00e87d0f has its CatchHandler @ 00d87f24 */
    *(AnimationData **)(p_Var7 + 0x38) = param_1;
    this_01 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x50);
                    /* try { // try from 00d87d10 to 00e87d1b has its CatchHandler @ 00d87f48 */
    if (this_01 ==
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x58)) {
                    /* try { // try from 00d87d64 to 00e87d6b has its CatchHandler @ 00d87f08 */
                    /* try { // try from 00d87d6c to 00e87d73 has its CatchHandler @ 00d87f04 */
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(this + 0x48),pbVar1);
      lVar6 = *(long *)(this + 0x140);
    }
    else {
                    /* try { // try from 00d87d1c to 00e87d23 has its CatchHandler @ 00d87f20 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(this_01,pbVar1);
                    /* try { // try from 00d87d24 to 00e87d2b has its CatchHandler @ 00d87f1c */
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x50) = this_01 + 0x18;
                    /* try { // try from 00d87d2c to 00e87d2f has its CatchHandler @ 00d87f40 */
      lVar6 = *(long *)(this + 0x140);
                    /* try { // try from 00d87d30 to 00e87d3b has its CatchHandler @ 00d87f48 */
    }
                    /* try { // try from 00d87d74 to 00e87d7b has its CatchHandler @ 00d87f00 */
    if (lVar6 == 0) {
      *(AnimationData **)(this + 0x140) = param_1;
    }
  }
                    /* try { // try from 00d87d3c to 00e87d43 has its CatchHandler @ 00d87f18 */
                    /* try { // try from 00d87d44 to 00e87d4b has its CatchHandler @ 00d87f48 */
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* try { // try from 00d87d4c to 00e87d53 has its CatchHandler @ 00d87f14 */
                    /* try { // try from 00d87d54 to 00e87d5b has its CatchHandler @ 00d87f10 */
                    /* try { // try from 00d87d5c to 00e87d63 has its CatchHandler @ 00d87f0c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d87d7c to 00e87d87 has its CatchHandler @ 00d87f48 */
  __stack_chk_fail();
}

