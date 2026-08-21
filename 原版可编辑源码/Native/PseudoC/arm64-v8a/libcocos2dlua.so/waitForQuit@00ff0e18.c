
/* cocos2d::TextureCache::waitForQuit() */

void __thiscall cocos2d::TextureCache::waitForQuit(TextureCache *this)

{
  std::__ndk1::mutex::lock((mutex *)(this + 0xc0));
  this[0x140] = (TextureCache)0x1;
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x110));
  std::__ndk1::mutex::unlock((mutex *)(this + 0xc0));
  if (*(thread **)(this + 0x28) != (thread *)0x0) {
    std::__ndk1::thread::join(*(thread **)(this + 0x28));
    return;
  }
  return;
}

