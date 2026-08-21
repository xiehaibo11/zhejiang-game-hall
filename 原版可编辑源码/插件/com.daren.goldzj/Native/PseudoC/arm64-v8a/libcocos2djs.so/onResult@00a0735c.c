
/* universe::Downloader::onResult(universe::DownloadTask&) */

void __thiscall universe::Downloader::onResult(Downloader *this,DownloadTask *param_1)

{
  DownloadTask DVar1;
  DownloadTask DVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  undefined1 *puVar6;
  DownloadTask *pDVar7;
  DownloadTask *local_48;
  uint local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00a0737c to 00b07383 has its CatchHandler @ 00a07494 */
  if (param_1[0x70] != (DownloadTask)0x0) {
                    /* try { // try from 00a0738c to 00b073ab has its CatchHandler @ 00a07490 */
    pcVar4 = (char *)Translated::getInstance();
    if ((ulong)(long)(char)param_1[0x70] < 10) {
      puVar6 = (&PTR_s_success_01c6cb68)[(char)param_1[0x70]];
    }
    else {
      puVar6 = &DAT_0189703a;
    }
                    /* try { // try from 00a073b8 to 00b073bf has its CatchHandler @ 00a07488 */
    if (((byte)param_1[0x20] & 1) == 0) {
      pDVar7 = param_1 + 0x21;
    }
    else {
      pDVar7 = *(DownloadTask **)(param_1 + 0x30);
    }
                    /* try { // try from 00a073d0 to 00b073ef has its CatchHandler @ 00a07480 */
    Translated::log(pcVar4,"Downloader: download failed %s. %s",puVar6,pDVar7);
  }
  plVar5 = *(long **)(this + 0x60);
  if (plVar5 == (long *)0x0) goto LAB_00a0745c;
  DVar1 = param_1[0xa8];
  DVar2 = param_1[0x70];
                    /* try { // try from 00a073f4 to 00b0740b has its CatchHandler @ 00a0748c */
  if (((byte)DVar1 & 1) == 0) {
    if ((byte)DVar1 >> 1 != 0) goto LAB_00a07400;
LAB_00a07414:
    if ((byte)DVar2 < 10) {
      local_48 = (DownloadTask *)(&PTR_s_success_01c6cb68)[(int)(uint)(byte)DVar2];
    }
    else {
      local_48 = (DownloadTask *)&DAT_0189703a;
    }
  }
  else {
                    /* try { // try from 00a07410 to 00b07433 has its CatchHandler @ 00a07488 */
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_00a07414;
LAB_00a07400:
    if (((byte)DVar1 & 1) == 0) {
      local_48 = param_1 + 0xa9;
    }
    else {
      local_48 = *(DownloadTask **)(param_1 + 0xb8);
                    /* try { // try from 00a07434 to 00b074b3 has its CatchHandler @ 00a07270 */
    }
  }
  local_3c = (uint)(byte)DVar2;
  (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 0x78,param_1 + 0x90,&local_3c,&local_48);
LAB_00a0745c:
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00a073d0 with catch @ 00a07480 */
                    /* catch() { ... } // from try @ 00a07314 with catch @ 00a07484 */
                    /* catch() { ... } // from try @ 00a073b8 with catch @ 00a07488
                       catch() { ... } // from try @ 00a07410 with catch @ 00a07488 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00a07300 with catch @ 00a0748c
                       catch() { ... } // from try @ 00a073f4 with catch @ 00a0748c */
  __stack_chk_fail();
}

