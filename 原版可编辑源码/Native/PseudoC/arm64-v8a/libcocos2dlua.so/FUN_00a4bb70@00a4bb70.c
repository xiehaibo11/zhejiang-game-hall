
/* WARNING: Removing unreachable block (ram,0x00a4bd60) */
/* WARNING: Removing unreachable block (ram,0x00a4bd2c) */
/* WARNING: Removing unreachable block (ram,0x00a4bcac) */
/* WARNING: Removing unreachable block (ram,0x00a4bc1c) */
/* WARNING: Removing unreachable block (ram,0x00a4bd94) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff90 : 0x00a4bc28 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_00a4bb70(uint *param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_70;
  
                    /* try { // try from 00a4bb90 to 00b4bbf3 has its CatchHandler @ 00a4bb90
                       catch() { ... } // from try @ 00a4bb90 with catch @ 00a4bb90
                       catch() { ... } // from try @ 00a4bc28 with catch @ 00a4bb90
                       catch() { ... } // from try @ 00a4bcd4 with catch @ 00a4bb90
                       catch() { ... } // from try @ 00a4bdbc with catch @ 00a4bb90
                       catch() { ... } // from try @ 00a4be14 with catch @ 00a4bb90 */
  if (param_1[1] != 0) {
    return 2;
  }
                    /* try { // try from 00a4bbf4 to 00b4bc27 has its CatchHandler @ 00a4be18 */
  switch(param_2) {
  case 1:
                    /* try { // try from 00a4bc28 to 00b4bc77 has its CatchHandler @ 00a4bb90 */
    *param_1 = *param_1 | 1 << (ulong)((uint)local_70 & 0x1f);
    lVar1 = 0;
    switch((uint)local_70) {
    case 2:
      if (*(long *)(param_1 + 0x14) == 0) {
                    /* try { // try from 00a4bc78 to 00b4bcd3 has its CatchHandler @ 00a4be18 */
        lVar1 = FUN_00a313d0(0,0,0,1);
        *(long *)(param_1 + 0x14) = lVar1;
        return (ulong)(lVar1 == 0) << 2;
      }
      break;
    case 3:
    case 5:
      goto switchD_00a4bcf0_caseD_3;
    case 4:
                    /* try { // try from 00a4bdb0 to 00b4bdbb has its CatchHandler @ 00a4be18 */
      if (*(long *)(param_1 + 0x16) == 0) {
                    /* catch() { ... } // from try @ 00a4bd28 with catch @ 00a4be20 */
        param_1[0x18] = 8;
        param_1[0x19] = 0;
        lVar1 = (*(code *)PTR_calloc_01769a18)(8,0x78);
        *(long *)(param_1 + 0x16) = lVar1;
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        return (ulong)(lVar1 == 0) << 2;
      }
      break;
    default:
      goto switchD_00a4bc00_default;
    }
    lVar1 = 0;
                    /* try { // try from 00a4bdbc to 00b4be0b has its CatchHandler @ 00a4bb90 */
    break;
  case 2:
                    /* try { // try from 00a4bcd4 to 00b4bd27 has its CatchHandler @ 00a4bb90 */
    *param_1 = *param_1 & (1 << (ulong)((uint)local_70 & 0x1f) ^ 0xffffffffU);
    lVar1 = 0;
    switch((uint)local_70) {
    case 2:
      lVar1 = 0;
      if (*(long *)(param_1 + 0x14) != 0) {
        FUN_00a32668();
        lVar1 = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
      }
      break;
    case 3:
    case 5:
      break;
    case 4:
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x16));
      lVar1 = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      break;
    default:
      goto switchD_00a4bc00_default;
    }
    break;
  case 3:
                    /* try { // try from 00a4bd28 to 00b4bd37 has its CatchHandler @ 00a4be20 */
    lVar1 = 0;
    *(undefined8 *)(param_1 + 2) = local_70;
    break;
  case 4:
    lVar1 = 0;
    *(undefined8 *)(param_1 + 4) = local_70;
    break;
  case 5:
                    /* try { // try from 00a4bd80 to 00b4bd8f has its CatchHandler @ 00a4be14 */
    lVar1 = 0;
    *(undefined8 *)(param_1 + 6) = local_70;
    break;
  default:
switchD_00a4bc00_default:
    lVar1 = 1;
  }
switchD_00a4bcf0_caseD_3:
  return lVar1;
}

