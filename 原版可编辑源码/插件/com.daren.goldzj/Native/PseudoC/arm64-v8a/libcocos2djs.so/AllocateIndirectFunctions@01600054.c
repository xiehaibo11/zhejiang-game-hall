
/* v8::internal::wasm::WasmModuleBuilder::AllocateIndirectFunctions(unsigned int) */

ulong __thiscall
v8::internal::wasm::WasmModuleBuilder::AllocateIndirectFunctions
          (WasmModuleBuilder *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  Zone *this_00;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined2 local_18;
  undefined1 local_16;
  undefined2 local_14;
  undefined1 local_12;
  
  lVar6 = *(long *)(this + 0xe8);
  uVar8 = *(long *)(this + 0xf0) - lVar6 >> 2;
  if ((uint)(FLAG_wasm_max_table_size - (int)uVar8) < param_1) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar1 = (int)uVar8 + param_1;
    uVar9 = (ulong)uVar1;
    if (uVar8 < uVar9) {
      std::__ndk1::vector<unsigned_int,v8::internal::ZoneAllocator<unsigned_int>>::__append
                ((vector<unsigned_int,v8::internal::ZoneAllocator<unsigned_int>> *)(this + 0xe8),
                 uVar9 - uVar8,&WasmElemSegment::kNullIndex);
    }
    else if (uVar8 != uVar9) {
      *(ulong *)(this + 0xf0) = lVar6 + uVar9 * 4;
    }
    puVar5 = *(undefined1 **)(this + 0xa8);
    uVar2 = uVar1;
    if (*(uint *)(this + 0x164) != 0) {
      uVar2 = *(uint *)(this + 0x164);
    }
    if (puVar5 == *(undefined1 **)(this + 0xb0)) {
      if (puVar5 < *(undefined1 **)(this + 0xb8)) {
        *puVar5 = 7;
        *(uint *)(puVar5 + 4) = uVar1;
        *(uint *)(puVar5 + 8) = uVar2;
        puVar5[0xc] = 1;
        puVar5[3] = local_12;
        *(undefined2 *)(puVar5 + 1) = local_14;
        puVar5[0xf] = local_16;
        *(undefined2 *)(puVar5 + 0xd) = local_18;
        *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + 0x10;
      }
      else {
        lVar3 = (long)*(undefined1 **)(this + 0xb8) - (long)puVar5;
        this_00 = *(Zone **)(this + 0xc0);
        lVar6 = lVar3 >> 3;
        if (lVar3 == 0) {
          lVar6 = 1;
        }
        puVar5 = *(undefined1 **)(this_00 + 0x10);
        if (0x3fffffe < (ulong)(lVar3 >> 4)) {
          lVar6 = 0x7ffffff;
        }
        uVar9 = lVar6 * 0x10;
        if (uVar9 < (ulong)(*(long *)(this_00 + 0x18) - (long)puVar5) ||
            uVar9 - (*(long *)(this_00 + 0x18) - (long)puVar5) == 0) {
          *(undefined1 **)(this_00 + 0x10) = puVar5 + uVar9;
        }
        else {
          puVar5 = (undefined1 *)Zone::NewExpand(this_00,uVar9);
        }
        *puVar5 = 7;
        *(uint *)(puVar5 + 4) = uVar1;
        *(uint *)(puVar5 + 8) = uVar2;
        puVar5[0xc] = 1;
        puVar5[3] = local_12;
        *(undefined2 *)(puVar5 + 1) = local_14;
        puVar5[0xf] = local_16;
        *(undefined2 *)(puVar5 + 0xd) = local_18;
        lVar3 = *(long *)(this + 0xa8);
        puVar4 = puVar5;
        for (lVar7 = *(long *)(this + 0xb0); lVar7 != lVar3; lVar7 = lVar7 + -0x10) {
          uVar10 = *(undefined8 *)(lVar7 + -0x10);
          *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(lVar7 + -8);
          *(undefined8 *)(puVar4 + -0x10) = uVar10;
          puVar4 = puVar4 + -0x10;
        }
        *(undefined1 **)(this + 0xa8) = puVar4;
        *(undefined1 **)(this + 0xb0) = puVar5 + 0x10;
        *(undefined1 **)(this + 0xb8) = puVar5 + lVar6 * 0x10;
      }
    }
    else {
      *(uint *)(puVar5 + 4) = uVar1;
      *(uint *)(*(long *)(this + 0xa8) + 8) = uVar2;
    }
  }
  return uVar8 & 0xffffffff;
}

