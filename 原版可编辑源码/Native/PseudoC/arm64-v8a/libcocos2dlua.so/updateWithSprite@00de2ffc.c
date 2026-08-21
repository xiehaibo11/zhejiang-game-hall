
/* cocos2d::ui::Scale9Sprite::updateWithSprite(cocos2d::Sprite*, cocos2d::Rect const&, bool,
   cocos2d::Vec2 const&, cocos2d::Size const&, cocos2d::Rect const&) */

undefined8 __thiscall
cocos2d::ui::Scale9Sprite::updateWithSprite
          (Scale9Sprite *this,Sprite *param_1,Rect *param_2,bool param_3,Vec2 *param_4,Size *param_5
          ,Rect *param_6)

{
  long lVar1;
  Texture2D *pTVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Size aSStack_98 [8];
  float local_90;
  float fStack_8c;
  Rect aRStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  pTVar2 = (Texture2D *)(**(code **)(*(long *)param_1 + 0x550))(param_1);
  fVar8 = *(float *)param_2;
  lVar3 = Director::getInstance();
  fVar5 = *(float *)(lVar3 + 0x1a0);
  fVar9 = *(float *)(param_2 + 4);
  lVar3 = Director::getInstance();
  fVar6 = *(float *)(lVar3 + 0x1a0);
  fVar10 = *(float *)(param_2 + 8);
  lVar3 = Director::getInstance();
  fVar7 = *(float *)(lVar3 + 0x1a0);
  fVar11 = *(float *)(param_2 + 0xc);
  lVar3 = Director::getInstance();
  Rect::Rect(aRStack_88,fVar8 * fVar5,fVar9 * fVar6,fVar10 * fVar7,
             fVar11 * *(float *)(lVar3 + 0x1a0));
  fVar6 = *(float *)param_4;
  lVar3 = Director::getInstance();
  fVar5 = *(float *)(lVar3 + 0x1a0);
                    /* try { // try from 00de30b8 to 00ee30d3 has its CatchHandler @ 00de4ad4 */
  fVar7 = *(float *)(param_4 + 4);
  lVar3 = Director::getInstance();
  fStack_8c = fVar7 * *(float *)(lVar3 + 0x1a0);
  fVar7 = *(float *)param_5;
  local_90 = fVar6 * fVar5;
  lVar3 = Director::getInstance();
                    /* try { // try from 00de30d8 to 00ee30e7 has its CatchHandler @ 00de4ad8 */
  fVar5 = *(float *)(lVar3 + 0x1a0);
  fVar6 = *(float *)(param_5 + 4);
  lVar3 = Director::getInstance();
  Size::Size(aSStack_98,fVar7 * fVar5,fVar6 * *(float *)(lVar3 + 0x1a0));
  uVar4 = SpriteFrame::createWithTexture(pTVar2,aRStack_88,param_3,(Vec2 *)&local_90,aSStack_98);
  (**(code **)(*(long *)this + 0x598))(this,uVar4);
  setCapInsets(this,param_6);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

