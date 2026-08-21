
/* v8::internal::wasm::AsmJsParser::ValidateStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateStatement(AsmJsParser *this)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(this + 0x10);
  *(undefined8 *)(this + 0x270) = 0;
  switch(iVar1) {
  case -0x26e8:
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar2) {
      BreakStatement(this);
      return;
    }
    break;
  case -0x26e7:
  case -0x26e6:
  case -0x26e4:
  case -0x26e2:
  case -0x26e1:
  case -0x26df:
  case -0x26dd:
  case -0x26db:
  case -0x26da:
switchD_01486d4c_caseD_ffffd919:
    uVar2 = GetCurrentStackPosition();
    if (iVar1 == -0x26db) {
      if (*(ulong *)(this + 0x108) <= uVar2) {
        SwitchStatement(this);
        return;
      }
    }
    else if (*(ulong *)(this + 0x108) <= uVar2) {
      ExpressionStatement(this);
      return;
    }
    break;
  case -0x26e5:
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar2) {
      ContinueStatement(this);
      return;
    }
    break;
  case -0x26e3:
    DoStatement(this);
    return;
  case -0x26e0:
    ForStatement(this);
    return;
  case -0x26de:
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar2) {
      IfStatement(this);
      return;
    }
    break;
  case -0x26dc:
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar2) {
      ReturnStatement(this);
      return;
    }
    break;
  case -0x26d9:
    WhileStatement(this);
    return;
  default:
    if (iVar1 == 0x3b) {
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar2) {
        if (*(int *)(this + 0x10) == 0x3b) {
          AsmJsScanner::Next((AsmJsScanner *)(this + 8));
          return;
        }
        uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar3 = "Unexpected token";
        goto LAB_01486ea4;
      }
    }
    else {
      if (iVar1 != 0x7b) goto switchD_01486d4c_caseD_ffffd919;
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar2) {
        Block(this);
        return;
      }
    }
  }
  uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar3 = "Stack overflow while parsing asm.js module.";
LAB_01486ea4:
  *(char **)(this + 0x1e8) = pcVar3;
  *(undefined4 *)(this + 0x1f0) = uVar4;
  return;
}

