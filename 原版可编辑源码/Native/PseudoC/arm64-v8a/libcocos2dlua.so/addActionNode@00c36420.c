
/* cocostudio::ActionObject::addActionNode(cocostudio::ActionNode*) */

void __thiscall cocostudio::ActionObject::addActionNode(ActionObject *this,ActionNode *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ActionNode *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != (ActionNode *)0x0) {
    puVar1 = *(undefined8 **)(this + 0x30);
    local_40 = param_1;
    if (puVar1 == *(undefined8 **)(this + 0x38)) {
      std::__ndk1::vector<cocostudio::ActionNode*,std::__ndk1::allocator<cocostudio::ActionNode*>>::
      __push_back_slow_path<cocostudio::ActionNode*const&>
                ((vector<cocostudio::ActionNode*,std::__ndk1::allocator<cocostudio::ActionNode*>> *)
                 (this + 0x28),&local_40);
    }
    else {
      *puVar1 = param_1;
      *(undefined8 **)(this + 0x30) = puVar1 + 1;
    }
    cocos2d::Ref::retain((Ref *)local_40);
    ActionNode::setUnitTime(param_1,*(float *)(this + 0x5c));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

