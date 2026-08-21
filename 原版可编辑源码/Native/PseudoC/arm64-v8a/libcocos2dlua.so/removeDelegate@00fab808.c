
/* cocos2d::IMEDispatcher::removeDelegate(cocos2d::IMEDelegate*) */

void __thiscall cocos2d::IMEDispatcher::removeDelegate(IMEDispatcher *this,IMEDelegate *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (((param_1 != (IMEDelegate *)0x0) && (plVar4 = *(long **)this, plVar4 != (long *)0x0)) &&
     (plVar2 = (long *)plVar4[1], plVar4 != plVar2)) {
    do {
      plVar3 = plVar2;
      if ((IMEDelegate *)plVar2[2] == param_1) break;
      plVar2 = (long *)plVar2[1];
      plVar3 = plVar4;
    } while (plVar4 != plVar2);
    if (plVar4 != plVar3) {
      if ((plVar4[3] != 0) && (plVar3[2] == plVar4[3])) {
        plVar4[3] = 0;
      }
      lVar1 = *plVar3;
      *(long *)(lVar1 + 8) = plVar3[1];
      *(long *)plVar3[1] = lVar1;
      plVar4[2] = plVar4[2] + -1;
      operator_delete(plVar3);
      return;
    }
  }
  return;
}

