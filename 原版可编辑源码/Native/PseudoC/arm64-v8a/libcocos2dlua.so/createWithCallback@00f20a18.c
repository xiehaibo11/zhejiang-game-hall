
/* cocos2d::MenuItemToggle::createWithCallback(std::__ndk1::function<void (cocos2d::Ref*)> const&,
   cocos2d::Vector<cocos2d::MenuItem*> const&) */

Node * cocos2d::MenuItemToggle::createWithCallback(function *param_1,Vector *param_2)

{
  vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *this;
  long lVar1;
  Node *this_00;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x360,(nothrow_t *)&std::nothrow);
  if (this_00 != (Node *)0x0) {
    Node::Node(this_00);
    *(undefined2 *)(this_00 + 0x2f8) = 0;
    *(undefined8 *)(this_00 + 800) = 0;
    *(undefined4 *)(this_00 + 0x330) = 0;
    *(undefined ***)this_00 = &PTR__MenuItemToggle_017060c8;
    *(undefined8 *)(this_00 + 0x340) = 0;
    *(undefined8 *)(this_00 + 0x338) = 0;
    *(undefined8 *)(this_00 + 0x350) = 0;
    *(undefined8 *)(this_00 + 0x348) = 0;
  }
  local_80[0] = 0x3f0000003f000000;
  (**(code **)(*(long *)this_00 + 0x148))(this_00,local_80);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar2) {
    local_60 = local_80;
    (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_00dad434(local_80,this_00 + 0x300);
  if (local_80 == local_60) {
    pcVar3 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f20b24;
    pcVar3 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar3)();
LAB_00f20b24:
  *(undefined2 *)(this_00 + 0x2f8) = 0x100;
  Ref::autorelease((Ref *)this_00);
  this = (vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)(this_00 + 0x340);
  if (this != (vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)param_2) {
    puVar4 = *(undefined8 **)(this_00 + 0x340);
    puVar6 = *(undefined8 **)(this_00 + 0x348);
    if (puVar4 != puVar6) {
      do {
        puVar5 = puVar4 + 1;
        Ref::release((Ref *)*puVar4);
        puVar4 = puVar5;
      } while (puVar6 != puVar5);
      puVar4 = *(undefined8 **)this;
    }
    *(undefined8 **)(this_00 + 0x348) = puVar4;
    std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
    assign<cocos2d::MenuItem**>(this,*(MenuItem ***)param_2,*(MenuItem ***)(param_2 + 8));
    puVar6 = *(undefined8 **)(this_00 + 0x348);
    for (puVar4 = *(undefined8 **)(this_00 + 0x340); puVar4 != puVar6; puVar4 = puVar4 + 1) {
      Ref::retain((Ref *)*puVar4);
    }
  }
  *(undefined4 *)(this_00 + 0x330) = 0xffffffff;
  setSelectedIndex((MenuItemToggle *)this_00,0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

