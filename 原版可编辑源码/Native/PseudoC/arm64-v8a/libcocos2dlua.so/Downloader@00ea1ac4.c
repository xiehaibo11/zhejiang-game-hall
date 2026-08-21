
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
    this_00 = *(DownloaderAndroid **)(this + 0xc0);
  }
  local_70 = &PTR_FUN_016f4b08;
  pDStack_68 = this;
  local_50 = (long *)&local_70;
  FUN_00ea2470(&local_70,this_00 + 0x10);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00ea1b74:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00ea1b74;
  }
  local_70 = &PTR_FUN_016f4b98;
  pDStack_68 = this;
  local_50 = (long *)&local_70;
  FUN_00ea271c(&local_70,*(long *)(this + 0xc0) + 0x40);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00ea1bc4;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)();
LAB_00ea1bc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

