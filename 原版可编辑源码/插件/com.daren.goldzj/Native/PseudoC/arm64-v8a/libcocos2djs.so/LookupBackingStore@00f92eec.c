
/* v8::internal::Heap::LookupBackingStore(v8::internal::JSArrayBuffer) */

void v8::internal::Heap::LookupBackingStore(long *param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  Mutex *this;
  undefined2 uVar11;
  undefined8 uVar12;
  
  if (*(long *)(param_3 + 0x13) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  this = *(Mutex **)((param_3 & 0xfffffffffffc0000) + 0xa0);
  base::Mutex::Lock(this);
  lVar8 = *(long *)((param_3 & 0xfffffffffffc0000) + 0xf8);
  uVar4 = *(ulong *)(lVar8 + 0x10);
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
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = param_3 >> 3;
    if (uVar5 < 2) {
      uVar7 = uVar4 - 1 & uVar6;
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    plVar9 = *(long **)(*(long *)(lVar8 + 8) + uVar7 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar6) {
          if ((int)plVar9[2] == (int)param_3) {
            *param_1 = plVar9[3];
            lVar8 = plVar9[4];
            param_1[1] = lVar8;
            if (lVar8 != 0) {
              plVar9 = (long *)(lVar8 + 8);
              do {
                cVar1 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar2) {
                  *plVar9 = *plVar9 + 1;
                  cVar1 = ExclusiveMonitorsStatus();
                }
              } while (cVar1 != '\0');
            }
            goto LAB_00f92fe8;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar3 * uVar4;
          }
          if (uVar10 != uVar7) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_00f92fe8:
  base::Mutex::Unlock(this);
  return;
}

