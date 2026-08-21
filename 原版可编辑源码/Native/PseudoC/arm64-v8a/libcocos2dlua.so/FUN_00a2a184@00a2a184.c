
/* WARNING: Removing unreachable block (ram,0x00a2a3f8) */
/* WARNING: Removing unreachable block (ram,0x00a2a3c4) */
/* WARNING: Removing unreachable block (ram,0x00a2a390) */
/* WARNING: Removing unreachable block (ram,0x00a2a2ac) */
/* WARNING: Removing unreachable block (ram,0x00a2a5a8) */
/* WARNING: Removing unreachable block (ram,0x00a2a35c) */
/* WARNING: Removing unreachable block (ram,0x00a2a540) */
/* WARNING: Removing unreachable block (ram,0x00a2a574) */
/* WARNING: Removing unreachable block (ram,0x00a2a310) */
/* WARNING: Removing unreachable block (ram,0x00a2a50c) */
/* WARNING: Removing unreachable block (ram,0x00a2a4d0) */
/* WARNING: Removing unreachable block (ram,0x00a2a494) */
/* WARNING: Removing unreachable block (ram,0x00a2a460) */
/* WARNING: Removing unreachable block (ram,0x00a2a244) */
/* WARNING: Removing unreachable block (ram,0x00a2a42c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x00a2a250 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00a2a184(long *param_1,int param_2)

{
  undefined4 uVar1;
  long local_60;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else {
                    /* try { // try from 00a2a1d4 to 00b2a223 has its CatchHandler @ 00a2a1d4
                       catch() { ... } // from try @ 00a2a1d4 with catch @ 00a2a1d4
                       catch() { ... } // from try @ 00a2a270 with catch @ 00a2a1d4
                       catch() { ... } // from try @ 00a2a2b4 with catch @ 00a2a1d4 */
    uVar1 = 6;
    if (param_2 < 0x2712) {
      switch(param_2) {
      case 3:
                    /* try { // try from 00a2a2a0 to 00b2a2b3 has its CatchHandler @ 00a2a2f4 */
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
                    /* try { // try from 00a2a224 to 00b2a26f has its CatchHandler @ 00a2a2f4 */
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
        uVar1 = FUN_00a2ce9c(local_60,param_1 + 0x2a);
        break;
      case 0x271c:
        uVar1 = FUN_00a2d0b8(local_60,param_1 + 0x2b);
        break;
      case 0x271f:
        uVar1 = 0;
        param_1[9] = local_60;
      }
    }
    else if (param_2 < 0x4e2e) {
      if (param_2 == 0x4e21) {
        uVar1 = 0;
        param_1[6] = local_60;
      }
      else if (param_2 == 0x4e24) {
        uVar1 = 0;
        param_1[0x2c] = local_60;
      }
    }
    else if (param_2 == 0x4e2e) {
      uVar1 = 0;
      param_1[8] = local_60;
    }
    else if (param_2 == 0x7539) {
      uVar1 = 0;
      param_1[0x28] = local_60;
    }
    else {
                    /* catch() { ... } // from try @ 00a2a224 with catch @ 00a2a2f4
                       catch() { ... } // from try @ 00a2a2a0 with catch @ 00a2a2f4 */
      if (param_2 == 0x753a) {
        uVar1 = 0;
        param_1[0x29] = local_60;
      }
    }
  }
                    /* try { // try from 00a2a270 to 00b2a29f has its CatchHandler @ 00a2a1d4 */
  return uVar1;
}

