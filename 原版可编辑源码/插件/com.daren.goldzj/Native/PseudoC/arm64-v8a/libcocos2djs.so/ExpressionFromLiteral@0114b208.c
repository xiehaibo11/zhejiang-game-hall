
/* v8::internal::Parser::ExpressionFromLiteral(v8::internal::Token::Value, int) */

int * __thiscall
v8::internal::Parser::ExpressionFromLiteral(Parser *this,undefined1 param_2,int param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  Zone *pZVar4;
  double dVar5;
  
  switch(param_2) {
  case 0x54:
    pZVar4 = *(Zone **)(this + 0x68);
    piVar2 = *(int **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)piVar2) < 0x10) {
      piVar2 = (int *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(int **)(pZVar4 + 0x10) = piVar2 + 4;
    }
    iVar3 = 0x3a9;
    break;
  case 0x55:
    pZVar4 = *(Zone **)(this + 0x68);
    piVar2 = *(int **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)piVar2) < 0x10) {
      piVar2 = (int *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(int **)(pZVar4 + 0x10) = piVar2 + 4;
    }
    *(undefined1 *)(piVar2 + 2) = 1;
    *piVar2 = param_3;
    piVar2[1] = 0x2a9;
    return piVar2;
  case 0x56:
    pZVar4 = *(Zone **)(this + 0x68);
    piVar2 = *(int **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)piVar2) < 0x10) {
      piVar2 = (int *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(int **)(pZVar4 + 0x10) = piVar2 + 4;
    }
    *(undefined1 *)(piVar2 + 2) = 0;
    iVar3 = 0x2a9;
    break;
  case 0x57:
    dVar5 = (double)Scanner::DoubleValue(*(Scanner **)(this + 0xf8));
    piVar2 = (int *)AstNodeFactory::NewNumberLiteral((AstNodeFactory *)(this + 0x68),dVar5,param_3);
    return piVar2;
  case 0x58:
    pZVar4 = *(Zone **)(this + 0x68);
    piVar2 = *(int **)(pZVar4 + 0x10);
    iVar3 = *(int *)(**(long **)(this + 0xf8) + 0x48);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)piVar2) < 0x10) {
      piVar2 = (int *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(int **)(pZVar4 + 0x10) = piVar2 + 4;
    }
    piVar2[2] = iVar3;
    iVar3 = 0x29;
    break;
  case 0x59:
    uVar1 = Scanner::CurrentLiteralAsCString(*(Scanner **)(this + 0xf8),*(Zone **)(this + 0xb8));
    pZVar4 = *(Zone **)(this + 0x68);
    piVar2 = *(int **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)piVar2) < 0x10) {
      piVar2 = (int *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(int **)(pZVar4 + 0x10) = piVar2 + 4;
    }
    *(undefined8 *)(piVar2 + 2) = uVar1;
    iVar3 = 0x129;
    break;
  case 0x5a:
    uVar1 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
    pZVar4 = *(Zone **)(this + 0x68);
    piVar2 = *(int **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)piVar2) < 0x10) {
      piVar2 = (int *)Zone::NewExpand(pZVar4,0x10);
    }
    else {
      *(int **)(pZVar4 + 0x10) = piVar2 + 4;
    }
    *(undefined8 *)(piVar2 + 2) = uVar1;
    iVar3 = 0x1a9;
    break;
  default:
    return *(int **)(this + 0x88);
  }
  *piVar2 = param_3;
  piVar2[1] = iVar3;
  return piVar2;
}

