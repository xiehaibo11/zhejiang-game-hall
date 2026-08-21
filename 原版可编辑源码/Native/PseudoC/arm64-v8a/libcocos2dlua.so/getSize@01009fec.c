
/* cocos2d::PhysicsShapeBox::getSize() const */

void cocos2d::PhysicsShapeBox::getSize(void)

{
  long in_x0;
  Size *in_x8;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_s1;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 01009ffc to 0110a00b has its CatchHandler @ 0100a34c */
  uVar1 = **(undefined8 **)(in_x0 + 0x30);
  fVar2 = (float)cpPolyShapeGetVert(uVar1,1);
  fVar5 = in_s1;
  fVar3 = (float)cpPolyShapeGetVert(uVar1,2);
  fVar6 = (in_s1 - fVar5) * (in_s1 - fVar5);
  fVar2 = (fVar2 - fVar3) * (fVar2 - fVar3) + fVar6;
  fVar3 = (float)cpPolyShapeGetVert(uVar1,0);
  fVar5 = fVar6;
  fVar4 = (float)cpPolyShapeGetVert(uVar1,1);
                    /* try { // try from 0100a06c to 0110a073 has its CatchHandler @ 0100a2d4 */
                    /* try { // try from 0100a074 to 0110a0db has its CatchHandler @ 01009f80 */
  Size::Size(in_x8,SQRT(fVar2),
             SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + (fVar6 - fVar5) * (fVar6 - fVar5)));
  return;
}

