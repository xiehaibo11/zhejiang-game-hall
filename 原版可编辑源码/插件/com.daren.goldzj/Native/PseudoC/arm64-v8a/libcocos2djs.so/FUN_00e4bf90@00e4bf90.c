
undefined8 FUN_00e4bf90(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  param_2[1] = *(undefined8 *)(lVar1 + 0x10);
  *param_2 = uVar2;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  uVar4 = *(undefined8 *)(lVar1 + 0x50);
  uVar3 = *(undefined8 *)(lVar1 + 0x48);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  uVar8 = *(undefined8 *)(lVar1 + 0x30);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  param_2[7] = *(undefined8 *)(lVar1 + 0x40);
  param_2[6] = uVar2;
  param_2[9] = uVar4;
  param_2[8] = uVar3;
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  param_2[5] = uVar8;
  param_2[4] = uVar7;
  uVar2 = *(undefined8 *)(lVar1 + 0x78);
  uVar4 = *(undefined8 *)(lVar1 + 0x90);
  uVar3 = *(undefined8 *)(lVar1 + 0x88);
  uVar6 = *(undefined8 *)(lVar1 + 0x60);
  uVar5 = *(undefined8 *)(lVar1 + 0x58);
  uVar8 = *(undefined8 *)(lVar1 + 0x70);
  uVar7 = *(undefined8 *)(lVar1 + 0x68);
  param_2[0xf] = *(undefined8 *)(lVar1 + 0x80);
  param_2[0xe] = uVar2;
  param_2[0x11] = uVar4;
  param_2[0x10] = uVar3;
  param_2[0xb] = uVar6;
  param_2[10] = uVar5;
  param_2[0xd] = uVar8;
  param_2[0xc] = uVar7;
  uVar2 = *(undefined8 *)(lVar1 + 0xb8);
  uVar4 = *(undefined8 *)(lVar1 + 0xd0);
  uVar3 = *(undefined8 *)(lVar1 + 200);
  uVar6 = *(undefined8 *)(lVar1 + 0xa0);
  uVar5 = *(undefined8 *)(lVar1 + 0x98);
  uVar8 = *(undefined8 *)(lVar1 + 0xb0);
  uVar7 = *(undefined8 *)(lVar1 + 0xa8);
  param_2[0x17] = *(undefined8 *)(lVar1 + 0xc0);
  param_2[0x16] = uVar2;
  param_2[0x19] = uVar4;
  param_2[0x18] = uVar3;
  param_2[0x13] = uVar6;
  param_2[0x12] = uVar5;
  param_2[0x15] = uVar8;
  param_2[0x14] = uVar7;
  return 0;
}

