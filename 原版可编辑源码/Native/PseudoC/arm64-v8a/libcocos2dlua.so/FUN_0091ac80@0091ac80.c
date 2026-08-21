
int FUN_0091ac80(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  byte *__nptr;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
                    /* try { // try from 0091ac80 to 00a1ad13 has its CatchHandler @ 0091ab08 */
  __s = (char *)zlibVersion();
  sVar3 = strlen(__s);
  sVar3 = (long)((sVar3 << 0x20) + 0x100000000) >> 0x20;
  __nptr = (byte *)lua_newuserdata(param_1,sVar3);
  memcpy(__nptr,__s,sVar3);
  uVar4 = (uint)*__nptr;
  if (*__nptr == 0) {
    return 0;
  }
  iVar5 = 0;
  do {
    pbVar6 = __nptr + 1;
    if (uVar4 - 0x30 < 10) {
      do {
        pbVar7 = pbVar6;
                    /* catch() { ... } // from try @ 0091ac78 with catch @ 0091acfc */
        pbVar6 = pbVar7 + 1;
        bVar1 = *pbVar7;
                    /* catch() { ... } // from try @ 0091abd8 with catch @ 0091ad00 */
      } while (bVar1 - 0x30 < 10);
                    /* try { // try from 0091ad14 to 00a1ae3f has its CatchHandler @ 0091ad14
                       catch() { ... } // from try @ 0091ad14 with catch @ 0091ad14
                       catch() { ... } // from try @ 0091aec0 with catch @ 0091ad14 */
      if (__nptr != pbVar7) {
        *pbVar7 = 0;
        iVar2 = atoi((char *)__nptr);
        lua_pushnumber((double)iVar2,param_1);
        iVar5 = iVar5 + 1;
        if (bVar1 == 0) {
          return iVar5;
        }
        uVar4 = (uint)*pbVar6;
        __nptr = pbVar6;
      }
    }
    if (uVar4 != 0) {
      while (9 < uVar4 - 0x30) {
        __nptr = __nptr + 1;
        uVar4 = (uint)*__nptr;
        if (uVar4 == 0) {
          return iVar5;
        }
      }
    }
  } while (uVar4 != 0);
  return iVar5;
}

