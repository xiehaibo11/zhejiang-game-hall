
undefined8 FUN_00c292cc(long param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  *(undefined4 *)(*(long *)(param_1 + 0x50) + 0xc4) = 0xffffffff;
  *(undefined1 *)(param_3 + 0x1e) = 0xff;
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_3 + 0x12);
  pbVar2 = *(byte **)(param_3 + 8);
  param_3[0x1a] = 1;
  param_3[0x1b] = 0;
  *(undefined1 *)((long)param_3 + 0x7f) = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  *(byte **)(param_3 + 8) = pbVar2 + 1;
  uVar1 = (uint)*pbVar2;
  *param_3 = uVar1;
  if (uVar1 == 0x5c) {
    FUN_00c24f64(param_3);
  }
  param_3[1] = 0;
  param_3[0x1c] = 0x38c0;
  FUN_00c2593c(param_3);
  if ((param_3[0x1d] & 1) == 0) {
    FUN_00c29260(param_3);
  }
  else {
    FUN_00c28d44(param_3);
  }
  if ((*(long *)(param_3 + 0x16) != 0) &&
     (*(long *)(param_3 + 0x16) != *(long *)(*(long *)(param_3 + 0x12) + 0x28))) {
                    /* WARNING: Subroutine does not return */
    FUN_00c2520c(param_3,0xc23);
  }
  return 0;
}

