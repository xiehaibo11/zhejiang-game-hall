
/* cocos2d::PUDynamicAttributeCurved::copyAttributesTo(cocos2d::PUDynamicAttribute*) */

void __thiscall
cocos2d::PUDynamicAttributeCurved::copyAttributesTo
          (PUDynamicAttributeCurved *this,PUDynamicAttribute *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_1 != (PUDynamicAttribute *)0x0) && (*(int *)(param_1 + 0x24) == 2)) {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(this + 0xa8);
    *(PUDynamicAttributeCurved *)(param_1 + 0x30) = this[0x30];
    if (this != (PUDynamicAttributeCurved *)param_1) {
      std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::
      assign<cocos2d::Vec3*>
                ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(param_1 + 0x38),
                 *(Vec3 **)(this + 0x38),*(Vec3 **)(this + 0x40));
      std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::
      assign<cocos2d::Vec3*>
                ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(param_1 + 0x50),
                 *(Vec3 **)(this + 0x50),*(Vec3 **)(this + 0x58));
    }
    uVar5 = *(undefined8 *)(this + 0x98);
    uVar7 = *(undefined8 *)(this + 0x90);
    uVar6 = *(undefined8 *)(this + 0x88);
    uVar9 = *(undefined8 *)(this + 0x80);
    uVar8 = *(undefined8 *)(this + 0x78);
    uVar11 = *(undefined8 *)(this + 0x70);
    uVar10 = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(this + 0xa0);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    *(undefined8 *)(param_1 + 0x80) = uVar9;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    *(undefined8 *)(param_1 + 0x70) = uVar11;
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x2c);
    puVar4 = *(undefined8 **)(this + 0xb0);
    puVar2 = *(undefined8 **)(this + 0xb8);
    if (puVar4 != puVar2) {
      do {
        local_50 = *puVar4;
        puVar1 = *(undefined8 **)(param_1 + 0xb8);
        if (puVar1 == *(undefined8 **)(param_1 + 0xc0)) {
          std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
          __push_back_slow_path<cocos2d::Vec2_const&>
                    ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(param_1 + 0xb0)
                     ,(Vec2 *)&local_50);
        }
        else {
          *puVar1 = local_50;
          *(undefined8 **)(param_1 + 0xb8) = puVar1 + 1;
        }
        puVar4 = puVar4 + 1;
      } while (puVar2 != puVar4);
    }
    processControlPoints((PUDynamicAttributeCurved *)param_1);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

