
/* v8::internal::wasm::AsmJsParser::ForStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::ForStatement(AsmJsParser *this)

{
  bool bVar1;
  AsmJsScanner *this_00;
  int iVar2;
  ulong uVar3;
  AsmType *this_01;
  char *pcVar4;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  
  if (*(int *)(this + 0x10) == -0x26e0) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    if (*(int *)(this + 0x10) == 0x28) {
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x10) == 0x3b) {
LAB_01488248:
        AsmJsScanner::Next(this_00);
        BareBegin(this,0,*(undefined4 *)(this + 0x29c));
        WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),2,0x40);
        BareBegin(this,1,0);
        WasmFunctionBuilder::AddAsmWasmOffset
                  (*(WasmFunctionBuilder **)(this + 0xf8),*(ulong *)(this + 0x20),
                   *(ulong *)(this + 0x20));
        WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),3,0x40);
        BareBegin(this,1,*(undefined4 *)(this + 0x29c));
        WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),2,0x40);
        *(undefined4 *)(this + 0x29c) = 0;
        if (*(int *)(this + 0x10) == 0x3b) {
LAB_014882d0:
          AsmJsScanner::Next(this_00);
          uVar6 = *(ulong *)(this + 0x20);
          iVar7 = 0;
          do {
            iVar2 = *(int *)(this + 0x10);
            if (iVar2 == 0x28) {
              iVar7 = iVar7 + 1;
            }
            else if (iVar2 == 0x29) {
              bVar1 = iVar7 < 1;
              iVar7 = iVar7 + -1;
              if (bVar1) {
                AsmJsScanner::Next(this_00);
                uVar3 = GetCurrentStackPosition();
                if (uVar3 < *(ulong *)(this + 0x108)) goto LAB_01488428;
                ValidateStatement(this);
                if (this[0x1e4] != (AsmJsParser)0x0) {
                  return;
                }
                *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
                WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
                uVar3 = *(ulong *)(this + 0x20);
                AsmJsScanner::Seek(this_00,uVar6);
                if (*(int *)(this + 0x10) != 0x29) {
                  uVar6 = GetCurrentStackPosition();
                  if (uVar6 < *(ulong *)(this + 0x108)) goto LAB_01488428;
                  Expression(this,(AsmType *)0x0);
                  if (this[0x1e4] != (AsmJsParser)0x0) {
                    return;
                  }
                }
                WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),0xc,0);
                AsmJsScanner::Seek(this_00,uVar3);
                *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
                WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
                *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
                WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
                return;
              }
            }
            else if (iVar2 == -1) goto LAB_0148847c;
            AsmJsScanner::Next(this_00);
          } while( true );
        }
        uVar6 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar6) {
          Expression(this,(AsmType *)0x301);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return;
          }
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x45);
          WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),0xd,2);
          if (*(int *)(this + 0x10) == 0x3b) goto LAB_014882d0;
          goto LAB_0148847c;
        }
      }
      else {
        uVar6 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar6) {
          this_01 = (AsmType *)Expression(this,(AsmType *)0x0);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return;
          }
          uVar6 = AsmType::IsA(this_01,(AsmType *)0x11);
          if ((uVar6 & 1) == 0) {
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x1a);
          }
          if (*(int *)(this + 0x10) != 0x3b) goto LAB_0148847c;
          goto LAB_01488248;
        }
      }
LAB_01488428:
      uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar4 = "Stack overflow while parsing asm.js module.";
      goto LAB_01488490;
    }
  }
LAB_0148847c:
  uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar4 = "Unexpected token";
LAB_01488490:
  *(char **)(this + 0x1e8) = pcVar4;
  *(undefined4 *)(this + 0x1f0) = uVar5;
  return;
}

