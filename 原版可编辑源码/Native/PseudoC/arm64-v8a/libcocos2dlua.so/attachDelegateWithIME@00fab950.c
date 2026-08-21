
/* cocos2d::IMEDispatcher::attachDelegateWithIME(cocos2d::IMEDelegate*) */

undefined8 __thiscall
cocos2d::IMEDispatcher::attachDelegateWithIME(IMEDispatcher *this,IMEDelegate *param_1)

{
  IMEDelegate *pIVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == (IMEDelegate *)0x0) {
    return 0;
  }
  lVar4 = *(long *)this;
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = *(long *)(lVar4 + 8);
  if (lVar4 == lVar5) {
                    /* try { // try from 00faba50 to 010aba57 has its CatchHandler @ 00fabac0 */
    return 0;
  }
  do {
    lVar6 = lVar5;
    if (*(IMEDelegate **)(lVar5 + 0x10) == param_1) break;
    lVar5 = *(long *)(lVar5 + 8);
    lVar6 = lVar4;
  } while (lVar4 != lVar5);
  if (lVar4 == lVar6) {
    return 0;
  }
  pIVar1 = *(IMEDelegate **)(lVar4 + 0x18);
  if (pIVar1 == (IMEDelegate *)0x0) {
    uVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (pIVar1 == param_1) {
      return 1;
    }
                    /* try { // try from 00fab9b8 to 010aba4f has its CatchHandler @ 00fab9b8
                       catch() { ... } // from try @ 00fab9b8 with catch @ 00fab9b8
                       catch() { ... } // from try @ 00faba58 with catch @ 00fab9b8 */
    uVar2 = (**(code **)(*(long *)pIVar1 + 0x30))();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar2 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    plVar3 = *(long **)(*(long *)this + 0x18);
    *(undefined8 *)(*(long *)this + 0x18) = 0;
    (**(code **)(*plVar3 + 0x38))();
  }
  *(undefined8 *)(*(long *)this + 0x18) = *(undefined8 *)(lVar6 + 0x10);
  (**(code **)(*(long *)param_1 + 0x28))(param_1);
  return 1;
}

