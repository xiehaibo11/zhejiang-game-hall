
/* cocostudio::timeline::BoneNode::getAllSubSkins() const */

void __thiscall cocostudio::timeline::BoneNode::getAllSubSkins(BoneNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *in_x8;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *local_68;
  undefined8 *local_60;
  Ref *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  getAllSubBones();
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  puVar6 = local_68;
  puVar5 = local_68;
  if (local_68 != local_60) {
    do {
      plVar4 = (long *)(**(code **)(*(long *)*puVar5 + 0x578))();
      puVar2 = (undefined8 *)plVar4[1];
      for (puVar6 = (undefined8 *)*plVar4; puVar6 != puVar2; puVar6 = puVar6 + 1) {
        puVar1 = *(undefined8 **)(in_x8 + 8);
        local_50 = (Ref *)*puVar6;
        if (puVar1 == *(undefined8 **)(in_x8 + 0x10)) {
          std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
          __push_back_slow_path<cocos2d::Node*const&>(in_x8,(Node **)&local_50);
        }
        else {
          *puVar1 = local_50;
          *(undefined8 **)(in_x8 + 8) = puVar1 + 1;
        }
        cocos2d::Ref::retain(local_50);
      }
      puVar5 = puVar5 + 1;
      puVar2 = local_68;
      puVar6 = local_60;
    } while (puVar5 != local_60);
    for (; puVar2 != local_60; puVar2 = puVar2 + 1) {
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar6 = local_68;
    }
  }
  if (puVar6 != (undefined8 *)0x0) {
    operator_delete(puVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

