
void FUN_00a47138(long *param_1,int param_2)

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
  
                    /* try { // try from 00a47140 to 00b4719b has its CatchHandler @ 00a47140
                       catch() { ... } // from try @ 00a47140 with catch @ 00a47140
                       catch() { ... } // from try @ 00a471f8 with catch @ 00a47140
                       catch() { ... } // from try @ 00a47280 with catch @ 00a47140
                       catch() { ... } // from try @ 00a472e8 with catch @ 00a47140
                       catch() { ... } // from try @ 00a47330 with catch @ 00a47140
                       catch() { ... } // from try @ 00a473a8 with catch @ 00a47140 */
  if (param_2 == 0x1f) {
    lVar6 = *param_1;
    lVar7 = *(long *)(lVar6 + 0x218);
    __buf = (undefined1 *)(lVar7 + 0x1cb8);
    *__buf = 0xff;
    *(undefined2 *)(lVar7 + 0x1cb9) = 0x1ffa;
                    /* try { // try from 00a4719c to 00b471b3 has its CatchHandler @ 00a473fc */
    *(long *)(lVar7 + 0x1eb8) = lVar7 + 0x1cbc;
    *(char *)(lVar7 + 0x1cbb) = (char)((ushort)*(undefined2 *)(lVar7 + 0x1ca8) >> 8);
    *(long *)(lVar7 + 0x1eb8) = lVar7 + 0x1cbd;
    *(char *)(lVar7 + 0x1cbc) = (char)*(undefined2 *)(lVar7 + 0x1ca8);
    puVar1 = (undefined1 *)(lVar7 + 0x1cc0);
                    /* try { // try from 00a471f4 to 00b471f7 has its CatchHandler @ 00a473a8 */
                    /* try { // try from 00a471f8 to 00b47223 has its CatchHandler @ 00a47140 */
    *(long *)(lVar7 + 0x1eb8) = lVar7 + 0x1cbe;
    *(char *)(lVar7 + 0x1cbd) = (char)((ushort)*(undefined2 *)(lVar7 + 0x1caa) >> 8);
    *(undefined1 **)(lVar7 + 0x1eb8) = (undefined1 *)(lVar7 + 0x1cbf);
    *(char *)(lVar7 + 0x1cbe) = (char)*(undefined2 *)(lVar7 + 0x1caa);
    *(undefined1 **)(lVar7 + 0x1eb8) = puVar1;
    *(undefined1 *)(lVar7 + 0x1cbf) = 0xff;
    puVar5 = puVar1;
    if (puVar1 < (undefined1 *)(lVar7 + 0x1eb8)) {
      puVar5 = (undefined1 *)(lVar7 + 0x1cc1);
      *(undefined1 **)(lVar7 + 0x1eb8) = puVar5;
      *puVar1 = 0xf0;
                    /* try { // try from 00a47224 to 00b4727f has its CatchHandler @ 00a473fc */
    }
    *(undefined1 **)(lVar7 + 0x1ec0) = puVar5;
    *(undefined1 **)(lVar7 + 0x1eb8) = __buf;
    FUN_00a4736c(lVar6,0x3e,lVar7 + 0x1cba,puVar5 + (-2 - (long)__buf));
    sVar3 = send((int)param_1[0x4c],__buf,3,0x4000);
    if (sVar3 < 0) {
      puVar4 = (undefined4 *)__errno();
      FUN_00a38a08(lVar6,"Sending data failed (%d)",*puVar4);
    }
                    /* try { // try from 00a47280 to 00b472c3 has its CatchHandler @ 00a47140 */
    lVar9 = 4;
    pcVar8 = (char *)(lVar7 + 0x1cbb);
    while (lVar9 != 0) {
      local_64[0] = *pcVar8;
      lVar9 = lVar9 + -1;
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
                    /* try { // try from 00a472c4 to 00b472cb has its CatchHandler @ 00a473a8 */
        local_74 = 4;
                    /* try { // try from 00a472d4 to 00b472e7 has its CatchHandler @ 00a473b8 */
        iVar2 = FUN_00a2b6e4(&local_78,1,0xffffffff);
        if (iVar2 + 1U < 2) goto LAB_00a47318;
        local_70 = 0;
                    /* try { // try from 00a472e8 to 00b47323 has its CatchHandler @ 00a47140 */
        iVar2 = FUN_00a38cd0(param_1,(int)param_1[0x4c],local_64 + lVar11,lVar10 - lVar11,&local_70)
        ;
      } while ((iVar2 == 0) && (lVar11 = local_70 + lVar11, lVar11 < lVar10));
      pcVar8 = pcVar8 + 1;
      if (iVar2 != 0) break;
    }
LAB_00a47318:
                    /* try { // try from 00a47324 to 00b4732f has its CatchHandler @ 00a473fc */
    sVar3 = send((int)param_1[0x4c],(void *)(lVar7 + 0x1cbf),2,0x4000);
                    /* try { // try from 00a47330 to 00b4739f has its CatchHandler @ 00a47140 */
    if (sVar3 < 0) {
      puVar4 = (undefined4 *)__errno();
      FUN_00a38a08(lVar6,"Sending data failed (%d)",*puVar4);
    }
  }
  return;
}

