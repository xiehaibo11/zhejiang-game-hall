
/* dragonBones::ArmatureData::addBone(dragonBones::BoneData*) */

void __thiscall dragonBones::ArmatureData::addBone(ArmatureData *this,BoneData *param_1)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
  *this_00;
  basic_string *pbVar1;
  undefined8 *puVar2;
  long lVar3;
  ArmatureData *pAVar4;
  __tree_node_base **pp_Var5;
  void *__dest;
  __tree_node_base *p_Var6;
  long lVar7;
  ulong uVar8;
  void *__src;
  __tree_node_base *p_Var9;
  size_t __n;
  ulong uVar10;
  __tree_end_node *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
             *)(this + 0xc0);
  pbVar1 = (basic_string *)(param_1 + 0x18);
  pAVar4 = (ArmatureData *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     (this_00,pbVar1);
  if (this + 200 != pAVar4) goto LAB_00d87848;
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_00,&local_70,pbVar1);
  p_Var9 = *pp_Var5;
  if (p_Var9 == (__tree_node_base *)0x0) {
    p_Var9 = operator_new(0x40);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (p_Var9 + 0x20),pbVar1);
    *(undefined8 *)(p_Var9 + 0x38) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(__tree_end_node **)(p_Var9 + 0x10) = local_70;
    *pp_Var5 = p_Var9;
    p_Var6 = p_Var9;
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
      p_Var6 = *pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 200),p_Var6);
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 1;
  }
  *(BoneData **)(p_Var9 + 0x38) = param_1;
  puVar2 = *(undefined8 **)(this + 0x68);
  if (puVar2 != *(undefined8 **)(this + 0x70)) {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x68) = puVar2 + 1;
    goto LAB_00d87848;
  }
  __src = *(void **)(this + 0x60);
  __n = (long)puVar2 - (long)__src;
  uVar10 = ((long)__n >> 3) + 1;
  if (uVar10 >> 0x3d != 0) {
LAB_00d877fc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = (long)*(undefined8 **)(this + 0x70) - (long)__src;
  if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
    uVar8 = lVar7 >> 2;
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3d != 0) goto LAB_00d877fc;
      goto LAB_00d87804;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar10 = 0x1fffffffffffffff;
LAB_00d87804:
    __dest = operator_new(uVar10 << 3);
  }
                    /* try { // try from 00d87810 to 00e87843 has its CatchHandler @ 00d87f70 */
  puVar2 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar2 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(this + 0x60) = __dest;
  *(undefined8 **)(this + 0x68) = puVar2 + 1;
  *(void **)(this + 0x70) = (void *)((long)__dest + uVar10 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00d87848:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00d87858 to 00e87887 has its CatchHandler @ 00d87fe0 */
  return;
}

