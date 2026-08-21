
/* dragonBones::TextureAtlasData::copyFrom(dragonBones::TextureAtlasData const&) */

void __thiscall
dragonBones::TextureAtlasData::copyFrom(TextureAtlasData *this,TextureAtlasData *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  TextureData *this_00;
  __tree_node_base **pp_Var4;
  __tree_node_base *p_Var5;
  TextureAtlasData *pTVar6;
  long lVar7;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
  *this_01;
  __tree_node_base *p_Var8;
  TextureAtlasData *pTVar9;
  undefined8 uVar10;
  __tree_end_node *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this[0xd] = param_1[0xd];
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar10;
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    pTVar9 = *(TextureAtlasData **)(param_1 + 0x30);
    if (((byte)param_1[0x20] & 1) == 0) {
      pTVar9 = param_1 + 0x21;
      uVar1 = (ulong)((byte)param_1[0x20] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x20),(char *)pTVar9,uVar1);
    uVar1 = (ulong)((byte)param_1[0x38] >> 1);
    pTVar9 = param_1 + 0x39;
    if (((byte)param_1[0x38] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x40);
      pTVar9 = *(TextureAtlasData **)(param_1 + 0x48);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pTVar9,uVar1);
  }
  this_01 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
             *)(this + 0x50);
  pTVar9 = *(TextureAtlasData **)this_01;
  while (pTVar9 != this + 0x58) {
    BaseObject::returnToPool(*(BaseObject **)(pTVar9 + 0x38));
    pTVar6 = *(TextureAtlasData **)(pTVar9 + 8);
    if (*(TextureAtlasData **)(pTVar9 + 8) == (TextureAtlasData *)0x0) {
      pTVar6 = pTVar9 + 0x10;
      bVar3 = *(TextureAtlasData **)*(TextureAtlasData **)pTVar6 != pTVar9;
      pTVar9 = *(TextureAtlasData **)pTVar6;
      if (bVar3) {
        do {
          lVar7 = *(long *)pTVar6;
          pTVar6 = (TextureAtlasData *)(lVar7 + 0x10);
          pTVar9 = *(TextureAtlasData **)pTVar6;
        } while (*(long *)pTVar9 != lVar7);
      }
    }
    else {
      do {
        pTVar9 = pTVar6;
        pTVar6 = *(TextureAtlasData **)pTVar9;
      } while (*(TextureAtlasData **)pTVar9 != (TextureAtlasData *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
  ::destroy(this_01,*(__tree_node **)(this + 0x58));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(TextureAtlasData **)(this + 0x50) = this + 0x58;
  pTVar9 = *(TextureAtlasData **)(param_1 + 0x50);
  while (pTVar9 != param_1 + 0x58) {
    this_00 = (TextureData *)(**(code **)(*(long *)this + 0x20))(this);
                    /* try { // try from 00da65e4 to 00ea6647 has its CatchHandler @ 00da65e4
                       catch() { ... } // from try @ 00da65e4 with catch @ 00da65e4
                       catch() { ... } // from try @ 00da664c with catch @ 00da65e4 */
    TextureData::copyFrom(this_00,*(TextureData **)(pTVar9 + 0x38));
    pp_Var4 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
              ::
              __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                        (this_01,&local_70,(basic_string *)(pTVar9 + 0x20));
    p_Var8 = *pp_Var4;
    if (p_Var8 == (__tree_node_base *)0x0) {
      p_Var8 = operator_new(0x40);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(p_Var8 + 0x20),(basic_string *)(pTVar9 + 0x20));
      *(undefined8 *)(p_Var8 + 0x38) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *(__tree_end_node **)(p_Var8 + 0x10) = local_70;
      *pp_Var4 = p_Var8;
      p_Var5 = p_Var8;
      if (**(long **)this_01 != 0) {
        *(long *)this_01 = **(long **)this_01;
        p_Var5 = *pp_Var4;
                    /* try { // try from 00da6648 to 00ea664b has its CatchHandler @ 00da669c */
      }
      std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x58),p_Var5);
      *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
    }
    *(TextureData **)(p_Var8 + 0x38) = this_00;
    pTVar6 = *(TextureAtlasData **)(pTVar9 + 8);
    if (*(TextureAtlasData **)(pTVar9 + 8) == (TextureAtlasData *)0x0) {
      pTVar6 = pTVar9 + 0x10;
      bVar3 = *(TextureAtlasData **)*(TextureAtlasData **)pTVar6 != pTVar9;
      pTVar9 = *(TextureAtlasData **)pTVar6;
      if (bVar3) {
        do {
          lVar7 = *(long *)pTVar6;
                    /* catch() { ... } // from try @ 00da6648 with catch @ 00da669c */
          pTVar6 = (TextureAtlasData *)(lVar7 + 0x10);
          pTVar9 = *(TextureAtlasData **)pTVar6;
        } while (*(long *)pTVar9 != lVar7);
      }
    }
    else {
      do {
        pTVar9 = pTVar6;
        pTVar6 = *(TextureAtlasData **)pTVar9;
      } while (*(TextureAtlasData **)pTVar9 != (TextureAtlasData *)0x0);
    }
  }
                    /* catch() { ... } // from try @ 00da66e4 with catch @ 00da66b8 */
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00da66dc to 00ea66e3 has its CatchHandler @ 00da672c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

