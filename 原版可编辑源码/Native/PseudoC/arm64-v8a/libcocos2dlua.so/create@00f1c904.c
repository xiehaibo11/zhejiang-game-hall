
/* cocos2d::MenuItem::create(std::__ndk1::function<void (cocos2d::Ref*)> const&) */

Node * cocos2d::MenuItem::create(function *param_1)

{
  long lVar1;
  Node *this;
  long *plVar2;
  code *pcVar3;
  long local_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00f1c918 to 0101c91f has its CatchHandler @ 00f1cc64 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x330,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined ***)this = &PTR__MenuItem_01704528;
  }
  local_70[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)this + 0x148))(this,local_70);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    local_50 = local_70;
    (**(code **)(*plVar2 + 0x18))(plVar2,local_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_00dad434(local_70,this + 0x300);
  if (local_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f1c9f8;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00f1c9f8:
  *(undefined2 *)(this + 0x2f8) = 0x100;
  Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

