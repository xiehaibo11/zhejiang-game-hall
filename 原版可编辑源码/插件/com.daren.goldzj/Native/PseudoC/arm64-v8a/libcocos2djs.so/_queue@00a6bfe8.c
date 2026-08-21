
/* std::__ndk1::queue<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,
   std::__ndk1::deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack> > >::~queue() */

void __thiscall
std::__ndk1::
queue<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>>
::~queue(queue<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::deque<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>>
         *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 00a6bff8 to 00b6c00f has its CatchHandler @ 00a6c1e8 */
  __deque_base<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
  ::clear((__deque_base<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
           *)this);
  puVar1 = *(undefined8 **)(this + 0x10);
  puVar3 = *(undefined8 **)(this + 8);
  if (*(undefined8 **)(this + 8) != puVar1) {
    do {
      puVar4 = puVar3 + 1;
      operator_delete((void *)*puVar3);
      puVar3 = puVar4;
                    /* try { // try from 00a6c018 to 00b6c023 has its CatchHandler @ 00a6c1e4 */
    } while (puVar1 != puVar4);
    lVar2 = *(long *)(this + 0x10);
                    /* try { // try from 00a6c024 to 00b6c02f has its CatchHandler @ 00a6c1e0 */
    if (lVar2 != *(long *)(this + 8)) {
                    /* try { // try from 00a6c030 to 00b6c16b has its CatchHandler @ 00a6c1f8 */
      *(ulong *)(this + 0x10) =
           lVar2 + (~((lVar2 + -8) - *(long *)(this + 8)) & 0xfffffffffffffff8U);
    }
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}

