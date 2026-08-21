
void FUN_00ea3dc4(long *param_1,undefined8 param_2,int param_3,int param_4,int param_5,long param_6,
                 long param_7)

{
  ulong uVar1;
  long lVar2;
  void *__src;
  char *pcVar3;
  undefined8 uVar4;
  void *__dest;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  DownloaderAndroid *this;
  void *pvVar9;
  ulong uVar10;
  undefined2 uVar11;
  void *local_80;
  void *local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  std::__ndk1::mutex::lock((mutex *)sDownloaderMutex);
  if (DAT_0178f588 != 0) {
    uVar4 = CONCAT17(POPCOUNT((char)(DAT_0178f588 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(DAT_0178f588 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(DAT_0178f588 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(DAT_0178f588 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(DAT_0178f588 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(DAT_0178f588 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(
                                                  DAT_0178f588 >> 8)),POPCOUNT((char)DAT_0178f588)))
                                                  )))));
    uVar11 = NEON_uaddlv(uVar4,1);
    uVar10 = CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar11) & 0xffffffff;
    uVar5 = (ulong)param_3;
    if (uVar10 < 2) {
      uVar6 = DAT_0178f588 - 1 & uVar5;
    }
    else {
      uVar6 = uVar5;
      if (DAT_0178f588 <= uVar5) {
        uVar6 = 0;
        if (DAT_0178f588 != 0) {
          uVar6 = uVar5 / DAT_0178f588;
        }
        uVar6 = uVar5 - uVar6 * DAT_0178f588;
      }
    }
    plVar7 = *(long **)(sDownloaderMap + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar8 = plVar7[1];
        if (uVar8 == uVar5) {
          if ((int)plVar7[2] == param_3) {
            this = (DownloaderAndroid *)plVar7[3];
            std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
            if (this != (DownloaderAndroid *)0x0) {
              local_78 = (void *)0x0;
              local_70 = 0;
              local_80 = (void *)0x0;
              if (param_6 == 0) {
                if (param_7 != 0) {
                  uVar4 = (**(code **)(*param_1 + 0x558))(param_1,param_7);
                  pvVar9 = local_78;
                  __src = local_80;
                  if ((int)uVar4 != 0) {
                    uVar10 = (ulong)(int)uVar4;
                    __dest = local_80;
                    if ((ulong)(local_70 - (long)local_80) < uVar10) {
                      __dest = operator_new(uVar10);
                      __n = (long)pvVar9 - (long)__src;
                      pvVar9 = (void *)((long)__dest + __n);
                      if (0 < (long)__n) {
                        memcpy(__dest,__src,__n);
                      }
                      local_80 = __dest;
                      local_78 = pvVar9;
                      local_70 = (long)__dest + uVar10;
                      if (__src != (void *)0x0) {
                        operator_delete(__src);
                      }
                    }
                    uVar5 = (long)pvVar9 - (long)__dest;
                    if (uVar5 < uVar10) {
                      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
                      __append((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)
                               &local_80,uVar10 - uVar5);
                      __dest = local_80;
                    }
                    else if (uVar5 != uVar10) {
                      local_78 = (void *)((long)__dest + uVar10);
                    }
                    (**(code **)(*param_1 + 0x640))(param_1,param_7,0,uVar4,__dest);
                  }
                }
                cocos2d::network::DownloaderAndroid::_onFinish
                          (this,param_4,param_5,(char *)0x0,(vector *)&local_80);
              }
              else {
                pcVar3 = (char *)(**(code **)(*param_1 + 0x548))(param_1,param_6,0);
                cocos2d::network::DownloaderAndroid::_onFinish
                          (this,param_4,param_5,pcVar3,(vector *)&local_80);
                (**(code **)(*param_1 + 0x550))(param_1,param_6,pcVar3);
              }
              if (local_80 != (void *)0x0) {
                local_78 = local_80;
                operator_delete(local_80);
              }
            }
            goto LAB_00ea3ed0;
          }
        }
        else {
          if (uVar10 < 2) {
            uVar8 = uVar8 & DAT_0178f588 - 1;
          }
          else if (DAT_0178f588 <= uVar8) {
            uVar1 = 0;
            if (DAT_0178f588 != 0) {
              uVar1 = uVar8 / DAT_0178f588;
            }
            uVar8 = uVar8 - uVar1 * DAT_0178f588;
          }
          if (uVar8 != uVar6) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
LAB_00ea3ed0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

