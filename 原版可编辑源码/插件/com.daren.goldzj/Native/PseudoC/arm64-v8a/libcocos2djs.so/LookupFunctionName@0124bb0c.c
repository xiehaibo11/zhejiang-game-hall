
/* v8::internal::wasm::WasmModule::LookupFunctionName(v8::internal::wasm::ModuleWireBytes const&,
   unsigned int) const */

ulong __thiscall
v8::internal::wasm::WasmModule::LookupFunctionName
          (WasmModule *this,ModuleWireBytes *param_1,uint param_2)

{
  ulong uVar1;
  unordered_map *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  plVar6 = *(long **)(this + 0x180);
  uVar8 = (ulong)param_2;
  if (plVar6 == (long *)0x0) {
    puVar2 = operator_new(0x28);
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)puVar2 = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x20) = 0x3f800000;
    *(unordered_map **)(this + 0x180) = puVar2;
    DecodeFunctionNames(*(uchar **)param_1,*(uchar **)param_1 + *(long *)(param_1 + 8),puVar2);
    plVar6 = *(long **)(this + 0x180);
    uVar3 = plVar6[1];
  }
  else {
    uVar3 = plVar6[1];
  }
  if (uVar3 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar4 < 2) {
      uVar5 = (ulong)((int)uVar3 - 1U & param_2);
    }
    else {
      uVar5 = uVar8;
      if (uVar3 <= uVar8) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar8 / uVar3;
        }
        uVar5 = uVar8 - uVar5 * uVar3;
      }
    }
    plVar6 = *(long **)(*plVar6 + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar7 == uVar8) {
          if (*(uint *)(plVar6 + 2) == param_2) {
            uVar3 = *(ulong *)((long)plVar6 + 0x14) & 0xffffffff00000000;
            uVar8 = *(ulong *)((long)plVar6 + 0x14) & 0xffffffff;
            goto LAB_0124bc24;
          }
        }
        else {
          if (uVar4 < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            uVar7 = uVar7 - uVar1 * uVar3;
          }
          if (uVar7 != uVar5) break;
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  uVar8 = 0;
  uVar3 = 0;
LAB_0124bc24:
  return uVar3 | uVar8;
}

