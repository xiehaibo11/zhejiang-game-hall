
undefined4 ossl_statem_client_write_transition(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
                    /* try { // try from 00ade568 to 00bde56f has its CatchHandler @ 00ade618 */
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
  case 1:
  case 2:
    uVar1 = 0xc;
    break;
  default:
    return 0;
  case 8:
    uVar1 = 0xd;
    if (*(int *)(*(long *)(param_1 + 0x90) + 0x238) == 0) {
      uVar1 = 0xe;
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0xb0) == 0) goto LAB_00ade624;
  case 0xf:
    uVar1 = 0x10;
    break;
  case 0xc:
    goto switchD_00ade56c_caseD_c;
  case 0xd:
                    /* try { // try from 00ade5a8 to 00bde5ab has its CatchHandler @ 00ade614 */
    uVar1 = 0xe;
                    /* try { // try from 00ade5ac to 00bde6b3 has its CatchHandler @ 00ade4bc */
    break;
  case 0xe:
    uVar1 = 0xf;
    if ((int)(*(ulong **)(param_1 + 0x90))[0x47] != 1) {
      uVar1 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    if ((**(ulong **)(param_1 + 0x90) & 0x10) != 0) {
      uVar1 = 0x10;
    }
    break;
  case 0x10:
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) ||
       (*(int *)(*(long *)(param_1 + 0x90) + 0x3c8) == 0)) goto switchD_00ade56c_caseD_11;
    uVar1 = 0x11;
    break;
  case 0x11:
switchD_00ade56c_caseD_11:
    uVar1 = 0x12;
    break;
  case 0x12:
    if (*(int *)(param_1 + 0xb0) == 0) {
      return 2;
    }
LAB_00ade624:
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x5c) = 1;
    ossl_statem_set_in_init(param_1,0);
    goto switchD_00ade56c_caseD_c;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  uVar1 = 1;
switchD_00ade56c_caseD_c:
                    /* catch() { ... } // from try @ 00ade5a8 with catch @ 00ade614 */
                    /* catch() { ... } // from try @ 00ade568 with catch @ 00ade618 */
  return uVar1;
}

