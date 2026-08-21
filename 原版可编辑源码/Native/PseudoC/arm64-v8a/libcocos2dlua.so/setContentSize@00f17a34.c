
/* cocos2d::LayerRadialGradient::setContentSize(cocos2d::Size const&) */

void __thiscall
cocos2d::LayerRadialGradient::setContentSize(LayerRadialGradient *this,Size *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x360) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x370) = uVar1;
  *(undefined4 *)(this + 0x36c) = uVar2;
  *(undefined4 *)(this + 0x374) = uVar2;
  Node::setContentSize((Node *)this,param_1);
  return;
}

