
/* cocos2d::Mat4::getInversed() const */

void cocos2d::Mat4::getInversed(void)

{
  undefined8 *in_x0;
  Mat4 *in_x8;
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
  *(undefined8 *)(in_x8 + 0x28) = in_x0[5];
  *(undefined8 *)(in_x8 + 0x20) = uVar1;
  *(undefined8 *)(in_x8 + 0x38) = uVar3;
  *(undefined8 *)(in_x8 + 0x30) = uVar2;
  *(undefined8 *)(in_x8 + 8) = uVar5;
  *(undefined8 *)in_x8 = uVar4;
  *(undefined8 *)(in_x8 + 0x18) = uVar7;
  *(undefined8 *)(in_x8 + 0x10) = uVar6;
  inverse(in_x8);
  return;
}

