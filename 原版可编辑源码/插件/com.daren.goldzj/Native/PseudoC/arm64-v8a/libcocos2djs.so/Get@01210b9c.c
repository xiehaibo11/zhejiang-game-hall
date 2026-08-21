
/* v8::internal::wasm::WasmImportWrapperCache::Get(v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*) const */

long __thiscall
v8::internal::wasm::WasmImportWrapperCache::Get
          (WasmImportWrapperCache *this,pair param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  pair local_30 [8];
  long local_28;
  ulong uVar10;
  
  local_30[0] = param_2;
  local_28 = param_3;
  uVar2 = CacheKeyHash::operator()((CacheKeyHash *)(this + 0x40),local_30);
  uVar3 = *(ulong *)(this + 0x30);
  if (uVar3 == 0) {
LAB_01210c84:
    plVar6 = (long *)0x0;
  }
  else {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar4 = uVar3 - 1 & uVar2;
    }
    else {
      uVar4 = uVar2;
      if (uVar3 <= uVar2) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        uVar4 = uVar2 - uVar4 * uVar3;
      }
    }
    plVar5 = *(long **)(*(long *)(this + 0x28) + uVar4 * 8);
    plVar6 = (long *)0x0;
    if ((plVar5 != (long *)0x0) && (plVar6 = (long *)*plVar5, plVar6 != (long *)0x0)) {
      do {
        uVar7 = plVar6[1];
        if (uVar2 == uVar7) {
          if ((*(pair *)(plVar6 + 2) == local_30[0]) && (plVar6[3] == local_28)) break;
        }
        else {
          if ((uVar10 & 0xffffffff) < 2) {
            uVar7 = uVar7 & uVar3 - 1;
          }
          else if (uVar3 <= uVar7) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar7 / uVar3;
            }
            if (uVar7 - uVar1 * uVar3 == uVar4) goto LAB_01210c34;
            goto LAB_01210c84;
          }
          if (uVar7 != uVar4) goto LAB_01210c84;
        }
LAB_01210c34:
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return plVar6[4];
}

