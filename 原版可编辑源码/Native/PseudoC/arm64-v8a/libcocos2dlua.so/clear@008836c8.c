
/* cocos2d::AsyncTaskPool::ThreadTasks::clear() */

void __thiscall cocos2d::AsyncTaskPool::ThreadTasks::clear(ThreadTasks *this)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x68));
  if (*(long *)(this + 0x30) != 0) {
    uVar2 = *(ulong *)(this + 0x28);
    do {
      plVar3 = (long *)(*(long *)(*(long *)(this + 0x10) + (uVar2 / 0x55) * 8) +
                       (uVar2 % 0x55) * 0x30);
      plVar1 = (long *)plVar3[4];
      if (plVar3 == plVar1) {
        pcVar4 = *(code **)(*plVar1 + 0x20);
LAB_00883750:
        (*pcVar4)();
      }
      else if (plVar1 != (long *)0x0) {
        pcVar4 = *(code **)(*plVar1 + 0x28);
        goto LAB_00883750;
      }
      lVar5 = *(long *)(this + 0x30) + -1;
      uVar2 = *(long *)(this + 0x28) + 1;
      *(ulong *)(this + 0x28) = uVar2;
      *(long *)(this + 0x30) = lVar5;
      if (0xa9 < uVar2) {
        operator_delete((void *)**(undefined8 **)(this + 0x10));
        lVar5 = *(long *)(this + 0x30);
        uVar2 = *(long *)(this + 0x28) - 0x55;
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
        *(ulong *)(this + 0x28) = uVar2;
      }
    } while (lVar5 != 0);
  }
  if (*(long *)(this + 0x60) != 0) {
    uVar2 = *(ulong *)(this + 0x58);
    do {
      plVar1 = (long *)(*(long *)(*(long *)(this + 0x40) + (uVar2 >> 3 & 0x1ffffffffffffff8)) +
                       (uVar2 & 0x3f) * 0x40);
      plVar3 = (long *)plVar1[4];
      if (plVar1 == plVar3) {
        pcVar4 = *(code **)(*plVar3 + 0x20);
LAB_008837e4:
        (*pcVar4)();
      }
      else if (plVar3 != (long *)0x0) {
        pcVar4 = *(code **)(*plVar3 + 0x28);
        goto LAB_008837e4;
      }
      lVar5 = *(long *)(this + 0x60) + -1;
      uVar2 = *(long *)(this + 0x58) + 1;
      *(ulong *)(this + 0x58) = uVar2;
      *(long *)(this + 0x60) = lVar5;
      if (0x7f < uVar2) {
        operator_delete((void *)**(undefined8 **)(this + 0x40));
        lVar5 = *(long *)(this + 0x60);
        uVar2 = *(long *)(this + 0x58) - 0x40;
        *(long *)(this + 0x40) = *(long *)(this + 0x40) + 8;
        *(ulong *)(this + 0x58) = uVar2;
      }
    } while (lVar5 != 0);
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0x68));
  return;
}

