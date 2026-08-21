
undefined8 FUN_00aea2c8(long param_1,int param_2,long *param_3,ulong *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  
                    /* try { // try from 00aea2cc to 00bea453 has its CatchHandler @ 00aea2cc
                       catch() { ... } // from try @ 00aea2cc with catch @ 00aea2cc
                       catch() { ... } // from try @ 00aea4f0 with catch @ 00aea2cc */
  if (param_2 == 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x1c) & 0x30000;
    puVar3 = &DAT_013d384c;
    if (uVar1 == 0x10000) {
LAB_00aea360:
      uVar5 = 2;
    }
    else {
      if (uVar1 == 0x20000) {
        puVar3 = &DAT_013d384e;
        goto LAB_00aea360;
      }
      if (uVar1 == 0x30000) {
        puVar3 = &DAT_013d384c;
        uVar5 = 4;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x2a0);
        *param_3 = lVar4;
        if (lVar4 != 0) {
          uVar5 = *(ulong *)(param_1 + 0x298);
          goto joined_r0x00aea394;
        }
        puVar3 = &DAT_013d3850;
        uVar5 = 8;
      }
    }
    *param_3 = (long)puVar3;
  }
  else {
    *param_3 = *(long *)(*(long *)(param_1 + 0x178) + 0x128);
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x178) + 0x120);
joined_r0x00aea394:
    if ((uVar5 & 1) != 0) {
      ERR_put_error(0x14,0x152,0x44,"ssl/t1_lib.c",0x123);
      uVar5 = 0;
      uVar2 = 0;
      goto LAB_00aea370;
    }
  }
  uVar5 = uVar5 >> 1;
  uVar2 = 1;
LAB_00aea370:
  *param_4 = uVar5;
  return uVar2;
}

