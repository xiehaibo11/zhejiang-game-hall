
/* cocos2d::LayerColor::setContentSize(cocos2d::Size const&) */

void __thiscall cocos2d::LayerColor::setContentSize(LayerColor *this,Size *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x338) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x348) = uVar1;
  *(undefined4 *)(this + 0x344) = uVar2;
  *(undefined4 *)(this + 0x34c) = uVar2;
  Node::setContentSize((Node *)this,param_1);
  return;
}

