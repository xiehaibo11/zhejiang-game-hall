
long FUN_00b078f4(long param_1,int param_2,long param_3,BIO *param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  BIO_METHOD *pBVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  void *ptr;
  
                    /* try { // try from 00b078fc to 00c0790f has its CatchHandler @ 00b07ab4 */
  piVar6 = *(int **)(param_1 + 0x30);
                    /* try { // try from 00b07910 to 00c0795b has its CatchHandler @ 00b07760 */
  lVar8 = 1;
  switch(param_2) {
  case 1:
    *piVar6 = 1;
                    /* try { // try from 00b0795c to 00c0796f has its CatchHandler @ 00b07a94 */
    if (*(int *)(param_1 + 0x28) != -1) {
      BIO_closesocket();
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    }
                    /* try { // try from 00b07970 to 00c079bb has its CatchHandler @ 00b07760 */
    BIO_ADDRINFO_free(*(undefined8 *)(piVar6 + 8));
    lVar8 = 0;
    piVar6[8] = 0;
    piVar6[9] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xd:
  case 0xe:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 0x67:
  case 0x68:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    goto switchD_00b07930_caseD_2;
  case 8:
    lVar8 = (long)*(int *)(param_1 + 0x1c);
    break;
  case 9:
    *(int *)(param_1 + 0x1c) = (int)param_3;
    lVar8 = 1;
    break;
  case 0xb:
    break;
  case 0xc:
    if (*(void **)(piVar6 + 2) != (void *)0x0) {
      BIO_ctrl(param_4,100,0,*(void **)(piVar6 + 2));
    }
    if (*(void **)(piVar6 + 4) != (void *)0x0) {
      BIO_ctrl(param_4,100,1,*(void **)(piVar6 + 4));
    }
    BIO_int_ctrl(param_4,100,3,piVar6[1]);
                    /* catch() { ... } // from try @ 00b07a14 with catch @ 00b07a7c */
    BIO_ctrl(param_4,0x9b,(long)piVar6[6],(void *)0x0);
                    /* catch() { ... } // from try @ 00b079bc with catch @ 00b07a90 */
                    /* catch() { ... } // from try @ 00b0795c with catch @ 00b07a94 */
    BIO_callback_ctrl(param_4,0xe,*(fp **)(piVar6 + 0xc));
    lVar8 = 1;
    break;
  case 0xf:
    pBVar5 = *(BIO_METHOD **)(piVar6 + 0xc);
    goto LAB_00b07aa8;
  case 100:
    if (param_4 == (BIO *)0x0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x18) = 1;
    switch(param_3) {
    case 0:
      plVar7 = (long *)(piVar6 + 4);
                    /* try { // try from 00b079bc to 00c079cf has its CatchHandler @ 00b07a90 */
      ptr = (void *)*plVar7;
      piVar6 = piVar6 + 2;
                    /* try { // try from 00b079d0 to 00c07a13 has its CatchHandler @ 00b07760 */
      CRYPTO_free(*(void **)piVar6);
      piVar6[0] = 0;
      piVar6[1] = 0;
      iVar2 = BIO_parse_hostserv(param_4,piVar6,plVar7,0);
      lVar8 = (long)iVar2;
      if (ptr != (void *)*plVar7) {
        CRYPTO_free(ptr);
                    /* try { // try from 00b07a14 to 00c07a27 has its CatchHandler @ 00b07a7c */
      }
      break;
    case 1:
      CRYPTO_free(*(void **)(piVar6 + 4));
      pcVar3 = CRYPTO_strdup((char *)param_4,"crypto/bio/bss_conn.c",0x19c);
      *(char **)(piVar6 + 4) = pcVar3;
      lVar8 = 1;
      break;
    case 2:
      lVar8 = 1;
      uVar4 = BIO_ADDR_hostname_string(param_4,1);
      *(undefined8 *)(piVar6 + 2) = uVar4;
      uVar4 = BIO_ADDR_service_string(param_4,1);
      *(undefined8 *)(piVar6 + 4) = uVar4;
      BIO_ADDRINFO_free(*(undefined8 *)(piVar6 + 8));
      piVar6[8] = 0;
      piVar6[9] = 0;
      piVar6[10] = 0;
      piVar6[0xb] = 0;
      break;
    case 3:
      lVar8 = 1;
      piVar6[1] = *(int *)&param_4->method;
      break;
    default:
      goto switchD_00b07930_caseD_2;
    }
    break;
  case 0x65:
    if (*piVar6 == 5) {
      lVar8 = 1;
                    /* try { // try from 00b07a28 to 00c07ceb has its CatchHandler @ 00b07760 */
    }
    else {
      iVar2 = FUN_00b07d58(param_1,piVar6);
      lVar8 = (long)iVar2;
    }
    break;
  case 0x66:
                    /* catch() { ... } // from try @ 00b078fc with catch @ 00b07ab4 */
    lVar8 = 1;
    uVar1 = piVar6[6] | 8;
    if (param_3 == 0) {
      uVar1 = piVar6[6] & 0xfffffff7;
    }
    piVar6[6] = uVar1;
    break;
  case 0x69:
                    /* catch() { ... } // from try @ 00b077d8 with catch @ 00b07ad8 */
    if (*(int *)(param_1 + 0x18) != 0) {
      if (param_4 != (BIO *)0x0) {
                    /* catch() { ... } // from try @ 00b07814 with catch @ 00b07ae0 */
        *(int *)&param_4->method = *(int *)(param_1 + 0x28);
        return (long)*(int *)(param_1 + 0x28);
      }
      return (long)*(int *)(param_1 + 0x28);
    }
LAB_00b07bf4:
    lVar8 = -1;
    break;
  case 0x7b:
    if (param_4 != (BIO *)0x0) {
                    /* catch() { ... } // from try @ 00b07898 with catch @ 00b07af8 */
      switch(param_3) {
      case 0:
        pBVar5 = *(BIO_METHOD **)(piVar6 + 2);
        break;
      case 1:
        pBVar5 = *(BIO_METHOD **)(piVar6 + 4);
        break;
      case 2:
        pBVar5 = (BIO_METHOD *)BIO_ADDRINFO_address(*(undefined8 *)(piVar6 + 10));
        param_4->method = pBVar5;
        return 1;
      case 3:
        iVar2 = BIO_ADDRINFO_family(*(undefined8 *)(piVar6 + 10));
        if (iVar2 == 0) {
          return (long)piVar6[1];
        }
        if (iVar2 == 10) {
          return 6;
        }
        if (iVar2 == 2) {
          return 4;
        }
        goto LAB_00b07bf4;
      default:
        goto switchD_00b07930_caseD_2;
      }
LAB_00b07aa8:
      param_4->method = pBVar5;
      return 1;
    }
    goto switchD_00b07930_caseD_2;
  default:
    if (param_2 == 0x9b) {
      piVar6[6] = (int)param_3;
      return 1;
    }
switchD_00b07930_caseD_2:
    lVar8 = 0;
  }
  return lVar8;
}

