
int OCSP_REQ_CTX_nbio(uint *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *local_70;
  byte *local_68;
  
  pbVar11 = local_70;
LAB_00bcd294:
  local_70 = pbVar11;
  uVar5 = *param_1;
  if ((uVar5 >> 0xc & 1) == 0) {
    iVar3 = BIO_read(*(BIO **)(param_1 + 6),*(void **)(param_1 + 2),param_1[4]);
    if (iVar3 < 1) {
      iVar3 = BIO_test_flags(*(BIO **)(param_1 + 6),8);
      return -(uint)(iVar3 != 0);
    }
    iVar4 = BIO_write(*(BIO **)(param_1 + 8),*(void **)(param_1 + 2),iVar3);
    if (iVar4 != iVar3) {
      return 0;
    }
    uVar5 = *param_1;
  }
  if ((int)uVar5 < 0x1005) {
    if (uVar5 - 1 < 2) goto LAB_00bcd4b4;
    if (uVar5 == 3) goto LAB_00bcd578;
    if (uVar5 != 4) {
      return 0;
    }
    goto LAB_00bcd630;
  }
  switch(uVar5) {
  case 0x1005:
    break;
  case 0x1006:
    goto switchD_00bcd2f4_caseD_1006;
  case 0x1007:
    goto switchD_00bcd2f4_caseD_1007;
  case 0x1008:
    goto switchD_00bcd2f4_default;
  case 0x1009:
    iVar3 = BIO_write(*(BIO **)(param_1 + 8),&DAT_018bc985,2);
    if (iVar3 != 2) goto LAB_00bcd6f8;
    *param_1 = 0x1005;
    break;
  default:
    goto switchD_00bcd2f4_default;
  }
  lVar8 = BIO_ctrl(*(BIO **)(param_1 + 8),3,0,(void *)0x0);
  *(long *)(param_1 + 10) = lVar8;
  *param_1 = 0x1006;
switchD_00bcd2f4_caseD_1006:
  lVar8 = BIO_ctrl(*(BIO **)(param_1 + 8),3,0,&local_70);
  iVar3 = BIO_write(*(BIO **)(param_1 + 6),local_70 + ((long)(int)lVar8 - *(long *)(param_1 + 10)),
                    (int)*(long *)(param_1 + 10));
  if (0 < iVar3) {
    lVar8 = *(long *)(param_1 + 10);
    *(long *)(param_1 + 10) = lVar8 - iVar3;
    pbVar11 = local_70;
    if (lVar8 - iVar3 != 0) goto LAB_00bcd294;
    *param_1 = 0x1007;
    BIO_ctrl(*(BIO **)(param_1 + 8),1,0,(void *)0x0);
switchD_00bcd2f4_caseD_1007:
    lVar8 = BIO_ctrl(*(BIO **)(param_1 + 6),0xb,0,(void *)0x0);
    if (0 < (int)lVar8) {
      *param_1 = 1;
      pbVar11 = local_70;
      goto LAB_00bcd294;
    }
  }
  iVar3 = BIO_test_flags(*(BIO **)(param_1 + 6),8);
  if (iVar3 != 0) {
    return -1;
  }
LAB_00bcd6f8:
  *param_1 = 0x1000;
switchD_00bcd2f4_default:
  return 0;
LAB_00bcd4b4:
  do {
    while( true ) {
      lVar8 = BIO_ctrl(*(BIO **)(param_1 + 8),3,0,&local_70);
      iVar3 = (int)lVar8;
      if ((iVar3 < 1) || (pvVar7 = memchr(local_70,10,(long)iVar3), pvVar7 == (void *)0x0)) {
        pbVar11 = local_70;
        if (iVar3 < (int)param_1[4]) goto LAB_00bcd294;
        goto LAB_00bcd6f8;
      }
      uVar5 = BIO_gets(*(BIO **)(param_1 + 8),*(char **)(param_1 + 2),param_1[4]);
      if ((int)uVar5 < 1) {
        iVar3 = BIO_test_flags(*(BIO **)(param_1 + 8),8);
        pbVar11 = local_70;
        if (iVar3 != 0) goto LAB_00bcd294;
        goto LAB_00bcd6f8;
      }
      if (uVar5 == param_1[4]) goto LAB_00bcd6f8;
      pbVar11 = *(byte **)(param_1 + 2);
      if (*param_1 != 1) break;
      uVar5 = (uint)*pbVar11;
      if (*pbVar11 == 0) {
LAB_00bcd668:
        iVar3 = 0xd7;
LAB_00bcd6f0:
        ERR_put_error(0x27,0x76,0x73,"crypto/ocsp/ocsp_ht.c",iVar3);
        goto LAB_00bcd6f8;
      }
      pbVar12 = pbVar11 + -1;
      while (iVar3 = isspace(uVar5), iVar3 == 0) {
        pbVar11 = pbVar11 + 1;
        uVar5 = (uint)*pbVar11;
        pbVar12 = pbVar12 + 1;
        if (uVar5 == 0) goto LAB_00bcd668;
      }
      while (iVar3 = isspace(uVar5), pbVar13 = pbVar11, iVar3 != 0) {
        pbVar11 = pbVar11 + 1;
        uVar5 = (uint)*pbVar11;
        pbVar12 = pbVar12 + 1;
        if (uVar5 == 0) {
          iVar3 = 0xe0;
          goto LAB_00bcd6f0;
        }
      }
      while (iVar3 = isspace(uVar5), iVar3 == 0) {
        uVar5 = (uint)pbVar13[1];
        pbVar12 = pbVar12 + 1;
        pbVar13 = pbVar13 + 1;
        if (uVar5 == 0) {
          iVar3 = 0xe9;
          goto LAB_00bcd6f0;
        }
      }
      *pbVar13 = 0;
      uVar9 = strtoul((char *)pbVar11,(char **)&local_68,10);
      if (*local_68 != 0) goto LAB_00bcd6f8;
      do {
        pbVar13 = pbVar12;
        if (pbVar13[2] == 0) goto LAB_00bcd42c;
        iVar3 = isspace((uint)pbVar13[2]);
        pbVar12 = pbVar13 + 1;
      } while (iVar3 != 0);
      sVar6 = strlen((char *)(pbVar13 + 2));
      pbVar12 = pbVar13 + 1 + sVar6;
      local_68 = pbVar12;
      iVar3 = isspace((uint)*pbVar12);
      while (iVar3 != 0) {
        *pbVar12 = 0;
        pbVar12 = local_68 + -1;
        pbVar1 = local_68 + -1;
        local_68 = pbVar12;
        iVar3 = isspace((uint)*pbVar1);
      }
LAB_00bcd42c:
      if ((int)uVar9 != 200) {
        ERR_put_error(0x27,0x76,0x72,"crypto/ocsp/ocsp_ht.c",0x104);
        if (pbVar13[2] == 0) {
          ERR_add_error_data(2,"Code=",pbVar11);
        }
        else {
          ERR_add_error_data(4,"Code=",pbVar11,",Reason=",pbVar13 + 2);
        }
        goto LAB_00bcd6f8;
      }
      *param_1 = 2;
    }
    for (; (bVar2 = *pbVar11, bVar2 == 10 || (bVar2 == 0xd)); pbVar11 = pbVar11 + 1) {
    }
    local_70 = pbVar11;
  } while (bVar2 != 0);
  *param_1 = 3;
LAB_00bcd578:
  lVar8 = BIO_ctrl(*(BIO **)(param_1 + 8),3,0,&local_70);
  pbVar11 = local_70;
  if (1 < (int)lVar8) {
    pbVar11 = local_70 + 1;
    if (*local_70 != 0x30) goto LAB_00bcd6f8;
    bVar2 = *pbVar11;
    if ((char)bVar2 < '\0') {
      if ((int)lVar8 < 6) goto LAB_00bcd294;
      uVar5 = bVar2 & 0x7f;
      if (3 < uVar5 - 1) goto LAB_00bcd6f8;
      uVar9 = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      pbVar11 = local_70 + 3;
      uVar10 = uVar5;
      do {
        local_70 = pbVar11;
        *(ulong *)(param_1 + 10) = uVar9 << 8;
        uVar10 = uVar10 - 1;
        uVar9 = (ulong)local_70[-1] | uVar9 << 8;
        *(ulong *)(param_1 + 10) = uVar9;
        pbVar11 = local_70 + 1;
      } while (uVar10 != 0);
      if (*(ulong *)(param_1 + 0xc) < uVar9) goto LAB_00bcd6f8;
      lVar8 = uVar9 + (uVar5 + 2);
    }
    else {
      lVar8 = (ulong)bVar2 + 2;
      local_70 = pbVar11;
    }
    *(long *)(param_1 + 10) = lVar8;
    *param_1 = 4;
LAB_00bcd630:
    lVar8 = BIO_ctrl(*(BIO **)(param_1 + 8),3,0,(void *)0x0);
    pbVar11 = local_70;
    if ((int)param_1[10] <= (int)lVar8) {
      *param_1 = 0x1008;
switchD_00bcd2f4_default:
      return 1;
    }
  }
  goto LAB_00bcd294;
}

