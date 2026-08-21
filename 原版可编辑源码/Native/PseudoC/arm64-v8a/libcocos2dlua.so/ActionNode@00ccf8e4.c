
/* cocostudio::ActionNode::ActionNode() */

void __thiscall cocostudio::ActionNode::ActionNode(ActionNode *this)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  Vector *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cocos2d::Ref::Ref((Ref *)this);
  iVar3 = 0;
  iVar4 = 5;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x2c) = 0x3dcccccd;
  *(undefined ***)this = &PTR__ActionNode_016ce2a8;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 5;
  do {
    local_50 = operator_new(0x18);
    *(undefined8 *)local_50 = 0;
    *(undefined8 *)(local_50 + 8) = 0;
    *(undefined8 *)(local_50 + 0x10) = 0;
    puVar1 = *(undefined8 **)(this + 0x58);
    if (puVar1 < *(undefined8 **)(this + 0x60)) {
      *puVar1 = local_50;
      *(undefined8 **)(this + 0x58) = puVar1 + 1;
    }
    else {
      std::__ndk1::
      vector<cocos2d::Vector<cocostudio::ActionFrame*>*,std::__ndk1::allocator<cocos2d::Vector<cocostudio::ActionFrame*>*>>
      ::__push_back_slow_path<cocos2d::Vector<cocostudio::ActionFrame*>*>
                ((vector<cocos2d::Vector<cocostudio::ActionFrame*>*,std::__ndk1::allocator<cocos2d::Vector<cocostudio::ActionFrame*>*>>
                  *)(this + 0x50),&local_50);
      iVar4 = *(int *)(this + 0x68);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

