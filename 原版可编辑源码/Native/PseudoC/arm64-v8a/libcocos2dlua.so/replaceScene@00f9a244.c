
/* cocos2d::Director::replaceScene(cocos2d::Scene*) */

void __thiscall cocos2d::Director::replaceScene(Director *this,Scene *param_1)

{
  long lVar1;
  long lVar2;
  Scene *pSVar3;
  ulong uVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a1ec with catch @ 00f9a250
                        */
  if (*(long *)(this + 0x158) != 0) {
    pSVar3 = *(Scene **)(this + 0x160);
    if (pSVar3 != param_1) {
      if (pSVar3 != (Scene *)0x0) {
        uVar4 = (**(code **)(*(long *)pSVar3 + 0x318))();
        if ((uVar4 & 1) != 0) {
          (**(code **)(**(long **)(this + 0x160) + 0x330))();
        }
        (**(code **)(**(long **)(this + 0x160) + 0x340))();
        *(undefined8 *)(this + 0x160) = 0;
      }
      lVar1 = *(long *)(this + 0x170);
      lVar2 = *(long *)(this + 0x178);
      this[0x168] = (Director)0x1;
      Ref::release(*(Ref **)(lVar2 + -8));
      *(Scene **)((lVar2 - lVar1) + *(long *)(this + 0x170) + -8) = param_1;
      Ref::retain((Ref *)param_1);
      *(Scene **)(this + 0x160) = param_1;
    }
    return;
  }
  runWithScene(this,param_1);
  return;
}

