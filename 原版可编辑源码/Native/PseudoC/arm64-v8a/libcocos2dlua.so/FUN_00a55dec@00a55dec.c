
undefined8 FUN_00a55dec(long *param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  void *__dest;
  long lVar5;
  byte *__s1;
  char *__s;
  uint uVar6;
  undefined8 local_38;
  
  lVar5 = *param_1;
  local_38 = 0;
  iVar2 = FUN_00a4a37c("CSeq:",param_2,5);
  if (iVar2 == 0) {
                    /* try { // try from 00a55e60 to 00b55e73 has its CatchHandler @ 00a55ecc */
    uVar3 = FUN_00a4a37c("Session:",param_2,8);
    if ((int)uVar3 != 0) {
      __s1 = (byte *)(param_2 + 8);
      uVar6 = (uint)*__s1;
      if (*__s1 != 0) {
        do {
                    /* try { // try from 00a55e78 to 00b55e8b has its CatchHandler @ 00a55ed0 */
          iVar2 = isspace(uVar6);
          if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 00a55dd0 with catch @ 00a55ed0
                       catch() { ... } // from try @ 00a55e78 with catch @ 00a55ed0 */
            __s = *(char **)(lVar5 + 0x7e8);
            pbVar1 = __s1;
            if (__s != (char *)0x0) {
              sVar4 = strlen(__s);
                    /* try { // try from 00a55eec to 00b55f3b has its CatchHandler @ 00a55eec
                       catch() { ... } // from try @ 00a55eec with catch @ 00a55eec
                       catch() { ... } // from try @ 00a55f70 with catch @ 00a55eec
                       catch() { ... } // from try @ 00a55fb8 with catch @ 00a55eec */
              iVar2 = strncmp((char *)__s1,__s,sVar4);
              if (iVar2 == 0) {
                return 0;
              }
              FUN_00a38a08(lVar5,"Got RTSP Session ID Line [%s], but wanted ID [%s]",__s1,__s);
              return 0x56;
            }
                    /* try { // try from 00a55f3c to 00b55f53 has its CatchHandler @ 00a55ffc */
            while (((uVar6 != 0 && (uVar6 != 0x3b)) && (iVar2 = isspace(uVar6), iVar2 == 0))) {
              uVar6 = (uint)pbVar1[1];
              pbVar1 = pbVar1 + 1;
            }
            sVar4 = (long)pbVar1 - (long)__s1;
                    /* try { // try from 00a55f58 to 00b55f6f has its CatchHandler @ 00a55ff8 */
            __dest = (void *)(*(code *)PTR_malloc_017699f8)(sVar4 + 1);
            *(void **)(lVar5 + 0x7e8) = __dest;
            if (__dest != (void *)0x0) {
              memcpy(__dest,__s1,sVar4);
                    /* try { // try from 00a55f70 to 00b55fa3 has its CatchHandler @ 00a55eec */
              *(undefined1 *)(*(long *)(lVar5 + 0x7e8) + sVar4) = 0;
              return 0;
            }
            return 0x1b;
          }
          __s1 = __s1 + 1;
          uVar6 = (uint)*__s1;
        } while (uVar6 != 0);
      }
                    /* try { // try from 00a55e8c to 00b55eeb has its CatchHandler @ 00a55d34 */
      FUN_00a38a08(lVar5,"Got a blank Session ID");
      uVar3 = 0;
    }
  }
  else {
                    /* try { // try from 00a55e2c to 00b55e5f has its CatchHandler @ 00a55d34 */
    iVar2 = sscanf((char *)(param_2 + 4),": %ld",&local_38);
    if (iVar2 == 1) {
      uVar3 = 0;
      *(undefined8 *)(*(long *)(lVar5 + 0x218) + 0x90) = local_38;
      *(undefined8 *)(lVar5 + 0x8cf0) = local_38;
    }
    else {
      FUN_00a38a08(lVar5,"Unable to read the CSeq header: [%s]",param_2);
      uVar3 = 0x55;
    }
  }
                    /* catch() { ... } // from try @ 00a55d88 with catch @ 00a55ecc
                       catch() { ... } // from try @ 00a55e60 with catch @ 00a55ecc */
  return uVar3;
}

