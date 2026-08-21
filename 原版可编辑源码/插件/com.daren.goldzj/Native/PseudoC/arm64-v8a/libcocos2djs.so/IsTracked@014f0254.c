
/* v8::internal::ArrayBufferTracker::IsTracked(v8::internal::JSArrayBuffer) */

bool v8::internal::ArrayBufferTracker::IsTracked(ulong param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  Mutex *this;
  undefined2 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  this = *(Mutex **)((param_1 & 0xfffffffffffc0000) + 0xa0);
  base::Mutex::Lock(this);
  lVar6 = *(long *)((param_1 & 0xfffffffffffc0000) + 0xf8);
  if (lVar6 == 0) {
    bVar2 = false;
  }
  else {
    uVar3 = *(ulong *)(lVar6 + 0x10);
    if (uVar3 == 0) {
LAB_014f0338:
      plVar8 = (long *)0x0;
    }
    else {
      uVar11 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar3 >> 0x10))
                                                                     ,CONCAT11(POPCOUNT((char)(uVar3
                                                                                              >> 8))
                                                                               ,POPCOUNT((char)uVar3
                                                                                        ))))))));
      uVar10 = NEON_uaddlv(uVar11,1);
      uVar12 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10);
      uVar4 = param_1 >> 3;
      if ((uVar12 & 0xffffffff) < 2) {
        uVar5 = uVar3 - 1 & uVar4;
      }
      else {
        uVar5 = uVar4;
        if (uVar3 <= uVar4) {
          uVar5 = 0;
          if (uVar3 != 0) {
            uVar5 = uVar4 / uVar3;
          }
          uVar5 = uVar4 - uVar5 * uVar3;
        }
      }
      plVar7 = *(long **)(*(long *)(lVar6 + 8) + uVar5 * 8);
      plVar8 = (long *)0x0;
      if ((plVar7 != (long *)0x0) && (plVar8 = (long *)*plVar7, plVar8 != (long *)0x0)) {
        do {
          uVar9 = plVar8[1];
          if (uVar4 == uVar9) {
            if ((int)plVar8[2] == (int)param_1) break;
          }
          else {
            if ((uVar12 & 0xffffffff) < 2) {
              uVar9 = uVar9 & uVar3 - 1;
            }
            else if (uVar3 <= uVar9) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar9 / uVar3;
              }
              uVar9 = uVar9 - uVar1 * uVar3;
            }
            if (uVar9 != uVar5) goto LAB_014f0338;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    bVar2 = plVar8 != (long *)0x0;
  }
  base::Mutex::Unlock(this);
  return bVar2;
}

