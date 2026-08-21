
void Java_org_cocos2dx_lib_Cocos2dxDownloader_nativeOnProgress
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
               long param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  DownloaderAndroid *this;
  
                    /* try { // try from 009a7c44 to 00aa7c4f has its CatchHandler @ 009a7df8 */
                    /* try { // try from 009a7c50 to 00aa7d83 has its CatchHandler @ 009a7e10 */
  uVar2 = getApplicationExited();
  if ((uVar2 & 1) != 0) {
    return;
  }
  std::__ndk1::mutex::lock((mutex *)sDownloaderMutex);
  if (DAT_01d37fb8 != 0) {
    uVar2 = DAT_01d37fb8 - 1;
    uVar3 = (ulong)param_3;
    if ((uVar2 & DAT_01d37fb8) == 0) {
      uVar4 = uVar2 & uVar3;
    }
    else {
      uVar4 = uVar3;
      if (DAT_01d37fb8 <= uVar3) {
        uVar4 = 0;
        if (DAT_01d37fb8 != 0) {
          uVar4 = uVar3 / DAT_01d37fb8;
        }
        uVar4 = uVar3 - uVar4 * DAT_01d37fb8;
      }
    }
    plVar5 = *(long **)(sDownloaderMap + uVar4 * 8);
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar5 = (long *)*plVar5;
            if (plVar5 == (long *)0x0) goto LAB_009a7d2c;
            uVar6 = plVar5[1];
            if (uVar6 != uVar3) break;
            if (*(int *)(plVar5 + 2) == param_3) {
              this = (DownloaderAndroid *)plVar5[3];
              std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
              if (this == (DownloaderAndroid *)0x0) {
                return;
              }
              cocos2d::network::DownloaderAndroid::_onProcess(this,param_4,param_5,param_6,param_7);
              return;
            }
          }
          if ((uVar2 & DAT_01d37fb8) == 0) break;
          if (DAT_01d37fb8 <= uVar6) {
            uVar1 = 0;
            if (DAT_01d37fb8 != 0) {
              uVar1 = uVar6 / DAT_01d37fb8;
            }
            uVar6 = uVar6 - uVar1 * DAT_01d37fb8;
          }
          if (uVar6 != uVar4) goto LAB_009a7d2c;
        }
      } while ((uVar6 & uVar2) == uVar4);
    }
  }
LAB_009a7d2c:
  std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
  return;
}

