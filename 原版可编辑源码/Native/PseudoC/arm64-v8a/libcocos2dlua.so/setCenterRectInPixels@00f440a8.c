
/* cocos2d::SpriteFrame::setCenterRectInPixels(cocos2d::Rect const&) */

void __thiscall cocos2d::SpriteFrame::setCenterRectInPixels(SpriteFrame *this,Rect *param_1)

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
  
                    /* try { // try from 00f440a8 to 010440b3 has its CatchHandler @ 00f43fb4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f440a4 with catch @ 00f440b0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f44108 with catch @ 00f440b4
                        */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)param_1;
  lVar2 = Director::getInstance();
  fVar3 = *(float *)(lVar2 + 0x1a0);
  fVar7 = *(float *)(param_1 + 4);
  lVar2 = Director::getInstance();
  fVar4 = *(float *)(lVar2 + 0x1a0);
  fVar8 = *(float *)(param_1 + 8);
  lVar2 = Director::getInstance();
                    /* try { // try from 00f44100 to 01044107 has its CatchHandler @ 00f4427c */
  fVar5 = *(float *)(lVar2 + 0x1a0);
  fVar9 = *(float *)(param_1 + 0xc);
                    /* try { // try from 00f44108 to 0104427f has its CatchHandler @ 00f440b4 */
  lVar2 = Director::getInstance();
  Rect::Rect(aRStack_68,fVar6 / fVar3,fVar7 / fVar4,fVar8 / fVar5,fVar9 / *(float *)(lVar2 + 0x1a0))
  ;
  Rect::operator=((Rect *)(this + 0x6c),aRStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

