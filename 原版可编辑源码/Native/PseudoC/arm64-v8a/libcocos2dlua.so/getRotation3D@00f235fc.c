
/* cocos2d::Node::getRotation3D() const */

void __thiscall cocos2d::Node::getRotation3D(Node *this)

{
  long lVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f23624 to 0102362f has its CatchHandler @ 00f23640 */
  Vec3::Vec3((Vec3 *)&local_38,*(float *)(this + 0x24),*(float *)(this + 0x28),
             *(float *)(this + 0x2c));
                    /* try { // try from 00f23630 to 01023653 has its CatchHandler @ 00f235e0 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00f23624 with catch @ 00f23640 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38,uStack_34,local_30);
}

