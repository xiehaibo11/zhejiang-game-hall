
/* void std::__ndk1::vector<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment,
   v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment>
   >::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment>(v8::internal::wasm::WasmModuleBuilder::WasmDataSegment&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment>>
::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment>
          (vector<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment>>
           *this,WasmDataSegment *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  Zone *this_00;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar8 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar8 * -0x3333333333333333 + 1;
  if (uVar1 < 0x3333334) {
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar7 = lVar6 * -0x6666666666666666;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if ("ect::Cast" < (char *)(lVar6 * -0x3333333333333333)) {
      uVar1 = 0x3333333;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x18);
      uVar7 = uVar1 * 0x28;
      lVar6 = *(long *)(this_00 + 0x10);
      if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
          uVar7 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar6 + uVar7;
      }
      else {
        lVar6 = v8::internal::Zone::NewExpand(this_00,uVar7);
      }
    }
    puVar5 = (undefined8 *)(lVar6 + lVar8 * 8);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar5 = *(undefined8 *)param_1;
    puVar5[1] = *(undefined8 *)(param_1 + 8);
    puVar5[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(param_1 + 0x20);
    plVar9 = *(long **)this;
    plVar3 = *(long **)(this + 8);
    puVar2 = puVar5 + 5;
    plVar10 = plVar9;
    if (plVar3 != plVar9) {
      lVar8 = 0;
      do {
        *(undefined8 *)((long)puVar5 + lVar8 + -0x28) = 0;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x20) = 0;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x18) = 0;
        lVar11 = lVar8 + -0x28;
        *(undefined8 *)((long)puVar5 + lVar8 + -0x10) =
             *(undefined8 *)((long)plVar3 + lVar8 + -0x10);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x28) =
             *(undefined8 *)((long)plVar3 + lVar8 + -0x28);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x20) =
             *(undefined8 *)((long)plVar3 + lVar8 + -0x20);
        *(undefined8 *)((long)puVar5 + lVar8 + -0x18) =
             *(undefined8 *)((long)plVar3 + lVar8 + -0x18);
        *(undefined8 *)((long)plVar3 + lVar8 + -0x28) = 0;
        *(undefined8 *)((long)plVar3 + lVar8 + -0x20) = 0;
        *(undefined8 *)((long)plVar3 + lVar8 + -0x18) = 0;
        *(undefined4 *)((long)puVar5 + lVar8 + -8) = *(undefined4 *)((long)plVar3 + lVar8 + -8);
        lVar8 = lVar11;
      } while ((long)plVar9 - (long)plVar3 != lVar11);
      plVar9 = *(long **)(this + 8);
      puVar5 = (undefined8 *)((long)puVar5 + lVar11);
      plVar10 = *(long **)this;
    }
    *(undefined8 **)this = puVar5;
    *(undefined8 **)(this + 8) = puVar2;
    *(ulong *)(this + 0x10) = lVar6 + uVar1 * 0x28;
    if (plVar9 != plVar10) {
      lVar8 = plVar9[-5];
      plVar3 = plVar9 + -5;
      while( true ) {
        plVar4 = plVar3;
        if (lVar8 != 0) {
          plVar9[-4] = lVar8;
        }
        if (plVar10 == plVar4) break;
        lVar8 = plVar4[-5];
        plVar3 = plVar4 + -5;
        plVar9 = plVar4;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

