
/* cocos2d::Sprite::setContentSize(cocos2d::Size const&) */

void __thiscall cocos2d::Sprite::setContentSize(Sprite *this,Size *param_1)

{
  Node::setContentSize((Node *)this,param_1);
  updateStretchFactor(this);
  updatePoly(this);
  return;
}

