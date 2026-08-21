
/* v8::internal::Isolate::FindPerThreadDataForThread(v8::internal::ThreadId) */

long __thiscall v8::internal::Isolate::FindPerThreadDataForThread(Isolate *this,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  base::Mutex::Lock((Mutex *)(this + 0xc7a0));
  uVar2 = *(ulong *)(this + 0xc7d0);
  if (uVar2 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar2 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar2 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar2 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar2 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar2 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar2 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar2 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar2))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar3 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    uVar4 = (ulong)param_2;
    if (uVar3 < 2) {
      uVar5 = uVar2 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar2 <= uVar4) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar4 / uVar2;
        }
        uVar5 = uVar4 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(this + 0xc7c8) + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar4) {
          if ((int)plVar6[2] == param_2) {
            lVar8 = plVar6[3];
            goto LAB_00f4c114;
          }
        }
        else {
          if (uVar3 < 2) {
            uVar7 = uVar7 & uVar2 - 1;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  lVar8 = 0;
LAB_00f4c114:
  base::Mutex::Unlock((Mutex *)(this + 0xc7a0));
  return lVar8;
}

