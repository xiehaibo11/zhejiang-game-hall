
/* cocos2d::PhysicsWorld::getShapes(cocos2d::Vec2 const&) const */

void cocos2d::PhysicsWorld::getShapes(Vec2 *param_1)

{
  undefined4 *in_x1;
  undefined8 *in_x8;
  
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  cpSpacePointQuery(*in_x1,in_x1[1],0,*(undefined8 *)(param_1 + 0x28),0,0xffffffffffffffff,
                    PhysicsWorldCallback::getShapesAtPointFunc);
                    /* catch() { ... } // from try @ 0100cfc0 with catch @ 0100cf80 */
  return;
}

