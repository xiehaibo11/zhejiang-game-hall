
/* v8::internal::wasm::WasmModuleBuilder::AddFunction(v8::internal::Signature<v8::internal::wasm::ValueType>*)
    */

undefined8 __thiscall
v8::internal::wasm::WasmModuleBuilder::AddFunction(WasmModuleBuilder *this,Signature *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  Zone *pZVar4;
  WasmFunctionBuilder *this_00;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  pZVar4 = *(Zone **)this;
  this_00 = *(WasmFunctionBuilder **)(pZVar4 + 0x10);
  if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)this_00) < 0x140) {
    this_00 = (WasmFunctionBuilder *)Zone::NewExpand(pZVar4,0x140);
  }
  else {
    *(WasmFunctionBuilder **)(pZVar4 + 0x10) = this_00 + 0x140;
  }
  WasmFunctionBuilder::WasmFunctionBuilder(this_00,this);
  puVar7 = *(undefined8 **)(this + 0x90);
  if (puVar7 < *(undefined8 **)(this + 0x98)) {
    *puVar7 = this_00;
    puVar5 = *(undefined8 **)(this + 0x90);
    puVar7 = puVar5 + 1;
    *(undefined8 **)(this + 0x90) = puVar7;
  }
  else {
    lVar11 = (long)puVar7 - *(long *)(this + 0x88) >> 3;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)*(undefined8 **)(this + 0x98) - *(long *)(this + 0x88);
    uVar8 = lVar6 >> 2;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x7fffffe < (ulong)(lVar6 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      pZVar4 = *(Zone **)(this + 0xa0);
      uVar8 = uVar1 * 8;
      lVar6 = *(long *)(pZVar4 + 0x10);
      if (uVar8 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar6) ||
          uVar8 - (*(long *)(pZVar4 + 0x18) - lVar6) == 0) {
        *(ulong *)(pZVar4 + 0x10) = lVar6 + uVar8;
      }
      else {
        lVar6 = Zone::NewExpand(pZVar4,uVar8);
      }
    }
    puVar5 = (undefined8 *)(lVar6 + lVar11 * 8);
    puVar7 = puVar5 + 1;
    *puVar5 = this_00;
    puVar2 = *(undefined8 **)(this + 0x88);
    puVar9 = *(undefined8 **)(this + 0x90);
    puVar10 = puVar5;
    while (puVar9 != puVar2) {
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *puVar9;
    }
    *(undefined8 **)(this + 0x88) = puVar10;
    *(undefined8 **)(this + 0x90) = puVar7;
    *(ulong *)(this + 0x98) = lVar6 + uVar1 * 8;
  }
  if (param_1 != (Signature *)0x0) {
    puVar5 = (undefined8 *)*puVar5;
    puVar5[1] = param_1;
    uVar3 = AddSignature((WasmModuleBuilder *)*puVar5,param_1);
    *(undefined4 *)(puVar5 + 7) = uVar3;
    puVar7 = *(undefined8 **)(this + 0x90);
  }
  return puVar7[-1];
}

