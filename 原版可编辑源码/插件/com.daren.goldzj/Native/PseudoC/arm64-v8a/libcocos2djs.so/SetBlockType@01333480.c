
/* v8::internal::wasm::WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,
   v8::internal::wasm::EmptyInterface>::SetBlockType(v8::internal::wasm::ControlBase<v8::internal::wasm::ValueBase>*,
   v8::internal::wasm::BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>&,
   v8::internal::wasm::ValueBase*) */

void __thiscall
v8::internal::wasm::
WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>::
SetBlockType(WasmFullDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1,v8::internal::wasm::EmptyInterface>
             *this,ControlBase *param_1,BlockTypeImmediate *param_2,ValueBase *param_3)

{
  long lVar1;
  ControlBase CVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  BlockTypeImmediate BVar6;
  Zone *pZVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar12 = *(undefined8 *)(this + 0x10);
  if (param_2[4] == (BlockTypeImmediate)0xa) {
    uVar9 = **(ulong **)(param_2 + 0x10);
    iVar8 = (int)uVar9;
    *(int *)(param_1 + 0x38) = iVar8;
    if (iVar8 == 0) goto LAB_01333558;
    if (iVar8 != 1) {
      pZVar7 = *(Zone **)(this + 0x70);
      uVar9 = uVar9 & 0xffffffff;
      uVar10 = uVar9 * 0x10;
      lVar5 = *(long *)(pZVar7 + 0x10);
      if (uVar10 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar5) ||
          uVar10 - (*(long *)(pZVar7 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar7 + 0x10) = lVar5 + uVar10;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar7,uVar10);
      }
      lVar11 = 0;
      uVar10 = 0;
      *(long *)(param_1 + 0x40) = lVar5;
      do {
        BVar6 = param_2[4];
        if (BVar6 == (BlockTypeImmediate)0xa) {
          BVar6 = *(BlockTypeImmediate *)(*(long *)(*(long *)(param_2 + 0x10) + 0x10) + uVar10);
        }
        uVar10 = uVar10 + 1;
        puVar4 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar11);
        lVar11 = lVar11 + 0x10;
        *puVar4 = uVar12;
        *(BlockTypeImmediate *)(puVar4 + 1) = BVar6;
      } while (uVar9 != uVar10);
      goto LAB_01333558;
    }
  }
  else {
    if (param_2[4] == (BlockTypeImmediate)0x0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      goto LAB_01333558;
    }
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  CVar2 = *(ControlBase *)(param_2 + 4);
  if (CVar2 == (ControlBase)0xa) {
    CVar2 = **(ControlBase **)(*(long *)(param_2 + 0x10) + 0x10);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar12;
  param_1[0x48] = CVar2;
LAB_01333558:
  if (param_2[4] == (BlockTypeImmediate)0xa) {
    uVar9 = *(ulong *)(*(long *)(param_2 + 0x10) + 8);
    iVar8 = (int)uVar9;
    *(int *)(param_1 + 0x18) = iVar8;
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        uVar12 = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)param_3;
        param_1[0x28] = SUB81(uVar12,0);
      }
      else {
        pZVar7 = *(Zone **)(this + 0x70);
        uVar9 = uVar9 & 0xffffffff;
        uVar10 = uVar9 * 0x10;
        puVar4 = *(undefined8 **)(pZVar7 + 0x10);
        if (uVar10 < (ulong)(*(long *)(pZVar7 + 0x18) - (long)puVar4) ||
            uVar10 - (*(long *)(pZVar7 + 0x18) - (long)puVar4) == 0) {
          *(undefined8 **)(pZVar7 + 0x10) = puVar4 + uVar9 * 2;
        }
        else {
          puVar4 = (undefined8 *)Zone::NewExpand(pZVar7,uVar10);
        }
        *(undefined8 **)(param_1 + 0x20) = puVar4;
        uVar12 = *(undefined8 *)(param_3 + 8);
        lVar5 = uVar9 - 1;
        *puVar4 = *(undefined8 *)param_3;
        *(char *)(puVar4 + 1) = (char)uVar12;
        if (lVar5 != 0) {
          lVar11 = 0;
          do {
            lVar3 = lVar11 + 0x10;
            uVar12 = *(undefined8 *)(param_3 + lVar11 + 0x18);
            lVar5 = lVar5 + -1;
            lVar1 = *(long *)(param_1 + 0x20) + lVar11;
            lVar11 = lVar11 + 0x10;
            *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_3 + lVar3);
            *(char *)(lVar1 + 0x18) = (char)uVar12;
          } while (lVar5 != 0);
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

