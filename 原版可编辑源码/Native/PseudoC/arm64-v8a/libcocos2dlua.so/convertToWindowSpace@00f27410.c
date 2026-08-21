
/* cocos2d::Node::convertToWindowSpace(cocos2d::Vec2 const&) const */

void cocos2d::Node::convertToWindowSpace(Vec2 *param_1)

{
  long lVar1;
  Vec2 *in_x1;
  undefined4 local_30 [2];
  long local_28;
  
                    /* try { // try from 00f27420 to 0102742b has its CatchHandler @ 00f27468 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f2742c to 0102747b has its CatchHandler @ 00f27378 */
  local_30[0] = convertToWorldSpace((Node *)param_1,in_x1);
  Director::convertToUI(*(Director **)(param_1 + 0x198),(Vec2 *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

