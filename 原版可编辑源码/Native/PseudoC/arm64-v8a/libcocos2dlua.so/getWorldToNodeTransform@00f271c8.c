
/* cocos2d::Node::getWorldToNodeTransform() const */

void __thiscall cocos2d::Node::getWorldToNodeTransform(Node *this)

{
  long lVar1;
  Mat4 aMStack_68 [64];
  long local_28;
  
                    /* catch() { ... } // from try @ 00f271a4 with catch @ 00f271d4 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x430))(aMStack_68);
  Mat4::getInversed();
  Mat4::~Mat4(aMStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

