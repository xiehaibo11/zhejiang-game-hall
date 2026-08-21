
/* cocos2d::network::DownloaderAndroid::_onProcess(int, long, long, long) */

void __thiscall
cocos2d::network::DownloaderAndroid::_onProcess
          (DownloaderAndroid *this,int param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  long local_78;
  long local_70;
  long lStack_68;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)(this + 0x88);
  if (uVar4 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar7 = (ulong)param_1;
    if (uVar6 < 2) {
      uVar8 = uVar4 - 1 & uVar7;
    }
    else {
      uVar8 = uVar7;
      if (uVar4 <= uVar7) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar7 / uVar4;
        }
        uVar8 = uVar7 - uVar8 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)(this + 0x80) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar7) {
          if ((int)plVar9[2] == param_1) {
            local_40 = (long *)0x0;
            plVar3 = *(long **)(this + 0x30);
            local_78 = param_4;
            local_70 = param_3;
            lStack_68 = param_2;
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4(0,*(undefined8 *)(plVar9[3] + 0x10));
            }
            (**(code **)(*plVar3 + 0x30))
                      (plVar3,*(undefined8 *)(plVar9[3] + 0x10),&lStack_68,&local_70,&local_78,
                       alStack_60);
            if (alStack_60 == local_40) {
              pcVar5 = *(code **)(*local_40 + 0x20);
            }
            else {
              if (local_40 == (long *)0x0) break;
              pcVar5 = *(code **)(*local_40 + 0x28);
            }
            (*pcVar5)();
            break;
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

