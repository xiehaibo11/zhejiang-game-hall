
uint FUN_00c0e728(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 < *(uint *)((long)param_1 + 0xc)) {
    lVar3 = *param_1;
  }
  else {
    if (0xffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1[2],0x8b);
    }
    lVar3 = FUN_00c1a384(param_1[2],*param_1,(long)param_1 + 0xc,0x10000,0x18);
    *param_1 = lVar3;
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  lVar1 = lVar3 + (ulong)uVar2 * 0x18;
  *param_2 = lVar1;
  *(undefined4 *)(lVar3 + (ulong)uVar2 * 0x18) = 0;
  *(undefined4 *)(lVar1 + 4) = 0;
  *(undefined2 *)(lVar1 + 8) = 0;
  *(undefined2 *)(lVar1 + 10) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return uVar2;
}

