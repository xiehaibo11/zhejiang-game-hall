
/* cocos2d::extension::ScrollView::isNodeVisible(cocos2d::Node*) */

uint __thiscall cocos2d::extension::ScrollView::isNodeVisible(ScrollView *this,Node *param_1)

{
  long lVar1;
  uint uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Rect aRStack_70 [16];
  Rect aRStack_60 [16];
  float local_50;
  float fStack_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 00e14d70 with catch @ 00e14ddc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e14adc with catch @ 00e14de8 */
                    /* catch() { ... } // from try @ 00e14aa4 with catch @ 00e14df8 */
                    /* catch() { ... } // from try @ 00e14ac4 with catch @ 00e14e00 */
  pfVar3 = (float *)(**(code **)(**(long **)(this + 0x340) + 0xb0))();
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  Size::Size((Size *)&local_50,(Size *)(this + 0x390));
                    /* catch() { ... } // from try @ 00e15144 with catch @ 00e14e1c */
  fVar4 = (float)(**(code **)(**(long **)(this + 0x340) + 0x88))();
  Rect::Rect(aRStack_60);
  Rect::Rect(aRStack_70,-fVar5 / fVar4,-fVar6 / fVar4,local_50 / fVar4,fStack_4c / fVar4);
  Rect::operator=(aRStack_60,aRStack_70);
  (**(code **)(*(long *)param_1 + 0x370))(aRStack_70,param_1);
                    /* try { // try from 00e14e74 to 00f14e7b has its CatchHandler @ 00e151a8 */
  uVar2 = Rect::intersectsRect(aRStack_60,aRStack_70);
                    /* try { // try from 00e14e8c to 00f14e8f has its CatchHandler @ 00e15194 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

