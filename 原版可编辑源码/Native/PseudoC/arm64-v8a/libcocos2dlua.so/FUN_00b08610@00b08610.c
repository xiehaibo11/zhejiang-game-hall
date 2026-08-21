
long FUN_00b08610(BIO *param_1,undefined4 param_2,long param_3,char *param_4)

{
  int iVar1;
  FILE *pFVar2;
  int *piVar3;
  char *pcVar4;
  int line;
  uint uVar5;
  long lVar6;
  char acStack_34 [4];
  
  pFVar2 = param_1->ptr;
  uVar5 = (uint)param_3;
  lVar6 = 1;
  switch(param_2) {
  case 1:
switchD_00b08654_caseD_1:
    iVar1 = fseek(pFVar2,param_3,0);
LAB_00b086c4:
    lVar6 = (long)iVar1;
    break;
  case 2:
    iVar1 = feof(pFVar2);
    goto LAB_00b086c4;
  case 3:
switchD_00b08654_caseD_3:
    lVar6 = ftell(pFVar2);
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
    goto switchD_00b08654_caseD_c;
  case 8:
    lVar6 = (long)param_1->shutdown;
    break;
  case 9:
    param_1->shutdown = uVar5;
    goto LAB_00b086f8;
  case 0xb:
    fflush(pFVar2);
LAB_00b086f8:
    lVar6 = 1;
    break;
  case 0xc:
    break;
  default:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b08330 with catch @ 00b08670
                        */
    switch(param_2) {
    case 0x6a:
      if (param_1->shutdown != 0) {
        if ((param_1->init != 0) && (pFVar2 != (FILE *)0x0)) {
          fclose(pFVar2);
          param_1->ptr = (void *)0x0;
          param_1->flags = 0;
        }
        param_1->init = 0;
      }
      param_1->init = 1;
      param_1->shutdown = uVar5 & 1;
      param_1->ptr = param_4;
      return 1;
    case 0x6b:
      if (param_4 != (char *)0x0) {
        *(FILE **)param_4 = pFVar2;
      }
      goto LAB_00b086f8;
    case 0x6c:
      if (param_1->shutdown != 0) {
        if ((param_1->init != 0) && (pFVar2 != (FILE *)0x0)) {
          fclose(pFVar2);
          param_1->ptr = (void *)0x0;
          param_1->flags = 0;
        }
        param_1->init = 0;
      }
      param_1->shutdown = uVar5 & 1;
      if ((uVar5 >> 3 & 1) == 0) {
        if (((uVar5 >> 2 & 1) != 0) && ((uVar5 >> 1 & 1) != 0)) {
          pcVar4 = "r+";
          goto LAB_00b0877c;
        }
        if ((uVar5 >> 2 & 1) != 0) {
          pcVar4 = "w";
          goto LAB_00b0877c;
        }
        if ((uVar5 >> 1 & 1) != 0) {
          pcVar4 = "r";
          goto LAB_00b0877c;
        }
        iVar1 = 0x65;
        line = 0x117;
      }
      else {
        if ((uVar5 >> 1 & 1) == 0) {
          pcVar4 = "a";
        }
        else {
          pcVar4 = "a+";
        }
LAB_00b0877c:
        OPENSSL_strlcpy(acStack_34,pcVar4,4);
        pFVar2 = openssl_fopen(param_4,acStack_34);
        if (pFVar2 != (FILE *)0x0) {
          param_1->ptr = pFVar2;
          param_1->init = 1;
          BIO_clear_flags(param_1,0);
          return 1;
        }
        piVar3 = (int *)__errno();
        ERR_put_error(2,1,*piVar3,"crypto/bio/bss_file.c",0x123);
        ERR_add_error_data(5,&DAT_013da006,param_4,0x13da00e,acStack_34,&DAT_013d1655);
        iVar1 = 2;
        line = 0x125;
      }
      ERR_put_error(0x20,0x74,iVar1,"crypto/bio/bss_file.c",line);
switchD_00b08654_caseD_c:
      return 0;
    default:
      goto switchD_00b08654_caseD_c;
    case 0x80:
      goto switchD_00b08654_caseD_1;
    case 0x85:
      goto switchD_00b08654_caseD_3;
    }
  }
  return lVar6;
}

