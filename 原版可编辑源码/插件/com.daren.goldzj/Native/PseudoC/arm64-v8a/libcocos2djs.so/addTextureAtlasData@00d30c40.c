
/* dragonBones::BaseFactory::addTextureAtlasData(dragonBones::TextureAtlasData*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
dragonBones::BaseFactory::addTextureAtlasData
          (BaseFactory *this,TextureAtlasData *param_1,basic_string *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  TextureAtlasData *pTVar6;
  TextureAtlasData *local_40 [2];
  piecewise_construct_t *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  local_30 = (piecewise_construct_t *)(param_1 + 0x20);
  if (uVar1 != 0) {
    local_30 = (piecewise_construct_t *)param_2;
  }
  local_40[0] = param_1;
  lVar3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x28),local_30,(tuple *)&DAT_0194872d,
                     (tuple *)&local_30);
  puVar5 = *(undefined8 **)(lVar3 + 0x38);
  puVar4 = *(undefined8 **)(lVar3 + 0x40);
  if (puVar5 != puVar4) {
    pTVar6 = (TextureAtlasData *)*puVar5;
    while (pTVar6 != param_1) {
      puVar5 = puVar5 + 1;
      if (puVar4 == puVar5) goto LAB_00d30ce4;
      pTVar6 = (TextureAtlasData *)*puVar5;
    }
  }
  if (puVar5 == puVar4) {
LAB_00d30ce4:
    if (puVar4 == *(undefined8 **)(lVar3 + 0x48)) {
      std::__ndk1::
      vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>
      ::__push_back_slow_path<dragonBones::TextureAtlasData*const&>
                ((vector<dragonBones::TextureAtlasData*,std::__ndk1::allocator<dragonBones::TextureAtlasData*>>
                  *)(lVar3 + 0x38),local_40);
    }
    else {
      *puVar4 = param_1;
      *(long *)(lVar3 + 0x40) = *(long *)(lVar3 + 0x40) + 8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

