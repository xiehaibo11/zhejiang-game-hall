
/* cocos2d::MenuItemLabel::create(cocos2d::Node*) */

Node * cocos2d::MenuItemLabel::create(Node *param_1)

{
  long lVar1;
  Node *this;
  code *pcVar2;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined ***)this = &PTR__MenuItem_01705020;
    Color3B::Color3B((Color3B *)(this + 0x330));
    *(undefined4 *)(this + 0x334) = 0;
    Color3B::Color3B((Color3B *)(this + 0x338));
    *(undefined8 *)(this + 0x340) = 0;
  }
  local_50 = (long *)0x0;
  initWithLabel((MenuItemLabel *)this,param_1,(function *)alStack_70);
  if (alStack_70 == local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f1d754;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00f1d754:
  Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

