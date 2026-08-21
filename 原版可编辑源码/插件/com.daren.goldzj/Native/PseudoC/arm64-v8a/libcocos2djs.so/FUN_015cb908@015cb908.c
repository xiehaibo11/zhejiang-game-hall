
void FUN_015cb908(Decoder *param_1)

{
  uint uVar1;
  char cVar2;
  Zone *pZVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  long lVar7;
  WasmGraphBuilder *this;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(ulong *)(param_1 + 0x18) < *(ulong *)(param_1 + 0x10)) {
    pcVar6 = "function body end < start";
    goto LAB_015cb938;
  }
  v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::DecodeLocals
            ((WasmFeatures *)(param_1 + 0x50),param_1,*(Signature **)(param_1 + 0x60),
             *(ZoneVector **)(param_1 + 0x68));
  pZVar3 = *(Zone **)(param_1 + 0x70);
  puVar5 = *(undefined4 **)(pZVar3 + 0x10);
  if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x38) {
    puVar5 = (undefined4 *)v8::internal::Zone::NewExpand(pZVar3,0x38);
  }
  else {
    *(undefined4 **)(pZVar3 + 0x10) = puVar5 + 0xe;
  }
  uVar10 = *(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90);
  *puVar5 = 2;
  uVar9 = (uint)uVar10;
  if (uVar9 == 0) {
    lVar7 = 0;
  }
  else {
    pZVar3 = *(Zone **)(param_1 + 0x70);
    uVar8 = (uVar10 & 0xffffffff) * 8;
    lVar7 = *(long *)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - lVar7) < uVar8) {
      lVar7 = v8::internal::Zone::NewExpand(pZVar3,uVar8);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = lVar7 + uVar8;
    }
  }
  *(long *)(puVar5 + 0xc) = lVar7;
  uVar4 = v8::internal::compiler::WasmGraphBuilder::Start
                    (*(WasmGraphBuilder **)(param_1 + 0x80),
                     *(int *)(*(long *)(param_1 + 0x60) + 8) + 2);
  *(undefined8 *)(puVar5 + 2) = uVar4;
  *(undefined8 *)(puVar5 + 4) = uVar4;
  *(undefined4 **)(*(long *)(param_1 + 0x80) + 0x20) = puVar5 + 4;
  *(undefined4 **)(*(long *)(param_1 + 0x80) + 0x18) = puVar5 + 2;
  this = *(WasmGraphBuilder **)(param_1 + 0x80);
  uVar4 = v8::internal::compiler::WasmGraphBuilder::Param(this,0);
  *(undefined8 *)(this + 0x30) = uVar4;
  if (*(long *)(*(long *)(param_1 + 0x60) + 8) == 0) {
    uVar8 = 0;
    if (uVar9 != 0) goto LAB_015cba5c;
  }
  else {
    uVar11 = 0;
    do {
      uVar1 = (int)uVar11 + 1;
      uVar8 = (ulong)uVar1;
      uVar4 = v8::internal::compiler::WasmGraphBuilder::Param
                        (*(WasmGraphBuilder **)(param_1 + 0x80),uVar1);
      *(undefined8 *)(*(long *)(puVar5 + 0xc) + uVar11 * 8) = uVar4;
      uVar11 = uVar8;
    } while (uVar8 < *(ulong *)(*(long *)(param_1 + 0x60) + 8));
    if (uVar1 < uVar9) {
LAB_015cba5c:
      do {
        cVar2 = *(char *)(*(long *)(param_1 + 0x90) + uVar8);
        switch(cVar2) {
        case '\x01':
          uVar4 = v8::internal::compiler::WasmGraphBuilder::Int32Constant
                            (*(WasmGraphBuilder **)(param_1 + 0x80),0);
          break;
        case '\x02':
          uVar4 = v8::internal::compiler::WasmGraphBuilder::Int64Constant
                            (*(WasmGraphBuilder **)(param_1 + 0x80),0);
          break;
        case '\x03':
          uVar4 = v8::internal::compiler::WasmGraphBuilder::Float32Constant
                            (*(WasmGraphBuilder **)(param_1 + 0x80),0.0);
          break;
        case '\x04':
          uVar4 = v8::internal::compiler::WasmGraphBuilder::Float64Constant
                            (*(WasmGraphBuilder **)(param_1 + 0x80),0.0);
          break;
        case '\x05':
          uVar4 = v8::internal::compiler::WasmGraphBuilder::S128Zero
                            (*(WasmGraphBuilder **)(param_1 + 0x80));
          break;
        case '\x06':
        case '\a':
        case '\t':
          uVar4 = v8::internal::compiler::WasmGraphBuilder::RefNull
                            (*(WasmGraphBuilder **)(param_1 + 0x80));
          break;
        default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        if ((uint)uVar8 < uVar9) {
          while (*(char *)(*(long *)(param_1 + 0x90) + uVar8) == cVar2) {
            uVar11 = uVar8 + 1;
            *(undefined8 *)(*(long *)(puVar5 + 0xc) + uVar8 * 8) = uVar4;
            uVar8 = uVar11;
            if ((uVar10 & 0xffffffff) == uVar11) goto LAB_015cbb4c;
          }
          uVar8 = uVar8 & 0xffffffff;
        }
      } while ((uint)uVar8 < uVar9);
    }
  }
LAB_015cbb4c:
  if (puVar5 != (undefined4 *)0x0) {
    v8::internal::compiler::WasmGraphBuilder::InitInstanceCache
              (*(WasmGraphBuilder **)(param_1 + 0x80),(WasmInstanceCacheNodes *)(puVar5 + 6));
  }
  *(undefined4 **)(param_1 + 0x78) = puVar5;
  *(undefined4 **)(*(long *)(param_1 + 0x80) + 0x18) = puVar5 + 2;
  *(undefined4 **)(*(long *)(param_1 + 0x80) + 0x20) = puVar5 + 4;
  *(undefined4 **)(*(long *)(param_1 + 0x80) + 0x28) = puVar5 + 6;
  FUN_015cbd1c(param_1);
  if (((byte)param_1[0x30] & 1) == 0) {
    if ((byte)param_1[0x30] >> 1 == 0) {
LAB_015cbba8:
      v8::internal::compiler::WasmGraphBuilder::PatchInStackCheckIfNeeded
                (*(WasmGraphBuilder **)(param_1 + 0x80));
    }
  }
  else if (*(long *)(param_1 + 0x38) == 0) goto LAB_015cbba8;
  lVar7 = *(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0);
  if (1 < (ulong)((lVar7 >> 3) * -0xf0f0f0f0f0f0f0f)) {
    v8::internal::wasm::Decoder::error
              (param_1,*(uchar **)(*(long *)(param_1 + 0xd8) + -0x80),
               "unterminated control structure");
    return;
  }
  if (lVar7 != 0x88) {
    return;
  }
  pcVar6 = "function body must end with \"end\" opcode";
LAB_015cb938:
  v8::internal::wasm::Decoder::error(param_1,pcVar6);
  return;
}

