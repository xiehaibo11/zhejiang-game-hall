
/* cocos2d::Node::convertTouchToNodeSpaceAR(cocos2d::Touch*) const */

float cocos2d::Node::convertTouchToNodeSpaceAR(Touch *param_1)

{
  Touch *in_x1;
  float fVar1;
  undefined4 local_18 [2];
  
                    /* try { // try from 00f274a0 to 010274a7 has its CatchHandler @ 00f274c0 */
                    /* try { // try from 00f274a8 to 010274db has its CatchHandler @ 00f2747c */
  local_18[0] = Touch::getLocation(in_x1);
                    /* catch() { ... } // from try @ 00f274a0 with catch @ 00f274c0 */
  fVar1 = (float)convertToNodeSpace((Node *)param_1,(Vec2 *)local_18);
  return fVar1 - *(float *)(param_1 + 0x70);
}

