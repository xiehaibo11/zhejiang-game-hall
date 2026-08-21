
void FUN_00e49e1c(long param_1,long *param_2,ulong param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0xb0) + 0x38);
  uVar2 = strtol(*(char **)(*(long *)(*param_2 + 0x290) + (param_3 & 0xffffffff) * 8),(char **)0x0,
                 10);
  lVar3 = *(long *)(param_1 + 0x130);
  FUN_00e14cc8(lVar3);
  *(undefined8 *)(lVar3 + 0x120) = 0;
  *(undefined4 *)(lVar3 + 0x90) = 0;
  *(undefined8 *)(lVar3 + 0x100) = 0;
  *(undefined8 *)(lVar3 + 0x108) = 0;
  *(undefined8 *)(lVar3 + 0xf8) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0xec) = 0;
  *(undefined8 *)(lVar3 + 0xe4) = 0;
  *(undefined8 *)(lVar3 + 0xe0) = 0;
  *(undefined8 *)(lVar3 + 0xd8) = 0;
  *(undefined8 *)(lVar3 + 0xd0) = 0;
  *(undefined8 *)(lVar3 + 200) = 0;
  *(undefined8 *)(lVar3 + 0xc0) = 0;
  *(undefined8 *)(lVar3 + 0xb8) = 0;
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0x98) = 0;
  iVar1 = (**(code **)(lVar4 + 0x90))
                    (*(undefined8 *)(param_1 + 0x130),param_2[0xb],uVar2 & 0xffffffff,param_4 | 8);
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x130);
    uVar5 = *(undefined8 *)(lVar3 + 0x50);
    uVar7 = *(undefined8 *)(lVar3 + 0x68);
    uVar6 = *(undefined8 *)(lVar3 + 0x60);
    uVar9 = *(undefined8 *)(lVar3 + 0x38);
    uVar8 = *(undefined8 *)(lVar3 + 0x30);
    uVar11 = *(undefined8 *)(lVar3 + 0x48);
    uVar10 = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar3 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    *(undefined8 *)(param_1 + 0x68) = uVar7;
    *(undefined8 *)(param_1 + 0x60) = uVar6;
    *(undefined8 *)(param_1 + 0x38) = uVar9;
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(undefined8 *)(param_1 + 0x48) = uVar11;
    *(undefined8 *)(param_1 + 0x40) = uVar10;
    uVar5 = *(undefined8 *)(lVar3 + 0x70);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar3 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(lVar3 + 0x90);
    uVar6 = *(undefined8 *)(lVar3 + 0xe0);
    uVar5 = *(undefined8 *)(lVar3 + 0xd8);
    uVar8 = *(undefined8 *)(lVar3 + 0xd0);
    uVar7 = *(undefined8 *)(lVar3 + 200);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar3 + 0xe8);
    *(undefined8 *)(param_1 + 0xe0) = uVar6;
    *(undefined8 *)(param_1 + 0xd8) = uVar5;
    *(undefined8 *)(param_1 + 0xd0) = uVar8;
    *(undefined8 *)(param_1 + 200) = uVar7;
    uVar6 = *(undefined8 *)(lVar3 + 0xb0);
    uVar5 = *(undefined8 *)(lVar3 + 0xa8);
    uVar8 = *(undefined8 *)(lVar3 + 0xa0);
    uVar7 = *(undefined8 *)(lVar3 + 0x98);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar3 + 0xb8);
    *(undefined8 *)(param_1 + 0xb0) = uVar6;
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    *(undefined8 *)(param_1 + 0xa0) = uVar8;
    *(undefined8 *)(param_1 + 0x98) = uVar7;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(lVar3 + 0xc0);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(lVar3 + 0xf0);
    uVar5 = *(undefined8 *)(lVar3 + 0xf8);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar3 + 0x100);
    *(undefined8 *)(param_1 + 0xf8) = uVar5;
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(lVar3 + 0x108);
  }
  return;
}

