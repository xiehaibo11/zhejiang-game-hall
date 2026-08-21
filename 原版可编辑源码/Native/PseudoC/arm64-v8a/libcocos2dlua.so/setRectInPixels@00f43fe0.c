
/* cocos2d::SpriteFrame::setRectInPixels(cocos2d::Rect const&) */

void __thiscall cocos2d::SpriteFrame::setRectInPixels(SpriteFrame *this,Rect *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Rect aRStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f44010 to 01044017 has its CatchHandler @ 00f44084 */
  Rect::operator=((Rect *)(this + 0x48),(Rect *)param_1);
                    /* try { // try from 00f44018 to 0104409b has its CatchHandler @ 00f43fb4 */
  fVar6 = *(float *)param_1;
  lVar2 = Director::getInstance();
  fVar3 = *(float *)(lVar2 + 0x1a0);
  fVar7 = *(float *)(param_1 + 4);
  lVar2 = Director::getInstance();
  fVar4 = *(float *)(lVar2 + 0x1a0);
  fVar8 = *(float *)(param_1 + 8);
  lVar2 = Director::getInstance();
  fVar5 = *(float *)(lVar2 + 0x1a0);
  fVar9 = *(float *)(param_1 + 0xc);
  lVar2 = Director::getInstance();
  Rect::Rect(aRStack_68,fVar6 / fVar3,fVar7 / fVar4,fVar8 / fVar5,fVar9 / *(float *)(lVar2 + 0x1a0))
  ;
  Rect::operator=((Rect *)(this + 0x5c),aRStack_68);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f44010 with catch @ 00f44084
                        */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00f4409c to 0104409f has its CatchHandler @ 00f440a0 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f4409c with catch @ 00f440a0
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f440a4 to 010440a7 has its CatchHandler @ 00f440b0 */
  __stack_chk_fail();
}

