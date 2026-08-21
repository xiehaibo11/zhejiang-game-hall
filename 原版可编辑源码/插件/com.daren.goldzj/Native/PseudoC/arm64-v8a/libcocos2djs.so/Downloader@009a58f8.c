
/* cocos2d::network::Downloader::Downloader(cocos2d::network::DownloaderHints const&) */

void __thiscall cocos2d::network::Downloader::Downloader(Downloader *this,DownloaderHints *param_1)

{
  long lVar1;
  DownloaderAndroid *this_00;
  long *plVar2;
  code *pcVar3;
  undefined **local_70;
  Downloader *pDStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  this_00 = operator_new(0xb0);
  DownloaderAndroid::DownloaderAndroid(this_00,param_1);
  plVar2 = *(long **)(this + 0xc0);
  *(DownloaderAndroid **)(this + 0xc0) = this_00;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
                    /* catch() { ... } // from try @ 009a57ac with catch @ 009a5960 */
    this_00 = *(DownloaderAndroid **)(this + 0xc0);
  }
                    /* catch() { ... } // from try @ 009a57a0 with catch @ 009a5964 */
                    /* catch() { ... } // from try @ 009a5780 with catch @ 009a5968 */
                    /* catch() { ... } // from try @ 009a57b8 with catch @ 009a5978 */
  local_70 = &PTR_FUN_01c6a770;
  pDStack_68 = this;
  local_50 = (long *)&local_70;
  FUN_009a6330(&local_70,this_00 + 0x10);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_009a59a8:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_009a59a8;
  }
  local_70 = &PTR_FUN_01c6a800;
  pDStack_68 = this;
  local_50 = (long *)&local_70;
  FUN_009a65dc(&local_70,*(long *)(this + 0xc0) + 0x40);
                    /* try { // try from 009a59d0 to 00aa5a23 has its CatchHandler @ 009a59d0
                       catch() { ... } // from try @ 009a59d0 with catch @ 009a59d0
                       catch() { ... } // from try @ 009a5b88 with catch @ 009a59d0 */
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_009a59f8;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_009a59f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

