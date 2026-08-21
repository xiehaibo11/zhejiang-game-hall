
ulong FUN_00af88d8(BIO *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0xc);
  plVar1 = (long *)(param_2 + 8);
  uVar12 = 0xffffffff;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_00af8ac0:
    uVar2 = *param_2;
    do {
      switch(uVar2) {
      case 1:
        if (*(long *)(param_2 + 2) == 0) {
          if (*(long *)(param_2 + 4) == 0) goto LAB_00af8db0;
          uVar2 = 2;
          *param_2 = 2;
                    /* catch() { ... } // from try @ 00af8ad4 with catch @ 00af8b48 */
        }
        else {
          uVar2 = 2;
          *param_2 = 2;
        }
        break;
      case 2:
        iVar5 = param_2[1];
        if (iVar5 == 4) {
          uVar7 = 2;
        }
        else if (iVar5 == 6) {
          uVar7 = 10;
        }
        else {
          if (iVar5 != 0x100) goto LAB_00af8ce8;
          uVar7 = 0;
                    /* try { // try from 00af8b34 to 00bf8b63 has its CatchHandler @ 00af8a38 */
        }
        iVar5 = BIO_lookup(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),0,uVar7,1,
                           plVar1);
        if (iVar5 == 0) goto joined_r0x00af8c4c;
        if (*plVar1 == 0) goto LAB_00af8d04;
        *(long *)(param_2 + 10) = *plVar1;
        uVar2 = 3;
        *param_2 = 3;
        break;
      case 3:
        goto switchD_00af8afc_caseD_3;
      case 4:
        BIO_clear_flags(param_1,0xf);
        iVar5 = param_1->num;
        uVar7 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 10));
        uVar6 = BIO_connect(iVar5,uVar7,param_2[6] | 4);
        uVar12 = (ulong)uVar6;
        param_1->retry_reason = 0;
        if (uVar6 != 0) {
          *param_2 = 5;
          goto LAB_00af8ac0;
        }
        iVar5 = BIO_sock_should_retry(0);
        if (iVar5 != 0) goto LAB_00af8df4;
        lVar9 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 10));
        *(long *)(param_2 + 10) = lVar9;
        if (lVar9 == 0) goto LAB_00af8e18;
        BIO_closesocket(param_1->num);
        *param_2 = 3;
        ERR_clear_error();
        uVar12 = 0;
        goto LAB_00af8ac0;
      case 5:
        goto switchD_00af8934_caseD_5;
      case 6:
                    /* try { // try from 00af8ad4 to 00bf8b33 has its CatchHandler @ 00af8b48 */
        iVar5 = BIO_sock_error(param_1->num);
        if (iVar5 != 0) goto LAB_00af8c78;
        uVar2 = 5;
        *param_2 = 5;
        break;
      default:
        goto joined_r0x00af8c4c;
      }
    } while( true );
  }
LAB_00af891c:
  switch(*param_2) {
  case 1:
    if ((*(long *)(param_2 + 2) == 0) && (*(long *)(param_2 + 4) == 0)) goto LAB_00af8db0;
    uVar2 = 2;
    break;
  case 2:
    iVar5 = param_2[1];
    if (iVar5 == 0x100) {
      uVar7 = 0;
    }
    else if (iVar5 == 6) {
      uVar7 = 10;
    }
    else {
      if (iVar5 != 4) goto LAB_00af8ce8;
      uVar7 = 2;
    }
    iVar5 = BIO_lookup(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),0,uVar7,1,plVar1);
    if (iVar5 == 0) goto joined_r0x00af8c4c;
    if (*plVar1 == 0) goto LAB_00af8d04;
    *(long *)(param_2 + 10) = *plVar1;
    uVar2 = 3;
    break;
  case 3:
    uVar2 = BIO_ADDRINFO_family(*(undefined8 *)(param_2 + 10));
    uVar3 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 10));
    uVar4 = BIO_ADDRINFO_protocol(*(undefined8 *)(param_2 + 10));
    uVar8 = BIO_socket(uVar2,uVar3,uVar4,0);
    uVar12 = uVar8 & 0xffffffff;
    if ((int)uVar8 == -1) goto LAB_00af8d48;
    param_1->num = (int)uVar8;
    uVar2 = 4;
    break;
  case 4:
    BIO_clear_flags(param_1,0xf);
    iVar5 = param_1->num;
    uVar7 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 10));
    uVar8 = BIO_connect(iVar5,uVar7,param_2[6] | 4);
    uVar12 = uVar8 & 0xffffffff;
    param_1->retry_reason = 0;
    if ((int)uVar8 != 0) goto LAB_00af8a44;
    iVar5 = BIO_sock_should_retry(0);
    if (iVar5 != 0) goto LAB_00af8df4;
    lVar9 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 10));
    *(long *)(param_2 + 10) = lVar9;
    if (lVar9 != 0) {
      BIO_closesocket(param_1->num);
      *param_2 = 3;
      ERR_clear_error();
      uVar2 = *param_2;
      uVar12 = 0;
      goto LAB_00af8a84;
    }
LAB_00af8e18:
    piVar10 = (int *)__errno();
    ERR_put_error(2,2,*piVar10,"crypto/bio/bss_conn.c",0xa9);
    ERR_add_error_data(4,"hostname=",*(undefined8 *)(param_2 + 2)," service=",
                       *(undefined8 *)(param_2 + 4));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af8ecc with catch @ 00af8e5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00af8efc with catch @ 00af8e5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00af8f2c with catch @ 00af8e5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00af8f54 with catch @ 00af8e5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00af8f80 with catch @ 00af8e5c
                        */
    iVar5 = 0x67;
    iVar11 = 0xad;
    goto LAB_00af8cd0;
  case 5:
    goto switchD_00af8934_caseD_5;
  case 6:
                    /* try { // try from 00af8a38 to 00bf8ad3 has its CatchHandler @ 00af8a38
                       catch() { ... } // from try @ 00af8a38 with catch @ 00af8a38
                       catch() { ... } // from try @ 00af8b34 with catch @ 00af8a38 */
    iVar5 = BIO_sock_error(param_1->num);
    if (iVar5 != 0) goto LAB_00af8c78;
LAB_00af8a44:
    uVar2 = 5;
    break;
  default:
    goto joined_r0x00af8c4c;
  }
  *param_2 = uVar2;
LAB_00af8a84:
  uVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,uVar12);
  uVar12 = (ulong)uVar6;
  if (uVar6 == 0) {
    return 0;
  }
  goto LAB_00af891c;
switchD_00af8afc_caseD_3:
  uVar2 = BIO_ADDRINFO_family(*(undefined8 *)(param_2 + 10));
  uVar3 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 10));
  uVar4 = BIO_ADDRINFO_protocol(*(undefined8 *)(param_2 + 10));
  uVar6 = BIO_socket(uVar2,uVar3,uVar4,0);
  uVar12 = (ulong)uVar6;
  if (uVar6 == 0xffffffff) goto LAB_00af8d48;
  param_1->num = uVar6;
  *param_2 = 4;
  goto LAB_00af8ac0;
LAB_00af8c78:
  BIO_clear_flags(param_1,0xf);
  ERR_put_error(2,2,iVar5,"crypto/bio/bss_conn.c",0xb9);
  ERR_add_error_data(4,"hostname=",*(undefined8 *)(param_2 + 2)," service=",
                     *(undefined8 *)(param_2 + 4));
  iVar5 = 0x6e;
  iVar11 = 0xbd;
LAB_00af8cd0:
  ERR_put_error(0x20,0x73,iVar5,"crypto/bio/bss_conn.c",iVar11);
  goto LAB_00af8cd8;
switchD_00af8934_caseD_5:
  uVar12 = 1;
  goto joined_r0x00af8c4c;
LAB_00af8df4:
  BIO_set_flags(param_1,0xc);
  *param_2 = 6;
  param_1->retry_reason = 2;
  ERR_clear_error();
LAB_00af8cd8:
  uVar12 = 0;
  goto joined_r0x00af8da8;
LAB_00af8d48:
  piVar10 = (int *)__errno();
  ERR_put_error(2,4,*piVar10,"crypto/bio/bss_conn.c",0x89);
  ERR_add_error_data(4,"hostname=",*(undefined8 *)(param_2 + 2)," service=",
                     *(undefined8 *)(param_2 + 4));
  ERR_put_error(0x20,0x73,0x76,"crypto/bio/bss_conn.c",0x8d);
  uVar12 = 0xffffffff;
  goto joined_r0x00af8da8;
LAB_00af8ce8:
  iVar5 = 0x92;
  iVar11 = 0x74;
  goto LAB_00af8d1c;
LAB_00af8db0:
  ERR_put_error(0x20,0x73,0x90,"crypto/bio/bss_conn.c",0x53);
  ERR_add_error_data(4,"hostname=",*(undefined8 *)(param_2 + 2)," service=",
                     *(undefined8 *)(param_2 + 4));
  goto joined_r0x00af8da8;
LAB_00af8d04:
  iVar5 = 0x8e;
  iVar11 = 0x7d;
LAB_00af8d1c:
  ERR_put_error(0x20,0x73,iVar5,"crypto/bio/bss_conn.c",iVar11);
joined_r0x00af8c4c:
joined_r0x00af8da8:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return uVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x00af8c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar12 = (*UNRECOVERED_JUMPTABLE)(param_1,*param_2,uVar12);
  return uVar12;
}

