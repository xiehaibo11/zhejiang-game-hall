
undefined4 FUN_00b81670(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  char *__s;
  X509_NAME *a;
  char *pcVar11;
  X509_NAME *a_00;
  int *piVar12;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b815bc with catch @ 00b81670
                        */
  uVar7 = 0x33;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b818d4 with catch @ 00b816a4
                        */
  switch(*param_2) {
  case 1:
    piVar10 = *(int **)(param_2 + 2);
    piVar12 = *(int **)(param_1 + 8);
    pcVar4 = *(char **)(piVar10 + 2);
    __s = *(char **)(piVar12 + 2);
    pcVar5 = strchr(pcVar4,0x40);
    pcVar11 = strchr(__s,0x40);
    if (pcVar11 == (char *)0x0) goto LAB_00b81958;
    if (pcVar5 == (char *)0x0) {
                    /* try { // try from 00b818d4 to 00c8195f has its CatchHandler @ 00b816a4 */
      if (*pcVar4 == '.') {
        iVar3 = *piVar12;
        iVar1 = *piVar10;
        iVar2 = iVar3 - iVar1;
        if (iVar2 == 0 || iVar3 < iVar1) {
          return 0x2f;
        }
        iVar3 = strcasecmp(pcVar4,__s + iVar2);
joined_r0x00b81844:
        if (iVar3 != 0) {
          return 0x2f;
        }
        return 0;
      }
    }
    else {
      sVar6 = (long)pcVar5 - (long)pcVar4;
      if (sVar6 != 0) {
                    /* try { // try from 00b816f8 to 00c816ff has its CatchHandler @ 00b8192c */
        if (sVar6 != (long)pcVar11 - (long)__s) {
          return 0x2f;
        }
        iVar3 = strncmp(pcVar4,__s,sVar6);
        if (iVar3 != 0) {
          return 0x2f;
        }
      }
      pcVar4 = pcVar5 + 1;
                    /* try { // try from 00b81710 to 00c81713 has its CatchHandler @ 00b81930 */
    }
    pcVar11 = pcVar11 + 1;
    break;
  case 2:
    pcVar4 = *(char **)(*(int **)(param_2 + 2) + 2);
    if (*pcVar4 == '\0') {
      return 0;
    }
    iVar3 = **(int **)(param_2 + 2);
    iVar1 = **(int **)(param_1 + 8);
    pcVar11 = *(char **)(*(int **)(param_1 + 8) + 2);
    iVar2 = iVar1 - iVar3;
    if (((iVar2 != 0 && iVar3 <= iVar1) && (pcVar11 = pcVar11 + iVar2, *pcVar4 != '.')) &&
       (pcVar11[-1] != '.')) {
      return 0x2f;
    }
    break;
  default:
    goto switchD_00b816ac_caseD_3;
  case 4:
    a = *(X509_NAME **)(param_1 + 8);
    a_00 = *(X509_NAME **)(param_2 + 2);
    if (((a->modified != 0) && (iVar3 = i2d_X509_NAME(a,(uchar **)0x0), iVar3 < 0)) ||
       ((a_00->modified != 0 && (iVar3 = i2d_X509_NAME(a_00,(uchar **)0x0), iVar3 < 0)))) {
      return 0x11;
    }
    if (a->canon_enclen < a_00->canon_enclen) {
      return 0x2f;
    }
    iVar3 = memcmp(a_00->canon_enc,a->canon_enc,(long)a_00->canon_enclen);
LAB_00b817b0:
    if (iVar3 != 0) {
      return 0x2f;
    }
    return 0;
  case 6:
    piVar10 = *(int **)(param_2 + 2);
    pcVar11 = *(char **)(piVar10 + 2);
    pcVar4 = strchr(*(char **)(*(long *)(param_1 + 8) + 8),0x3a);
    if (((pcVar4 != (char *)0x0) && (pcVar4[1] == '/')) && (pcVar4[2] == '/')) {
      pcVar4 = pcVar4 + 3;
      pcVar5 = strchr(pcVar4,0x3a);
      if ((pcVar5 == (char *)0x0) && (pcVar5 = strchr(pcVar4,0x2f), pcVar5 == (char *)0x0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b818d0 with catch @ 00b8194c
                        */
        sVar6 = strlen(pcVar4);
        iVar3 = (int)sVar6;
      }
      else {
        iVar3 = (int)pcVar5 - (int)pcVar4;
      }
      if (iVar3 != 0) {
        iVar1 = *piVar10;
        if (*pcVar11 == '.') {
          if (iVar3 <= iVar1) {
            return 0x2f;
          }
          iVar3 = strncasecmp(pcVar4 + ((long)iVar3 - (long)iVar1),pcVar11,(long)iVar1);
          goto joined_r0x00b81844;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b816f8 with catch @ 00b8192c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b81710 with catch @ 00b81930
                        */
        if (iVar1 != iVar3) {
          return 0x2f;
        }
        iVar3 = strncasecmp(pcVar4,pcVar11,(long)iVar3);
        goto LAB_00b817b0;
      }
    }
    goto LAB_00b81958;
  case 7:
    iVar3 = **(int **)(param_1 + 8);
    iVar1 = **(int **)(param_2 + 2);
    lVar8 = *(long *)(*(int **)(param_2 + 2) + 2);
    if (((iVar3 == 0x10) || (iVar3 == 4)) && ((iVar1 == 0x20 || (iVar1 == 8)))) {
      if (iVar3 << 1 != iVar1) {
        return 0x2f;
      }
      lVar9 = 0;
      do {
        if (((*(byte *)(lVar8 + lVar9) ^ *(byte *)(*(long *)(*(int **)(param_1 + 8) + 2) + lVar9)) &
            *(byte *)(lVar8 + iVar3 + lVar9)) != 0) {
          return 0x2f;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar3);
      return 0;
    }
LAB_00b81958:
    uVar7 = 0x35;
    goto switchD_00b816ac_caseD_3;
  }
  iVar3 = strcasecmp(pcVar4,pcVar11);
  uVar7 = 0;
  if (iVar3 != 0) {
    uVar7 = 0x2f;
  }
switchD_00b816ac_caseD_3:
  return uVar7;
}

