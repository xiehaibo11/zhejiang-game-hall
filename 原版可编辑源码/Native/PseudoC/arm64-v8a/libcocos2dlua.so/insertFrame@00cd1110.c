
/* cocostudio::ActionNode::insertFrame(int, cocostudio::ActionFrame*) */

void __thiscall
cocostudio::ActionNode::insertFrame(ActionNode *this,int param_1,ActionFrame *param_2)

{
  long lVar1;
  int iVar2;
  vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>> *pvVar3;
  ulong uVar4;
  Ref *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 != (ActionFrame *)0x0) {
    iVar2 = ActionFrame::getFrameType(param_2);
    uVar4 = *(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3;
    if (iVar2 < (int)uVar4) {
      if (uVar4 <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      pvVar3 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                 **)(*(long *)(this + 0x50) + (long)iVar2 * 8);
      local_40 = (Ref *)param_2;
      std::__ndk1::vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
      ::insert(pvVar3,*(long *)pvVar3 + (long)param_1 * 8,&local_40);
      cocos2d::Ref::retain(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

