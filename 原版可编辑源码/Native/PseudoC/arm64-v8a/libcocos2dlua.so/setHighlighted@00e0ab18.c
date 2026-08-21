
/* cocos2d::extension::ControlButton::setHighlighted(bool) */

void __thiscall cocos2d::extension::ControlButton::setHighlighted(ControlButton *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar3 = 1;
  if (param_1) {
    uVar3 = 2;
  }
  *(undefined4 *)(this + 0x354) = uVar3;
  Control::setHighlighted((Control *)this,param_1);
  lVar1 = Node::getActionByTag((Node *)this,-0x3334ffff);
  if (lVar1 != 0) {
    Node::stopAction((Action *)this);
  }
  (**(code **)(*(long *)this + 0x680))(this);
  if (this[0x398] != (ControlButton)0x0) {
    uVar2 = (**(code **)(*(long *)this + 0x678))(this);
    fVar4 = 1.0;
    if ((((uVar2 & 1) != 0) &&
        (uVar2 = (**(code **)(*(long *)this + 0x658))(this), fVar4 = 1.0, (uVar2 & 1) != 0)) &&
       (uVar2 = (**(code **)(*(long *)this + 0x668))(this), (uVar2 & 1) == 0)) {
      fVar4 = *(float *)(this + 0x39c);
    }
    lVar1 = ScaleTo::create(0.05,fVar4);
    *(undefined4 *)(lVar1 + 0x40) = 0xcccb0001;
                    /* WARNING: Could not recover jumptable at 0x00e0abfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x3a8))(this,lVar1);
    return;
  }
  return;
}

