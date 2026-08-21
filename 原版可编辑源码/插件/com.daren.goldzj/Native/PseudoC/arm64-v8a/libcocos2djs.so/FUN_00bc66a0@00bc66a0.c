
void FUN_00bc66a0(long *param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  ulong in_x12;
  long in_x13;
  ulong in_x14;
  ulong in_x15;
  ulong uVar6;
  ulong in_x16;
  ulong uVar7;
  ulong in_x17;
  long lVar8;
  
  uVar2 = *param_3;
  lVar4 = in_x14 - uVar2;
  uVar3 = ~param_3[1];
  bVar1 = CARRY8(in_x15 + uVar3,(ulong)(uVar2 <= in_x14));
  uVar6 = in_x15 - (param_3[1] + (ulong)(uVar2 > in_x14));
  uVar2 = ~param_3[2];
  bVar5 = CARRY8(in_x16 + uVar2,(ulong)(CARRY8(in_x15,uVar3) || bVar1));
  uVar7 = in_x16 - (param_3[2] + (ulong)(!CARRY8(in_x15,uVar3) && !bVar1));
  uVar3 = ~param_3[3];
  bVar1 = CARRY8(in_x17 + uVar3,(ulong)(CARRY8(in_x16,uVar2) || bVar5));
  lVar8 = in_x17 - (param_3[3] + (ulong)(!CARRY8(in_x16,uVar2) && !bVar5));
  bVar5 = CARRY8(uVar6,in_x12) || CARRY8(uVar6 + in_x12,(ulong)(lVar4 != 0));
  uVar2 = uVar7;
  if (!CARRY8(in_x17,uVar3) && !bVar1) {
    uVar2 = uVar7 + bVar5;
    uVar6 = uVar6 + in_x12 + (ulong)(lVar4 != 0);
    lVar4 = lVar4 + -1;
  }
  *param_1 = lVar4;
  param_1[1] = uVar6;
  if (!CARRY8(in_x17,uVar3) && !bVar1) {
    lVar8 = lVar8 + in_x13 + (ulong)CARRY8(uVar7,(ulong)bVar5);
  }
  param_1[2] = uVar2;
  param_1[3] = lVar8;
  return;
}

