
/* cocostudio::timeline::EventFrame::setNode(cocos2d::Node*) */

void __thiscall cocostudio::timeline::EventFrame::setNode(EventFrame *this,Node *param_1)

{
  undefined8 uVar1;
  
  *(Node **)(this + 0x50) = param_1;
  uVar1 = (**(code **)(**(long **)(this + 0x48) + 0x68))();
  *(undefined8 *)(this + 0x70) = uVar1;
  return;
}

