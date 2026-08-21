
/* cocos2d::PhysicsShapeCircle::calculateDefaultMoment() */

void cocos2d::PhysicsShapeCircle::calculateDefaultMoment(void)

{
  long in_x0;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 in_s1;
  undefined4 in_register_00005024;
  float fVar3;
  
  fVar3 = *(float *)(in_x0 + 0x50);
  if (fVar3 == 3.4028235e+38) {
    return;
  }
                    /* catch() { ... } // from try @ 0100983c with catch @ 01009894 */
  uVar1 = **(undefined8 **)(in_x0 + 0x30);
  uVar2 = cpCircleShapeGetRadius(uVar1);
  uVar1 = cpCircleShapeGetOffset(uVar1);
                    /* catch() { ... } // from try @ 010098fc with catch @ 010098b0 */
  cpMomentForCircle(fVar3,0,uVar2,uVar1,CONCAT44(in_register_00005024,in_s1));
  return;
}

