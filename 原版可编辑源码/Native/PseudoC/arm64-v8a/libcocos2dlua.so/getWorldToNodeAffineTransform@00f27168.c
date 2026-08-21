
/* cocos2d::Node::getWorldToNodeAffineTransform() const */

void __thiscall cocos2d::Node::getWorldToNodeAffineTransform(Node *this)

{
  long lVar1;
  AffineTransform *extraout_x1;
  cocos2d acStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00f271ac with catch @ 00f2717c */
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x438))(acStack_40);
  AffineTransformInvert(acStack_40,extraout_x1);
                    /* try { // try from 00f271a4 to 010271ab has its CatchHandler @ 00f271d4 */
                    /* try { // try from 00f271ac to 010271ef has its CatchHandler @ 00f2717c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

