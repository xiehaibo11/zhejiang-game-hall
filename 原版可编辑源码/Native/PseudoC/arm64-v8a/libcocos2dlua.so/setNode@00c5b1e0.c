
/* cocostudio::ComRender::setNode(cocos2d::Node*) */

void __thiscall cocostudio::ComRender::setNode(ComRender *this,Node *param_1)

{
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  if (param_1 != (Node *)0x0) {
    *(Node **)(this + 0x50) = param_1;
    cocos2d::Ref::retain((Ref *)param_1);
    return;
  }
  return;
}

