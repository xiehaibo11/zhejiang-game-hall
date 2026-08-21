
undefined8 ossl_statem_client_read_transition(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  switch(param_1[0x17]) {
  case 3:
    if (param_1[0x2c] != 0) goto switchD_00ade2ec_caseD_12;
    if ((param_2 == 3) &&
       ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0))
    goto LAB_00ade460;
    if ((((0x300 < *param_1) && (*(long *)(param_1 + 0xb0) != 0)) && (param_2 == 0x101)) &&
       (*(long *)(*(long *)(param_1 + 0x5e) + 0x130) != 0)) {
      param_1[0x2c] = 1;
      param_1[0x17] = 10;
      return 1;
    }
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x18);
                    /* try { // try from 00ade4bc to 00bde4f7 has its CatchHandler @ 00ade4bc
                       catch() { ... } // from try @ 00ade4bc with catch @ 00ade4bc
                       catch() { ... } // from try @ 00ade5ac with catch @ 00ade4bc */
    if ((uVar1 & 0x54) == 0) {
      if (param_2 == 0xb) {
        iVar3 = 4;
        break;
      }
      goto switchD_00ade2ec_caseD_8;
    }
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x14);
    if ((uVar2 & 0x1a6) != 0) goto LAB_00ade350;
    if ((param_2 == 0xc) && ((uVar2 & 0x1c8) != 0)) goto LAB_00ade39c;
    if (param_2 == 0xe) goto LAB_00ade51c;
    if (param_2 != 0xd) goto switchD_00ade2ec_caseD_8;
                    /* try { // try from 00ade4f8 to 00bde507 has its CatchHandler @ 00ade698 */
                    /* try { // try from 00ade508 to 00bde51b has its CatchHandler @ 00ade678 */
    if (((uVar1 & 0x50) != 0) || ((uVar1 & 4) != 0 && 0x300 < *param_1))
    goto switchD_00ade2ec_caseD_8;
    goto LAB_00ade3e8;
  case 4:
    if ((param_2 == 0x16) && (param_1[0x98] != 0)) {
      iVar3 = 5;
      break;
    }
  case 5:
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x14);
    if ((uVar1 & 0x1a6) == 0) {
                    /* try { // try from 00ade390 to 00bde39b has its CatchHandler @ 00ade3c0 */
      if ((param_2 != 0xc) || ((uVar1 & 0x1c8) == 0)) {
switchD_00ade2ec_caseD_6:
        if (param_2 != 0xe) {
                    /* try { // try from 00ade3ac to 00bde3bb has its CatchHandler @ 00ade40c */
          if (param_2 == 0xd) {
                    /* catch() { ... } // from try @ 00ade39c with catch @ 00ade3bc
                       try { // try from 00ade3bc to 00bde4bb has its CatchHandler @ 00addea4 */
                    /* catch() { ... } // from try @ 00ade390 with catch @ 00ade3c0 */
            uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x18);
                    /* catch() { ... } // from try @ 00ade0d0 with catch @ 00ade3d4 */
            if (((uVar1 & 0x50) == 0) && (*param_1 < 0x301 || (uVar1 & 4) == 0)) {
LAB_00ade3e8:
              iVar3 = 7;
                    /* catch() { ... } // from try @ 00ade204 with catch @ 00ade3ec */
              break;
            }
          }
          goto switchD_00ade2ec_caseD_8;
        }
LAB_00ade51c:
                    /* try { // try from 00ade51c to 00bde52f has its CatchHandler @ 00ade658 */
        iVar3 = 8;
        break;
      }
    }
    else {
LAB_00ade350:
      if (param_2 != 0xc) goto switchD_00ade2ec_caseD_8;
    }
LAB_00ade39c:
                    /* try { // try from 00ade39c to 00bde3ab has its CatchHandler @ 00ade3bc */
    iVar3 = 6;
    break;
  case 6:
    goto switchD_00ade2ec_caseD_6;
  case 7:
    if (param_2 != 0xe) goto switchD_00ade2ec_caseD_8;
    goto LAB_00ade51c;
  default:
    goto switchD_00ade2ec_caseD_8;
  case 10:
    if (param_2 == 0x14) {
      iVar3 = 0xb;
      break;
    }
    goto switchD_00ade2ec_caseD_8;
  case 0xc:
    if (param_2 == 2) {
      iVar3 = 3;
      break;
    }
    if ((param_2 != 3) ||
       ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0))
    goto switchD_00ade2ec_caseD_8;
LAB_00ade460:
    iVar3 = 2;
    break;
  case 0x12:
switchD_00ade2ec_caseD_12:
    if (param_1[0xa1] != 0) {
      if (param_2 != 4) goto switchD_00ade2ec_caseD_8;
      iVar3 = 9;
      break;
    }
  case 9:
    if (param_2 != 0x101) {
switchD_00ade2ec_caseD_8:
                    /* catch() { ... } // from try @ 00ade1a8 with catch @ 00ade40c
                       catch() { ... } // from try @ 00ade3ac with catch @ 00ade40c */
                    /* catch() { ... } // from try @ 00ade08c with catch @ 00ade410 */
                    /* catch() { ... } // from try @ 00addfd8 with catch @ 00ade414 */
                    /* catch() { ... } // from try @ 00ade220 with catch @ 00ade418 */
      ssl3_send_alert(param_1,2,10);
                    /* catch() { ... } // from try @ 00addedc with catch @ 00ade41c */
                    /* catch() { ... } // from try @ 00ade278 with catch @ 00ade42c */
      ERR_put_error(0x14,0x1a1,0xf4,"ssl/statem/statem_clnt.c",0x10d);
      return 0;
    }
    iVar3 = 10;
  }
  param_1[0x17] = iVar3;
  return 1;
}

