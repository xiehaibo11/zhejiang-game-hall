
int CONF_parse_list(char *list,int sep,int nospc,list_cb *list_cb,void *arg)

{
  int iVar1;
  byte *pbVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  byte *pbVar7;
  
                    /* catch() { ... } // from try @ 00b01f74 with catch @ 00b02014
                       catch() { ... } // from try @ 00b01fc8 with catch @ 00b02014 */
  if (list == (char *)0x0) {
    ERR_put_error(0xe,0x77,0x73,"crypto/conf/conf_mod.c",0x207);
    iVar1 = 0;
  }
  else {
    if (nospc == 0) {
      do {
        pcVar4 = strchr(list,sep);
        if ((pcVar4 == list) || (*list == '\0')) {
          list = (char *)0x0;
          iVar1 = 0;
        }
        else {
          pcVar5 = pcVar4;
          if (pcVar4 == (char *)0x0) {
            sVar3 = strlen(list);
            pcVar5 = list + sVar3;
          }
                    /* try { // try from 00b0210c to 00c02117 has its CatchHandler @ 00b029b0 */
          iVar1 = (int)pcVar5 - (int)list;
        }
        iVar1 = (*list_cb)(list,iVar1,arg);
        if (iVar1 < 1) {
          return iVar1;
        }
        list = pcVar4 + 1;
      } while (pcVar4 != (char *)0x0);
    }
    else {
      do {
        uVar6 = (uint)(byte)*list;
        if (*list != 0) {
          do {
                    /* catch() { ... } // from try @ 00b0236c with catch @ 00b02028
                       catch() { ... } // from try @ 00b0288c with catch @ 00b02028
                       catch() { ... } // from try @ 00b02980 with catch @ 00b02028 */
            iVar1 = isspace(uVar6);
            if (iVar1 == 0) break;
            list = list + 1;
            uVar6 = (uint)(byte)*list;
          } while (uVar6 != 0);
        }
        pbVar2 = (byte *)strchr(list,sep);
        if ((pbVar2 == (byte *)list) || (uVar6 == 0)) {
          list = (char *)0x0;
          iVar1 = 0;
        }
        else {
          pbVar7 = pbVar2;
          if (pbVar2 == (byte *)0x0) {
            sVar3 = strlen(list);
            pbVar7 = (byte *)(list + sVar3);
          }
          do {
            pbVar7 = pbVar7 + -1;
            iVar1 = isspace((uint)*pbVar7);
          } while (iVar1 != 0);
          iVar1 = (1 - (int)list) + (int)pbVar7;
        }
        iVar1 = (*list_cb)(list,iVar1,arg);
        if (iVar1 < 1) {
          return iVar1;
        }
        list = (char *)(pbVar2 + 1);
      } while (pbVar2 != (byte *)0x0);
    }
    iVar1 = 1;
  }
  return iVar1;
}

