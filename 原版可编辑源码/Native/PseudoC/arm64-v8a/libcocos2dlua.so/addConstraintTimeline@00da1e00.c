
/* dragonBones::AnimationData::addConstraintTimeline(dragonBones::ConstraintData*,
   dragonBones::TimelineData*) */

void __thiscall
dragonBones::AnimationData::addConstraintTimeline
          (AnimationData *this,ConstraintData *param_1,TimelineData *param_2)

{
  undefined8 *puVar1;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
  *this_00;
  undefined8 *__src;
  undefined8 *puVar2;
  long lVar3;
  __tree_node_base **pp_Var4;
  void *__dest;
  __tree_node_base *p_Var5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  __tree_node_base *p_Var9;
  size_t __n;
  ulong uVar10;
  __tree_end_node *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
             *)(this + 0x98);
                    /* try { // try from 00da1e38 to 00ea1eab has its CatchHandler @ 00da202c */
  pp_Var4 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TimelineData*,std::__ndk1::allocator<dragonBones::TimelineData*>>>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_00,&local_70,(basic_string *)(param_1 + 0x18));
  p_Var9 = *pp_Var4;
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (p_Var9 + 0x20),(basic_string *)(param_1 + 0x18));
    *(undefined8 *)(p_Var9 + 0x38) = 0;
    *(undefined8 *)(p_Var9 + 0x40) = 0;
    *(undefined8 *)(p_Var9 + 0x48) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(__tree_end_node **)(p_Var9 + 0x10) = local_70;
    *pp_Var4 = p_Var9;
    p_Var5 = p_Var9;
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
      p_Var5 = *pp_Var4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0xa0),p_Var5);
    *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 1;
  }
  __src = *(undefined8 **)(p_Var9 + 0x38);
  puVar2 = *(undefined8 **)(p_Var9 + 0x40);
                    /* try { // try from 00da1ebc to 00ea1ed3 has its CatchHandler @ 00da2048 */
  puVar8 = __src;
  if ((__src != puVar2) && ((TimelineData *)*__src != param_2)) {
    do {
      if (puVar2 + -1 == puVar8) goto LAB_00da1f04;
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 1;
    } while ((TimelineData *)*puVar1 != param_2);
  }
                    /* try { // try from 00da1efc to 00ea1f0f has its CatchHandler @ 00da2058 */
  if (puVar8 != puVar2) goto LAB_00da1fa4;
LAB_00da1f04:
  if (*(undefined8 **)(p_Var9 + 0x48) != puVar2) {
    *puVar2 = param_2;
    *(undefined8 **)(p_Var9 + 0x40) = puVar2 + 1;
    goto LAB_00da1fa4;
  }
  __n = (long)puVar2 - (long)__src;
                    /* try { // try from 00da1f24 to 00ea1f2b has its CatchHandler @ 00da204c */
  uVar10 = ((long)__n >> 3) + 1;
  if (uVar10 >> 0x3d != 0) {
LAB_00da1f58:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00da1f58 to 00ea1f7f has its CatchHandler @ 00da2050 */
    abort();
  }
                    /* try { // try from 00da1f30 to 00ea1f57 has its CatchHandler @ 00da2054 */
  lVar6 = (long)*(undefined8 **)(p_Var9 + 0x48) - (long)__src;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3d != 0) goto LAB_00da1f58;
      goto LAB_00da1f60;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar10 = 0x1fffffffffffffff;
LAB_00da1f60:
    __dest = operator_new(uVar10 << 3);
  }
  puVar8 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar8 = param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
                    /* try { // try from 00da1f90 to 00ea1f9b has its CatchHandler @ 00da204c */
  *(void **)(p_Var9 + 0x38) = __dest;
  *(undefined8 **)(p_Var9 + 0x40) = puVar8 + 1;
  *(void **)(p_Var9 + 0x48) = (void *)((long)__dest + uVar10 * 8);
  if (__src != (undefined8 *)0x0) {
                    /* try { // try from 00da1f9c to 00ea200b has its CatchHandler @ 00da1d74 */
    operator_delete(__src);
  }
LAB_00da1fa4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

