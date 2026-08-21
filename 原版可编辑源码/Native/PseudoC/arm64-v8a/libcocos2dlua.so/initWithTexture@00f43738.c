
/* cocos2d::SpriteFrame::initWithTexture(cocos2d::Texture2D*, cocos2d::Rect const&) */

undefined8 __thiscall
cocos2d::SpriteFrame::initWithTexture(SpriteFrame *this,Texture2D *param_1,Rect *param_2)

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
  Rect aRStack_68 [8];
  Size aSStack_60 [8];
  long local_58;
  
                    /* try { // try from 00f43748 to 01043753 has its CatchHandler @ 00f438d8 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00f43758 to 01043763 has its CatchHandler @ 00f438c0 */
  local_58 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)param_2;
  lVar2 = Director::getInstance();
  fVar3 = *(float *)(lVar2 + 0x1a0);
  fVar7 = *(float *)(param_2 + 4);
  lVar2 = Director::getInstance();
  fVar4 = *(float *)(lVar2 + 0x1a0);
  fVar8 = *(float *)(param_2 + 8);
  lVar2 = Director::getInstance();
  fVar5 = *(float *)(lVar2 + 0x1a0);
  fVar9 = *(float *)(param_2 + 0xc);
  lVar2 = Director::getInstance();
                    /* try { // try from 00f437b8 to 010437bf has its CatchHandler @ 00f438a0 */
                    /* try { // try from 00f437c0 to 010438ef has its CatchHandler @ 00f43590 */
  Rect::Rect(aRStack_68,fVar6 * fVar3,fVar7 * fVar4,fVar8 * fVar5,fVar9 * *(float *)(lVar2 + 0x1a0))
  ;
  initWithTexture(this,param_1,aRStack_68,false,(Vec2 *)&Vec2::ZERO,aSStack_60);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

