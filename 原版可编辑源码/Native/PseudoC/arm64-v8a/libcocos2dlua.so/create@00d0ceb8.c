
/* cocos2d::Animation3D::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Ref * cocos2d::Animation3D::create(basic_string *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  Ref *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x50))(local_50,plVar3,param_1);
  FUN_007c1fb0(local_88,local_50,&DAT_013d9048);
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar1 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar6 = (ulong)((byte)*param_2 >> 1);
  }
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(local_88,(char *)pbVar1,uVar6);
  local_60 = (void *)puVar4[2];
  uStack_68 = puVar4[1];
  local_70 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((Animation3DCache::_cacheInstance ==
       (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>>>
        *)0x0) &&
     (Animation3DCache::_cacheInstance = operator_new(0x28,(nothrow_t *)&std::nothrow),
     Animation3DCache::_cacheInstance !=
     (__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>>>
      *)0x0)) {
    *(undefined8 *)(Animation3DCache::_cacheInstance + 8) = 0;
    *(undefined8 *)Animation3DCache::_cacheInstance = 0;
    *(undefined8 *)(Animation3DCache::_cacheInstance + 0x18) = 0;
    *(undefined8 *)(Animation3DCache::_cacheInstance + 0x10) = 0;
    *(undefined4 *)(Animation3DCache::_cacheInstance + 0x20) = 0x3f800000;
  }
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Animation3D*>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (Animation3DCache::_cacheInstance,(basic_string *)&local_70);
  if ((lVar5 == 0) || (this = *(Ref **)(lVar5 + 0x28), this == (Ref *)0x0)) {
    this = operator_new(0x58,(nothrow_t *)&std::nothrow);
    if (this != (Ref *)0x0) {
      Ref::Ref(this);
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x48) = 0x3f800000;
      *(undefined ***)this = &PTR__Animation3D_016d2080;
      *(undefined4 *)(this + 0x50) = 0;
    }
    uVar6 = initWithFile((Animation3D *)this,param_1,param_2);
    if ((uVar6 & 1) == 0) {
      if (this != (Ref *)0x0) {
        (**(code **)(*(long *)this + 8))(this);
        this = (Ref *)0x0;
      }
    }
    else {
      Ref::autorelease(this);
    }
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

