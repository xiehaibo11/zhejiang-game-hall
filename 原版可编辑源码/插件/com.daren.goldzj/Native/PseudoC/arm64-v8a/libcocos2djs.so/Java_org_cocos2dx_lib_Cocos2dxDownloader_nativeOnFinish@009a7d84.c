
void Java_org_cocos2dx_lib_Cocos2dxDownloader_nativeOnFinish
               (long *param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6,
               long param_7)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  DownloaderAndroid *this;
  void *local_70;
  void *local_68;
  undefined8 local_60;
  long local_58;
  
                    /* try { // try from 009a7d84 to 00aa7e67 has its CatchHandler @ 009a7bc4 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = getApplicationExited();
  if ((uVar4 & 1) == 0) {
    std::__ndk1::mutex::lock((mutex *)sDownloaderMutex);
    if (DAT_01d37fb8 != 0) {
      uVar4 = DAT_01d37fb8 - 1;
      uVar6 = (ulong)param_3;
      if ((uVar4 & DAT_01d37fb8) == 0) {
                    /* catch() { ... } // from try @ 009a7c50 with catch @ 009a7e10 */
        uVar7 = uVar4 & uVar6;
      }
      else {
                    /* catch() { ... } // from try @ 009a7c44 with catch @ 009a7df8 */
                    /* catch() { ... } // from try @ 009a7c38 with catch @ 009a7dfc */
                    /* catch() { ... } // from try @ 009a7c18 with catch @ 009a7e00 */
        uVar7 = uVar6;
        if (DAT_01d37fb8 <= uVar6) {
          uVar7 = 0;
          if (DAT_01d37fb8 != 0) {
            uVar7 = uVar6 / DAT_01d37fb8;
          }
          uVar7 = uVar6 - uVar7 * DAT_01d37fb8;
        }
      }
      plVar8 = *(long **)(sDownloaderMap + uVar7 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            while( true ) {
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) goto LAB_009a7e70;
              uVar9 = plVar8[1];
              if (uVar9 != uVar6) break;
              if (*(int *)(plVar8 + 2) == param_3) {
                this = (DownloaderAndroid *)plVar8[3];
                std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
                if (this != (DownloaderAndroid *)0x0) {
                    /* try { // try from 009a7ebc to 00aa7ed3 has its CatchHandler @ 009a80a4 */
                  local_70 = (void *)0x0;
                  local_68 = (void *)0x0;
                  local_60 = 0;
                  if (param_6 == 0) {
                    if ((param_7 != 0) &&
                       (iVar3 = (**(code **)(*param_1 + 0x558))(param_1,param_7), iVar3 != 0)) {
                      uVar4 = (ulong)iVar3;
                      uVar6 = (long)local_68 - (long)local_70;
                      if (uVar6 < uVar4) {
                        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
                        __append((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)
                                 &local_70,uVar4 - uVar6);
                      }
                      else if (uVar6 != uVar4) {
                        local_68 = (void *)((long)local_70 + uVar4);
                      }
                      (**(code **)(*param_1 + 0x640))(param_1,param_7,0,iVar3,local_70);
                    }
                    cocos2d::network::DownloaderAndroid::_onFinish
                              (this,param_4,param_5,(char *)0x0,(vector *)&local_70);
                  }
                  else {
                    /* try { // try from 009a7edc to 00aa7ee7 has its CatchHandler @ 009a80a0 */
                    pcVar5 = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_6,0);
                    /* try { // try from 009a7ee8 to 00aa7ef3 has its CatchHandler @ 009a809c */
                    /* try { // try from 009a7ef4 to 00aa8027 has its CatchHandler @ 009a80b4 */
                    cocos2d::network::DownloaderAndroid::_onFinish
                              (this,param_4,param_5,pcVar5,(vector *)&local_70);
                    (**(code **)(*param_1 + 0x550))(param_1,param_6,pcVar5);
                  }
                  if (local_70 != (void *)0x0) {
                    local_68 = local_70;
                    operator_delete(local_70);
                  }
                }
                goto LAB_009a7e7c;
              }
            }
            if ((uVar4 & DAT_01d37fb8) == 0) break;
            if (DAT_01d37fb8 <= uVar9) {
              uVar1 = 0;
              if (DAT_01d37fb8 != 0) {
                uVar1 = uVar9 / DAT_01d37fb8;
              }
              uVar9 = uVar9 - uVar1 * DAT_01d37fb8;
            }
            if (uVar9 != uVar7) goto LAB_009a7e70;
          }
                    /* try { // try from 009a7e68 to 00aa7ebb has its CatchHandler @ 009a7e68
                       catch() { ... } // from try @ 009a7e68 with catch @ 009a7e68
                       catch() { ... } // from try @ 009a8028 with catch @ 009a7e68 */
        } while ((uVar9 & uVar4) == uVar7);
      }
    }
LAB_009a7e70:
    std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
  }
LAB_009a7e7c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

