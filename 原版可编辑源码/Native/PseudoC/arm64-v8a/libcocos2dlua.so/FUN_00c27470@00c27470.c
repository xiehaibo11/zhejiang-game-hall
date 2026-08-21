
void FUN_00c27470(long param_1,undefined8 *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int local_8 [2];
  
  param_3 = param_3 & 0xffffffff;
  while( true ) {
    uVar2 = *(uint *)(**(long **)(param_1 + 0x50) + param_3 * 0x18);
    if (uVar2 >> 0x1c != 8) break;
    param_3 = (ulong)(uVar2 & 0xffff);
  }
  uVar1 = *(uint *)(**(long **)(param_1 + 0x50) + param_3 * 0x18 + 4);
  if (((uVar2 & 0xfe000000) == 0x2000000) && (uVar1 < 5)) {
    FUN_00c263a0(param_1,0x3d);
    uVar1 = uVar1 * -8 + 0x20;
    FUN_00c26828(param_1,local_8);
    FUN_00c26d5c(param_1,local_8,0);
    FUN_00c0e728(*(undefined8 *)(param_1 + 0x50),param_2);
    piVar4 = (int *)*param_2;
    *piVar4 = ((uint)param_3 | 0x2000000) + 0xb0000000;
    uVar3 = local_8[0] << (ulong)(uVar1 & 0x1f);
    if ((uVar2 >> 0x17 & 1) == 0) {
      piVar4[1] = (int)uVar3 >> (uVar1 & 0x1f);
      return;
    }
    piVar4[1] = uVar3 >> (ulong)(uVar1 & 0x1f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c2520c(param_1,0xb83);
}

