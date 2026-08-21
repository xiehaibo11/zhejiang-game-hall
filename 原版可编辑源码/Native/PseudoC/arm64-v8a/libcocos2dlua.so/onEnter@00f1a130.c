
/* cocos2d::BaseLight::onEnter() */

void __thiscall cocos2d::BaseLight::onEnter(BaseLight *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  BaseLight *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar3 = (**(code **)(*(long *)this + 0x368))();
  if (lVar3 != 0) {
    puVar5 = *(undefined8 **)(lVar3 + 0x330);
    puVar4 = *(undefined8 **)(lVar3 + 0x338);
    if ((puVar5 != puVar4) && ((BaseLight *)*puVar5 != this)) {
      do {
        if (puVar4 + -1 == puVar5) goto LAB_00f1a1ac;
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 1;
      } while ((BaseLight *)*puVar1 != this);
    }
    if (puVar5 == puVar4) {
LAB_00f1a1ac:
      local_30 = this;
      if (puVar4 < *(undefined8 **)(lVar3 + 0x340)) {
        *puVar4 = this;
        *(undefined8 **)(lVar3 + 0x338) = puVar4 + 1;
      }
      else {
        std::__ndk1::vector<cocos2d::BaseLight*,std::__ndk1::allocator<cocos2d::BaseLight*>>::
        __push_back_slow_path<cocos2d::BaseLight*>
                  ((vector<cocos2d::BaseLight*,std::__ndk1::allocator<cocos2d::BaseLight*>> *)
                   (lVar3 + 0x330),&local_30);
      }
    }
  }
  Node::onEnter((Node *)this);
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

