
undefined8 ossl_statem_client_read_transition(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  switch(param_1[0x17]) {
  case 3:
                    /* catch() { ... } // from try @ 00acf3ec with catch @ 00acf440 */
    if (param_1[0x2c] != 0) goto switchD_00acf438_caseD_12;
    if ((param_2 == 3) &&
       ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) != 0))
    goto LAB_00acf5ac;
                    /* try { // try from 00acf5d8 to 00bcf5df has its CatchHandler @ 00acf6b0 */
    if ((((0x300 < *param_1) && (*(long *)(param_1 + 0xb0) != 0)) && (param_2 == 0x101)) &&
       (*(long *)(*(long *)(param_1 + 0x5e) + 0x130) != 0)) {
      param_1[0x2c] = 1;
      param_1[0x17] = 10;
      return 1;
    }
                    /* try { // try from 00acf600 to 00bcf607 has its CatchHandler @ 00acf6ac */
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x18);
                    /* try { // try from 00acf608 to 00bcf6e7 has its CatchHandler @ 00acf4fc */
    if ((uVar1 & 0x54) == 0) {
      if (param_2 == 0xb) {
        iVar3 = 4;
        break;
      }
      goto switchD_00acf438_caseD_8;
    }
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x14);
    if ((uVar2 & 0x1a6) != 0) goto LAB_00acf49c;
    if ((param_2 == 0xc) && ((uVar2 & 0x1c8) != 0)) goto LAB_00acf4e8;
    if (param_2 == 0xe) goto LAB_00acf668;
    if (param_2 != 0xd) goto switchD_00acf438_caseD_8;
    if (((uVar1 & 0x50) != 0) || ((uVar1 & 4) != 0 && 0x300 < *param_1))
    goto switchD_00acf438_caseD_8;
    goto LAB_00acf534;
  case 4:
    if ((param_2 == 0x16) && (param_1[0x98] != 0)) {
      iVar3 = 5;
      break;
    }
  case 5:
    uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x14);
    if ((uVar1 & 0x1a6) == 0) {
      if ((param_2 != 0xc) || ((uVar1 & 0x1c8) == 0)) {
switchD_00acf438_caseD_6:
        if (param_2 != 0xe) {
                    /* try { // try from 00acf4fc to 00bcf5d7 has its CatchHandler @ 00acf4fc
                       catch() { ... } // from try @ 00acf4fc with catch @ 00acf4fc
                       catch() { ... } // from try @ 00acf608 with catch @ 00acf4fc */
          if (param_2 == 0xd) {
            uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x24) + 0x228) + 0x18);
            if (((uVar1 & 0x50) == 0) && (*param_1 < 0x301 || (uVar1 & 4) == 0)) {
LAB_00acf534:
              iVar3 = 7;
              break;
            }
          }
          goto switchD_00acf438_caseD_8;
        }
LAB_00acf668:
        iVar3 = 8;
        break;
      }
    }
    else {
LAB_00acf49c:
      if (param_2 != 0xc) goto switchD_00acf438_caseD_8;
    }
LAB_00acf4e8:
    iVar3 = 6;
    break;
  case 6:
    goto switchD_00acf438_caseD_6;
  case 7:
    if (param_2 != 0xe) goto switchD_00acf438_caseD_8;
    goto LAB_00acf668;
  default:
    goto switchD_00acf438_caseD_8;
  case 10:
    if (param_2 == 0x14) {
      iVar3 = 0xb;
      break;
    }
    goto switchD_00acf438_caseD_8;
  case 0xc:
    if (param_2 == 2) {
      iVar3 = 3;
      break;
    }
    if ((param_2 != 3) ||
       ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0))
    goto switchD_00acf438_caseD_8;
LAB_00acf5ac:
    iVar3 = 2;
    break;
  case 0x12:
switchD_00acf438_caseD_12:
    if (param_1[0xa1] != 0) {
      if (param_2 != 4) goto switchD_00acf438_caseD_8;
      iVar3 = 9;
      break;
    }
  case 9:
    if (param_2 != 0x101) {
switchD_00acf438_caseD_8:
      ssl3_send_alert(param_1,2,10);
      ERR_put_error(0x14,0x1a1,0xf4,"ssl/statem/statem_clnt.c",0x10d);
      return 0;
    }
    iVar3 = 10;
  }
  param_1[0x17] = iVar3;
  return 1;
}

