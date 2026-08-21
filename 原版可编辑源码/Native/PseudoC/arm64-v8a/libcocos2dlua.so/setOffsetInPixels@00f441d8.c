
/* cocos2d::SpriteFrame::setOffsetInPixels(cocos2d::Vec2 const&) */

void __thiscall cocos2d::SpriteFrame::setOffsetInPixels(SpriteFrame *this,Vec2 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x7c) = uVar2;
  lVar1 = Director::getInstance();
  fVar3 = *(float *)(lVar1 + 0x1a0);
  fVar5 = *(float *)(this + 0x80);
  lVar1 = Director::getInstance();
  fVar4 = *(float *)(lVar1 + 0x1a0);
  *(float *)(this + 0x30) = (float)uVar2 / fVar3;
  *(float *)(this + 0x34) = fVar5 / fVar4;
  return;
}

