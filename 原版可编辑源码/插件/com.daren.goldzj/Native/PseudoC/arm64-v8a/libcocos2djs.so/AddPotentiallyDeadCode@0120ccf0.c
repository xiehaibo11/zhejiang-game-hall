
/* v8::internal::wasm::WasmEngine::AddPotentiallyDeadCode(v8::internal::wasm::WasmCode*) */

undefined4 __thiscall
v8::internal::wasm::WasmEngine::AddPotentiallyDeadCode(WasmEngine *this,WasmCode *param_1)

{
  ulong uVar1;
  uint uVar2;
  ulong extraout_x1;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  WasmCode *local_28;
  
  local_28 = param_1;
  base::Mutex::Lock((Mutex *)(this + 0x100));
  uVar4 = *(ulong *)(param_1 + 0x30);
  uVar7 = *(ulong *)(this + 400);
  uVar10 = ((ulong)(uint)((int)uVar4 << 3) + 8 ^ uVar4 >> 0x20) * -0x622015f714c7d297;
  uVar10 = (uVar10 ^ uVar4 >> 0x20 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
  uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
  if ((uVar7 & uVar7 - 1) == 0) {
    uVar9 = uVar10 & uVar7 - 1;
  }
  else {
    uVar9 = uVar10;
    if (uVar7 <= uVar10) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = uVar10 / uVar7;
      }
      uVar9 = uVar10 - uVar9 * uVar7;
    }
  }
  plVar8 = *(long **)(*(long *)(this + 0x188) + uVar9 * 8);
  do {
    do {
      plVar8 = (long *)*plVar8;
    } while (plVar8[1] != uVar10);
  } while (plVar8[2] != uVar4);
  lVar13 = plVar8[3];
  uVar4 = *(ulong *)(lVar13 + 0x58);
  if (uVar4 != 0) {
    uVar10 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar15 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar7 = (uVar10 ^ (ulong)param_1 >> 0x20 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    uVar10 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    if (uVar10 < 2) {
      uVar9 = uVar4 - 1 & uVar7;
    }
    else {
      uVar9 = uVar7;
      if (uVar4 <= uVar7) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar7 / uVar4;
        }
        uVar9 = uVar7 - uVar9 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar13 + 0x50) + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar11 = plVar8[1];
        if (uVar7 - uVar11 == 0) {
          if ((WasmCode *)plVar8[2] == param_1) goto LAB_0120ce94;
        }
        else {
          if (uVar10 < 2) {
            uVar11 = uVar11 & uVar4 - 1;
          }
          else if (uVar4 <= uVar11) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar11 / uVar4;
            }
            uVar11 = uVar11 - uVar1 * uVar4;
          }
          if (uVar11 != uVar9) break;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  std::__ndk1::
  __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
  ::__emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*const&>
            ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
              *)(lVar13 + 0x28),&local_28,&local_28);
  if ((extraout_x1 & 1) == 0) {
LAB_0120ce94:
    uVar12 = 0;
    goto LAB_0120cfa4;
  }
  lVar6 = *(long *)(this + 0x1b0);
  lVar5 = *(long *)(local_28 + 8);
  *(long *)(this + 0x1b0) = lVar6 + lVar5;
  if (FLAG_wasm_code_gc != '\0') {
    if (FLAG_stress_wasm_code_gc == '\0') {
      if (*(ulong *)(this + 8) / 10 + 0x10000 < *(ulong *)(this + 0x1b0)) goto LAB_0120cf08;
    }
    else if (lVar6 + lVar5 != 0) {
LAB_0120cf08:
      bVar3 = *(byte *)(lVar13 + 0x78);
      if (*(long *)(this + 0x1b8) == 0) {
        if (bVar3 == 0x7f) {
          uVar2 = 0x7f;
        }
        else {
          uVar2 = bVar3 + 1;
          *(char *)(lVar13 + 0x78) = (char)uVar2;
        }
        if (FLAG_trace_wasm_code_gc != '\0') {
          PrintF("[wasm-gc] Triggering GC (potentially dead: %zu bytes; limit: %zu bytes).\n",
                 *(undefined8 *)(this + 0x1b0));
          uVar2 = (uint)*(byte *)(lVar13 + 0x78);
        }
        TriggerGC(this,uVar2);
      }
      else if (*(char *)(*(long *)(this + 0x1b8) + 0x51) == '\0') {
        if (bVar3 != 0x7f) {
          bVar3 = bVar3 + 1;
          *(byte *)(lVar13 + 0x78) = bVar3;
        }
        if (FLAG_trace_wasm_code_gc != '\0') {
          PrintF("[wasm-gc] Scheduling another GC after the current one (potentially dead: %zu bytes; limit: %zu bytes).\n"
                 ,*(undefined8 *)(this + 0x1b0));
          bVar3 = *(byte *)(lVar13 + 0x78);
        }
        *(byte *)(*(long *)(this + 0x1b8) + 0x51) = bVar3;
      }
    }
  }
  uVar12 = 1;
LAB_0120cfa4:
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  return uVar12;
}

