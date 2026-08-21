
/* cocos2d::Skeleton3D::addBone(cocos2d::Bone3D*) */

void __thiscall cocos2d::Skeleton3D::addBone(Skeleton3D *this,Bone3D *param_1)

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
                    /* catch() { ... } // from try @ 00d3c968 with catch @ 00d3ca10 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00d3c958 with catch @ 00d3ca20 */
  __stack_chk_fail();
}

