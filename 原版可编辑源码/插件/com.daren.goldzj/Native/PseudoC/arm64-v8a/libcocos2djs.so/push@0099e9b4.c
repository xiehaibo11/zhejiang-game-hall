
/* cocos2d::ThreadPool::ThreadSafeQueue<cocos2d::ThreadPool::Task>::push(cocos2d::ThreadPool::Task
   const&) */

undefined8 __thiscall
cocos2d::ThreadPool::ThreadSafeQueue<cocos2d::ThreadPool::Task>::push
          (ThreadSafeQueue<cocos2d::ThreadPool::Task> *this,Task *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
                    /* catch() { ... } // from try @ 0099e868 with catch @ 0099e9bc */
                    /* catch() { ... } // from try @ 0099e85c with catch @ 0099e9c0 */
                    /* catch() { ... } // from try @ 0099e83c with catch @ 0099e9c4 */
                    /* catch() { ... } // from try @ 0099e874 with catch @ 0099e9d4 */
  std::__ndk1::mutex::lock((mutex *)(this + 0x30));
  lVar2 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  uVar1 = 0;
  if (lVar4 - lVar2 != 0) {
    uVar1 = (lVar4 - lVar2) * 0x20 - 1;
  }
  uVar5 = *(long *)(this + 0x28) + *(long *)(this + 0x20);
  if (uVar1 == uVar5) {
    std::__ndk1::deque<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>>
    ::__add_back_capacity
              ((deque<cocos2d::ThreadPool::Task,std::__ndk1::allocator<cocos2d::ThreadPool::Task>> *
               )this);
    lVar2 = *(long *)(this + 8);
    lVar4 = *(long *)(this + 0x10);
    uVar5 = *(long *)(this + 0x20) + *(long *)(this + 0x28);
  }
  if (lVar4 == lVar2) {
                    /* try { // try from 0099ea2c to 00a9ea83 has its CatchHandler @ 0099ea2c
                       catch() { ... } // from try @ 0099ea2c with catch @ 0099ea2c
                       catch() { ... } // from try @ 0099ec10 with catch @ 0099ea2c */
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             (*(long *)(lVar2 + (uVar5 >> 5 & 0x7fffffffffffff8)) + (uVar5 & 0xff) * 0x10);
  }
  uVar6 = *(undefined8 *)param_1;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  *puVar3 = uVar6;
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  std::__ndk1::mutex::unlock((mutex *)(this + 0x30));
  return 1;
}

