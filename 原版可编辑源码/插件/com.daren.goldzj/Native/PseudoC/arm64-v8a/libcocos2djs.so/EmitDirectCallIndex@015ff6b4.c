
/* v8::internal::wasm::WasmFunctionBuilder::EmitDirectCallIndex(unsigned int) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::EmitDirectCallIndex(WasmFunctionBuilder *this,uint param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  Zone *this_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uchar local_30 [8];
  long local_28;
  
  lVar4 = tpidr_el0;
  local_28 = *(long *)(lVar4 + 0x28);
  plVar2 = *(long **)(this + 0xf8);
  lVar3 = *(long *)(this + 0x48);
  lVar8 = *(long *)(this + 0x50);
  if (plVar2 == *(long **)(this + 0x100)) {
    lVar7 = (long)plVar2 - *(long *)(this + 0xf0) >> 4;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)*(long **)(this + 0x100) - *(long *)(this + 0xf0);
    uVar9 = lVar6 >> 3;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x3fffffe < (ulong)(lVar6 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x108);
      uVar9 = uVar1 * 0x10;
      lVar6 = *(long *)(this_00 + 0x10);
      if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
          uVar9 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar6 + uVar9;
      }
      else {
        lVar6 = Zone::NewExpand(this_00,uVar9);
      }
    }
    plVar2 = (long *)(lVar6 + lVar7 * 0x10);
    *plVar2 = lVar8 - lVar3;
    *(uint *)(plVar2 + 1) = param_1;
    lVar3 = *(long *)(this + 0xf0);
    plVar5 = plVar2;
    for (lVar8 = *(long *)(this + 0xf8); lVar8 != lVar3; lVar8 = lVar8 + -0x10) {
      lVar7 = *(long *)(lVar8 + -0x10);
      plVar5[-1] = *(long *)(lVar8 + -8);
      plVar5[-2] = lVar7;
      plVar5 = plVar5 + -2;
    }
    *(long **)(this + 0xf0) = plVar5;
    *(long **)(this + 0xf8) = plVar2 + 2;
    *(ulong *)(this + 0x100) = lVar6 + uVar1 * 0x10;
  }
  else {
    *plVar2 = lVar8 - lVar3;
    *(uint *)(plVar2 + 1) = param_1;
    *(long *)(this + 0xf8) = *(long *)(this + 0xf8) + 0x10;
  }
  local_30[4] = 0;
  local_30[0] = '\0';
  local_30[1] = '\0';
  local_30[2] = '\0';
  local_30[3] = '\0';
  ZoneBuffer::write((ZoneBuffer *)(this + 0x40),local_30,5);
  if (*(long *)(lVar4 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

