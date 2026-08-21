
/* cocos2d::IMEDispatcher::~IMEDispatcher() */

void __thiscall cocos2d::IMEDispatcher::~IMEDispatcher(IMEDispatcher *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)this;
  if (plVar4 != (long *)0x0) {
    if (plVar4[2] != 0) {
      lVar1 = *plVar4;
      plVar2 = (long *)plVar4[1];
      lVar3 = *plVar2;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar3;
      plVar4[2] = 0;
      while (plVar2 != plVar4) {
        plVar5 = (long *)plVar2[1];
        operator_delete(plVar2);
        plVar2 = plVar5;
      }
    }
    operator_delete(plVar4);
  }
  *(undefined8 *)this = 0;
  return;
}

