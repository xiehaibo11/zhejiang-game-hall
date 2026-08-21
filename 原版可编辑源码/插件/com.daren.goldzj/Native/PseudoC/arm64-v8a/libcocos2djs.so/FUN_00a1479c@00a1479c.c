
/* WARNING: Removing unreachable block (ram,0x00a14a10) */
/* WARNING: Removing unreachable block (ram,0x00a149dc) */
/* WARNING: Removing unreachable block (ram,0x00a149a8) */
/* WARNING: Removing unreachable block (ram,0x00a148c4) */
/* WARNING: Removing unreachable block (ram,0x00a14bc0) */
/* WARNING: Removing unreachable block (ram,0x00a14974) */
/* WARNING: Removing unreachable block (ram,0x00a14b58) */
/* WARNING: Removing unreachable block (ram,0x00a14b8c) */
/* WARNING: Removing unreachable block (ram,0x00a14928) */
/* WARNING: Removing unreachable block (ram,0x00a14b24) */
/* WARNING: Removing unreachable block (ram,0x00a14ae8) */
/* WARNING: Removing unreachable block (ram,0x00a14aac) */
/* WARNING: Removing unreachable block (ram,0x00a14a78) */
/* WARNING: Removing unreachable block (ram,0x00a1485c) */
/* WARNING: Removing unreachable block (ram,0x00a14a44) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x00a14868 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00a1479c(long *param_1,int param_2)

{
  undefined4 uVar1;
  long local_60;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 6;
    if (param_2 < 0x2712) {
      switch(param_2) {
      case 3:
        uVar1 = 0;
        param_1[0x17] = local_60;
        break;
      case 6:
        uVar1 = 0;
        param_1[0x24] = local_60;
        break;
      case 7:
        uVar1 = 0;
        param_1[0x25] = local_60;
        break;
      case 8:
        uVar1 = 0;
        param_1[0x27] = local_60;
        break;
      case 0xd:
        uVar1 = 0;
        param_1[0x26] = local_60;
      }
    }
    else if (param_2 < 0x4e21) {
      switch(param_2) {
      case 0x2712:
        uVar1 = 0;
        param_1[7] = local_60;
        break;
      case 0x2715:
        uVar1 = 0;
        param_1[0x2d] = local_60;
        break;
      case 0x271b:
        uVar1 = FUN_00a174b4(local_60,param_1 + 0x2a);
        break;
      case 0x271c:
                    /* try { // try from 00a14adc to 00b14b23 has its CatchHandler @ 00a14adc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a14adc with catch @ 00a14adc
                        */
        uVar1 = FUN_00a176d0(local_60,param_1 + 0x2b);
        break;
      case 0x271f:
        uVar1 = 0;
        param_1[9] = local_60;
      }
    }
    else if (param_2 < 0x4e2e) {
      if (param_2 == 0x4e21) {
                    /* try { // try from 00a14ba8 to 00b14baf has its CatchHandler @ 00a14bd8 */
        uVar1 = 0;
        param_1[6] = local_60;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14ba8 with catch @ 00a14bd8
                        */
      }
      else if (param_2 == 0x4e24) {
        uVar1 = 0;
        param_1[0x2c] = local_60;
      }
    }
    else if (param_2 == 0x4e2e) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a14b24 with catch @ 00a14b4c
                        */
      uVar1 = 0;
      param_1[8] = local_60;
    }
    else if (param_2 == 0x7539) {
      uVar1 = 0;
      param_1[0x28] = local_60;
    }
    else if (param_2 == 0x753a) {
      uVar1 = 0;
      param_1[0x29] = local_60;
    }
  }
  return uVar1;
}

