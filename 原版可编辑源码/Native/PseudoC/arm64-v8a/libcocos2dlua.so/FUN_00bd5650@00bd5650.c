
void FUN_00bd5650(ulong param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  ulong in_x9;
  ulong in_x10;
  ulong in_x11;
  ulong in_x12;
  ulong in_x13;
  ulong in_x14;
  ulong in_x15;
  ulong uVar8;
  ulong in_x16;
  ulong uVar9;
  ulong in_x17;
  ulong uVar10;
  
  uVar3 = in_x14 + param_1;
  bVar6 = CARRY8(in_x15,in_x9) || CARRY8(in_x15 + in_x9,(ulong)CARRY8(in_x14,param_1));
  uVar8 = in_x15 + in_x9 + (ulong)CARRY8(in_x14,param_1);
  bVar7 = CARRY8(in_x16,in_x10) || CARRY8(in_x16 + in_x10,(ulong)bVar6);
  uVar9 = in_x16 + in_x10 + (ulong)bVar6;
  uVar10 = in_x17 + in_x11 + (ulong)bVar7;
  uVar2 = (ulong)(CARRY8(in_x17,in_x11) || CARRY8(in_x17 + in_x11,(ulong)bVar7));
  uVar5 = ~in_x12;
  bVar6 = CARRY8(uVar8 + uVar5,(ulong)(0xfffffffffffffffe < uVar3));
  bVar7 = CARRY8(uVar9 - 1,(ulong)(CARRY8(uVar8,uVar5) || bVar6));
  bVar1 = CARRY8(uVar2 - 1,
                 (ulong)(CARRY8(uVar10,~in_x13) ||
                        CARRY8(uVar10 + ~in_x13,(ulong)(uVar9 != 0 || bVar7))));
  uVar4 = uVar9;
  if (uVar2 != 0 || bVar1) {
    uVar4 = uVar9 - (!CARRY8(uVar8,uVar5) && !bVar6);
    uVar8 = uVar8 - (in_x12 + (0xfffffffffffffffe >= uVar3));
    uVar3 = uVar3 + 1;
  }
  *param_2 = uVar3;
  param_2[1] = uVar8;
  if (uVar2 != 0 || bVar1) {
    uVar10 = uVar10 - (in_x13 + (uVar9 == 0 && !bVar7));
  }
  param_2[2] = uVar4;
  param_2[3] = uVar10;
  return;
}

