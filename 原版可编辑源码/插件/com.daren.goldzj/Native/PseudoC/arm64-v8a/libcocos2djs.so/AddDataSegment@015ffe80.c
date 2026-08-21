
/* v8::internal::wasm::WasmModuleBuilder::AddDataSegment(unsigned char const*, unsigned int,
   unsigned int) */

void __thiscall
v8::internal::wasm::WasmModuleBuilder::AddDataSegment
          (WasmModuleBuilder *this,uchar *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  uchar *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uchar *puVar7;
  Zone *this_00;
  uchar *puVar8;
  uchar *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uStack_78 = *(undefined8 *)this;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  puVar2 = *(undefined8 **)(this + 0xd0);
  local_70 = param_3;
  if (puVar2 < *(undefined8 **)(this + 0xd8)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = uStack_78;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    local_88 = 0;
    local_80 = 0;
    local_90 = 0;
    *(uint *)(puVar2 + 4) = param_3;
    *(long *)(this + 0xd0) = *(long *)(this + 0xd0) + 0x28;
  }
  else {
    std::__ndk1::
    vector<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment>>
    ::__push_back_slow_path<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment>
              ((vector<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment,v8::internal::ZoneAllocator<v8::internal::wasm::WasmModuleBuilder::WasmDataSegment>>
                *)(this + 200),(WasmDataSegment *)&local_90);
    if (local_90 != 0) {
      local_88 = local_90;
    }
  }
  if (param_2 != 0) {
    lVar10 = *(long *)(this + 0xd0);
    uVar11 = 0;
    puVar7 = *(uchar **)(lVar10 + -0x20);
    do {
      if (puVar7 == *(uchar **)(lVar10 + -0x18)) {
        uVar12 = (long)*(uchar **)(lVar10 + -0x18) - *(long *)(lVar10 + -0x28);
        uVar1 = uVar12 + 1;
        if (uVar1 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (uVar1 <= uVar12 * 2) {
          uVar1 = uVar12 * 2;
        }
        if (0x3ffffffe < uVar12) {
          uVar1 = 0x7fffffff;
        }
        if (uVar1 == 0) {
          lVar5 = 0;
        }
        else {
          this_00 = *(Zone **)(lVar10 + -0x10);
          uVar6 = uVar1 + 7 & 0xfffffffffffffff8;
          lVar5 = *(long *)(this_00 + 0x10);
          if ((ulong)(*(long *)(this_00 + 0x18) - lVar5) < uVar6) {
            lVar5 = Zone::NewExpand(this_00,uVar6);
          }
          else {
            *(ulong *)(this_00 + 0x10) = lVar5 + uVar6;
          }
        }
        puVar8 = (uchar *)(lVar5 + uVar12);
        puVar7 = puVar8 + 1;
        *puVar8 = param_1[uVar11];
        puVar3 = *(uchar **)(lVar10 + -0x28);
        puVar9 = *(uchar **)(lVar10 + -0x20);
        while (puVar9 != puVar3) {
          puVar9 = puVar9 + -1;
          puVar8 = puVar8 + -1;
          *puVar8 = *puVar9;
        }
        *(uchar **)(lVar10 + -0x28) = puVar8;
        *(uchar **)(lVar10 + -0x20) = puVar7;
        *(ulong *)(lVar10 + -0x18) = lVar5 + uVar1;
      }
      else {
        *puVar7 = param_1[uVar11];
        puVar7 = (uchar *)(*(long *)(lVar10 + -0x20) + 1);
        *(uchar **)(lVar10 + -0x20) = puVar7;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_2);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

