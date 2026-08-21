
undefined8 FUN_00a44400(long param_1,long param_2,byte *param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  size_t sVar10;
  byte *__s;
  uint uVar11;
  byte *pbVar12;
  byte *__s_00;
  char *local_68;
  char *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00a443a0 with catch @ 00a44438 */
  local_60 = (char *)0x0;
  local_58 = 0;
                    /* catch() { ... } // from try @ 00a443b8 with catch @ 00a4443c */
  pcVar6 = strstr((char *)param_3,"://");
  __s_00 = param_3;
  if (pcVar6 != (char *)0x0) {
    __s_00 = (byte *)(pcVar6 + 3);
    iVar5 = FUN_00a4a37c("https",param_3,5);
    if (iVar5 == 0) {
      iVar5 = FUN_00a4a37c("socks5h",param_3,7);
      if (iVar5 == 0) {
        iVar5 = FUN_00a4a37c("socks5",param_3,6);
        if (iVar5 == 0) {
          iVar5 = FUN_00a4a37c("socks4a",param_3,7);
          if (iVar5 == 0) {
                    /* try { // try from 00a444e0 to 00b444f7 has its CatchHandler @ 00a44698 */
            iVar5 = FUN_00a4a37c("socks4",param_3,6);
                    /* try { // try from 00a444f8 to 00b44543 has its CatchHandler @ 00a44488 */
            if ((iVar5 == 0) && (iVar5 = FUN_00a4a37c("socks",param_3,5), iVar5 == 0)) {
              iVar5 = FUN_00a4a37c("http:",param_3,5);
              if (iVar5 == 0) {
                FUN_00a38a08(param_1,"Unsupported proxy scheme for \'%s\'",param_3);
                return 7;
                    /* try { // try from 00a448a4 to 00b448ef has its CatchHandler @ 00a448a4
                       catch() { ... } // from try @ 00a448a4 with catch @ 00a448a4
                       catch() { ... } // from try @ 00a448f4 with catch @ 00a448a4 */
              }
            }
            else {
              param_4 = 4;
            }
          }
          else {
            param_4 = 6;
          }
        }
        else {
          param_4 = 5;
        }
      }
      else {
                    /* try { // try from 00a44488 to 00b444df has its CatchHandler @ 00a44488
                       catch() { ... } // from try @ 00a44488 with catch @ 00a44488
                       catch() { ... } // from try @ 00a444f8 with catch @ 00a44488
                       catch() { ... } // from try @ 00a445a8 with catch @ 00a44488
                       catch() { ... } // from try @ 00a4461c with catch @ 00a44488
                       catch() { ... } // from try @ 00a44668 with catch @ 00a44488 */
        param_4 = 7;
      }
    }
    else {
      param_4 = 2;
    }
  }
  pcVar6 = strchr((char *)__s_00,0x40);
  if (pcVar6 != (char *)0x0) {
    uVar7 = FUN_00a43ff4(__s_00,(long)pcVar6 - (long)__s_00,&local_58,&local_60,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    __s_00 = (byte *)(pcVar6 + 1);
  }
  __s = __s_00;
                    /* try { // try from 00a44544 to 00b445a7 has its CatchHandler @ 00a44698 */
  if (*__s_00 != 0x5b) goto LAB_00a44598;
  __s = __s_00 + 1;
  uVar11 = (uint)*__s;
  pbVar4 = __s;
  if (*__s != 0) {
    pbVar12 = __s_00 + 2;
    do {
      iVar5 = isxdigit(uVar11);
      pbVar4 = pbVar12;
      if (((iVar5 == 0) && (uVar11 != 0x2e)) && (uVar11 != 0x3a)) {
        if (uVar11 != 0x25) {
          pbVar12 = pbVar12 + -1;
          goto LAB_00a44860;
        }
        iVar5 = strncmp("%25",(char *)(pbVar12 + -1),3);
        if (iVar5 != 0) {
                    /* catch() { ... } // from try @ 00a447c4 with catch @ 00a44808 */
          FUN_00a38740(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
        }
        uVar11 = (uint)*pbVar12;
        if (uVar11 != 0) goto LAB_00a44818;
        break;
      }
      uVar11 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar11 != 0);
  }
  goto LAB_00a44584;
LAB_00a44860:
  pbVar4 = pbVar12;
  if (uVar11 != 0x5d) goto LAB_00a44584;
  __s_00 = pbVar12 + 1;
  *pbVar12 = 0;
  goto LAB_00a44598;
  while( true ) {
    pbVar12 = pbVar12 + 1;
    uVar11 = (uint)*pbVar12;
    pbVar4 = pbVar12;
    if (uVar11 == 0) break;
LAB_00a44818:
    iVar5 = isalpha(uVar11);
    if (((iVar5 == 0) && (iVar5 = isxdigit(uVar11), iVar5 == 0)) &&
       ((1 < uVar11 - 0x2d && ((uVar11 != 0x5f && (uVar11 != 0x7e)))))) goto LAB_00a44860;
  }
LAB_00a44584:
  __s_00 = pbVar4;
  FUN_00a38740(param_1,"Invalid IPv6 address format\n");
LAB_00a44598:
  pcVar6 = strchr((char *)__s_00,0x3a);
                    /* try { // try from 00a445a8 to 00b445f7 has its CatchHandler @ 00a44488 */
  if (pcVar6 == (char *)0x0) {
                    /* try { // try from 00a44610 to 00b4461b has its CatchHandler @ 00a44698 */
    if (*__s == 0x2f) {
      return 5;
    }
                    /* try { // try from 00a4461c to 00b4465f has its CatchHandler @ 00a44488 */
    pcVar6 = strchr((char *)__s,0x2f);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
    uVar8 = *(ulong *)(param_1 + 0x238);
    if (uVar8 == 0) {
      uVar8 = 0x1bb;
      if (param_4 != 2) {
        uVar8 = 0x438;
      }
      bVar3 = *__s;
    }
    else {
LAB_00a44668:
                    /* catch() { ... } // from try @ 00a445f8 with catch @ 00a44668
                       try { // try from 00a44668 to 00b446b3 has its CatchHandler @ 00a44488 */
      bVar3 = *__s;
    }
  }
  else {
    local_68 = (char *)0x0;
    *pcVar6 = '\0';
    uVar8 = strtol(pcVar6 + 1,&local_68,10);
    if (((local_68 == (char *)0x0) || (cVar2 = *local_68, cVar2 == '\0')) || (cVar2 == '/')) {
      if (uVar8 < 0x10000) goto LAB_00a44664;
    }
    else {
                    /* try { // try from 00a44660 to 00b44667 has its CatchHandler @ 00a44698 */
      if ((uVar8 >> 0x10 == 0) && (cVar2 == ' ')) {
LAB_00a44664:
        *(ulong *)(param_2 + 0x198) = uVar8;
        goto LAB_00a44668;
      }
    }
                    /* try { // try from 00a445f8 to 00b445fb has its CatchHandler @ 00a44668 */
    FUN_00a38740(param_1,"No valid port number in proxy string (%s)\n",pcVar6 + 1);
    bVar3 = *__s;
  }
  if (bVar3 == 0) {
LAB_00a44790:
    (*(code *)PTR_free_01769a00)(local_58);
    local_58 = 0;
    (*(code *)PTR_free_01769a00)(local_60);
    uVar7 = 0;
  }
  else {
    plVar1 = (long *)(param_2 + 0x118);
    if ((param_4 & 0xfffffffc) != 4) {
      plVar1 = (long *)(param_2 + 0x158);
    }
    *(uint *)(plVar1 + 5) = param_4;
    if (local_58 == 0) {
LAB_00a44734:
      if ((-1 < (long)uVar8) &&
         (((plVar1[4] = uVar8, (param_4 & 0xfffffffc) == 4 || (*(long *)(param_2 + 0x198) < 0)) ||
          (*(long *)(param_2 + 0x118) == 0)))) {
        *(ulong *)(param_2 + 0x198) = uVar8;
      }
      (*(code *)PTR_free_01769a00)(*plVar1);
      *plVar1 = 0;
      lVar9 = (*(code *)PTR_strdup_01769a10)(__s);
      *plVar1 = lVar9;
      plVar1[2] = lVar9;
      if (lVar9 != 0) goto LAB_00a44790;
    }
    else {
                    /* catch() { ... } // from try @ 00a444e0 with catch @ 00a44698
                       catch() { ... } // from try @ 00a44544 with catch @ 00a44698
                       catch() { ... } // from try @ 00a44610 with catch @ 00a44698
                       catch() { ... } // from try @ 00a44660 with catch @ 00a44698 */
      (*(code *)PTR_free_01769a00)(plVar1[6]);
      plVar1[6] = 0;
      lVar9 = FUN_00a45478(param_1,local_58,0,0);
      plVar1[6] = lVar9;
      if (lVar9 != 0) {
        (*(code *)PTR_free_01769a00)(plVar1[7]);
        pcVar6 = local_60;
        plVar1[7] = 0;
        if ((local_60 == (char *)0x0) || (sVar10 = strlen(local_60), 0xff < sVar10)) {
          lVar9 = (*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
          plVar1[7] = lVar9;
        }
        else {
          lVar9 = FUN_00a45478(param_1,pcVar6,0,0);
          plVar1[7] = lVar9;
        }
        if (lVar9 != 0) {
                    /* try { // try from 00a44730 to 00b447c3 has its CatchHandler @ 00a44730
                       catch() { ... } // from try @ 00a44730 with catch @ 00a44730
                       catch() { ... } // from try @ 00a447cc with catch @ 00a44730 */
          *(undefined1 *)(param_2 + 0x3c1) = 1;
          goto LAB_00a44734;
        }
      }
    }
    uVar7 = 0x1b;
  }
                    /* try { // try from 00a447c4 to 00b447cb has its CatchHandler @ 00a44808 */
                    /* try { // try from 00a447cc to 00b44823 has its CatchHandler @ 00a44730 */
  return uVar7;
}

