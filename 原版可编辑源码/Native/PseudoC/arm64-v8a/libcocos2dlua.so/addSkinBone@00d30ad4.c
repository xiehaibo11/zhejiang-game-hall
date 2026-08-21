
/* cocos2d::MeshSkin::addSkinBone(cocos2d::Bone3D*) */

void __thiscall cocos2d::MeshSkin::addSkinBone(MeshSkin *this,Bone3D *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Bone3D *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x38)) {
    std::__ndk1::vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>>::
    __push_back_slow_path<cocos2d::Bone3D*const&>
              ((vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>> *)(this + 0x28),
               &local_30);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x30) = puVar1 + 1;
  }
  Ref::retain((Ref *)local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

