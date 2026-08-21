
/* cocostudio::timeline::BoneNode::getVisibleSkins() const */

void cocostudio::timeline::BoneNode::getVisibleSkins(void)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x0;
  ulong uVar3;
  vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *in_x8;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Ref *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  puVar5 = *(undefined8 **)(in_x0 + 0x398);
  for (puVar4 = *(undefined8 **)(in_x0 + 0x390); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    uVar3 = (**(code **)(*(long *)*puVar4 + 0x178))();
    if ((uVar3 & 1) != 0) {
      puVar1 = *(undefined8 **)(in_x8 + 8);
      local_40 = (Ref *)*puVar4;
      if (puVar1 == *(undefined8 **)(in_x8 + 0x10)) {
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
        __push_back_slow_path<cocos2d::Node*const&>(in_x8,(Node **)&local_40);
      }
      else {
        *puVar1 = local_40;
        *(undefined8 **)(in_x8 + 8) = puVar1 + 1;
      }
      cocos2d::Ref::retain(local_40);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

