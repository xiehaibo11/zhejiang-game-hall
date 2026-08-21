
/* std::__ndk1::__deque_base<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,
   std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack> >::clear() */

void __thiscall
std::__ndk1::
__deque_base<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
::clear(__deque_base<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack,std::__ndk1::allocator<cocos2d::AsyncTaskPool::ThreadTasks::AsyncTaskCallBack>>
        *this)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar7;
  
                    /* catch() { ... } // from try @ 00a6c6d0 with catch @ 00a6cae0 */
                    /* catch() { ... } // from try @ 00a6c708 with catch @ 00a6caf0
                       catch() { ... } // from try @ 00a6c840 with catch @ 00a6caf0 */
  puVar4 = *(undefined8 **)(this + 8);
  puVar7 = *(undefined8 **)(this + 0x10);
  if (puVar7 != puVar4) {
    uVar8 = *(ulong *)(this + 0x20);
    plVar9 = (long *)((long)puVar4 + (uVar8 >> 3 & 0x1ffffffffffffff8));
    plVar10 = (long *)(*plVar9 + (uVar8 & 0x3f) * 0x40);
    plVar1 = (long *)(*(long *)((long)puVar4 +
                               (*(long *)(this + 0x28) + uVar8 >> 3 & 0x1ffffffffffffff8)) +
                     (*(long *)(this + 0x28) + uVar8 & 0x3f) * 0x40);
    if (plVar1 != plVar10) {
      do {
                    /* try { // try from 00a6cb48 to 00b6cba3 has its CatchHandler @ 00a6cb48
                       catch() { ... } // from try @ 00a6cb48 with catch @ 00a6cb48
                       catch() { ... } // from try @ 00a6cdb8 with catch @ 00a6cb48
                       catch() { ... } // from try @ 00a6ceb8 with catch @ 00a6cb48 */
        plVar2 = (long *)plVar10[4];
        if (plVar10 == plVar2) {
          pcVar3 = *(code **)(*plVar2 + 0x20);
LAB_00a6cb6c:
          (*pcVar3)();
        }
        else if (plVar2 != (long *)0x0) {
          pcVar3 = *(code **)(*plVar2 + 0x28);
          goto LAB_00a6cb6c;
        }
        plVar10 = plVar10 + 8;
        if ((long)plVar10 - *plVar9 == 0x1000) {
          plVar9 = plVar9 + 1;
          plVar10 = (long *)*plVar9;
        }
      } while (plVar1 != plVar10);
      puVar4 = *(undefined8 **)(this + 8);
      puVar7 = *(undefined8 **)(this + 0x10);
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  lVar6 = (long)puVar7 - (long)puVar4;
                    /* try { // try from 00a6cba4 to 00b6cbbb has its CatchHandler @ 00a6cfb4 */
  while (uVar8 = lVar6 >> 3, 2 < uVar8) {
    operator_delete((void *)*puVar4);
    puVar4 = (undefined8 *)(*(long *)(this + 8) + 8);
                    /* try { // try from 00a6cbc4 to 00b6cbcf has its CatchHandler @ 00a6cfb0 */
    *(undefined8 **)(this + 8) = puVar4;
    lVar6 = *(long *)(this + 0x10) - (long)puVar4;
                    /* try { // try from 00a6cbd0 to 00b6cbdb has its CatchHandler @ 00a6cfac */
  }
  if (uVar8 == 1) {
    uVar5 = 0x20;
  }
  else {
                    /* try { // try from 00a6cbdc to 00b6cbf3 has its CatchHandler @ 00a6cfc4 */
    if (uVar8 != 2) {
      return;
    }
    uVar5 = 0x40;
  }
  *(undefined8 *)(this + 0x20) = uVar5;
  return;
}

