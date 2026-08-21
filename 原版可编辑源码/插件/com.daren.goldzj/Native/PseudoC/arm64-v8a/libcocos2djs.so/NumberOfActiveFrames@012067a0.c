
/* v8::internal::WasmDebugInfo::NumberOfActiveFrames(unsigned long) */

int __thiscall v8::internal::WasmDebugInfo::NumberOfActiveFrames(WasmDebugInfo *this,ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  Thread *this_00;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  lVar10 = **(long **)(*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                 (ulong)*(uint *)(*(ulong *)this + 7)) + 3) + 0x18);
  uVar6 = *(ulong *)(lVar10 + 0x68);
  if (uVar6 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar6 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar6))))
                                                ))));
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = param_1 / uVar6;
    }
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar7 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar1 = param_1;
    if (uVar6 <= param_1) {
      uVar1 = param_1 - uVar9 * uVar6;
    }
    if (uVar7 < 2) {
      uVar1 = uVar6 - 1 & param_1;
    }
    plVar8 = *(long **)(*(long *)(lVar10 + 0x60) + uVar1 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == param_1) {
          if (plVar8[2] == param_1) {
            this_00 = (Thread *)
                      wasm::WasmInterpreter::GetThread((WasmInterpreter *)(lVar10 + 0x10),0);
            uVar6 = *(ulong *)(lVar10 + 0x68);
            if ((uVar6 & uVar6 - 1) == 0) {
              uVar9 = uVar6 - 1 & param_1;
            }
            else {
              uVar9 = param_1;
              if (uVar6 <= param_1) {
                uVar9 = 0;
                if (uVar6 != 0) {
                  uVar9 = param_1 / uVar6;
                }
                uVar9 = param_1 - uVar9 * uVar6;
              }
            }
            plVar8 = *(long **)(*(long *)(lVar10 + 0x60) + uVar9 * 8);
            do {
              do {
                plVar8 = (long *)*plVar8;
              } while (plVar8[1] != param_1);
            } while (plVar8[2] != param_1);
            iVar5 = *(int *)(lVar10 + 0x78);
            uVar2 = *(uint *)(plVar8 + 3);
            iVar4 = wasm::WasmInterpreter::Thread::ActivationFrameBase(this_00,uVar2);
            if (uVar2 == iVar5 - 1U) {
              iVar5 = wasm::WasmInterpreter::Thread::GetFrameCount(this_00);
            }
            else {
              iVar5 = wasm::WasmInterpreter::Thread::ActivationFrameBase(this_00,uVar2 + 1);
            }
            return iVar5 - iVar4;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar9 = uVar9 & uVar6 - 1;
          }
          else if (uVar6 <= uVar9) {
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = uVar9 / uVar6;
            }
            uVar9 = uVar9 - uVar3 * uVar6;
          }
          if (uVar9 != uVar1) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}

