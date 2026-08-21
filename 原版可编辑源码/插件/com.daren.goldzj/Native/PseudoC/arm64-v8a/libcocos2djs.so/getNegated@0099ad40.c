
/* cocos2d::Mat4::getNegated() const */

void cocos2d::Mat4::getNegated(void)

{
  undefined8 *in_x0;
  float *in_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = in_x0[4];
  uVar3 = in_x0[7];
  uVar2 = in_x0[6];
  uVar5 = in_x0[1];
  uVar4 = *in_x0;
  uVar7 = in_x0[3];
  uVar6 = in_x0[2];
                    /* try { // try from 0099ad4c to 00a9ad63 has its CatchHandler @ 0099af3c */
  *(undefined8 *)(in_x8 + 10) = in_x0[5];
  *(undefined8 *)(in_x8 + 8) = uVar1;
  *(undefined8 *)(in_x8 + 0xe) = uVar3;
  *(undefined8 *)(in_x8 + 0xc) = uVar2;
  *(undefined8 *)(in_x8 + 2) = uVar5;
  *(undefined8 *)in_x8 = uVar4;
  *(undefined8 *)(in_x8 + 6) = uVar7;
  *(undefined8 *)(in_x8 + 4) = uVar6;
  MathUtil::negateMatrix(in_x8,in_x8);
  return;
}

