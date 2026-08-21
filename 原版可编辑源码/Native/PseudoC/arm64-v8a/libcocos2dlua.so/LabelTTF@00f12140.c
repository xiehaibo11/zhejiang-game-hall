
/* cocos2d::LabelTTF::LabelTTF() */

void __thiscall cocos2d::LabelTTF::LabelTTF(LabelTTF *this)

{
  undefined2 uVar1;
  long *plVar2;
  
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__LabelTTF_016fef70;
  *(undefined ***)(this + 0x300) = &PTR__LabelTTF_016ff510;
  *(undefined ***)(this + 0x2f8) = &PTR__LabelTTF_016ff4e0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x334) = 1;
  *(undefined4 *)(this + 0x33c) = 0;
  Size::Size((Size *)(this + 0x340),(Size *)&Size::ZERO);
  uVar1 = Color3B::WHITE;
  this[0x34a] = DAT_01792432;
  *(undefined2 *)(this + 0x348) = uVar1;
  *(undefined2 *)(this + 0x34b) = 0xff;
  Size::Size((Size *)(this + 0x350));
  this[0x360] = (LabelTTF)0x0;
  *(undefined8 *)(this + 0x358) = 0;
  uVar1 = Color3B::BLACK;
  this[0x363] = DAT_01792444;
  *(undefined2 *)(this + 0x361) = uVar1;
  this[0x364] = (LabelTTF)0xff;
  *(undefined4 *)(this + 0x368) = 0;
  this[0x36c] = (LabelTTF)0x1;
  *(undefined4 *)(this + 0x370) = 0;
  plVar2 = (long *)Label::create();
  *(long **)(this + 0x308) = plVar2;
  (**(code **)(*plVar2 + 0x148))(plVar2,&Vec2::ANCHOR_BOTTOM_LEFT);
  (**(code **)(*(long *)this + 0x208))(this,*(undefined8 *)(this + 0x308));
  (**(code **)(*(long *)this + 0x148))(this,&Vec2::ANCHOR_MIDDLE);
  this[0x310] = (LabelTTF)0x0;
  *(undefined2 *)(this + 0x220) = 0x101;
  return;
}

