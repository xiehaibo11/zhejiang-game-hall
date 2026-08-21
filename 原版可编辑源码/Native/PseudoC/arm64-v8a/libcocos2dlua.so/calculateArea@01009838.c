
/* cocos2d::PhysicsShapeCircle::calculateArea() */

void __thiscall cocos2d::PhysicsShapeCircle::calculateArea(PhysicsShapeCircle *this)

{
  undefined8 uVar1;
  
                    /* try { // try from 0100983c to 0110984b has its CatchHandler @ 01009894 */
  uVar1 = cpCircleShapeGetRadius(**(undefined8 **)(this + 0x30));
                    /* try { // try from 0100984c to 011098af has its CatchHandler @ 01009814 */
  cpAreaForCircle(0,uVar1);
  return;
}

