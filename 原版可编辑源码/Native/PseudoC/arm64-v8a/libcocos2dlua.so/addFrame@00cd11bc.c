
/* cocostudio::ActionNode::addFrame(cocostudio::ActionFrame*) */

void __thiscall cocostudio::ActionNode::addFrame(ActionNode *this,ActionFrame *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>> *this_00;
  ulong uVar4;
  ActionFrame *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != (ActionFrame *)0x0) {
    iVar3 = ActionFrame::getFrameType(param_1);
    uVar4 = *(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3;
    if (iVar3 < (int)uVar4) {
      if (uVar4 <= (ulong)(long)iVar3) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      this_00 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                  **)(*(long *)(this + 0x50) + (long)iVar3 * 8);
      puVar1 = *(undefined8 **)(this_00 + 8);
      local_40 = param_1;
      if (puVar1 == *(undefined8 **)(this_00 + 0x10)) {
        std::__ndk1::
        vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>::
        __push_back_slow_path<cocostudio::ActionFrame*const&>(this_00,&local_40);
      }
      else {
        *puVar1 = param_1;
        *(undefined8 **)(this_00 + 8) = puVar1 + 1;
      }
      cocos2d::Ref::retain((Ref *)local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

