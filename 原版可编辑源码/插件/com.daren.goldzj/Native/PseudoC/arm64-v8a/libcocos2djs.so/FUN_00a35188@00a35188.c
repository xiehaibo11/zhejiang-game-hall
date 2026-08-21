
/* WARNING: Removing unreachable block (ram,0x00a35378) */
/* WARNING: Removing unreachable block (ram,0x00a35344) */
/* WARNING: Removing unreachable block (ram,0x00a352c4) */
/* WARNING: Removing unreachable block (ram,0x00a35234) */
/* WARNING: Removing unreachable block (ram,0x00a353ac) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff90 : 0x00a35240 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_00a35188(uint *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_70;
  
                    /* catch() { ... } // from try @ 00a350c4 with catch @ 00a35190 */
                    /* catch() { ... } // from try @ 00a350dc with catch @ 00a351a8 */
                    /* catch() { ... } // from try @ 00a3509c with catch @ 00a351ac */
                    /* catch() { ... } // from try @ 00a350e4 with catch @ 00a351b0 */
  if (param_1[1] != 0) {
    return 2;
  }
                    /* catch() { ... } // from try @ 00a35088 with catch @ 00a351d8 */
                    /* catch() { ... } // from try @ 00a3505c with catch @ 00a351dc */
  switch(param_2) {
  case 1:
                    /* try { // try from 00a3522c to 00b3526f has its CatchHandler @ 00a3522c
                       catch() { ... } // from try @ 00a3522c with catch @ 00a3522c
                       catch() { ... } // from try @ 00a35288 with catch @ 00a3522c */
    *param_1 = *param_1 | 1 << (ulong)((uint)local_70 & 0x1f);
                    /* try { // try from 00a35270 to 00b35287 has its CatchHandler @ 00a352b8 */
    lVar1 = 0;
    switch((uint)local_70) {
    case 2:
      if (*(long *)(param_1 + 0x14) == 0) {
                    /* try { // try from 00a35288 to 00b352cb has its CatchHandler @ 00a3522c */
        lVar1 = FUN_00a1b9e8(0,0,0,1);
        *(long *)(param_1 + 0x14) = lVar1;
        return (ulong)(lVar1 == 0) << 2;
      }
      break;
    case 3:
    case 5:
      goto switchD_00a35308_caseD_3;
    case 4:
      if (*(long *)(param_1 + 0x16) == 0) {
                    /* try { // try from 00a35438 to 00b3545f has its CatchHandler @ 00a35438
                       catch() { ... } // from try @ 00a35438 with catch @ 00a35438
                       catch() { ... } // from try @ 00a3550c with catch @ 00a35438 */
        param_1[0x18] = 8;
        param_1[0x19] = 0;
        lVar1 = (*(code *)PTR_calloc_01d1b760)(8,0x78);
        *(long *)(param_1 + 0x16) = lVar1;
                    /* try { // try from 00a35460 to 00b35473 has its CatchHandler @ 00a35550 */
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        return (ulong)(lVar1 == 0) << 2;
      }
      break;
    default:
      goto switchD_00a35218_default;
    }
    lVar1 = 0;
    break;
  case 2:
                    /* catch() { ... } // from try @ 00a35270 with catch @ 00a352b8 */
    *param_1 = *param_1 & (1 << (ulong)((uint)local_70 & 0x1f) ^ 0xffffffffU);
    lVar1 = 0;
    switch((uint)local_70) {
    case 2:
      lVar1 = 0;
      if (*(long *)(param_1 + 0x14) != 0) {
        FUN_00a1cc80();
        lVar1 = 0;
                    /* try { // try from 00a3531c to 00b3532b has its CatchHandler @ 00a3541c */
        param_1[0x14] = 0;
        param_1[0x15] = 0;
      }
      break;
    case 3:
    case 5:
      break;
    case 4:
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x16));
      lVar1 = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      break;
    default:
      goto switchD_00a35218_default;
    }
    break;
  case 3:
                    /* try { // try from 00a3532c to 00b35437 has its CatchHandler @ 00a352cc */
    lVar1 = 0;
    *(undefined8 *)(param_1 + 2) = local_70;
    break;
  case 4:
    lVar1 = 0;
    *(undefined8 *)(param_1 + 4) = local_70;
    break;
  case 5:
    lVar1 = 0;
    *(undefined8 *)(param_1 + 6) = local_70;
    break;
  default:
switchD_00a35218_default:
    lVar1 = 1;
  }
switchD_00a35308_caseD_3:
  return lVar1;
}

