
/* cocostudio::SpriteFrameCacheHelper::addSpriteFrameFromFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocostudio::SpriteFrameCacheHelper::addSpriteFrameFromFile
          (SpriteFrameCacheHelper *this,basic_string *param_1,basic_string *param_2)

{
  SpriteFrameCache *this_00;
  
  this_00 = (SpriteFrameCache *)cocos2d::SpriteFrameCache::getInstance();
  cocos2d::SpriteFrameCache::addSpriteFramesWithFile(this_00,param_1,param_2);
  retainSpriteFrames(this,param_1);
  return;
}

