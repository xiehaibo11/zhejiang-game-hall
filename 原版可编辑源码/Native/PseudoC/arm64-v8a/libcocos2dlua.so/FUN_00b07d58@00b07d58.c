
ulong FUN_00b07d58(BIO *param_1,undefined4 *param_2)

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
LAB_00b07f40:
    uVar2 = *param_2;
    do {
                    /* try { // try from 00b07f6c to 00c07f97 has its CatchHandler @ 00b07edc */
      switch(uVar2) {
      case 1:
        if (*(long *)(param_2 + 2) == 0) {
          if (*(long *)(param_2 + 4) == 0) goto LAB_00b08230;
          uVar2 = 2;
          *param_2 = 2;
        }
        else {
          uVar2 = 2;
          *param_2 = 2;
        }
        break;
      case 2:
                    /* catch() { ... } // from try @ 00b07f34 with catch @ 00b07f94 */
        iVar5 = param_2[1];
                    /* try { // try from 00b07f98 to 00c07fff has its CatchHandler @ 00b07f98
                       catch() { ... } // from try @ 00b07f98 with catch @ 00b07f98
                       catch() { ... } // from try @ 00b08034 with catch @ 00b07f98 */
        if (iVar5 == 4) {
          uVar7 = 2;
        }
        else if (iVar5 == 6) {
          uVar7 = 10;
        }
        else {
          if (iVar5 != 0x100) goto LAB_00b08168;
          uVar7 = 0;
        }
        iVar5 = BIO_lookup(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),0,uVar7,1,
                           plVar1);
        if (iVar5 == 0) goto joined_r0x00b080cc;
        if (*plVar1 == 0) goto LAB_00b08184;
        *(long *)(param_2 + 10) = *plVar1;
        uVar2 = 3;
                    /* try { // try from 00b08000 to 00c0800f has its CatchHandler @ 00b08070 */
        *param_2 = 3;
        break;
      case 3:
        goto switchD_00b07f7c_caseD_3;
      case 4:
        BIO_clear_flags(param_1,0xf);
        iVar5 = param_1->num;
        uVar7 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 10));
                    /* catch() { ... } // from try @ 00b08024 with catch @ 00b0806c */
                    /* catch() { ... } // from try @ 00b08000 with catch @ 00b08070 */
        uVar6 = BIO_connect(iVar5,uVar7,param_2[6] | 4);
        uVar12 = (ulong)uVar6;
        param_1->retry_reason = 0;
        if (uVar6 != 0) {
          *param_2 = 5;
          goto LAB_00b07f40;
        }
        iVar5 = BIO_sock_should_retry(0);
        if (iVar5 != 0) goto LAB_00b08274;
        lVar9 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 10));
        *(long *)(param_2 + 10) = lVar9;
        if (lVar9 == 0) goto LAB_00b08298;
        BIO_closesocket(param_1->num);
        *param_2 = 3;
        ERR_clear_error();
        uVar12 = 0;
        goto LAB_00b07f40;
      case 5:
        goto switchD_00b07db4_caseD_5;
      case 6:
        iVar5 = BIO_sock_error(param_1->num);
        if (iVar5 != 0) goto LAB_00b080f8;
        uVar2 = 5;
        *param_2 = 5;
        break;
      default:
        goto joined_r0x00b080cc;
      }
    } while( true );
  }
LAB_00b07d9c:
  switch(*param_2) {
  case 1:
    if ((*(long *)(param_2 + 2) == 0) && (*(long *)(param_2 + 4) == 0)) goto LAB_00b08230;
    uVar2 = 2;
    break;
  case 2:
    iVar5 = param_2[1];
    if (iVar5 == 0x100) {
      uVar7 = 0;
                    /* catch() { ... } // from try @ 00b07e98 with catch @ 00b07ed0 */
    }
    else if (iVar5 == 6) {
                    /* catch() { ... } // from try @ 00b07e70 with catch @ 00b07ed4 */
      uVar7 = 10;
    }
    else {
      if (iVar5 != 4) goto LAB_00b08168;
                    /* try { // try from 00b07dec to 00c07e43 has its CatchHandler @ 00b07dec
                       catch() { ... } // from try @ 00b07dec with catch @ 00b07dec
                       catch() { ... } // from try @ 00b07ea8 with catch @ 00b07dec */
      uVar7 = 2;
    }
                    /* catch() { ... } // from try @ 00b07e44 with catch @ 00b07ed8 */
                    /* try { // try from 00b07edc to 00c07f33 has its CatchHandler @ 00b07edc
                       catch() { ... } // from try @ 00b07edc with catch @ 00b07edc
                       catch() { ... } // from try @ 00b07f6c with catch @ 00b07edc */
    iVar5 = BIO_lookup(*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),0,uVar7,1,plVar1);
    if (iVar5 == 0) goto joined_r0x00b080cc;
    if (*plVar1 == 0) goto LAB_00b08184;
    *(long *)(param_2 + 10) = *plVar1;
    uVar2 = 3;
    break;
  case 3:
    uVar2 = BIO_ADDRINFO_family(*(undefined8 *)(param_2 + 10));
    uVar3 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 10));
    uVar4 = BIO_ADDRINFO_protocol(*(undefined8 *)(param_2 + 10));
    uVar8 = BIO_socket(uVar2,uVar3,uVar4,0);
    uVar12 = uVar8 & 0xffffffff;
    if ((int)uVar8 == -1) goto LAB_00b081c8;
    param_1->num = (int)uVar8;
    uVar2 = 4;
                    /* try { // try from 00b07e44 to 00c07e53 has its CatchHandler @ 00b07ed8 */
    break;
  case 4:
    BIO_clear_flags(param_1,0xf);
    iVar5 = param_1->num;
    uVar7 = BIO_ADDRINFO_address(*(undefined8 *)(param_2 + 10));
                    /* try { // try from 00b07e70 to 00c07e7f has its CatchHandler @ 00b07ed4 */
    uVar8 = BIO_connect(iVar5,uVar7,param_2[6] | 4);
    uVar12 = uVar8 & 0xffffffff;
    param_1->retry_reason = 0;
    if ((int)uVar8 != 0) goto LAB_00b07ec4;
    iVar5 = BIO_sock_should_retry(0);
    if (iVar5 != 0) goto LAB_00b08274;
    lVar9 = BIO_ADDRINFO_next(*(undefined8 *)(param_2 + 10));
    *(long *)(param_2 + 10) = lVar9;
    if (lVar9 != 0) {
                    /* try { // try from 00b07e98 to 00c07ea7 has its CatchHandler @ 00b07ed0 */
      BIO_closesocket(param_1->num);
      *param_2 = 3;
      ERR_clear_error();
                    /* try { // try from 00b07ea8 to 00c07edb has its CatchHandler @ 00b07dec */
      uVar2 = *param_2;
      uVar12 = 0;
      goto LAB_00b07f04;
    }
LAB_00b08298:
    piVar10 = (int *)__errno();
    ERR_put_error(2,2,*piVar10,"crypto/bio/bss_conn.c",0xa9);
    ERR_add_error_data(4,"hostname=",*(undefined8 *)(param_2 + 2)," service=",
                       *(undefined8 *)(param_2 + 4));
    iVar5 = 0x67;
    iVar11 = 0xad;
    goto LAB_00b08150;
  case 5:
    goto switchD_00b07db4_caseD_5;
  case 6:
    iVar5 = BIO_sock_error(param_1->num);
    if (iVar5 != 0) goto LAB_00b080f8;
LAB_00b07ec4:
    uVar2 = 5;
    break;
  default:
    goto joined_r0x00b080cc;
  }
  *param_2 = uVar2;
LAB_00b07f04:
  uVar6 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,uVar12);
  uVar12 = (ulong)uVar6;
  if (uVar6 == 0) {
    return 0;
  }
  goto LAB_00b07d9c;
switchD_00b07f7c_caseD_3:
  uVar2 = BIO_ADDRINFO_family(*(undefined8 *)(param_2 + 10));
  uVar3 = BIO_ADDRINFO_socktype(*(undefined8 *)(param_2 + 10));
                    /* try { // try from 00b08024 to 00c08033 has its CatchHandler @ 00b0806c */
  uVar4 = BIO_ADDRINFO_protocol(*(undefined8 *)(param_2 + 10));
                    /* try { // try from 00b08034 to 00c08073 has its CatchHandler @ 00b07f98 */
  uVar6 = BIO_socket(uVar2,uVar3,uVar4,0);
  uVar12 = (ulong)uVar6;
  if (uVar6 == 0xffffffff) goto LAB_00b081c8;
  param_1->num = uVar6;
  *param_2 = 4;
  goto LAB_00b07f40;
LAB_00b080f8:
  BIO_clear_flags(param_1,0xf);
  ERR_put_error(2,2,iVar5,"crypto/bio/bss_conn.c",0xb9);
  ERR_add_error_data(4,"hostname=",*(undefined8 *)(param_2 + 2)," service=",
                     *(undefined8 *)(param_2 + 4));
  iVar5 = 0x6e;
  iVar11 = 0xbd;
LAB_00b08150:
  ERR_put_error(0x20,0x73,iVar5,"crypto/bio/bss_conn.c",iVar11);
  goto LAB_00b08158;
switchD_00b07db4_caseD_5:
  uVar12 = 1;
  goto joined_r0x00b080cc;
LAB_00b08274:
  BIO_set_flags(param_1,0xc);
  *param_2 = 6;
  param_1->retry_reason = 2;
  ERR_clear_error();
LAB_00b08158:
  uVar12 = 0;
  goto joined_r0x00b08228;
LAB_00b081c8:
  piVar10 = (int *)__errno();
  ERR_put_error(2,4,*piVar10,"crypto/bio/bss_conn.c",0x89);
  ERR_add_error_data(4,"hostname=",*(undefined8 *)(param_2 + 2)," service=",
                     *(undefined8 *)(param_2 + 4));
  ERR_put_error(0x20,0x73,0x76,"crypto/bio/bss_conn.c",0x8d);
  uVar12 = 0xffffffff;
  goto joined_r0x00b08228;
LAB_00b08168:
  iVar5 = 0x92;
  iVar11 = 0x74;
  goto LAB_00b0819c;
LAB_00b08230:
  ERR_put_error(0x20,0x73,0x90,"crypto/bio/bss_conn.c",0x53);
  ERR_add_error_data(4,"hostname=",*(undefined8 *)(param_2 + 2)," service=",
                     *(undefined8 *)(param_2 + 4));
  goto joined_r0x00b08228;
LAB_00b08184:
  iVar5 = 0x8e;
  iVar11 = 0x7d;
LAB_00b0819c:
  ERR_put_error(0x20,0x73,iVar5,"crypto/bio/bss_conn.c",iVar11);
joined_r0x00b080cc:
joined_r0x00b08228:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return uVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x00b080f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar12 = (*UNRECOVERED_JUMPTABLE)(param_1,*param_2,uVar12);
  return uVar12;
}

