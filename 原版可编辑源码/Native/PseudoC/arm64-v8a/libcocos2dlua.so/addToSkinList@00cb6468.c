
/* cocostudio::timeline::BoneNode::addToSkinList(cocos2d::Node*) */

void __thiscall cocostudio::timeline::BoneNode::addToSkinList(BoneNode *this,Node *param_1)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  Node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar4 = *(undefined8 **)(this + 0x398);
  local_40 = param_1;
  if (puVar4 == *(undefined8 **)(this + 0x3a0)) {
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    __push_back_slow_path<cocos2d::Node*const&>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x390),
               &local_40);
  }
  else {
    *puVar4 = param_1;
    *(undefined8 **)(this + 0x398) = puVar4 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_40);
  if (((param_1 != (Node *)0x0) &&
      (plVar2 = (long *)__dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                       &cocos2d::BlendProtocol::typeinfo,0xfffffffffffffffe),
      plVar2 != (long *)0x0)) &&
     ((piVar3 = (int *)(**(code **)(*plVar2 + 0x18))(), *(int *)(this + 0x350) != *piVar3 ||
      (*(int *)(this + 0x354) != piVar3[1])))) {
    (**(code **)(*plVar2 + 0x10))(plVar2,this + 0x350);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

