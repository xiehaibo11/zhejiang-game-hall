
/* WARNING: Type propagation algorithm not settling */

ulong SSL_get_sigalgs(long param_1,int param_2,int *param_3,int *param_4,int *param_5,byte *param_6,
                     byte *param_7)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int pkey_nid;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x2c0);
  if (lVar4 == 0) {
    return 0;
  }
  if (param_2 < 0) goto LAB_00aef400;
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
  goto LAB_00aef400;
  if (param_4 == (int *)0x0 && param_5 == (int *)0x0) {
    iVar3 = 0;
    if (param_3 == (int *)0x0 && param_5 == (int *)0x0) goto LAB_00aef2e0;
LAB_00aef378:
    bVar2 = pbVar1[1];
    pkey_nid = 0;
    if (bVar2 < 0xed) {
      if (bVar2 == 1) {
        lVar4 = 0;
        goto LAB_00aef3e4;
      }
      if (bVar2 == 2) {
        lVar4 = 1;
        goto LAB_00aef3e4;
      }
      if (bVar2 == 3) {
        lVar4 = 2;
        goto LAB_00aef3e4;
      }
    }
    else {
      if (bVar2 == 0xed) {
        lVar4 = 3;
      }
      else if (bVar2 == 0xee) {
        lVar4 = 4;
      }
      else {
        if (bVar2 != 0xef) goto LAB_00aef3f4;
        lVar4 = 5;
      }
LAB_00aef3e4:
      pkey_nid = (&DAT_013d381c)[lVar4 * 2];
    }
LAB_00aef3f4:
    if (param_3 != (int *)0x0) {
      *param_3 = pkey_nid;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00aef0a0 with catch @ 00aef290 */
    bVar2 = *pbVar1;
    iVar3 = 0;
                    /* catch() { ... } // from try @ 00aef124 with catch @ 00aef298 */
    if (0xec < bVar2) {
      if (bVar2 == 0xed) {
        lVar4 = 6;
      }
      else if (bVar2 == 0xee) {
        lVar4 = 7;
      }
      else {
                    /* try { // try from 00aef320 to 00bef40f has its CatchHandler @ 00aef320
                       catch() { ... } // from try @ 00aef320 with catch @ 00aef320
                       catch() { ... } // from try @ 00aef5c4 with catch @ 00aef320 */
        if (bVar2 != 0xef) goto switchD_00aef2c0_default;
        lVar4 = 8;
      }
      goto switchD_00aef2c0_caseD_1;
    }
    lVar4 = 0;
    switch(bVar2) {
    case 1:
      break;
    case 2:
      lVar4 = 1;
      break;
    case 3:
      lVar4 = 2;
      break;
    case 4:
      lVar4 = 3;
      break;
    case 5:
      lVar4 = 4;
      break;
    case 6:
      lVar4 = 5;
      break;
    default:
      goto switchD_00aef2c0_default;
    }
switchD_00aef2c0_caseD_1:
    iVar3 = (&DAT_013d37d4)[lVar4 * 2];
switchD_00aef2c0_default:
    if (param_4 != (int *)0x0) {
      *param_4 = iVar3;
    }
    if (param_3 != (int *)0x0 || param_5 != (int *)0x0) goto LAB_00aef378;
LAB_00aef2e0:
    pkey_nid = 0;
  }
  if ((param_5 != (int *)0x0) &&
     (((iVar3 == 0 || (pkey_nid == 0)) ||
      (iVar3 = OBJ_find_sigid_by_algs(param_5,iVar3,pkey_nid), iVar3 < 1)))) {
    *param_5 = 0;
  }
LAB_00aef400:
                    /* try { // try from 00aef410 to 00bef41b has its CatchHandler @ 00aef640 */
  return *(ulong *)(*(long *)(param_1 + 0x90) + 0x2c8) >> 1;
}

