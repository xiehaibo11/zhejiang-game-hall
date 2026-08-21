
/* cocos2d::ui::ScrollViewBar::ScrollViewBar(cocos2d::ui::ScrollView*,
   cocos2d::ui::ScrollView::Direction) */

void __thiscall
cocos2d::ui::ScrollViewBar::ScrollViewBar(ScrollViewBar *this,undefined8 param_1,undefined4 param_3)

{
  undefined8 uVar1;
  
  ProtectedNode::ProtectedNode((ProtectedNode *)this);
  this[0x340] = (ScrollViewBar)0x66;
  uVar1 = NEON_fmov(0x41a00000,4);
  *(undefined ***)this = &PTR__ScrollViewBar_016dbb68;
  *(undefined8 *)(this + 0x318) = param_1;
  *(undefined4 *)(this + 800) = param_3;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0x338) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x344) = uVar1;
  *(undefined2 *)(this + 0x34c) = 0x100;
  *(undefined8 *)(this + 0x350) = 0x3e4ccccd;
  Node::setCascadeColorEnabled((Node *)this,true);
  (**(code **)(*(long *)this + 0x4a8))(this,1);
  return;
}

