
/* v8::internal::ParserBase<v8::internal::Parser>::DoParseMemberExpressionContinuation(v8::internal::Expression*)
    */

FunctionLiteral * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::DoParseMemberExpressionContinuation
          (ParserBase<v8::internal::Parser> *this,Expression *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ParserBase<v8::internal::Parser> PVar3;
  uint uVar4;
  Scanner *this_00;
  Expression *pEVar5;
  ulong uVar6;
  undefined8 uVar7;
  FunctionLiteral *pFVar8;
  int *piVar9;
  Zone *pZVar10;
  int iVar11;
  
  this_00 = *(Scanner **)(this + 0xf8);
  piVar9 = *(int **)(this_00 + 8);
  bVar2 = *(byte *)(piVar9 + 0xe);
  do {
    if (bVar2 == 2) {
      Scanner::Next(this_00);
      uVar1 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
      uVar7 = ParsePropertyOrPrivatePropertyName(this);
      pZVar10 = *(Zone **)(this + 0x68);
      pFVar8 = *(FunctionLiteral **)(pZVar10 + 0x10);
      if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pFVar8) < 0x18) {
        pFVar8 = (FunctionLiteral *)Zone::NewExpand(pZVar10,0x18);
      }
      else {
        *(FunctionLiteral **)(pZVar10 + 0x10) = pFVar8 + 0x18;
      }
      *(Expression **)(pFVar8 + 8) = param_1;
      *(undefined8 *)(pFVar8 + 0x10) = uVar7;
      *(undefined4 *)pFVar8 = uVar1;
      *(undefined4 *)(pFVar8 + 4) = 0x2c;
    }
    else if (bVar2 == 3) {
      Scanner::Next(this_00);
      PVar3 = this[0x130];
      uVar1 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      pEVar5 = (Expression *)ParseExpressionCoverGrammar(this);
      pZVar10 = *(Zone **)(this + 0x68);
      pFVar8 = *(FunctionLiteral **)(pZVar10 + 0x10);
      if ((ulong)(*(long *)(pZVar10 + 0x18) - (long)pFVar8) < 0x18) {
        pFVar8 = (FunctionLiteral *)Zone::NewExpand(pZVar10,0x18);
      }
      else {
        *(FunctionLiteral **)(pZVar10 + 0x10) = pFVar8 + 0x18;
      }
      *(Expression **)(pFVar8 + 8) = param_1;
      *(Expression **)(pFVar8 + 0x10) = pEVar5;
      *(undefined4 *)pFVar8 = uVar1;
      *(undefined4 *)(pFVar8 + 4) = 0x2c;
      uVar6 = Expression::IsPropertyName(pEVar5);
      if ((uVar6 & 1) == 0) {
        pEVar5 = (Expression *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xa0);
      }
      else {
        if ((*(uint *)(pEVar5 + 4) & 0x3f) != 0x29) {
          pEVar5 = (Expression *)0x0;
        }
        pEVar5 = pEVar5 + 8;
      }
      FuncNameInferrer::PushLiteralName((FuncNameInferrer *)(this + 0x20),*(AstRawString **)pEVar5);
      uVar4 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar4 & 0xff) != 7) {
        ReportUnexpectedToken(this,uVar4);
      }
      this[0x130] = PVar3;
    }
    else {
      if ((char)(*(int **)this_00)[0xe] == '\\') {
        iVar11 = **(int **)this_00;
      }
      else {
        iVar11 = *piVar9;
        if ((*(uint *)(param_1 + 4) & 0x3f) == 0x26) {
          FunctionLiteral::SetShouldEagerCompile((FunctionLiteral *)param_1);
        }
      }
      pFVar8 = (FunctionLiteral *)ParseTemplateLiteral(this,param_1,iVar11,true);
    }
    this_00 = *(Scanner **)(this + 0xf8);
    piVar9 = *(int **)(this_00 + 8);
    bVar2 = *(byte *)(piVar9 + 0xe);
    param_1 = (Expression *)pFVar8;
  } while (bVar2 < 4);
  return pFVar8;
}

