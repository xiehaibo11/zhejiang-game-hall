
/* cocos2d::extension::ControlButton::initWithLabelAndBackgroundSprite(cocos2d::Node*,
   cocos2d::ui::Scale9Sprite*, bool) */

undefined4 __thiscall
cocos2d::extension::ControlButton::initWithLabelAndBackgroundSprite
          (ControlButton *this,Node *param_1,Scale9Sprite *param_2,bool param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = Control::init((Control *)this);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (param_1 == (Node *)0x0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)__dynamic_cast(param_1,&Node::typeinfo,&LabelProtocol::typeinfo,
                                      0xfffffffffffffffe);
    }
    *(undefined2 *)(this + 0x358) = 0x100;
    (**(code **)(*(long *)this + 0x780))(this,&Size::ZERO);
    this[0x35a] = (ControlButton)param_3;
    (**(code **)(*(long *)this + 0x680))(this);
    uVar4 = 1;
    this[0x398] = (ControlButton)0x1;
    *(undefined4 *)(this + 0x39c) = 0x3f8ccccd;
                    /* catch() { ... } // from try @ 00e0a4cc with catch @ 00e0a59c */
    (**(code **)(*(long *)this + 0x1f0))(this,0);
    (**(code **)(*(long *)this + 0x148))(this,&Vec2::ANCHOR_MIDDLE);
    (**(code **)(*(long *)this + 0x760))(this,param_1);
    (**(code **)(*(long *)this + 0x770))(this,param_2);
    (**(code **)(*(long *)this + 0x4c0))(this,&Color3B::WHITE);
    (**(code **)(*(long *)this + 0x490))(this,0xff);
    (**(code **)(*(long *)this + 0x4e0))(this,1);
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    (**(code **)(*(long *)this + 0x6c0))(this,uVar3,1);
    uVar3 = (**(code **)(*(long *)param_1 + 0x4b0))(param_1);
    (**(code **)(*(long *)this + 0x6d0))(this,uVar3,1);
    (**(code **)(*(long *)this + 0x6e0))(this,param_1,1);
    (**(code **)(*(long *)this + 0x720))(this,param_2,1);
    (**(code **)(*(long *)this + 0x7b0))(this,&Vec2::ANCHOR_MIDDLE);
    (**(code **)(*(long *)this + 0x680))(this);
  }
  return uVar4;
}

