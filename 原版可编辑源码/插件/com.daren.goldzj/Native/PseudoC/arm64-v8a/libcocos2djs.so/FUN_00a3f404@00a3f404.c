
undefined8 FUN_00a3f404(long *param_1,long param_2)

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
                    /* try { // try from 00a3f424 to 00b3f42b has its CatchHandler @ 00a3f660 */
  local_38 = 0;
                    /* try { // try from 00a3f430 to 00b3f457 has its CatchHandler @ 00a3f668 */
  iVar2 = FUN_00a33994("CSeq:",param_2,5);
  if (iVar2 == 0) {
    uVar3 = FUN_00a33994("Session:",param_2,8);
                    /* try { // try from 00a3f484 to 00b3f4c7 has its CatchHandler @ 00a3f6a8 */
    if ((int)uVar3 != 0) {
      __s1 = (byte *)(param_2 + 8);
      uVar6 = (uint)*__s1;
      if (*__s1 != 0) {
        do {
          iVar2 = isspace(uVar6);
          if (iVar2 == 0) {
            __s = *(char **)(lVar5 + 0x7e8);
            pbVar1 = __s1;
            if (__s != (char *)0x0) {
              sVar4 = strlen(__s);
              iVar2 = strncmp((char *)__s1,__s,sVar4);
              if (iVar2 == 0) {
                return 0;
              }
              FUN_00a23020(lVar5,"Got RTSP Session ID Line [%s], but wanted ID [%s]",__s1,__s);
              return 0x56;
            }
            while (((uVar6 != 0 && (uVar6 != 0x3b)) && (iVar2 = isspace(uVar6), iVar2 == 0))) {
              uVar6 = (uint)pbVar1[1];
              pbVar1 = pbVar1 + 1;
            }
            sVar4 = (long)pbVar1 - (long)__s1;
            __dest = (void *)(*(code *)PTR_malloc_01d1b740)(sVar4 + 1);
            *(void **)(lVar5 + 0x7e8) = __dest;
            if (__dest != (void *)0x0) {
                    /* try { // try from 00a3f584 to 00b3f5d7 has its CatchHandler @ 00a3f710 */
              memcpy(__dest,__s1,sVar4);
              *(undefined1 *)(*(long *)(lVar5 + 0x7e8) + sVar4) = 0;
              return 0;
            }
            return 0x1b;
          }
          __s1 = __s1 + 1;
          uVar6 = (uint)*__s1;
        } while (uVar6 != 0);
      }
      FUN_00a23020(lVar5,"Got a blank Session ID");
      uVar3 = 0;
    }
  }
  else {
    iVar2 = sscanf((char *)(param_2 + 4),": %ld",&local_38);
    if (iVar2 == 1) {
      uVar3 = 0;
      *(undefined8 *)(*(long *)(lVar5 + 0x218) + 0x90) = local_38;
      *(undefined8 *)(lVar5 + 0x8cf0) = local_38;
    }
    else {
      FUN_00a23020(lVar5,"Unable to read the CSeq header: [%s]",param_2);
      uVar3 = 0x55;
    }
  }
                    /* try { // try from 00a3f4e0 to 00b3f523 has its CatchHandler @ 00a3f668 */
  return uVar3;
}

