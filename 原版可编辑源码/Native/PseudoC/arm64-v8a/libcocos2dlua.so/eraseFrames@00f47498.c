
/* cocos2d::SpriteFrameCache::PlistFramesCache::eraseFrames(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&) */

uint __thiscall
cocos2d::SpriteFrameCache::PlistFramesCache::eraseFrames(PlistFramesCache *this,vector *param_1)

{
  basic_string *pbVar1;
  uint uVar2;
  basic_string *pbVar3;
  uint uVar4;
  
  pbVar3 = *(basic_string **)param_1;
  pbVar1 = *(basic_string **)(param_1 + 8);
  if (pbVar3 == pbVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar2 = eraseFrame(this,pbVar3);
      pbVar3 = pbVar3 + 0x18;
      uVar4 = uVar4 | uVar2;
    } while (pbVar1 != pbVar3);
  }
  return uVar4 & 1;
}

