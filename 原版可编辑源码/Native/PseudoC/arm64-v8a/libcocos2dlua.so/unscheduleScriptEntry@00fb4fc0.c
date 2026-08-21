
/* cocos2d::Scheduler::unscheduleScriptEntry(unsigned int) */

void __thiscall cocos2d::Scheduler::unscheduleScriptEntry(Scheduler *this,uint param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x80) - *(long *)(this + 0x78) >> 3;
  do {
    if (lVar1 < 1) {
      return;
    }
    lVar2 = *(long *)(*(long *)(this + 0x78) + -8 + lVar1 * 8);
    lVar1 = lVar1 + -1;
  } while (*(uint *)(lVar2 + 0x28) != param_1);
  *(undefined1 *)(lVar2 + 0x39) = 1;
  return;
}

