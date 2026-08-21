
/* dragonBones::TextureAtlasData::copyFrom(dragonBones::TextureAtlasData const&) */

void __thiscall
dragonBones::TextureAtlasData::copyFrom(TextureAtlasData *this,TextureAtlasData *param_1)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  TextureData *this_00;
  TextureAtlasData *pTVar4;
  long lVar5;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
  *this_01;
  TextureAtlasData *pTVar6;
  undefined8 uVar7;
  piecewise_construct_t *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  this[0xd] = param_1[0xd];
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x10) = uVar7;
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 0x28);
    pTVar6 = *(TextureAtlasData **)(param_1 + 0x30);
    if (((byte)param_1[0x20] & 1) == 0) {
      pTVar6 = param_1 + 0x21;
      uVar1 = (ulong)((byte)param_1[0x20] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x20),(char *)pTVar6,uVar1);
    uVar1 = (ulong)((byte)param_1[0x38] >> 1);
    pTVar6 = param_1 + 0x39;
    if (((byte)param_1[0x38] & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x40);
      pTVar6 = *(TextureAtlasData **)(param_1 + 0x48);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),(char *)pTVar6,uVar1);
  }
  this_01 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
             *)(this + 0x50);
  pTVar6 = *(TextureAtlasData **)this_01;
  while (pTVar6 != this + 0x58) {
    BaseObject::returnToPool(*(BaseObject **)(pTVar6 + 0x38));
    pTVar4 = *(TextureAtlasData **)(pTVar6 + 8);
    if (*(TextureAtlasData **)(pTVar6 + 8) == (TextureAtlasData *)0x0) {
      pTVar4 = pTVar6 + 0x10;
      bVar3 = *(TextureAtlasData **)*(TextureAtlasData **)pTVar4 != pTVar6;
      pTVar6 = *(TextureAtlasData **)pTVar4;
      if (bVar3) {
        do {
          lVar5 = *(long *)pTVar4;
          pTVar4 = (TextureAtlasData *)(lVar5 + 0x10);
          pTVar6 = *(TextureAtlasData **)pTVar4;
        } while (*(long *)pTVar6 != lVar5);
      }
    }
    else {
      do {
        pTVar6 = pTVar4;
        pTVar4 = *(TextureAtlasData **)pTVar6;
      } while (*(TextureAtlasData **)pTVar6 != (TextureAtlasData *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
  ::destroy(this_01,*(__tree_node **)(this + 0x58));
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(TextureAtlasData **)(this + 0x50) = this + 0x58;
  pTVar6 = *(TextureAtlasData **)(param_1 + 0x50);
  while (pTVar6 != param_1 + 0x58) {
    this_00 = (TextureData *)(**(code **)(*(long *)this + 0x20))(this);
    TextureData::copyFrom(this_00,*(TextureData **)(pTVar6 + 0x38));
    local_60 = (piecewise_construct_t *)(pTVar6 + 0x20);
    lVar5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::TextureData*>>>
            ::
            __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                      ((basic_string *)this_01,(piecewise_construct_t *)(pTVar6 + 0x20),
                       (tuple *)&DAT_01948a31,(tuple *)&local_60);
    *(TextureData **)(lVar5 + 0x38) = this_00;
    pTVar4 = *(TextureAtlasData **)(pTVar6 + 8);
    if (*(TextureAtlasData **)(pTVar6 + 8) == (TextureAtlasData *)0x0) {
      pTVar4 = pTVar6 + 0x10;
      bVar3 = *(TextureAtlasData **)*(TextureAtlasData **)pTVar4 != pTVar6;
      pTVar6 = *(TextureAtlasData **)pTVar4;
      if (bVar3) {
        do {
          lVar5 = *(long *)pTVar4;
          pTVar4 = (TextureAtlasData *)(lVar5 + 0x10);
          pTVar6 = *(TextureAtlasData **)pTVar4;
        } while (*(long *)pTVar6 != lVar5);
      }
    }
    else {
      do {
        pTVar6 = pTVar4;
        pTVar4 = *(TextureAtlasData **)pTVar6;
      } while (*(TextureAtlasData **)pTVar6 != (TextureAtlasData *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

