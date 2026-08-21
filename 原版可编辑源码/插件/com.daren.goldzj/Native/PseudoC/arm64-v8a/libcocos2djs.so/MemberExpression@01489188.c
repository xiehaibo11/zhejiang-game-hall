
/* v8::internal::wasm::AsmJsParser::MemberExpression() */

undefined8 __thiscall v8::internal::wasm::AsmJsParser::MemberExpression(AsmJsParser *this)

{
  ulong uVar1;
  undefined8 uVar2;
  WasmFunctionBuilder *pWVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(this + 0x270) = 0;
  uVar1 = GetCurrentStackPosition();
  if (uVar1 < *(ulong *)(this + 0x108)) {
    uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar4 = "Stack overflow while parsing asm.js module.";
LAB_014891c0:
    *(char **)(this + 0x1e8) = pcVar4;
    *(undefined4 *)(this + 0x1f0) = uVar5;
    return 0;
  }
  ValidateHeapAccess(this);
  if (this[0x1e4] != (AsmJsParser)0x0) {
    return 0;
  }
  if (*(int *)(this + 0x10) == 0x3d) {
    this[0x200] = (AsmJsParser)0x1;
    uVar2 = AsmType::StoreType(*(AsmType **)(this + 0x208));
    return uVar2;
  }
  uVar1 = AsmType::IsA(*(AsmType **)(this + 0x208),(AsmType *)0x20003);
  if ((uVar1 & 1) == 0) {
    uVar1 = AsmType::IsA(*(AsmType **)(this + 0x208),(AsmType *)0x10003);
    if ((uVar1 & 1) == 0) {
      uVar1 = AsmType::IsA(*(AsmType **)(this + 0x208),(AsmType *)0x80003);
      if ((uVar1 & 1) == 0) {
        uVar1 = AsmType::IsA(*(AsmType **)(this + 0x208),(AsmType *)0x40003);
        if ((uVar1 & 1) == 0) {
          uVar1 = AsmType::IsA(*(AsmType **)(this + 0x208),
                               (AsmType *)((long)&__DT_SYMTAB[0x3a3b].st_size + 3));
          if (((uVar1 & 1) == 0) &&
             (uVar1 = AsmType::IsA(*(AsmType **)(this + 0x208),
                                   (AsmType *)(Elf64_Ehdr_00100000.e_ident_magic_str + 2)),
             (uVar1 & 1) == 0)) {
            uVar1 = AsmType::IsA(*(AsmType **)(this + 0x208),(AsmType *)0x400003);
            if ((uVar1 & 1) == 0) {
              uVar1 = AsmType::IsA(*(AsmType **)(this + 0x208),(AsmType *)0x800003);
              if ((uVar1 & 1) == 0) {
                uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
                this[0x1e4] = (AsmJsParser)0x1;
                pcVar4 = "Expected valid heap load";
                goto LAB_014891c0;
              }
              pWVar3 = *(WasmFunctionBuilder **)(this + 0xf8);
              uVar2 = 0xdd;
            }
            else {
              pWVar3 = *(WasmFunctionBuilder **)(this + 0xf8);
              uVar2 = 0xdc;
            }
          }
          else {
            pWVar3 = *(WasmFunctionBuilder **)(this + 0xf8);
            uVar2 = 0xdb;
          }
        }
        else {
          pWVar3 = *(WasmFunctionBuilder **)(this + 0xf8);
          uVar2 = 0xda;
        }
      }
      else {
        pWVar3 = *(WasmFunctionBuilder **)(this + 0xf8);
        uVar2 = 0xd9;
      }
    }
    else {
      pWVar3 = *(WasmFunctionBuilder **)(this + 0xf8);
      uVar2 = 0xd8;
    }
  }
  else {
    pWVar3 = *(WasmFunctionBuilder **)(this + 0xf8);
    uVar2 = 0xd7;
  }
  WasmFunctionBuilder::Emit(pWVar3,uVar2);
  uVar2 = AsmType::LoadType(*(AsmType **)(this + 0x208));
  return uVar2;
}

