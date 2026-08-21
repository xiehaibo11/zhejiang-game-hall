
/* WARNING: Type propagation algorithm not settling */

ulong SSL_get_sigalgs(long param_1,int param_2,int *param_3,int *param_4,int *param_5,byte *param_6,
                     byte *param_7)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int pkey_nid;
  long lVar4;
  
                    /* try { // try from 00ae0378 to 00be0383 has its CatchHandler @ 00ae04fc */
  lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x2c0);
  if (lVar4 == 0) {
    return 0;
  }
  if (param_2 < 0) goto LAB_00ae054c;
  if (*(int *)(*(long *)(param_1 + 0x90) + 0x2c8) <= param_2 * 2) {
    return 0;
  }
  pbVar1 = (byte *)(lVar4 + param_2 * 2);
  if (param_7 != (byte *)0x0) {
    *param_7 = *pbVar1;
  }
  if (param_6 != (byte *)0x0) {
    *param_6 = pbVar1[1];
  }
  if (((param_3 == (int *)0x0) && (param_4 == (int *)0x0)) && (param_5 == (int *)0x0))
  goto LAB_00ae054c;
  if (param_4 == (int *)0x0 && param_5 == (int *)0x0) {
    iVar3 = 0;
    if (param_3 == (int *)0x0 && param_5 == (int *)0x0) goto LAB_00ae042c;
LAB_00ae04c4:
                    /* catch() { ... } // from try @ 00ae0324 with catch @ 00ae04c4 */
    bVar2 = pbVar1[1];
                    /* catch() { ... } // from try @ 00ae0310 with catch @ 00ae04c8 */
    pkey_nid = 0;
    if (bVar2 < 0xed) {
      if (bVar2 == 1) {
        lVar4 = 0;
        goto LAB_00ae0530;
      }
      if (bVar2 == 2) {
        lVar4 = 1;
        goto LAB_00ae0530;
      }
                    /* catch() { ... } // from try @ 00adff44 with catch @ 00ae04e8 */
      if (bVar2 == 3) {
        lVar4 = 2;
        goto LAB_00ae0530;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00adffc8 with catch @ 00ae04f4 */
      if (bVar2 == 0xed) {
        lVar4 = 3;
      }
      else {
                    /* catch() { ... } // from try @ 00ae00d8 with catch @ 00ae04fc
                       catch() { ... } // from try @ 00ae0378 with catch @ 00ae04fc */
        if (bVar2 == 0xee) {
          lVar4 = 4;
        }
        else {
          if (bVar2 != 0xef) goto LAB_00ae0540;
          lVar4 = 5;
        }
      }
LAB_00ae0530:
      pkey_nid = (&DAT_018a539c)[lVar4 * 2];
    }
LAB_00ae0540:
    if (param_3 != (int *)0x0) {
      *param_3 = pkey_nid;
    }
  }
  else {
    bVar2 = *pbVar1;
    iVar3 = 0;
    if (0xec < bVar2) {
                    /* try { // try from 00ae0458 to 00be0477 has its CatchHandler @ 00adfed4 */
      if (bVar2 == 0xed) {
        lVar4 = 6;
      }
      else if (bVar2 == 0xee) {
        lVar4 = 7;
      }
      else {
        if (bVar2 != 0xef) goto switchD_00ae040c_default;
        lVar4 = 8;
      }
      goto switchD_00ae040c_caseD_1;
    }
    lVar4 = 0;
    switch(bVar2) {
    case 1:
      break;
    case 2:
      lVar4 = 1;
      break;
    case 3:
                    /* try { // try from 00ae0478 to 00be047f has its CatchHandler @ 00ae0488 */
      lVar4 = 2;
      break;
    case 4:
                    /* catch() { ... } // from try @ 00ae0450 with catch @ 00ae0480
                       try { // try from 00ae0480 to 00be056b has its CatchHandler @ 00adfed4 */
      lVar4 = 3;
                    /* catch() { ... } // from try @ 00ae041c with catch @ 00ae0484 */
      break;
    case 5:
                    /* catch() { ... } // from try @ 00ae006c with catch @ 00ae0488
                       catch() { ... } // from try @ 00ae0478 with catch @ 00ae0488 */
      lVar4 = 4;
      break;
    case 6:
                    /* catch() { ... } // from try @ 00ae0350 with catch @ 00ae0490 */
      lVar4 = 5;
      break;
    default:
      goto switchD_00ae040c_default;
    }
switchD_00ae040c_caseD_1:
    iVar3 = (&DAT_018a5354)[lVar4 * 2];
switchD_00ae040c_default:
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
    if (param_3 != (int *)0x0 || param_5 != (int *)0x0) goto LAB_00ae04c4;
LAB_00ae042c:
    pkey_nid = 0;
  }
  if ((param_5 != (int *)0x0) &&
     (((iVar3 == 0 || (pkey_nid == 0)) ||
      (iVar3 = OBJ_find_sigid_by_algs(param_5,iVar3,pkey_nid), iVar3 < 1)))) {
                    /* try { // try from 00ae0450 to 00be0457 has its CatchHandler @ 00ae0480 */
    *param_5 = 0;
  }
LAB_00ae054c:
  return *(ulong *)(*(long *)(param_1 + 0x90) + 0x2c8) >> 1;
}

