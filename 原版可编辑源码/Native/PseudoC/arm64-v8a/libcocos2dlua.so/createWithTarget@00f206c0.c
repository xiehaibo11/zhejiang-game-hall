
/* cocos2d::MenuItemToggle::createWithTarget(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*),
   cocos2d::Vector<cocos2d::MenuItem*> const&) */

Node * __thiscall
cocos2d::MenuItemToggle::createWithTarget
          (MenuItemToggle *this,Ref *param_1,_func_void_Ref_ptr *param_2,Vector *param_3)

{
  vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *this_00;
  long lVar1;
  Node *this_01;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **local_b0;
  Ref *local_a8;
  _func_void_Ref_ptr *p_Stack_a0;
  MenuItemToggle *local_98;
  long *local_90;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_01 = operator_new(0x360,(nothrow_t *)&std::nothrow);
  if (this_01 != (Node *)0x0) {
    Node::Node(this_01);
    *(undefined2 *)(this_01 + 0x2f8) = 0;
    *(undefined8 *)(this_01 + 800) = 0;
    *(undefined4 *)(this_01 + 0x330) = 0;
    *(undefined ***)this_01 = &PTR__MenuItemToggle_017060c8;
    *(undefined8 *)(this_01 + 0x340) = 0;
    *(undefined8 *)(this_01 + 0x338) = 0;
    *(undefined8 *)(this_01 + 0x350) = 0;
    *(undefined8 *)(this_01 + 0x348) = 0;
  }
  local_b0 = &PTR_FUN_016d1d18;
  local_80[0] = 0x3f0000003f000000;
  local_a8 = param_1;
  p_Stack_a0 = param_2;
  local_98 = this;
  local_90 = (long *)&local_b0;
  (**(code **)(*(long *)this_01 + 0x148))(this_01,local_80);
  if (local_90 == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else if (&local_b0 == (undefined ***)local_90) {
    local_60 = local_80;
    (**(code **)(*local_90 + 0x18))(local_90,local_80);
  }
  else {
    local_60 = (long *)(**(code **)(*local_90 + 0x10))();
  }
  FUN_00dad434(local_80,this_01 + 0x300);
  if (local_80 == local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
LAB_00f207f0:
    (*pcVar2)();
  }
  else if (local_60 != (long *)0x0) {
    pcVar2 = *(code **)(*local_60 + 0x28);
    goto LAB_00f207f0;
  }
  *(undefined2 *)(this_01 + 0x2f8) = 0x100;
  if (&local_b0 == (undefined ***)local_90) {
    pcVar2 = *(code **)(*local_90 + 0x20);
  }
  else {
    if (local_90 == (long *)0x0) goto LAB_00f20828;
    pcVar2 = *(code **)(*local_90 + 0x28);
  }
  (*pcVar2)();
LAB_00f20828:
  Ref::autorelease((Ref *)this_01);
  this_00 = (vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)
            (this_01 + 0x340);
  if (this_00 != (vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>> *)param_3) {
    puVar3 = *(undefined8 **)(this_01 + 0x340);
    puVar5 = *(undefined8 **)(this_01 + 0x348);
    if (puVar3 != puVar5) {
      do {
        puVar4 = puVar3 + 1;
        Ref::release((Ref *)*puVar3);
        puVar3 = puVar4;
      } while (puVar5 != puVar4);
      puVar3 = *(undefined8 **)this_00;
    }
    *(undefined8 **)(this_01 + 0x348) = puVar3;
    std::__ndk1::vector<cocos2d::MenuItem*,std::__ndk1::allocator<cocos2d::MenuItem*>>::
    assign<cocos2d::MenuItem**>(this_00,*(MenuItem ***)param_3,*(MenuItem ***)(param_3 + 8));
    puVar5 = *(undefined8 **)(this_01 + 0x348);
    for (puVar3 = *(undefined8 **)(this_01 + 0x340); puVar3 != puVar5; puVar3 = puVar3 + 1) {
      Ref::retain((Ref *)*puVar3);
    }
  }
  *(undefined4 *)(this_01 + 0x330) = 0xffffffff;
  setSelectedIndex((MenuItemToggle *)this_01,0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}

