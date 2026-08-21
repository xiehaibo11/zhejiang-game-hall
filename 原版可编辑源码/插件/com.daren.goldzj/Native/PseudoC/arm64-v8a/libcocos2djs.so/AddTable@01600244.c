
/* v8::internal::wasm::WasmModuleBuilder::AddTable(v8::internal::wasm::ValueType, unsigned int) */

int __thiscall
v8::internal::wasm::WasmModuleBuilder::AddTable
          (WasmModuleBuilder *this,undefined1 param_2,undefined4 param_3)

{
  ulong uVar1;
  Zone *this_00;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined2 local_28;
  undefined1 local_26;
  undefined2 local_24;
  undefined1 local_22;
  
  puVar3 = *(undefined1 **)(this + 0xb0);
  if (puVar3 < *(undefined1 **)(this + 0xb8)) {
    *puVar3 = param_2;
    *(undefined4 *)(puVar3 + 4) = param_3;
    *(undefined4 *)(puVar3 + 8) = 0;
    puVar3[0xc] = 0;
    *(undefined2 *)(puVar3 + 1) = local_24;
    puVar3[3] = local_22;
    puVar3[0xf] = local_26;
    *(undefined2 *)(puVar3 + 0xd) = local_28;
    puVar5 = *(undefined1 **)(this + 0xa8);
    puVar3 = (undefined1 *)(*(long *)(this + 0xb0) + 0x10);
    *(undefined1 **)(this + 0xb0) = puVar3;
  }
  else {
    lVar7 = (long)puVar3 - *(long *)(this + 0xa8) >> 4;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = (long)*(undefined1 **)(this + 0xb8) - *(long *)(this + 0xa8);
    uVar4 = lVar2 >> 3;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    if (0x3fffffe < (ulong)(lVar2 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0xc0);
      uVar4 = uVar1 * 0x10;
      lVar2 = *(long *)(this_00 + 0x10);
      if (uVar4 < (ulong)(*(long *)(this_00 + 0x18) - lVar2) ||
          uVar4 - (*(long *)(this_00 + 0x18) - lVar2) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar2 + uVar4;
      }
      else {
        lVar2 = Zone::NewExpand(this_00,uVar4);
      }
    }
    puVar5 = (undefined1 *)(lVar2 + lVar7 * 0x10);
    *puVar5 = param_2;
    *(undefined4 *)(puVar5 + 4) = param_3;
    *(undefined4 *)(puVar5 + 8) = 0;
    puVar5[0xc] = 0;
    *(undefined2 *)(puVar5 + 1) = local_24;
    puVar5[3] = local_22;
    puVar5[0xf] = local_26;
    *(undefined2 *)(puVar5 + 0xd) = local_28;
    lVar7 = *(long *)(this + 0xa8);
    puVar3 = puVar5 + 0x10;
    for (lVar6 = *(long *)(this + 0xb0); lVar6 != lVar7; lVar6 = lVar6 + -0x10) {
      uVar8 = *(undefined8 *)(lVar6 + -0x10);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(lVar6 + -8);
      *(undefined8 *)(puVar5 + -0x10) = uVar8;
      puVar5 = puVar5 + -0x10;
    }
    *(undefined1 **)(this + 0xa8) = puVar5;
    *(undefined1 **)(this + 0xb0) = puVar3;
    *(ulong *)(this + 0xb8) = lVar2 + uVar1 * 0x10;
  }
  return (int)((ulong)((long)puVar3 - (long)puVar5) >> 4) + -1;
}

