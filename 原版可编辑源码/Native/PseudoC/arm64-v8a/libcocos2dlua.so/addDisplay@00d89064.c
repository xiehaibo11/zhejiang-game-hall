
/* dragonBones::SkinData::addDisplay(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, dragonBones::DisplayData*) */

void __thiscall
dragonBones::SkinData::addDisplay(SkinData *this,basic_string *param_1,DisplayData *param_2)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
  *this_00;
  undefined8 *puVar1;
  long lVar2;
  __tree_node_base **pp_Var3;
  void *__dest;
  __tree_node_base *p_Var4;
  long lVar5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  void *__src;
  size_t __n;
  ulong uVar8;
  __tree_end_node *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_2 != (DisplayData *)0x0) {
    *(SkinData **)(param_2 + 0x60) = this;
  }
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
             *)(this + 0x28);
  pp_Var3 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_00,&local_70,param_1);
  p_Var7 = *pp_Var3;
                    /* try { // try from 00d890bc to 00e890c3 has its CatchHandler @ 00d892c4 */
  if (p_Var7 == (__tree_node_base *)0x0) {
    p_Var7 = operator_new(0x50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (p_Var7 + 0x20),param_1);
    *(undefined8 *)(p_Var7 + 0x38) = 0;
    *(undefined8 *)(p_Var7 + 0x40) = 0;
    *(undefined8 *)(p_Var7 + 0x48) = 0;
                    /* try { // try from 00d890e8 to 00e890ef has its CatchHandler @ 00d8928c */
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *(__tree_end_node **)(p_Var7 + 0x10) = local_70;
                    /* try { // try from 00d890f0 to 00e892f3 has its CatchHandler @ 00d88cc0 */
    *pp_Var3 = p_Var7;
    p_Var4 = p_Var7;
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
      p_Var4 = *pp_Var3;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var4);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  }
  puVar1 = *(undefined8 **)(p_Var7 + 0x40);
  if (puVar1 != *(undefined8 **)(p_Var7 + 0x48)) {
    *puVar1 = param_2;
    *(undefined8 **)(p_Var7 + 0x40) = puVar1 + 1;
    goto LAB_00d891c8;
  }
  __src = *(void **)(p_Var7 + 0x38);
  __n = (long)puVar1 - (long)__src;
  uVar8 = ((long)__n >> 3) + 1;
  if (uVar8 >> 0x3d != 0) {
LAB_00d8917c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = (long)*(undefined8 **)(p_Var7 + 0x48) - (long)__src;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
                    /* catch() { ... } // from try @ 00d88fc0 with catch @ 00d89164 */
    uVar6 = lVar5 >> 2;
    if (uVar8 <= uVar6) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
                    /* catch() { ... } // from try @ 00d88f68 with catch @ 00d89174 */
      if (uVar8 >> 0x3d != 0) goto LAB_00d8917c;
      goto LAB_00d89184;
    }
    __dest = (void *)0x0;
                    /* catch() { ... } // from try @ 00d88f80 with catch @ 00d891fc */
  }
  else {
    uVar8 = 0x1fffffffffffffff;
LAB_00d89184:
                    /* catch() { ... } // from try @ 00d88fd8 with catch @ 00d89184 */
    __dest = operator_new(uVar8 << 3);
  }
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
                    /* catch() { ... } // from try @ 00d88f50 with catch @ 00d89198 */
                    /* catch() { ... } // from try @ 00d89010 with catch @ 00d8919c */
  *puVar1 = param_2;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(p_Var7 + 0x38) = __dest;
  *(undefined8 **)(p_Var7 + 0x40) = puVar1 + 1;
  *(void **)(p_Var7 + 0x48) = (void *)((long)__dest + uVar8 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00d891c8:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

