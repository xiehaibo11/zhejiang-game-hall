
/* dragonBones::CCArmatureCacheDisplay::updateAnimationCache(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
dragonBones::CCArmatureCacheDisplay::updateAnimationCache
          (CCArmatureCacheDisplay *this,basic_string *param_1)

{
  ArmatureCache::resetAnimationData(*(ArmatureCache **)(this + 0xd8),param_1);
  return;
}

