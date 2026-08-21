
/* cocos2d::Bone3D::addChildBone(cocos2d::Bone3D*) */

void __thiscall cocos2d::Bone3D::addChildBone(Bone3D *this,Bone3D *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Bone3D *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 200);
  puVar3 = *(undefined8 **)(this + 0xd0);
  if ((puVar4 != puVar3) && ((Bone3D *)*puVar4 != param_1)) {
    do {
      if (puVar3 + -1 == puVar4) goto LAB_00d3be7c;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while ((Bone3D *)*puVar1 != param_1);
  }
  if (puVar4 == puVar3) {
LAB_00d3be7c:
    local_30 = param_1;
    if (puVar3 == *(undefined8 **)(this + 0xd8)) {
      std::__ndk1::vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>>::
      __push_back_slow_path<cocos2d::Bone3D*const&>
                ((vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>> *)(this + 200),
                 &local_30);
    }
    else {
      *puVar3 = param_1;
      *(undefined8 **)(this + 0xd0) = puVar3 + 1;
    }
    Ref::retain((Ref *)local_30);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

