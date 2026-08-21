
/* dragonBones::BaseFactory::addTextureAtlasData(dragonBones::TextureAtlasData*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
dragonBones::BaseFactory::addTextureAtlasData
          (BaseFactory *this,TextureAtlasData *param_1,basic_string *param_2)

{
  undefined8 *puVar1;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
  *this_00;
  basic_string *pbVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  long lVar4;
  __tree_node_base **pp_Var5;
  void *__dest;
  __tree_node_base *p_Var6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  __tree_node_base *p_Var10;
  size_t __n;
  ulong uVar11;
  __tree_end_node *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  this_00 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
             *)(this + 0x28);
  uVar11 = (ulong)((byte)*param_2 >> 1);
                    /* try { // try from 00d84290 to 00e8429b has its CatchHandler @ 00d84ebc */
  if (((byte)*param_2 & 1) != 0) {
    uVar11 = *(ulong *)(param_2 + 8);
  }
  pbVar2 = (basic_string *)(param_1 + 0x20);
  if (uVar11 != 0) {
    pbVar2 = param_2;
  }
  pp_Var5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
            ::
            __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      (this_00,&local_70,pbVar2);
  p_Var10 = *pp_Var5;
  if (p_Var10 == (__tree_node_base *)0x0) {
    p_Var10 = operator_new(0x50);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (p_Var10 + 0x20),pbVar2);
    *(undefined8 *)(p_Var10 + 0x38) = 0;
    *(undefined8 *)(p_Var10 + 0x40) = 0;
    *(undefined8 *)(p_Var10 + 0x48) = 0;
    *(undefined8 *)p_Var10 = 0;
    *(undefined8 *)(p_Var10 + 8) = 0;
    *(__tree_end_node **)(p_Var10 + 0x10) = local_70;
    *pp_Var5 = p_Var10;
    p_Var6 = p_Var10;
    if (**(long **)this_00 != 0) {
      *(long *)this_00 = **(long **)this_00;
                    /* try { // try from 00d842f4 to 00e84303 has its CatchHandler @ 00d84fd0 */
      p_Var6 = *pp_Var5;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x30),p_Var6);
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
  }
  __src = *(undefined8 **)(p_Var10 + 0x38);
  puVar3 = *(undefined8 **)(p_Var10 + 0x40);
  puVar9 = __src;
  if ((__src != puVar3) && ((TextureAtlasData *)*__src != param_1)) {
    do {
      if (puVar3 + -1 == puVar9) goto LAB_00d84360;
      puVar1 = puVar9 + 1;
      puVar9 = puVar9 + 1;
    } while ((TextureAtlasData *)*puVar1 != param_1);
  }
  if (puVar9 != puVar3) goto LAB_00d84400;
LAB_00d84360:
  if (*(undefined8 **)(p_Var10 + 0x48) != puVar3) {
    *puVar3 = param_1;
    *(undefined8 **)(p_Var10 + 0x40) = puVar3 + 1;
                    /* try { // try from 00d84374 to 00e8438f has its CatchHandler @ 00d85008 */
    goto LAB_00d84400;
  }
  __n = (long)puVar3 - (long)__src;
  uVar11 = ((long)__n >> 3) + 1;
  if (uVar11 >> 0x3d != 0) {
LAB_00d843b4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = (long)*(undefined8 **)(p_Var10 + 0x48) - (long)__src;
                    /* try { // try from 00d84394 to 00e843a3 has its CatchHandler @ 00d8500c */
  if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
    uVar8 = lVar7 >> 2;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 != 0) {
      if (uVar11 >> 0x3d != 0) goto LAB_00d843b4;
      goto LAB_00d843bc;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar11 = 0x1fffffffffffffff;
LAB_00d843bc:
    __dest = operator_new(uVar11 << 3);
  }
  puVar9 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar9 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)(p_Var10 + 0x38) = __dest;
  *(undefined8 **)(p_Var10 + 0x40) = puVar9 + 1;
  *(void **)(p_Var10 + 0x48) = (void *)((long)__dest + uVar11 * 8);
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src);
  }
LAB_00d84400:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

