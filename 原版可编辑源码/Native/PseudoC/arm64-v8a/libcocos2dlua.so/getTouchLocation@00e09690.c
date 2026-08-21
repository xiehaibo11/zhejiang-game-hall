
/* cocos2d::extension::Control::getTouchLocation(cocos2d::Touch*) */

void cocos2d::extension::Control::getTouchLocation(Touch *param_1)

{
  long lVar1;
  Touch *in_x1;
  undefined4 local_30 [2];
  long local_28;
  
                    /* catch() { ... } // from try @ 00e0946c with catch @ 00e09690 */
                    /* catch() { ... } // from try @ 00e095b0 with catch @ 00e09694 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00e092fc with catch @ 00e096b0
                       catch() { ... } // from try @ 00e09360 with catch @ 00e096b0 */
  local_30[0] = Touch::getLocation(in_x1);
                    /* try { // try from 00e096c4 to 00f09873 has its CatchHandler @ 00e096c4
                       catch() { ... } // from try @ 00e096c4 with catch @ 00e096c4
                       catch() { ... } // from try @ 00e098a8 with catch @ 00e096c4
                       catch() { ... } // from try @ 00e09908 with catch @ 00e096c4 */
  Node::convertToNodeSpace((Node *)param_1,(Vec2 *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

