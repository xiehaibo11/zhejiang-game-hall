
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
                    /* catch() { ... } // from try @ 009ef9f8 with catch @ 009efa98 */
                    /* catch() { ... } // from try @ 009ef9dc with catch @ 009efa9c
                       catch() { ... } // from try @ 009efa44 with catch @ 009efa9c */
  if (param_1[0x70] != (DownloadTask)0x0) {
    pcVar4 = (char *)Translated::getInstance();
    if ((ulong)(long)(char)param_1[0x70] < 10) {
                    /* try { // try from 009efab8 to 00aefb07 has its CatchHandler @ 009efab8
                       catch() { ... } // from try @ 009efab8 with catch @ 009efab8
                       catch() { ... } // from try @ 009efb54 with catch @ 009efab8
                       catch() { ... } // from try @ 009efbc0 with catch @ 009efab8 */
      puVar6 = (&PTR_s_success_016a1068)[(char)param_1[0x70]];
    }
    else {
      puVar6 = &DAT_013c996e;
    }
    if (((byte)param_1[0x20] & 1) == 0) {
      pDVar7 = param_1 + 0x21;
    }
    else {
      pDVar7 = *(DownloadTask **)(param_1 + 0x30);
    }
    Translated::log(pcVar4,"Downloader: download failed %s. %s",puVar6,pDVar7);
  }
  plVar5 = *(long **)(this + 0x60);
  if (plVar5 == (long *)0x0) goto LAB_009efb68;
  DVar1 = param_1[0xa8];
  DVar2 = param_1[0x70];
                    /* try { // try from 009efb08 to 00aefb53 has its CatchHandler @ 009efbc8 */
  if (((byte)DVar1 & 1) == 0) {
    if ((byte)DVar1 >> 1 != 0) goto LAB_009efb14;
LAB_009efb28:
    if ((byte)DVar2 < 10) {
      local_48 = (DownloadTask *)(&PTR_s_success_016a1068)[(int)(uint)(byte)DVar2];
    }
    else {
      local_48 = (DownloadTask *)&DAT_013c996e;
    }
  }
  else {
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_009efb28;
LAB_009efb14:
    if (((byte)DVar1 & 1) == 0) {
      local_48 = param_1 + 0xa9;
    }
    else {
      local_48 = *(DownloadTask **)(param_1 + 0xb8);
    }
  }
  local_3c = (uint)(byte)DVar2;
                    /* try { // try from 009efb54 to 00aefbab has its CatchHandler @ 009efab8 */
  (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 0x78,param_1 + 0x90,&local_3c,&local_48);
LAB_009efb68:
  Example::removeTask((Example *)this,*(uint *)(param_1 + 8));
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

