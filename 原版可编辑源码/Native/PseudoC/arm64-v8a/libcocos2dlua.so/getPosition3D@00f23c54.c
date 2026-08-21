
/* cocos2d::Node::getPosition3D() const */

void __thiscall cocos2d::Node::getPosition3D(Node *this)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_38,*(float *)(this + 0x50),*(float *)(this + 0x54),
             *(float *)(this + 0x58));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}

