
/* fairygui::GComponent::handleInit() */

void __thiscall fairygui::GComponent::handleInit(GComponent *this)

{
  FUIContainer *this_00;
  ulong uVar1;
  Node *this_01;
  
  this_00 = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (this_00 != (FUIContainer *)0x0) {
    FUIContainer::FUIContainer(this_00);
    uVar1 = (**(code **)(*(long *)this_00 + 0x500))(this_00);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (FUIContainer *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_00);
    }
  }
  cocos2d::Ref::retain((Ref *)this_00);
  *(GComponent **)(this_00 + 0x2f8) = this;
  *(FUIContainer **)(this + 0xa8) = this_00;
  this_01 = operator_new(0x300,(nothrow_t *)&std::nothrow);
  if (this_01 != (Node *)0x0) {
    memset(this_01,0,0x300);
    cocos2d::Node::Node(this_01);
    *(undefined ***)this_01 = &PTR__Node_016a52e8;
    uVar1 = cocos2d::Node::init();
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this_01 + 8))(this_01);
      this_01 = (Node *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_01);
                    /* try { // try from 00a702ac to 00b702ff has its CatchHandler @ 00a7005c */
    }
  }
  *(Node **)(this + 0x228) = this_01;
  cocos2d::Ref::retain((Ref *)this_01);
  (**(code **)(**(long **)(this + 0x228) + 0x4a8))(*(long **)(this + 0x228),1);
                    /* WARNING: Could not recover jumptable at 0x00a702fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0xa8) + 0x208))
            (*(long **)(this + 0xa8),*(undefined8 *)(this + 0x228));
  return;
}

