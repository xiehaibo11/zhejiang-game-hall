
/* cocos2d::ThreadPool::getIdleThreadNum() const */

undefined4 __thiscall cocos2d::ThreadPool::getIdleThreadNum(ThreadPool *this)

{
  undefined4 uVar1;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0xc0));
  uVar1 = *(undefined4 *)(this + 0xbc);
  std::__ndk1::mutex::unlock((mutex *)(this + 0xc0));
                    /* catch() { ... } // from try @ 0099dfc8 with catch @ 0099e084 */
  return uVar1;
}

