
undefined8 FUN_00a2da18(long param_1,long param_2,byte *param_3,uint param_4)

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
  
                    /* try { // try from 00a2da44 to 00b2da5b has its CatchHandler @ 00a2dbcc */
  local_60 = (char *)0x0;
  local_58 = 0;
  pcVar6 = strstr((char *)param_3,"://");
  __s_00 = param_3;
  if (pcVar6 != (char *)0x0) {
    __s_00 = (byte *)(pcVar6 + 3);
                    /* try { // try from 00a2da64 to 00b2da6f has its CatchHandler @ 00a2dbc8 */
                    /* try { // try from 00a2da70 to 00b2da7b has its CatchHandler @ 00a2dbc4 */
    iVar5 = FUN_00a33994("https",param_3,5);
    if (iVar5 == 0) {
      iVar5 = FUN_00a33994("socks5h",param_3,7);
      if (iVar5 == 0) {
        iVar5 = FUN_00a33994("socks5",param_3,6);
        if (iVar5 == 0) {
          iVar5 = FUN_00a33994("socks4a",param_3,7);
          if (iVar5 == 0) {
            iVar5 = FUN_00a33994("socks4",param_3,6);
            if ((iVar5 == 0) && (iVar5 = FUN_00a33994("socks",param_3,5), iVar5 == 0)) {
              iVar5 = FUN_00a33994("http:",param_3,5);
              if (iVar5 == 0) {
                FUN_00a23020(param_1,"Unsupported proxy scheme for \'%s\'",param_3);
                return 7;
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
        param_4 = 7;
      }
    }
    else {
      param_4 = 2;
                    /* try { // try from 00a2da7c to 00b2db4f has its CatchHandler @ 00a2dbdc */
    }
  }
  pcVar6 = strchr((char *)__s_00,0x40);
  if (pcVar6 != (char *)0x0) {
    uVar7 = FUN_00a2d60c(__s_00,(long)pcVar6 - (long)__s_00,&local_58,&local_60,0);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    __s_00 = (byte *)(pcVar6 + 1);
  }
                    /* try { // try from 00a2db50 to 00b2dc33 has its CatchHandler @ 00a2d9f0 */
  __s = __s_00;
  if (*__s_00 != 0x5b) goto LAB_00a2dbb0;
  __s = __s_00 + 1;
  uVar11 = (uint)*__s;
  pbVar4 = __s;
  if (*__s != 0) {
    pbVar12 = __s_00 + 2;
    do {
      iVar5 = isxdigit(uVar11);
      pbVar4 = pbVar12;
      if (((iVar5 == 0) && (uVar11 != 0x2e)) && (uVar11 != 0x3a)) {
                    /* catch() { ... } // from try @ 00a2dcb4 with catch @ 00a2ddf8 */
                    /* catch() { ... } // from try @ 00a2dca8 with catch @ 00a2ddfc */
        if (uVar11 != 0x25) {
          pbVar12 = pbVar12 + -1;
          goto LAB_00a2de78;
        }
                    /* catch() { ... } // from try @ 00a2dc88 with catch @ 00a2de00 */
                    /* catch() { ... } // from try @ 00a2dcc0 with catch @ 00a2de10 */
        iVar5 = strncmp("%25",(char *)(pbVar12 + -1),3);
        if (iVar5 != 0) {
          FUN_00a22d58(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
        }
        uVar11 = (uint)*pbVar12;
        if (uVar11 != 0) goto LAB_00a2de30;
        break;
      }
      uVar11 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar11 != 0);
  }
  goto LAB_00a2db9c;
LAB_00a2de78:
  pbVar4 = pbVar12;
  if (uVar11 != 0x5d) goto LAB_00a2db9c;
  __s_00 = pbVar12 + 1;
  *pbVar12 = 0;
  goto LAB_00a2dbb0;
  while( true ) {
                    /* try { // try from 00a2de68 to 00b2dec7 has its CatchHandler @ 00a2de68
                       catch() { ... } // from try @ 00a2de68 with catch @ 00a2de68
                       catch() { ... } // from try @ 00a2e0a4 with catch @ 00a2de68 */
    pbVar12 = pbVar12 + 1;
    uVar11 = (uint)*pbVar12;
    pbVar4 = pbVar12;
    if (uVar11 == 0) break;
LAB_00a2de30:
    iVar5 = isalpha(uVar11);
    if (((iVar5 == 0) && (iVar5 = isxdigit(uVar11), iVar5 == 0)) &&
       ((1 < uVar11 - 0x2d && ((uVar11 != 0x5f && (uVar11 != 0x7e)))))) goto LAB_00a2de78;
  }
LAB_00a2db9c:
  __s_00 = pbVar4;
  FUN_00a22d58(param_1,"Invalid IPv6 address format\n");
LAB_00a2dbb0:
  pcVar6 = strchr((char *)__s_00,0x3a);
  if (pcVar6 == (char *)0x0) {
    if (*__s == 0x2f) {
      return 5;
    }
                    /* try { // try from 00a2dc34 to 00b2dc87 has its CatchHandler @ 00a2dc34
                       catch() { ... } // from try @ 00a2dc34 with catch @ 00a2dc34
                       catch() { ... } // from try @ 00a2dd84 with catch @ 00a2dc34 */
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
LAB_00a2dc80:
      bVar3 = *__s;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00a2da70 with catch @ 00a2dbc4 */
    local_68 = (char *)0x0;
                    /* catch() { ... } // from try @ 00a2da64 with catch @ 00a2dbc8 */
    *pcVar6 = '\0';
                    /* catch() { ... } // from try @ 00a2da44 with catch @ 00a2dbcc */
    uVar8 = strtol(pcVar6 + 1,&local_68,10);
                    /* catch() { ... } // from try @ 00a2da7c with catch @ 00a2dbdc */
    if (((local_68 == (char *)0x0) || (cVar2 = *local_68, cVar2 == '\0')) || (cVar2 == '/')) {
      if (uVar8 < 0x10000) goto LAB_00a2dc7c;
    }
    else if ((uVar8 >> 0x10 == 0) && (cVar2 == ' ')) {
LAB_00a2dc7c:
      *(ulong *)(param_2 + 0x198) = uVar8;
      goto LAB_00a2dc80;
    }
    FUN_00a22d58(param_1,"No valid port number in proxy string (%s)\n",pcVar6 + 1);
    bVar3 = *__s;
  }
  if (bVar3 == 0) {
LAB_00a2dda8:
    (*(code *)PTR_free_01d1b748)(local_58);
    local_58 = 0;
    (*(code *)PTR_free_01d1b748)(local_60);
    uVar7 = 0;
  }
  else {
                    /* try { // try from 00a2dc88 to 00b2dc9f has its CatchHandler @ 00a2de00 */
    plVar1 = (long *)(param_2 + 0x118);
    if ((param_4 & 0xfffffffc) != 4) {
      plVar1 = (long *)(param_2 + 0x158);
    }
    *(uint *)(plVar1 + 5) = param_4;
    if (local_58 == 0) {
LAB_00a2dd4c:
      if ((-1 < (long)uVar8) &&
         (((plVar1[4] = uVar8, (param_4 & 0xfffffffc) == 4 || (*(long *)(param_2 + 0x198) < 0)) ||
          (*(long *)(param_2 + 0x118) == 0)))) {
        *(ulong *)(param_2 + 0x198) = uVar8;
      }
      (*(code *)PTR_free_01d1b748)(*plVar1);
                    /* try { // try from 00a2dd84 to 00b2de67 has its CatchHandler @ 00a2dc34 */
      *plVar1 = 0;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(__s);
      *plVar1 = lVar9;
      plVar1[2] = lVar9;
      if (lVar9 != 0) goto LAB_00a2dda8;
    }
    else {
                    /* try { // try from 00a2dca8 to 00b2dcb3 has its CatchHandler @ 00a2ddfc */
                    /* try { // try from 00a2dcb4 to 00b2dcbf has its CatchHandler @ 00a2ddf8 */
      (*(code *)PTR_free_01d1b748)(plVar1[6]);
      plVar1[6] = 0;
                    /* try { // try from 00a2dcc0 to 00b2dd83 has its CatchHandler @ 00a2de10 */
      lVar9 = FUN_00a2ea90(param_1,local_58,0,0);
      plVar1[6] = lVar9;
      if (lVar9 != 0) {
        (*(code *)PTR_free_01d1b748)(plVar1[7]);
        pcVar6 = local_60;
        plVar1[7] = 0;
        if ((local_60 == (char *)0x0) || (sVar10 = strlen(local_60), 0xff < sVar10)) {
          lVar9 = (*(code *)PTR_strdup_01d1b758)(&DAT_0189703a);
          plVar1[7] = lVar9;
        }
        else {
          lVar9 = FUN_00a2ea90(param_1,pcVar6,0,0);
          plVar1[7] = lVar9;
        }
        if (lVar9 != 0) {
          *(undefined1 *)(param_2 + 0x3c1) = 1;
          goto LAB_00a2dd4c;
        }
      }
    }
    uVar7 = 0x1b;
  }
  return uVar7;
}

