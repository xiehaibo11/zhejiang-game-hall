
/* cocos2d::experimental::ThreadPool::getTaskNum() const */

undefined4 __thiscall cocos2d::experimental::ThreadPool::getTaskNum(ThreadPool *this)

{
  undefined4 uVar1;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x90));
  uVar1 = *(undefined4 *)(this + 0x88);
  std::__ndk1::mutex::unlock((mutex *)(this + 0x90));
  return uVar1;
}

