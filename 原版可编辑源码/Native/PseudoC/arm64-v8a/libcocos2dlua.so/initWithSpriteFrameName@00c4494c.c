
/* cocostudio::Skin::initWithSpriteFrameName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall cocostudio::Skin::initWithSpriteFrameName(Skin *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  uint uVar3;
  SpriteFrameCache *this_00;
  long lVar4;
  
  this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
  lVar4 = cocos2d::SpriteFrameCache::getSpriteFrameByName(this_00,param_1);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*(long *)this + 0x610))(this,lVar4);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x5d8) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x5d8),(char *)pbVar2,uVar1);
  }
  return uVar3 & 1;
}

