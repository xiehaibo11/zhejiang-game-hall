
/* v8::internal::wasm::ModuleDecoderImpl::CalculateGlobalOffsets(v8::internal::wasm::WasmModule*) */

void __thiscall
v8::internal::wasm::ModuleDecoderImpl::CalculateGlobalOffsets
          (ModuleDecoderImpl *this,WasmModule *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  
  puVar6 = *(undefined1 **)(param_1 + 0x18);
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  if (puVar6 == puVar2) {
    iVar4 = 0;
    iVar7 = 0;
LAB_015f39d8:
    *(int *)(param_1 + 0x30) = iVar7;
    *(int *)(param_1 + 0x34) = iVar4;
    return;
  }
  iVar7 = 0;
  iVar4 = 0;
  iVar8 = 0;
  if (puVar6[1] != '\0') goto LAB_015f3970;
  do {
    lVar9 = 2;
    puVar5 = puVar6;
    switch(*puVar6) {
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 1:
    case 3:
      break;
    case 2:
    case 4:
      lVar9 = 3;
      break;
    case 5:
      lVar9 = 4;
      break;
    case 6:
    case 7:
    case 9:
      *(int *)(puVar6 + 0x18) = iVar4;
      iVar4 = iVar4 + 1;
      goto LAB_015f395c;
    }
    iVar3 = 1 << lVar9;
    uVar1 = (iVar7 + iVar3) - 1U & -iVar3;
    *(uint *)(puVar6 + 0x18) = uVar1;
    iVar7 = uVar1 + iVar3;
LAB_015f395c:
    while( true ) {
      puVar6 = puVar5 + 0x20;
      if (puVar2 == puVar6) goto LAB_015f39d8;
      if (puVar5[0x21] == '\0') break;
LAB_015f3970:
      if (puVar6[0x1c] == '\0') break;
      *(int *)(puVar6 + 0x18) = iVar8;
      puVar5 = puVar6;
      iVar8 = iVar8 + 1;
    }
  } while( true );
}

