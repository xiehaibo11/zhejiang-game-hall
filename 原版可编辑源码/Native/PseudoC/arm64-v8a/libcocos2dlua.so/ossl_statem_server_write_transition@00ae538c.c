
undefined4 ossl_statem_server_write_transition(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = 2;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
  case 0x15:
  case 0x1a:
    goto switchD_00ae53bc_caseD_0;
  case 1:
    uVar3 = 0x13;
    break;
  default:
    return 0;
  case 0x14:
    if ((((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) ||
        (*(int *)(*(long *)(param_1 + 0x98) + 0x104) != 0)) ||
       (uVar2 = SSL_get_options(param_1), (uVar2 >> 0xd & 1) == 0)) {
      uVar3 = 0x16;
                    /* try { // try from 00ae53fc to 00be5463 has its CatchHandler @ 00ae54e8 */
    }
    else {
      uVar3 = 0x15;
    }
    break;
  case 0x16:
    if (*(int *)(param_1 + 0xb0) == 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x90) + 0x228);
      uVar2 = *(uint *)(lVar4 + 0x18);
      if ((uVar2 & 0x54) == 0) {
        uVar3 = 0x17;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0x14);
                    /* catch() { ... } // from try @ 00ae53fc with catch @ 00ae54e8 */
        if ((uVar1 & 6) == 0) {
          if ((uVar1 & 0x48) == 0) {
            if ((uVar1 & 0x1a0) != 0) goto LAB_00ae54f0;
          }
          else {
            uVar3 = 0x18;
            if (((uVar1 & 0x1a0) != 0) || (*(long *)(*(long *)(param_1 + 0x148) + 0x1d0) != 0))
            goto LAB_00ae5570;
          }
          uVar1 = *(uint *)(param_1 + 0x188);
                    /* try { // try from 00ae55e4 to 00be55ef has its CatchHandler @ 00ae565c */
          if ((((uVar1 & 1) == 0) ||
              (((uVar1 >> 2 & 1) != 0 && (*(long *)(*(long *)(param_1 + 0x178) + 0x98) != 0)))) ||
             (((uVar2 & 0x50) != 0 || ((uVar2 & 4) != 0 && (uVar1 & 2) == 0)))) {
            uVar3 = 0x1a;
          }
          else {
                    /* try { // try from 00ae55f0 to 00be5693 has its CatchHandler @ 00ae553c */
            uVar3 = 0x19;
          }
        }
        else {
LAB_00ae54f0:
          uVar3 = 0x18;
        }
      }
    }
    else {
      uVar3 = 0x21;
      if (*(int *)(param_1 + 0x284) == 0) {
        uVar3 = 0x23;
      }
    }
LAB_00ae5570:
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    goto LAB_00ae5524;
  case 0x17:
    if (*(int *)(param_1 + 0x260) == 0) goto switchD_00ae53bc_caseD_22;
    uVar3 = 0x22;
    break;
  case 0x18:
    goto switchD_00ae53bc_caseD_18;
  case 0x19:
switchD_00ae53bc_caseD_19:
    uVar3 = 0x1a;
    break;
  case 0x20:
    if (*(int *)(param_1 + 0xb0) != 0) goto switchD_00ae53bc_caseD_13;
    uVar3 = 0x21;
                    /* try { // try from 00ae5464 to 00be553b has its CatchHandler @ 00ae537c */
    if (*(int *)(param_1 + 0x284) == 0) {
      uVar3 = 0x23;
    }
    break;
  case 0x21:
    uVar3 = 0x23;
    break;
  case 0x22:
switchD_00ae53bc_caseD_22:
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x14);
    if ((uVar2 & 6) == 0) {
      if ((uVar2 & 0x48) == 0) {
        if ((uVar2 & 0x1a0) == 0) goto switchD_00ae53bc_caseD_18;
      }
      else if (((uVar2 & 0x1a0) == 0) && (*(long *)(*(long *)(param_1 + 0x148) + 0x1d0) == 0)) {
switchD_00ae53bc_caseD_18:
        uVar2 = *(uint *)(param_1 + 0x188);
                    /* try { // try from 00ae553c to 00be55e3 has its CatchHandler @ 00ae553c
                       catch() { ... } // from try @ 00ae553c with catch @ 00ae553c
                       catch() { ... } // from try @ 00ae55f0 with catch @ 00ae553c */
        if ((((uVar2 & 1) == 0) ||
            ((((uVar2 >> 2 & 1) != 0 && (*(long *)(*(long *)(param_1 + 0x178) + 0x98) != 0)) ||
             (uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x18),
             (uVar1 & 0x50) != 0)))) || ((uVar1 & 4) != 0 && (uVar2 & 2) == 0))
        goto switchD_00ae53bc_caseD_19;
        uVar3 = 0x19;
        break;
      }
    }
    uVar3 = 0x18;
    break;
  case 0x23:
    uVar3 = 0x24;
    break;
  case 0x24:
    if (*(int *)(param_1 + 0xb0) != 0) {
      return 2;
    }
  case 0x13:
switchD_00ae53bc_caseD_13:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    ossl_statem_set_in_init(param_1,0);
    return 1;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
LAB_00ae5524:
  uVar3 = 1;
switchD_00ae53bc_caseD_0:
  return uVar3;
}

