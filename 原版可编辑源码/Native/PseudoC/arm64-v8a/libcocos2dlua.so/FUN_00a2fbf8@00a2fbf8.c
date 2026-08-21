
long FUN_00a2fbf8(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *__s;
  size_t sVar4;
  long lVar5;
  long local_38;
  
  __s = (byte *)FUN_00a24258("%s:%d");
  if (__s == (byte *)0x0) {
    lVar5 = 0;
  }
  else {
    bVar1 = *__s;
    pbVar2 = __s;
    while ((bVar1 != 0 && (bVar1 != 0x3a))) {
      iVar3 = tolower((uint)bVar1);
      *pbVar2 = (byte)iVar3;
      bVar1 = pbVar2[1];
      pbVar2 = pbVar2 + 1;
    }
    sVar4 = strlen((char *)__s);
    lVar5 = FUN_00a4b04c(*(undefined8 *)(param_1 + 0x50),__s,sVar4 + 1);
    if ((lVar5 != 0) && (*(long *)(param_1 + 0x5c8) != -1)) {
                    /* try { // try from 00a2fc84 to 00b2fcb7 has its CatchHandler @ 00a2fd84 */
      time(&local_38);
      if ((*(long *)(lVar5 + 8) != 0) &&
         (*(long *)(param_1 + 0x5c8) <= local_38 - *(long *)(lVar5 + 8))) {
                    /* try { // try from 00a2fcb8 to 00b2fccb has its CatchHandler @ 00a2fd50 */
        FUN_00a38740(param_1,"Hostname in DNS cache was stale, zapped\n");
        FUN_00a4afac(*(undefined8 *)(param_1 + 0x50),__s,sVar4 + 1);
        lVar5 = 0;
      }
    }
                    /* try { // try from 00a2fcd0 to 00b2fd03 has its CatchHandler @ 00a2fd54 */
    (*(code *)PTR_free_01769a00)(__s);
  }
  return lVar5;
}

