
/* cocos2d::ThreadPool::ThreadSafeQueue<cocos2d::ThreadPool::Task>::~ThreadSafeQueue() */

void __thiscall
cocos2d::ThreadPool::ThreadSafeQueue<cocos2d::ThreadPool::Task>::~ThreadSafeQueue
          (ThreadSafeQueue<cocos2d::ThreadPool::Task> *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
                    /* try { // try from 0099da60 to 00a9dc17 has its CatchHandler @ 0099da0c */
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x30));
  puVar7 = *(undefined8 **)(this + 8);
  puVar1 = *(undefined8 **)(this + 0x10);
  lVar2 = (long)puVar1 - (long)puVar7;
  if (lVar2 != 0) {
    uVar5 = *(ulong *)(this + 0x20);
    plVar4 = (long *)((long)puVar7 + (uVar5 >> 5 & 0x7fffffffffffff8));
    lVar6 = *plVar4 + (uVar5 & 0xff) * 0x10;
    while (*(long *)((long)puVar7 + (*(long *)(this + 0x28) + uVar5 >> 5 & 0x7fffffffffffff8)) +
           (*(long *)(this + 0x28) + uVar5 & 0xff) * 0x10 != lVar6) {
      lVar6 = lVar6 + 0x10;
      if (lVar6 - *plVar4 == 0x1000) {
        plVar4 = plVar4 + 1;
        lVar6 = *plVar4;
      }
    }
  }
  *(undefined8 *)(this + 0x28) = 0;
  while (uVar5 = lVar2 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar7);
    puVar1 = *(undefined8 **)(this + 0x10);
    puVar7 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar7;
    lVar2 = (long)puVar1 - (long)puVar7;
  }
  if (uVar5 == 1) {
    uVar3 = 0x80;
  }
  else {
    if (uVar5 != 2) goto LAB_0099db3c;
    uVar3 = 0x100;
  }
  *(undefined8 *)(this + 0x20) = uVar3;
LAB_0099db3c:
  if (puVar7 != puVar1) {
    do {
      puVar8 = puVar7 + 1;
      operator_delete((void *)*puVar7);
      puVar7 = puVar8;
    } while (puVar1 != puVar8);
    lVar2 = *(long *)(this + 0x10);
    if (lVar2 != *(long *)(this + 8)) {
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

