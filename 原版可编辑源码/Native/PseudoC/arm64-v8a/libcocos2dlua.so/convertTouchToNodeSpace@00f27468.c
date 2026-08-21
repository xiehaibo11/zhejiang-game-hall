
/* cocos2d::Node::convertTouchToNodeSpace(cocos2d::Touch*) const */

void cocos2d::Node::convertTouchToNodeSpace(Touch *param_1)

{
  Touch *in_x1;
  undefined4 local_18 [2];
  
                    /* catch() { ... } // from try @ 00f27420 with catch @ 00f27468 */
                    /* catch() { ... } // from try @ 00f274a8 with catch @ 00f2747c */
  local_18[0] = Touch::getLocation(in_x1);
  convertToNodeSpace((Node *)param_1,(Vec2 *)local_18);
  return;
}

