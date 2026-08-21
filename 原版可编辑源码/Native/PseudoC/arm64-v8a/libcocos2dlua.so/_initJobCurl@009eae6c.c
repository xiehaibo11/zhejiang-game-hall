
/* universe::Downloader2::_initJobCurl(universe::Downloader2::DownloadJob*, void**) */

void __thiscall
universe::Downloader2::_initJobCurl(Downloader2 *this,DownloadJob *param_1,void **param_2)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  void *pvVar8;
  DownloadJob *pDVar9;
  ulong uVar10;
  undefined1 auStack_6c [36];
  long local_48;
  
                    /* try { // try from 009eae7c to 00aeaeb7 has its CatchHandler @ 009eae7c
                       catch() { ... } // from try @ 009eae7c with catch @ 009eae7c
                       catch() { ... } // from try @ 009eaf08 with catch @ 009eae7c
                       catch() { ... } // from try @ 009eaf60 with catch @ 009eae7c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0xd8] == (DownloadJob)0x0) {
                    /* try { // try from 009eaeb8 to 00aeaecf has its CatchHandler @ 009eafd4 */
    if (((byte)param_1[0x50] & 1) == 0) {
      uVar5 = (ulong)((byte)param_1[0x50] >> 1);
    }
    else {
      uVar5 = *(ulong *)(param_1 + 0x58);
    }
    bVar2 = uVar5 != 0;
                    /* try { // try from 009eaed4 to 00aeaee3 has its CatchHandler @ 009eafd0 */
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_009eaeac;
LAB_009eaed8:
    bVar3 = *(long *)(param_1 + 0x78) != 0;
  }
  else {
    bVar2 = true;
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_009eaed8;
LAB_009eaeac:
    bVar3 = true;
  }
  plVar4 = (long *)TanGaoXiong::getInstance();
  uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,param_1 + 0x38);
  if (bVar2) {
                    /* try { // try from 009eaf00 to 00aeaf07 has its CatchHandler @ 009eafa0 */
                    /* try { // try from 009eaf08 to 00aeaf4b has its CatchHandler @ 009eae7c */
    if (((bVar3) && ((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) + 1U == uVar5)) ||
       ((uVar10 = *(ulong *)(param_1 + 0x68), uVar10 != 0 && (uVar5 == uVar10)))) {
      pcVar6 = (char *)Translated::getInstance();
      if (((byte)param_1[0x20] & 1) == 0) {
        pDVar9 = param_1 + 0x21;
      }
      else {
        pDVar9 = *(DownloadJob **)(param_1 + 0x30);
      }
      Translated::log(pcVar6,"Downloader2._initJobCurl: aleady downlaod. url:%s",pDVar9);
      uVar7 = 0;
      *param_2 = (void *)0x0;
      goto LAB_009eb174;
    }
    if (bVar3) {
                    /* try { // try from 009eaf4c to 00aeaf5f has its CatchHandler @ 009eafd4 */
      if (uVar5 < (ulong)(*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70))) goto LAB_009eb1bc;
      FUN_009eb1d4(auStack_6c);
      pcVar6 = "wb";
    }
    else {
      if (((long)uVar5 < 1) || (uVar10 < uVar5)) goto LAB_009eaf90;
LAB_009eb1bc:
      FUN_009eb1d4(auStack_6c);
      pcVar6 = "ab";
    }
    bVar2 = true;
                    /* try { // try from 009eb1cc to 00aeb203 has its CatchHandler @ 009eb1cc
                       catch() { ... } // from try @ 009eb1cc with catch @ 009eb1cc
                       catch() { ... } // from try @ 009eb248 with catch @ 009eb1cc
                       catch() { ... } // from try @ 009eb2c4 with catch @ 009eb1cc */
  }
  else {
LAB_009eaf90:
    bVar2 = false;
    pcVar6 = "wb";
  }
                    /* catch() { ... } // from try @ 009eaf00 with catch @ 009eafa0 */
  uVar5 = DownloadJob::onInit(param_1,pcVar6);
  if ((uVar5 & 1) == 0) {
    pvVar8 = (void *)0x0;
    uVar7 = 0;
  }
  else {
    pvVar8 = (void *)FUN_00a2495c();
    FUN_00a24a14(pvVar8,0x2711,param_1);
    FUN_00a24a14(pvVar8,0x2b,1);
                    /* catch() { ... } // from try @ 009eaed4 with catch @ 009eafd0 */
                    /* catch() { ... } // from try @ 009eaeb8 with catch @ 009eafd4
                       catch() { ... } // from try @ 009eaf4c with catch @ 009eafd4 */
    FUN_00a24a14(pvVar8,0x2d,1);
    FUN_00a24a14(pvVar8,0x4e,5);
    FUN_00a24a14(pvVar8,0x13,1);
    FUN_00a24a14(pvVar8,0x14,5);
    FUN_00a24a14(pvVar8,0x34,1);
    FUN_00a24a14(pvVar8,0x44,2);
    FUN_00a24a14(pvVar8,0x40,0);
                    /* try { // try from 009eb040 to 00aeb07f has its CatchHandler @ 009eb040
                       catch() { ... } // from try @ 009eb040 with catch @ 009eb040
                       catch() { ... } // from try @ 009eb0e8 with catch @ 009eb040
                       catch() { ... } // from try @ 009eb178 with catch @ 009eb040 */
    FUN_00a24a14(pvVar8,0x51,0);
    FUN_00a24a14(pvVar8,0x54,4);
    FUN_00a24a14(pvVar8,0xed,1);
    FUN_00a24a14(pvVar8,99,1);
                    /* try { // try from 009eb080 to 00aeb0b3 has its CatchHandler @ 009eb190 */
    if (((byte)param_1[0x20] & 1) == 0) {
      pDVar9 = param_1 + 0x21;
    }
    else {
      pDVar9 = *(DownloadJob **)(param_1 + 0x30);
    }
    FUN_00a24a14(pvVar8,0x2712,pDVar9);
    if (bVar2) {
                    /* try { // try from 009eb0bc to 00aeb0e7 has its CatchHandler @ 009eb18c */
      FUN_00a24a14(pvVar8,0x2717,auStack_6c);
    }
    FUN_00a24a14(pvVar8,0x4e2b,FUN_009eb278);
    FUN_00a24a14(pvVar8,0x2a,0);
                    /* try { // try from 009eb0e8 to 00aeb10f has its CatchHandler @ 009eb040 */
    FUN_00a24a14(pvVar8,0x2c,0);
    FUN_00a24a14(pvVar8,0x2776,&DAT_013c996e);
                    /* try { // try from 009eb110 to 00aeb123 has its CatchHandler @ 009eb190 */
    if (param_1[0xda] != (DownloadJob)0x0) {
      FUN_00a24a14(pvVar8,0x2b,0);
      FUN_00a24a14(pvVar8,0x4efb,FUN_009eb294);
      FUN_00a24a14(pvVar8,0x2749,param_1);
      FUN_00a24a14(pvVar8,0x4e58,FUN_009eb2b4);
      FUN_00a24a14(pvVar8,0x2749,param_1);
    }
    uVar7 = 1;
  }
                    /* try { // try from 009eb170 to 00aeb177 has its CatchHandler @ 009eb18c */
  *param_2 = pvVar8;
LAB_009eb174:
                    /* try { // try from 009eb178 to 00aeb1cb has its CatchHandler @ 009eb040 */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
                    /* catch() { ... } // from try @ 009eb0bc with catch @ 009eb18c
                       catch() { ... } // from try @ 009eb170 with catch @ 009eb18c */
                    /* catch() { ... } // from try @ 009eb080 with catch @ 009eb190
                       catch() { ... } // from try @ 009eb110 with catch @ 009eb190 */
  return;
}

