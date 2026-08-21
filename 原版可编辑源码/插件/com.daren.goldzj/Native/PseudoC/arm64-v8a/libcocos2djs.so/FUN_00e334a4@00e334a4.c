
void FUN_00e334a4(long *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = *param_1;
  lVar5 = param_1[0x42];
  iVar1 = FUN_00e33214(lVar5,lVar6,param_1);
  if (iVar1 != 0) {
    return;
  }
  *(undefined4 *)(lVar5 + 0x2f0) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined1 *)(lVar5 + 0x360) = 0;
  *(undefined1 *)(lVar5 + 0x3c9) = param_2;
  uVar3 = *(undefined8 *)(lVar6 + 0x470);
  uVar4 = *(undefined8 *)(lVar6 + 0x468);
  *(undefined8 *)(lVar5 + 0x330) = 0;
  *(undefined8 *)(lVar5 + 0x328) = 0;
  *(undefined8 *)(lVar5 + 0x318) = uVar3;
  *(undefined8 *)(lVar5 + 800) = uVar4;
  if (*(long *)(lVar6 + 0x468) == 0) {
    uVar2 = 0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x280) = uVar3;
    *(undefined8 *)(lVar5 + 0x290) = uVar4;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    *(undefined4 *)(lVar5 + 0x278) = 2;
    uVar2 = (**(code **)(lVar6 + 0x488))(lVar5);
  }
  *(undefined4 *)((long)param_1 + 0x21c) = uVar2;
  *(undefined2 *)(lVar5 + 0x228) = 0;
  *(undefined8 *)(lVar5 + 0x220) = 0x4000000040000000;
  *(long *)(lVar5 + 0x218) = 0x4000000000000000;
  *(undefined4 *)(lVar5 + 0x26c) = 0x10001;
  *(undefined2 *)(lVar5 + 0x270) = 1;
  *(undefined8 *)(lVar5 + 0x230) = 1;
  lVar6 = *(long *)(lVar5 + 0x218);
  lVar8 = *(long *)(lVar5 + 0x230);
  lVar7 = *(long *)(lVar5 + 0x228);
  param_1[0x2b] = *(long *)(lVar5 + 0x220);
  param_1[0x2a] = lVar6;
  param_1[0x2d] = lVar8;
  param_1[0x2c] = lVar7;
  lVar6 = *(long *)(lVar5 + 600);
  lVar8 = *(long *)(lVar5 + 0x270);
  lVar7 = *(long *)(lVar5 + 0x268);
  lVar10 = *(long *)(lVar5 + 0x240);
  lVar9 = *(long *)(lVar5 + 0x238);
  lVar12 = *(long *)(lVar5 + 0x250);
  lVar11 = *(long *)(lVar5 + 0x248);
  param_1[0x33] = *(long *)(lVar5 + 0x260);
  param_1[0x32] = lVar6;
  param_1[0x35] = lVar8;
  param_1[0x34] = lVar7;
  param_1[0x2f] = lVar10;
  param_1[0x2e] = lVar9;
  param_1[0x31] = lVar12;
  param_1[0x30] = lVar11;
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(lVar5 + 0x2c8);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(lVar5 + 0x2d8);
  param_1[0x23] = *(long *)(lVar5 + 0x2e8);
  lVar6 = *(long *)(lVar5 + 0x308);
  param_1[0x25] = *(long *)(lVar5 + 0x310);
  param_1[0x24] = lVar6;
  lVar6 = *(long *)(lVar5 + 0x318);
  param_1[0x27] = *(long *)(lVar5 + 800);
  param_1[0x26] = lVar6;
  lVar6 = *(long *)(lVar5 + 0x328);
  param_1[0x29] = *(long *)(lVar5 + 0x330);
  param_1[0x28] = lVar6;
  return;
}

