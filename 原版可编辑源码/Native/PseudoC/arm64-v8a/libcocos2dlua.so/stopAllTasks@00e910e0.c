
/* cocos2d::experimental::ThreadPool::stopAllTasks() */

void __thiscall cocos2d::experimental::ThreadPool::stopAllTasks(ThreadPool *this)

{
  mutex *this_00;
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  
  this_00 = (mutex *)(this + 0x90);
  do {
    do {
      std::__ndk1::mutex::lock(this_00);
      if (*(long *)(this + 0x88) == 0) {
        std::__ndk1::mutex::unlock(this_00);
        return;
      }
      uVar3 = *(ulong *)(this + 0x80);
      plVar4 = *(long **)(*(long *)((long)*(undefined8 **)(this + 0x68) +
                                   (uVar3 >> 5 & 0x7fffffffffffff8)) + (uVar3 & 0xff) * 0x10 + 8);
      *(ulong *)(this + 0x80) = uVar3 + 1;
      *(long *)(this + 0x88) = *(long *)(this + 0x88) + -1;
      if (0x1ff < uVar3 + 1) {
        operator_delete((void *)**(undefined8 **)(this + 0x68));
        *(long *)(this + 0x68) = *(long *)(this + 0x68) + 8;
        *(long *)(this + 0x80) = *(long *)(this + 0x80) + -0x100;
      }
      std::__ndk1::mutex::unlock(this_00);
    } while (plVar4 == (long *)0x0);
    plVar1 = (long *)plVar4[4];
    if (plVar4 == plVar1) {
      pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00e91104:
      (*pcVar2)();
    }
    else if (plVar1 != (long *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x28);
      goto LAB_00e91104;
    }
    operator_delete(plVar4);
  } while( true );
}

