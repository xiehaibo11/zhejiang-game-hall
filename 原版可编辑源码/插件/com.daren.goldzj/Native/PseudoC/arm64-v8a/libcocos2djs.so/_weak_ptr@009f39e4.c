
/* std::__ndk1::weak_ptr<cocos2d::FontFreeTypeLibrary>::~weak_ptr() */

void __thiscall
std::__ndk1::weak_ptr<cocos2d::FontFreeTypeLibrary>::~weak_ptr
          (weak_ptr<cocos2d::FontFreeTypeLibrary> *this)

{
  if (*(__shared_weak_count **)(this + 8) != (__shared_weak_count *)0x0) {
    __shared_weak_count::__release_weak(*(__shared_weak_count **)(this + 8));
    return;
  }
  return;
}

