
/* cocostudio::ActionTintFrame::setColor(cocos2d::Color3B) */

void __thiscall cocostudio::ActionTintFrame::setColor(ActionTintFrame *this,undefined4 param_2)

{
  *(short *)(this + 0x50) = (short)param_2;
  this[0x52] = SUB41((uint)param_2 >> 0x10,0);
  return;
}

