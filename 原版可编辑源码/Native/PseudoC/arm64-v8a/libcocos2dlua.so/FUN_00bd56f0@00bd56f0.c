
void FUN_00bd56f0(long *param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  ulong in_x12;
  long in_x13;
  ulong in_x14;
  ulong in_x15;
  ulong uVar8;
  ulong in_x16;
  ulong uVar9;
  ulong in_x17;
  long lVar10;
  
  uVar2 = *param_3;
  uVar4 = param_3[1];
  uVar3 = param_3[2];
  uVar5 = param_3[3];
  lVar6 = uVar2 - in_x14;
  uVar9 = ~in_x15;
  bVar1 = CARRY8(uVar4 + uVar9,(ulong)(in_x14 <= uVar2));
  uVar8 = uVar4 - (in_x15 + (in_x14 > uVar2));
  uVar2 = ~in_x16;
  bVar7 = CARRY8(uVar3 + uVar2,(ulong)(CARRY8(uVar4,uVar9) || bVar1));
  uVar9 = uVar3 - (in_x16 + (!CARRY8(uVar4,uVar9) && !bVar1));
  uVar4 = ~in_x17;
  bVar1 = CARRY8(uVar5 + uVar4,(ulong)(CARRY8(uVar3,uVar2) || bVar7));
  lVar10 = uVar5 - (in_x17 + (!CARRY8(uVar3,uVar2) && !bVar7));
  bVar7 = CARRY8(uVar8,in_x12) || CARRY8(uVar8 + in_x12,(ulong)(lVar6 != 0));
  uVar2 = uVar9;
  if (!CARRY8(uVar5,uVar4) && !bVar1) {
    uVar2 = uVar9 + bVar7;
    uVar8 = uVar8 + in_x12 + (ulong)(lVar6 != 0);
    lVar6 = lVar6 + -1;
  }
  *param_1 = lVar6;
  param_1[1] = uVar8;
  if (!CARRY8(uVar5,uVar4) && !bVar1) {
    lVar10 = lVar10 + in_x13 + (ulong)CARRY8(uVar9,(ulong)bVar7);
  }
  param_1[2] = uVar2;
  param_1[3] = lVar10;
  return;
}

