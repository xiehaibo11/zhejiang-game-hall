
/* std::__ndk1::weak_ptr<cocos2d::Scheduler>::~weak_ptr() */

void __thiscall
std::__ndk1::weak_ptr<cocos2d::Scheduler>::~weak_ptr(weak_ptr<cocos2d::Scheduler> *this)

{
                    /* try { // try from 009ab6e8 to 00aab73b has its CatchHandler @ 009ab6e8
                       catch() { ... } // from try @ 009ab6e8 with catch @ 009ab6e8
                       catch() { ... } // from try @ 009ab8a8 with catch @ 009ab6e8 */
  if (*(__shared_weak_count **)(this + 8) != (__shared_weak_count *)0x0) {
    __shared_weak_count::__release_weak(*(__shared_weak_count **)(this + 8));
    return;
  }
  return;
}

