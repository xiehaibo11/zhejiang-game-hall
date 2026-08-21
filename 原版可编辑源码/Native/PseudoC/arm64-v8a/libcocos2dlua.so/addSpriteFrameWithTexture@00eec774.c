
/* cocos2d::Animation::addSpriteFrameWithTexture(cocos2d::Texture2D*, cocos2d::Rect const&) */

void __thiscall
cocos2d::Animation::addSpriteFrameWithTexture(Animation *this,Texture2D *param_1,Rect *param_2)

{
  SpriteFrame *pSVar1;
  
  pSVar1 = (SpriteFrame *)SpriteFrame::createWithTexture(param_1,param_2);
  addSpriteFrame(this,pSVar1);
  return;
}

