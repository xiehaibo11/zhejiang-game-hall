
/* v8::internal::wasm::AsmJsParser::CallExpression() */

undefined8 __thiscall v8::internal::wasm::AsmJsParser::CallExpression(AsmJsParser *this)

{
  AsmJsParser AVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = *(int *)(this + 0x10);
  if (0xff < iVar5) {
    puVar2 = (undefined8 *)GetVarInfo(this,iVar5);
    uVar3 = AsmType::IsA((AsmType *)*puVar2,*(AsmType **)(this + 0x268));
    if ((uVar3 & 1) != 0) {
      ValidateFloatCoercion(this);
      return 0xe00d;
    }
    iVar5 = *(int *)(this + 0x10);
    if (0xff < iVar5) {
      puVar2 = (undefined8 *)GetVarInfo(this,iVar5);
      uVar3 = AsmType::IsA((AsmType *)*puVar2,(AsmType *)0x3);
      if ((uVar3 & 1) != 0) {
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x108)) goto LAB_01488f40;
        uVar4 = MemberExpression(this);
        AVar1 = this[0x1e4];
        goto joined_r0x01488f9c;
      }
      iVar5 = *(int *)(this + 0x10);
    }
  }
  if (iVar5 == 0x28) {
    uVar3 = GetCurrentStackPosition();
    if (uVar3 < *(ulong *)(this + 0x108)) goto LAB_01488f40;
    uVar4 = ParenthesizedExpression(this);
    AVar1 = this[0x1e4];
  }
  else {
    uVar3 = PeekCall(this);
    if ((uVar3 & 1) == 0) {
      iVar5 = *(int *)(this + 0x10);
      uVar3 = GetCurrentStackPosition();
      if (iVar5 + 9999U < 0x280f) {
        if (uVar3 < *(ulong *)(this + 0x108)) goto LAB_01488f40;
        *(undefined8 *)(this + 0x270) = 0;
        if (*(int *)(this + 0x10) == -3) {
          iVar5 = *(int *)(this + 0xe8);
          AsmJsScanner::Next((AsmJsScanner *)(this + 8));
          WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),iVar5);
          uVar4 = 0x1f21;
          if (iVar5 < 0) {
            uVar4 = 0xb01;
          }
          AVar1 = this[0x1e4];
        }
        else if (*(int *)(this + 0x10) == -4) {
          dVar6 = *(double *)(this + 0xe0);
          AsmJsScanner::Next((AsmJsScanner *)(this + 8));
          WasmFunctionBuilder::EmitF64Const(*(WasmFunctionBuilder **)(this + 0xf8),dVar6);
          uVar4 = 0xed;
          AVar1 = this[0x1e4];
        }
        else {
          this[0x1e4] = (AsmJsParser)0x1;
          uVar4 = 0;
          *(char **)(this + 0x1e8) = "Expected numeric literal.";
          *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
          AVar1 = this[0x1e4];
        }
      }
      else {
        if (uVar3 < *(ulong *)(this + 0x108)) {
LAB_01488f40:
          this[0x1e4] = (AsmJsParser)0x1;
          *(char **)(this + 0x1e8) = "Stack overflow while parsing asm.js module.";
          *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
          return 0;
        }
        uVar4 = Identifier(this);
        AVar1 = this[0x1e4];
      }
    }
    else {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x108)) goto LAB_01488f40;
      uVar4 = ValidateCall(this);
      AVar1 = this[0x1e4];
    }
  }
joined_r0x01488f9c:
  if (AVar1 != (AsmJsParser)0x0) {
    uVar4 = 0;
  }
  return uVar4;
}

