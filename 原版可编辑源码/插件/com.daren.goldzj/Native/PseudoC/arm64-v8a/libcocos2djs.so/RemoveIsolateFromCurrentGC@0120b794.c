
/* v8::internal::wasm::WasmEngine::RemoveIsolateFromCurrentGC(v8::internal::Isolate*) */

undefined8 __thiscall
v8::internal::wasm::WasmEngine::RemoveIsolateFromCurrentGC(WasmEngine *this,Isolate *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  plVar4 = *(long **)(this + 0x1b8);
  uVar5 = plVar4[1];
  if (uVar5 != 0) {
    uVar6 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar15 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar5 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar5))))
                                                ))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar6 = (uVar6 ^ (ulong)param_1 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar7 < 2) {
      uVar11 = uVar5 - 1 & uVar6;
    }
    else {
      uVar11 = uVar6;
      if (uVar5 <= uVar6) {
        uVar11 = 0;
        if (uVar5 != 0) {
          uVar11 = uVar6 / uVar5;
        }
        uVar11 = uVar6 - uVar11 * uVar5;
      }
    }
    lVar10 = *plVar4;
    puVar8 = *(undefined8 **)(lVar10 + uVar11 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      plVar3 = (long *)*puVar8;
      if (plVar3 != (long *)0x0) {
        uVar9 = uVar5 - 1;
        do {
          uVar12 = plVar3[1];
          if (uVar12 == uVar6) {
            if ((Isolate *)plVar3[2] == param_1) {
              if (uVar7 < 2) {
                uVar6 = uVar9 & uVar6;
              }
              else if (uVar5 <= uVar6) {
                uVar11 = 0;
                if (uVar5 != 0) {
                  uVar11 = uVar6 / uVar5;
                }
                uVar6 = uVar6 - uVar11 * uVar5;
              }
              plVar2 = *(long **)(lVar10 + uVar6 * 8);
              do {
                plVar13 = plVar2;
                plVar2 = (long *)*plVar13;
              } while ((long *)*plVar13 != plVar3);
              if (plVar13 != plVar4 + 2) {
                uVar11 = plVar13[1];
                if (uVar7 < 2) {
                  uVar11 = uVar11 & uVar9;
                }
                else if (uVar5 <= uVar11) {
                  uVar12 = 0;
                  if (uVar5 != 0) {
                    uVar12 = uVar11 / uVar5;
                  }
                  uVar11 = uVar11 - uVar12 * uVar5;
                }
                if (uVar11 == uVar6) goto LAB_0120b944;
              }
              if (*plVar3 != 0) {
                uVar11 = *(ulong *)(*plVar3 + 8);
                if (uVar7 < 2) {
                  uVar11 = uVar11 & uVar9;
                }
                else if (uVar5 <= uVar11) {
                  uVar12 = 0;
                  if (uVar5 != 0) {
                    uVar12 = uVar11 / uVar5;
                  }
                  uVar11 = uVar11 - uVar12 * uVar5;
                }
                if (uVar11 == uVar6) goto LAB_0120b944;
              }
              *(undefined8 *)(lVar10 + uVar6 * 8) = 0;
LAB_0120b944:
              lVar10 = *plVar3;
              if (lVar10 != 0) {
                uVar11 = *(ulong *)(lVar10 + 8);
                if (uVar7 < 2) {
                  uVar11 = uVar11 & uVar9;
                }
                else if (uVar5 <= uVar11) {
                  uVar7 = 0;
                  if (uVar5 != 0) {
                    uVar7 = uVar11 / uVar5;
                  }
                  uVar11 = uVar11 - uVar7 * uVar5;
                }
                if (uVar11 != uVar6) {
                  *(long **)(*plVar4 + uVar11 * 8) = plVar13;
                  lVar10 = *plVar3;
                }
              }
              *plVar13 = lVar10;
              *plVar3 = 0;
              plVar4[3] = plVar4[3] + -1;
              operator_delete(plVar3);
              return 1;
            }
          }
          else {
            if (uVar7 < 2) {
              uVar12 = uVar12 & uVar9;
            }
            else if (uVar5 <= uVar12) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar12 / uVar5;
              }
              uVar12 = uVar12 - uVar1 * uVar5;
            }
            if (uVar12 != uVar11) {
              return 0;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      return 0;
    }
  }
  return 0;
}

