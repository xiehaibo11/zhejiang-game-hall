
long FUN_00a2fd04(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint __c;
  int iVar1;
  byte *__s;
  size_t sVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  
                    /* try { // try from 00a2fd04 to 00b2fd9f has its CatchHandler @ 00a2fb84 */
  __s = (byte *)FUN_00a24258("%s:%d",param_3,param_4);
  if (__s != (byte *)0x0) {
    __c = (uint)*__s;
    pbVar5 = __s;
    if (*__s != 0) {
      do {
        if (__c == 0x3a) break;
                    /* catch() { ... } // from try @ 00a2fcb8 with catch @ 00a2fd50 */
        iVar1 = tolower(__c);
                    /* catch() { ... } // from try @ 00a2fcd0 with catch @ 00a2fd54 */
        *pbVar5 = (byte)iVar1;
        __c = (uint)pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while (__c != 0);
    }
    sVar2 = strlen((char *)__s);
    puVar3 = (undefined8 *)(*(code *)PTR_calloc_01769a18)(1,0x18);
                    /* catch() { ... } // from try @ 00a2fc84 with catch @ 00a2fd84 */
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = param_2;
      puVar3[2] = 1;
      time(puVar3 + 1);
      if (puVar3[1] == 0) {
        puVar3[1] = 1;
      }
      lVar4 = FUN_00a4ae64(*(undefined8 *)(param_1 + 0x50),__s,sVar2 + 1,puVar3);
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
        (*(code *)PTR_free_01769a00)(__s);
        return lVar4;
      }
      (*(code *)PTR_free_01769a00)(puVar3);
    }
    (*(code *)PTR_free_01769a00)(__s);
  }
  return 0;
}

