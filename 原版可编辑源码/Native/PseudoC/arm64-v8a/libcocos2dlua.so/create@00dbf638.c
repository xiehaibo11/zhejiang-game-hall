
/* cocos2d::ui::ScrollViewBar::create(cocos2d::ui::ScrollView*, cocos2d::ui::ScrollView::Direction)
    */

ProtectedNode * cocos2d::ui::ScrollViewBar::create(undefined8 param_1,undefined4 param_2)

{
  ProtectedNode *this;
  ulong uVar1;
  undefined8 uVar2;
  
  this = operator_new(0x360,(nothrow_t *)&std::nothrow);
  if (this != (ProtectedNode *)0x0) {
    ProtectedNode::ProtectedNode(this);
    this[0x340] = (ProtectedNode)0x66;
    uVar2 = NEON_fmov(0x41a00000,4);
    *(undefined ***)this = &PTR__ScrollViewBar_016dbb68;
    *(undefined8 *)(this + 0x318) = param_1;
    *(undefined4 *)(this + 800) = param_2;
    *(undefined8 *)(this + 0x328) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x344) = uVar2;
    *(undefined2 *)(this + 0x34c) = 0x100;
    *(undefined8 *)(this + 0x350) = 0x3e4ccccd;
    Node::setCascadeColorEnabled((Node *)this,true);
    (**(code **)(*(long *)this + 0x4a8))(this,1);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ProtectedNode *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

