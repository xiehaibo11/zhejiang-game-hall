
/* cocos2d::extension::ControlUtils::RectUnion(cocos2d::Rect const&, cocos2d::Rect const&) */

void __thiscall
cocos2d::extension::ControlUtils::RectUnion(ControlUtils *this,Rect *param_1,Rect *param_2)

{
  Rect *pRVar1;
  long lVar2;
  Rect *in_x8;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Size aSStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Rect::Rect(in_x8);
  fVar3 = (float)Rect::getMinX((Rect *)this);
  fVar4 = (float)Rect::getMinX((Rect *)param_1);
  pRVar1 = (Rect *)this;
  if (fVar4 <= fVar3) {
    pRVar1 = (Rect *)param_1;
  }
  fVar3 = (float)Rect::getMinX(pRVar1);
  fVar4 = (float)Rect::getMinY((Rect *)this);
  fVar5 = (float)Rect::getMinY((Rect *)param_1);
  pRVar1 = (Rect *)this;
  if (fVar5 <= fVar4) {
    pRVar1 = (Rect *)param_1;
  }
  fVar4 = (float)Rect::getMinY(pRVar1);
                    /* catch() { ... } // from try @ 00e142a8 with catch @ 00e143dc */
  fVar5 = (float)Rect::getMaxX((Rect *)this);
                    /* catch() { ... } // from try @ 00e14308 with catch @ 00e143e4 */
  fVar6 = (float)Rect::getMaxX((Rect *)param_1);
                    /* catch() { ... } // from try @ 00e142d0 with catch @ 00e143ec */
  pRVar1 = (Rect *)this;
  if (fVar5 <= fVar6) {
    pRVar1 = (Rect *)param_1;
  }
                    /* catch() { ... } // from try @ 00e1431c with catch @ 00e143f4 */
  fVar5 = (float)Rect::getMaxX(pRVar1);
  fVar6 = (float)Rect::getMaxY((Rect *)this);
                    /* catch() { ... } // from try @ 00e142e4 with catch @ 00e1440c */
  fVar7 = (float)Rect::getMaxY((Rect *)param_1);
  if (fVar6 <= fVar7) {
    this = (ControlUtils *)param_1;
  }
  fVar6 = (float)Rect::getMaxY((Rect *)this);
  *(float *)in_x8 = fVar3;
  *(float *)(in_x8 + 4) = fVar4;
                    /* try { // try from 00e14430 to 00f144ab has its CatchHandler @ 00e14430
                       catch() { ... } // from try @ 00e14430 with catch @ 00e14430
                       catch() { ... } // from try @ 00e145e8 with catch @ 00e14430
                       catch() { ... } // from try @ 00e146e8 with catch @ 00e14430 */
  Size::Size(aSStack_60,fVar5 - fVar3,fVar6 - fVar4);
  Size::operator=((Size *)(in_x8 + 8),aSStack_60);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

