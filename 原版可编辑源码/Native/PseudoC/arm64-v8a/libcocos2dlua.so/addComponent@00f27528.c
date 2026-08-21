
/* cocos2d::Node::addComponent(cocos2d::Component*) */

uint __thiscall cocos2d::Node::addComponent(Node *this,Component *param_1)

{
  long lVar1;
  uint uVar2;
  ComponentContainer *this_00;
  code *pcVar3;
  undefined **local_70;
  Node *pNStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x210) == 0) {
    this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (this_00 != (ComponentContainer *)0x0) {
      ComponentContainer::ComponentContainer(this_00,this);
    }
    *(ComponentContainer **)(this + 0x210) = this_00;
  }
                    /* try { // try from 00f2758c to 01027887 has its CatchHandler @ 00f2758c
                       catch() { ... } // from try @ 00f2758c with catch @ 00f2758c
                       catch() { ... } // from try @ 00f27890 with catch @ 00f2758c
                       catch() { ... } // from try @ 00f27970 with catch @ 00f2758c */
  local_70 = &PTR_FUN_01707838;
  pNStack_68 = this;
  local_50 = (long *)&local_70;
  Scheduler::schedulePerFrame
            (*(Scheduler **)(this + 0x1e0),(function *)&local_70,this,0,this[0x1f8] == (Node)0x0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f275e0;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00f275e0:
  uVar2 = ComponentContainer::add(*(ComponentContainer **)(this + 0x210),param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

