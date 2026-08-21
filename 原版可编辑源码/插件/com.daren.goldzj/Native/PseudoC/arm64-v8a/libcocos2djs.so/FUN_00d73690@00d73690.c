
void FUN_00d73690(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,ulong *param_5,
                 int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x250)) {
    *(char **)(param_1 + 0x1a8) = "zstream unclaimed";
    return;
  }
  uVar8 = 0x400;
  uVar5 = 4;
  if (param_6 == 0) {
    uVar5 = 2;
  }
  *(undefined8 *)(param_1 + 400) = param_4;
  *(undefined4 *)(param_1 + 0x198) = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x180) == 0) {
      uVar3 = *param_3;
      uVar1 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = uVar8;
      }
      *param_3 = uVar3 - uVar1;
      if (uVar1 != 0) {
        png_read_data(param_1,param_2,uVar1);
        png_calculate_crc(param_1,param_2,uVar1);
      }
      *(undefined8 *)(param_1 + 0x178) = param_2;
      *(uint *)(param_1 + 0x180) = uVar1;
      iVar4 = *(int *)(param_1 + 0x198);
      uVar8 = uVar1;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x198);
    }
    if (iVar4 == 0) {
      uVar7 = *param_5;
      uVar6 = uVar7;
      if (0xfffffffe < uVar7) {
        uVar6 = 0xffffffff;
      }
      *param_5 = uVar7 - uVar6;
      *(int *)(param_1 + 0x198) = (int)uVar6;
    }
    uVar2 = uVar5;
    if (*param_3 != 0) {
      uVar2 = 0;
    }
    iVar4 = inflate(param_1 + 0x178,uVar2);
    if (iVar4 != 0) break;
    if ((*param_5 == 0) && (*(int *)(param_1 + 0x198) == 0)) {
      uVar6 = 0;
      uVar7 = 0;
      iVar4 = 0;
LAB_00d737d8:
      *param_5 = uVar6 + uVar7;
      *(undefined4 *)(param_1 + 0x198) = 0;
      png_zstream_error(param_1,iVar4);
      return;
    }
  }
  uVar6 = *param_5;
  uVar7 = (ulong)*(uint *)(param_1 + 0x198);
  goto LAB_00d737d8;
}

