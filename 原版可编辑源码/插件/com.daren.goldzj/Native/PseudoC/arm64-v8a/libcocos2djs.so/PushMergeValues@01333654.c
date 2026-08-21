
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::PushMergeValues(v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>*,
   v8::internal::wasm::Merge<v8::internal::wasm::ValueBase>*) */

void __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
PushMergeValues(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
                *this,ControlBase *param_1,Merge *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Zone *pZVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  puVar4 = (undefined8 *)(*(long *)(this + 0xa0) + (ulong)*(uint *)(param_1 + 4) * 0x10);
  if (puVar4 != *(undefined8 **)(this + 0xa8)) {
    *(undefined8 **)(this + 0xa8) = puVar4;
  }
  if (*(int *)param_2 != 0) {
    if (*(int *)param_2 == 1) {
      if (puVar4 == *(undefined8 **)(this + 0xb0)) {
        lVar7 = (long)*(undefined8 **)(this + 0xb0) - *(long *)(this + 0xa0);
        uVar11 = lVar7 >> 4;
        uVar10 = uVar11 + 1;
        if (uVar10 >> 0x1b != 0) {
LAB_01333890:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar8 = lVar7 >> 3;
        if (uVar10 <= uVar8) {
          uVar10 = uVar8;
        }
        if (0x3fffffe < uVar11) {
          uVar10 = 0x7ffffff;
        }
        if (uVar10 == 0) {
          lVar7 = 0;
        }
        else {
          pZVar6 = *(Zone **)(this + 0xb8);
          uVar8 = uVar10 * 0x10;
          lVar7 = *(long *)(pZVar6 + 0x10);
          if (uVar8 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar7) ||
              uVar8 - (*(long *)(pZVar6 + 0x18) - lVar7) == 0) {
            *(ulong *)(pZVar6 + 0x10) = lVar7 + uVar8;
          }
          else {
            lVar7 = Zone::NewExpand(pZVar6,uVar8);
          }
        }
        uVar12 = *(undefined8 *)(param_2 + 8);
        puVar4 = (undefined8 *)(lVar7 + uVar11 * 0x10);
        puVar4[1] = *(undefined8 *)(param_2 + 0x10);
        *puVar4 = uVar12;
        lVar3 = *(long *)(this + 0xa0);
        puVar1 = puVar4;
        for (lVar9 = *(long *)(this + 0xa8); lVar9 != lVar3; lVar9 = lVar9 + -0x10) {
          uVar12 = *(undefined8 *)(lVar9 + -0x10);
          puVar1[-1] = *(undefined8 *)(lVar9 + -8);
          puVar1[-2] = uVar12;
          puVar1 = puVar1 + -2;
        }
        *(undefined8 **)(this + 0xa0) = puVar1;
        *(undefined8 **)(this + 0xa8) = puVar4 + 2;
        *(ulong *)(this + 0xb0) = lVar7 + uVar10 * 0x10;
      }
      else {
        uVar12 = *(undefined8 *)(param_2 + 8);
        puVar4[1] = *(undefined8 *)(param_2 + 0x10);
        *puVar4 = uVar12;
        *(long *)(this + 0xa8) = *(long *)(this + 0xa8) + 0x10;
      }
    }
    else {
      uVar10 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + uVar10 * 0x10);
        if (puVar4 == *(undefined8 **)(this + 0xb0)) {
          lVar7 = (long)*(undefined8 **)(this + 0xb0) - *(long *)(this + 0xa0);
          uVar8 = lVar7 >> 4;
          uVar11 = uVar8 + 1;
          if (uVar11 >> 0x1b != 0) goto LAB_01333890;
          uVar5 = lVar7 >> 3;
          if (uVar11 <= uVar5) {
            uVar11 = uVar5;
          }
          if (0x3fffffe < uVar8) {
            uVar11 = 0x7ffffff;
          }
          if (uVar11 == 0) {
            lVar7 = 0;
          }
          else {
            pZVar6 = *(Zone **)(this + 0xb8);
            uVar5 = uVar11 * 0x10;
            lVar7 = *(long *)(pZVar6 + 0x10);
            if (uVar5 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar7) ||
                uVar5 - (*(long *)(pZVar6 + 0x18) - lVar7) == 0) {
              *(ulong *)(pZVar6 + 0x10) = lVar7 + uVar5;
            }
            else {
              lVar7 = Zone::NewExpand(pZVar6,uVar5);
            }
          }
          uVar12 = *puVar1;
          puVar2 = (undefined8 *)(lVar7 + uVar8 * 0x10);
          puVar4 = puVar2 + 2;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar12;
          lVar3 = *(long *)(this + 0xa0);
          for (lVar9 = *(long *)(this + 0xa8); lVar9 != lVar3; lVar9 = lVar9 + -0x10) {
            uVar12 = *(undefined8 *)(lVar9 + -0x10);
            puVar2[-1] = *(undefined8 *)(lVar9 + -8);
            puVar2[-2] = uVar12;
            puVar2 = puVar2 + -2;
          }
          *(undefined8 **)(this + 0xa0) = puVar2;
          *(undefined8 **)(this + 0xa8) = puVar4;
          *(ulong *)(this + 0xb0) = lVar7 + uVar11 * 0x10;
        }
        else {
          uVar12 = *puVar1;
          puVar4[1] = puVar1[1];
          *puVar4 = uVar12;
          puVar4 = (undefined8 *)(*(long *)(this + 0xa8) + 0x10);
          *(undefined8 **)(this + 0xa8) = puVar4;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)param_2);
    }
  }
  return;
}

