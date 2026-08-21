
/* cocos2d::PhysicsShapeEdgeChain::getPoints(cocos2d::Vec2*) const */

void cocos2d::PhysicsShapeEdgeChain::getPoints(Vec2 *param_1)

{
  undefined8 *puVar1;
  long in_x1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 in_s1;
  
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar4 == puVar1) {
    uVar2 = 0;
  }
  else {
    iVar5 = 0;
    puVar6 = (undefined4 *)(in_x1 + 4);
    do {
      puVar3 = puVar4 + 1;
      uVar7 = cpSegmentShapeGetA(*puVar4);
      puVar6[-1] = uVar7;
      *puVar6 = in_s1;
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + -1;
      puVar4 = puVar3;
    } while (puVar1 != puVar3);
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    uVar2 = (ulong)(uint)-iVar5;
  }
  uVar7 = cpSegmentShapeGetB(puVar4[-1]);
  puVar6 = (undefined4 *)(in_x1 + uVar2 * 8);
  *puVar6 = uVar7;
  puVar6[1] = in_s1;
  return;
}

