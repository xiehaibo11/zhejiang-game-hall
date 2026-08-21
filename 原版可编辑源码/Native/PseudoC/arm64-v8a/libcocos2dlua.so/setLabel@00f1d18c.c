
/* cocos2d::MenuItemLabel::setLabel(cocos2d::Node*) */

void __thiscall cocos2d::MenuItemLabel::setLabel(MenuItemLabel *this,Node *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (Node *)0x0) {
    (**(code **)(*(long *)param_1 + 0x148))(param_1,&Vec2::ANCHOR_BOTTOM_LEFT);
    uVar1 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
    (**(code **)(*(long *)this + 0x160))(this,uVar1);
    (**(code **)(*(long *)this + 0x208))(this,param_1);
  }
  if (*(long *)(this + 0x340) != 0) {
    (**(code **)(*(long *)this + 0x280))(this,*(long *)(this + 0x340),1);
  }
  *(Node **)(this + 0x340) = param_1;
  return;
}

