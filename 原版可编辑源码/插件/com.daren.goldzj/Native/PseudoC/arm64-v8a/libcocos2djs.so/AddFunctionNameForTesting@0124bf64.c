
/* v8::internal::wasm::WasmModule::AddFunctionNameForTesting(int, v8::internal::wasm::WireBytesRef)
    */

void __thiscall
v8::internal::wasm::WasmModule::AddFunctionNameForTesting
          (WasmModule *this,uint param_1,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  plVar8 = *(long **)(this + 0x180);
  if (plVar8 == (long *)0x0) {
    plVar8 = operator_new(0x28);
    plVar8[1] = 0;
    *plVar8 = 0;
    plVar8[3] = 0;
    plVar8[2] = 0;
    *(undefined4 *)(plVar8 + 4) = 0x3f800000;
    *(long **)(this + 0x180) = plVar8;
  }
  plVar2 = operator_new(0x20);
  *(uint *)(plVar2 + 2) = param_1;
  *(undefined8 *)((long)plVar2 + 0x14) = param_3;
  *plVar2 = 0;
  plVar2[1] = (ulong)param_1;
  lVar3 = FUN_0124e100(plVar8);
  if (lVar3 != 0) {
    operator_delete(plVar2);
    return;
  }
  uVar4 = plVar8[1];
  uVar6 = plVar2[1];
  uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar4 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar4))))))
                            ));
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar5 < 2) {
    uVar6 = uVar4 - 1 & uVar6;
  }
  else if (uVar4 <= uVar6) {
    uVar1 = 0;
    if (uVar4 != 0) {
      uVar1 = uVar6 / uVar4;
    }
    uVar6 = uVar6 - uVar1 * uVar4;
  }
  plVar7 = *(long **)(*plVar8 + uVar6 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar8 + 2;
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
    *(long **)(*plVar8 + uVar6 * 8) = plVar7;
    if (*plVar2 == 0) goto LAB_0124c0a8;
    uVar6 = *(ulong *)(*plVar2 + 8);
    if (uVar5 < 2) {
      uVar6 = uVar6 & uVar4 - 1;
    }
    else if (uVar4 <= uVar6) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar6 / uVar4;
      }
      uVar6 = uVar6 - uVar5 * uVar4;
    }
    plVar7 = (long *)(*plVar8 + uVar6 * 8);
  }
  else {
    *plVar2 = *plVar7;
  }
  *plVar7 = (long)plVar2;
LAB_0124c0a8:
  plVar8[3] = plVar8[3] + 1;
  return;
}

