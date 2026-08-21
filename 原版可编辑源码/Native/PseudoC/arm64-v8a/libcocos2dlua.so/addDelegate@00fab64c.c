
/* cocos2d::IMEDispatcher::addDelegate(cocos2d::IMEDelegate*) */

void __thiscall cocos2d::IMEDispatcher::addDelegate(IMEDispatcher *this,IMEDelegate *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((param_1 != (IMEDelegate *)0x0) && (lVar5 = *(long *)this, lVar5 != 0)) {
    lVar2 = *(long *)(lVar5 + 8);
    if (lVar5 != lVar2) {
      do {
        lVar3 = lVar2;
        if (*(IMEDelegate **)(lVar2 + 0x10) == param_1) break;
        lVar2 = *(long *)(lVar2 + 8);
        lVar3 = lVar5;
      } while (lVar5 != lVar2);
      if (lVar5 != lVar3) {
        return;
      }
    }
    plVar1 = operator_new(0x18);
    plVar1[2] = (long)param_1;
    *plVar1 = lVar5;
    puVar4 = *(undefined8 **)(lVar5 + 8);
    plVar1[1] = (long)puVar4;
    *puVar4 = plVar1;
    *(long **)(lVar5 + 8) = plVar1;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  }
  return;
}

