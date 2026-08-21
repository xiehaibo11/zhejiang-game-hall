
/* cocos2d::Node::convertToNodeSpace(cocos2d::Vec2 const&) const */

undefined4 __thiscall cocos2d::Node::convertToNodeSpace(Node *this,Vec2 *param_1)

{
  long lVar1;
  undefined4 local_98 [4];
  float local_88;
  float fStack_84;
  float local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x448))(aMStack_78);
  Vec3::Vec3((Vec3 *)&local_88,*(float *)param_1,*(float *)(param_1 + 4),0.0);
  Vec3::Vec3((Vec3 *)local_98);
  Mat4::transformVector(aMStack_78,local_88,fStack_84,local_80,1.0,(Vec3 *)local_98);
  Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_98[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

