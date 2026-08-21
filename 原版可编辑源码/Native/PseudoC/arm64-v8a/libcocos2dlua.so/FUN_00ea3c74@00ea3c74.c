
void FUN_00ea3c74(undefined8 param_1,undefined8 param_2,int param_3,int param_4,long param_5,
                 long param_6,long param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  DownloaderAndroid *this;
  undefined2 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  std::__ndk1::mutex::lock((mutex *)sDownloaderMutex);
  if (DAT_0178f588 != 0) {
    uVar7 = CONCAT17(POPCOUNT((char)(DAT_0178f588 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_0178f588 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_0178f588 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_0178f588 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_0178f588 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_0178f588 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_0178f588 >> 8)),POPCOUNT((char)DAT_0178f588)))
                                                  )))));
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar8 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6);
    uVar2 = (ulong)param_3;
    if ((uVar8 & 0xffffffff) < 2) {
      uVar3 = DAT_0178f588 - 1 & uVar2;
    }
    else {
      uVar3 = uVar2;
      if (DAT_0178f588 <= uVar2) {
        uVar3 = 0;
        if (DAT_0178f588 != 0) {
          uVar3 = uVar2 / DAT_0178f588;
        }
        uVar3 = uVar2 - uVar3 * DAT_0178f588;
      }
    }
    plVar4 = *(long **)(sDownloaderMap + uVar3 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar5 = plVar4[1];
        if (uVar5 == uVar2) {
          if ((int)plVar4[2] == param_3) {
            this = (DownloaderAndroid *)plVar4[3];
            std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
            if (this != (DownloaderAndroid *)0x0) {
              cocos2d::network::DownloaderAndroid::_onProcess(this,param_4,param_5,param_6,param_7);
              return;
            }
            return;
          }
        }
        else {
          if ((uVar8 & 0xffffffff) < 2) {
            uVar5 = uVar5 & DAT_0178f588 - 1;
          }
          else if (DAT_0178f588 <= uVar5) {
            uVar1 = 0;
            if (DAT_0178f588 != 0) {
              uVar1 = uVar5 / DAT_0178f588;
            }
            uVar5 = uVar5 - uVar1 * DAT_0178f588;
          }
          if (uVar5 != uVar3) break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
  return;
}

