
/* cocos2d::Sprite3DMaterial::createWithFilename(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 cocos2d::Sprite3DMaterial::createWithFilename(basic_string *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  Material *this;
  ulong uVar5;
  basic_string local_60 [8];
  ulong local_58;
  void *local_50;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar2 + 0x50))(local_60,plVar2,param_1);
  uVar5 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    uVar5 = local_58;
  }
  if (uVar5 != 0) {
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>>>
            ::
            find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                      ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>>>
                        *)&_materials,local_60);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(**(long **)(lVar3 + 0x28) + 0x10))();
      goto joined_r0x00d33c64;
    }
    this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
    if (this != (Material *)0x0) {
      *(undefined8 *)(this + 0xa0) = 0;
      *(undefined8 *)(this + 0x88) = 0;
      *(undefined8 *)(this + 0x80) = 0;
      *(undefined8 *)(this + 0x98) = 0;
      *(undefined8 *)(this + 0x90) = 0;
      *(undefined8 *)(this + 0x68) = 0;
      *(undefined8 *)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x78) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x58) = 0;
      *(undefined8 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 0x18) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      Material::Material(this);
      *(undefined ***)this = &PTR__Material_016d3c98;
    }
    uVar5 = Material::initWithFile(this,param_1);
    if ((uVar5 & 1) != 0) {
      *(undefined4 *)(this + 0xa4) = 6;
      local_40 = local_60;
      lVar3 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Sprite3DMaterial*>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                        ((basic_string *)&_materials,(piecewise_construct_t *)local_60,
                         (tuple *)&DAT_01419444,(tuple *)&local_40);
      *(Material **)(lVar3 + 0x28) = this;
      uVar4 = (**(code **)(*(long *)this + 0x10))(this);
      goto joined_r0x00d33c64;
    }
    if (this != (Material *)0x0) {
      (**(code **)(*(long *)this + 8))(this);
    }
  }
  uVar4 = 0;
joined_r0x00d33c64:
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

