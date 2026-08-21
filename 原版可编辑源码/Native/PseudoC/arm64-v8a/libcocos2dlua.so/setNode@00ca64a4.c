
/* cocostudio::timeline::TextureFrame::setNode(cocos2d::Node*) */

void __thiscall cocostudio::timeline::TextureFrame::setNode(TextureFrame *this,Node *param_1)

{
  undefined8 uVar1;
  
  *(Node **)(this + 0x50) = param_1;
  if (param_1 == (Node *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = __dynamic_cast(param_1,&cocos2d::Node::typeinfo,&cocos2d::Sprite::typeinfo,0);
  }
  *(undefined8 *)(this + 0x58) = uVar1;
  return;
}

