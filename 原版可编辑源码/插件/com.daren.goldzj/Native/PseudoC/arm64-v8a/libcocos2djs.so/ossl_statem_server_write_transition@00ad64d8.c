
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
    goto switchD_00ad6508_caseD_0;
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
        if ((uVar1 & 6) == 0) {
          if ((uVar1 & 0x48) == 0) {
            if ((uVar1 & 0x1a0) != 0) goto LAB_00ad663c;
          }
          else {
            uVar3 = 0x18;
            if (((uVar1 & 0x1a0) != 0) || (*(long *)(*(long *)(param_1 + 0x148) + 0x1d0) != 0))
            goto LAB_00ad66bc;
          }
          uVar1 = *(uint *)(param_1 + 0x188);
          if ((((uVar1 & 1) == 0) ||
              (((uVar1 >> 2 & 1) != 0 && (*(long *)(*(long *)(param_1 + 0x178) + 0x98) != 0)))) ||
             (((uVar2 & 0x50) != 0 || ((uVar2 & 4) != 0 && (uVar1 & 2) == 0)))) {
            uVar3 = 0x1a;
          }
          else {
            uVar3 = 0x19;
          }
        }
        else {
LAB_00ad663c:
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
LAB_00ad66bc:
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    goto LAB_00ad6670;
  case 0x17:
    if (*(int *)(param_1 + 0x260) == 0) goto switchD_00ad6508_caseD_22;
    uVar3 = 0x22;
    break;
  case 0x18:
    goto switchD_00ad6508_caseD_18;
  case 0x19:
switchD_00ad6508_caseD_19:
    uVar3 = 0x1a;
    break;
  case 0x20:
    if (*(int *)(param_1 + 0xb0) != 0) goto switchD_00ad6508_caseD_13;
    uVar3 = 0x21;
    if (*(int *)(param_1 + 0x284) == 0) {
      uVar3 = 0x23;
    }
    break;
  case 0x21:
    uVar3 = 0x23;
    break;
  case 0x22:
switchD_00ad6508_caseD_22:
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x14);
    if ((uVar2 & 6) == 0) {
      if ((uVar2 & 0x48) == 0) {
        if ((uVar2 & 0x1a0) == 0) goto switchD_00ad6508_caseD_18;
      }
      else if (((uVar2 & 0x1a0) == 0) && (*(long *)(*(long *)(param_1 + 0x148) + 0x1d0) == 0)) {
switchD_00ad6508_caseD_18:
        uVar2 = *(uint *)(param_1 + 0x188);
        if ((((uVar2 & 1) == 0) ||
            ((((uVar2 >> 2 & 1) != 0 && (*(long *)(*(long *)(param_1 + 0x178) + 0x98) != 0)) ||
             (uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x18),
             (uVar1 & 0x50) != 0)))) || ((uVar1 & 4) != 0 && (uVar2 & 2) == 0))
        goto switchD_00ad6508_caseD_19;
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
switchD_00ad6508_caseD_13:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    ossl_statem_set_in_init(param_1,0);
    return 1;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
LAB_00ad6670:
  uVar3 = 1;
switchD_00ad6508_caseD_0:
  return uVar3;
}

