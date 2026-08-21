
void FUN_00a30750(long *param_1,int param_2)

{
  undefined1 *__buf;
  undefined1 *puVar1;
  int iVar2;
  ssize_t sVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 local_78;
  undefined2 local_74;
  long local_70;
  char local_64 [4];
  
  if (param_2 == 0x1f) {
    lVar6 = *param_1;
    lVar7 = *(long *)(lVar6 + 0x218);
    __buf = (undefined1 *)(lVar7 + 0x1cb8);
    *__buf = 0xff;
    *(undefined2 *)(lVar7 + 0x1cb9) = 0x1ffa;
    *(long *)(lVar7 + 0x1eb8) = lVar7 + 0x1cbc;
                    /* catch() { ... } // from try @ 00a3066c with catch @ 00a307c0 */
                    /* catch() { ... } // from try @ 00a30660 with catch @ 00a307c4 */
    *(char *)(lVar7 + 0x1cbb) = (char)((ushort)*(undefined2 *)(lVar7 + 0x1ca8) >> 8);
                    /* catch() { ... } // from try @ 00a30640 with catch @ 00a307c8 */
    *(long *)(lVar7 + 0x1eb8) = lVar7 + 0x1cbd;
                    /* catch() { ... } // from try @ 00a30678 with catch @ 00a307d8 */
    *(char *)(lVar7 + 0x1cbc) = (char)*(undefined2 *)(lVar7 + 0x1ca8);
    puVar1 = (undefined1 *)(lVar7 + 0x1cc0);
    *(long *)(lVar7 + 0x1eb8) = lVar7 + 0x1cbe;
    *(char *)(lVar7 + 0x1cbd) = (char)((ushort)*(undefined2 *)(lVar7 + 0x1caa) >> 8);
    *(undefined1 **)(lVar7 + 0x1eb8) = (undefined1 *)(lVar7 + 0x1cbf);
    *(char *)(lVar7 + 0x1cbe) = (char)*(undefined2 *)(lVar7 + 0x1caa);
    *(undefined1 **)(lVar7 + 0x1eb8) = puVar1;
    *(undefined1 *)(lVar7 + 0x1cbf) = 0xff;
    puVar5 = puVar1;
    if (puVar1 < (undefined1 *)(lVar7 + 0x1eb8)) {
      puVar5 = (undefined1 *)(lVar7 + 0x1cc1);
                    /* try { // try from 00a30830 to 00b30883 has its CatchHandler @ 00a30830
                       catch() { ... } // from try @ 00a30830 with catch @ 00a30830
                       catch() { ... } // from try @ 00a30980 with catch @ 00a30830 */
      *(undefined1 **)(lVar7 + 0x1eb8) = puVar5;
      *puVar1 = 0xf0;
    }
    *(undefined1 **)(lVar7 + 0x1ec0) = puVar5;
    *(undefined1 **)(lVar7 + 0x1eb8) = __buf;
    FUN_00a30984(lVar6,0x3e,lVar7 + 0x1cba,puVar5 + (-2 - (long)__buf));
    sVar3 = send((int)param_1[0x4c],__buf,3,0x4000);
    if (sVar3 < 0) {
      puVar4 = (undefined4 *)__errno();
                    /* try { // try from 00a30884 to 00b3089b has its CatchHandler @ 00a30a0c */
      FUN_00a23020(lVar6,"Sending data failed (%d)",*puVar4);
    }
                    /* try { // try from 00a308a4 to 00b308af has its CatchHandler @ 00a309f8 */
    lVar9 = 4;
    pcVar8 = (char *)(lVar7 + 0x1cbb);
    while (lVar9 != 0) {
      local_64[0] = *pcVar8;
                    /* try { // try from 00a308b0 to 00b308bb has its CatchHandler @ 00a309f4 */
      lVar9 = lVar9 + -1;
                    /* try { // try from 00a308bc to 00b3092f has its CatchHandler @ 00a30a1c */
      if (local_64[0] == -1) {
        lVar10 = 2;
        local_64[1] = 0xff;
      }
      else {
        lVar10 = 1;
      }
      lVar11 = 0;
      do {
        local_78 = (undefined4)param_1[0x4c];
        local_74 = 4;
        iVar2 = FUN_00a15cfc(&local_78,1,0xffffffff);
        if (iVar2 + 1U < 2) goto LAB_00a30930;
        local_70 = 0;
        iVar2 = FUN_00a232e8(param_1,(int)param_1[0x4c],local_64 + lVar11,lVar10 - lVar11,&local_70)
        ;
      } while ((iVar2 == 0) && (lVar11 = local_70 + lVar11, lVar11 < lVar10));
      pcVar8 = pcVar8 + 1;
      if (iVar2 != 0) break;
    }
LAB_00a30930:
                    /* try { // try from 00a3093c to 00b30967 has its CatchHandler @ 00a309fc */
    sVar3 = send((int)param_1[0x4c],(void *)(lVar7 + 0x1cbf),2,0x4000);
    if (sVar3 < 0) {
      puVar4 = (undefined4 *)__errno();
      FUN_00a23020(lVar6,"Sending data failed (%d)",*puVar4);
    }
  }
                    /* try { // try from 00a30970 to 00b3097f has its CatchHandler @ 00a30a1c */
                    /* try { // try from 00a30980 to 00b30a73 has its CatchHandler @ 00a30830 */
  return;
}

