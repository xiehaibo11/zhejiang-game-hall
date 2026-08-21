
/* v8::internal::ParserBase<v8::internal::Parser>::ParseHoistableDeclaration(int,
   v8::base::Flags<v8::internal::ParseFunctionFlag, int>,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*, bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseHoistableDeclaration
          (ParserBase<v8::internal::Parser> *this,undefined4 param_1,uint param_3,undefined8 param_4
          ,ulong param_5)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  AstRawString *pAVar10;
  AstRawString *pAVar11;
  int iVar12;
  FuncNameInferrer *local_60;
  long lStack_58;
  
  uVar5 = GetCurrentStackPosition();
  if (uVar5 < *(ulong *)(this + 0xa8)) {
    lVar8 = *(long *)(this + 0xf8);
    lVar9 = *(long *)(lVar8 + 0x18);
    if (*(char *)(lVar9 + 0x30) == '\0') {
      *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar9 + 0x30) = 1;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined1 *)(lVar8 + 0x60) = 0x6d;
      *(undefined1 *)(lVar8 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar8 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
  }
  if (((param_3 >> 1 & 1) != 0) &&
     (*(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38) == '(')) {
    Scanner::Next(*(Scanner **)(this + 0xf8));
    param_3 = param_3 | 1;
  }
  cVar1 = *(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
  if (cVar1 == '\x05') {
    if ((param_5 & 1) == 0) {
      ReportMessage(this,0x113);
      return 0;
    }
    iVar12 = 1;
    pAVar10 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xd0);
    pAVar11 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xb8);
    goto LAB_0116d8ac;
  }
  lVar8 = Scope::AsDeclarationScope();
  cVar2 = *(char *)(lVar8 + 0x85);
  bVar4 = Scanner::Next(*(Scanner **)(this + 0xf8));
  if ((bVar4 & 0xfc) == 0x5c) {
LAB_0116d888:
    pAVar10 = (AstRawString *)
              Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  }
  else {
    if (bVar4 == 0x61) {
      if (3 < (byte)(cVar2 - 0xdU)) {
LAB_0116da20:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_0116d888;
      }
    }
    else if (bVar4 == 0x60) {
      if ((4 < (byte)(cVar2 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
      goto LAB_0116d888;
    }
    else if ((byte)(bVar4 + 0x9f) < 5) goto LAB_0116da20;
    ReportUnexpectedToken(this);
    pAVar10 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
  }
  iVar12 = (uint)(4 < (byte)(cVar1 + 0x9fU)) << 1;
  pAVar11 = pAVar10;
LAB_0116d8ac:
  local_60 = (FuncNameInferrer *)(this + 0x20);
  lStack_58 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  FuncNameInferrer::PushEnclosingName(local_60,pAVar11);
  uVar6 = Parser::ParseFunctionLiteral
                    ((Parser *)this,pAVar11,*(undefined8 *)**(undefined8 **)(this + 0xf8),iVar12,
                     (&FunctionKindForImpl(bool,v8::base::Flags<v8::internal::ParseFunctionFlag,int>)
                       ::kFunctionKinds)[((ulong)(param_3 >> 1) & 1) + ((ulong)param_3 & 1) * 2],
                     param_1,2,*(ushort *)(*(long *)this + 0x81) & 1,0);
  uVar3 = *(ushort *)(*(long *)this + 0x81);
  if ((uVar3 >> 8 & 1) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (ulong)(*(char *)(*(long *)this + 0x80) != '\x03') << 1;
  }
  uVar7 = 3;
  if (param_3 != 0 || (uVar3 & 0x101) != 0) {
    uVar7 = 0;
  }
  uVar6 = Parser::DeclareFunction
                    ((Parser *)this,pAVar10,uVar6,lVar8,uVar7,param_1,
                     *(undefined4 *)(**(long **)(this + 0xf8) + 4),param_4);
  FuncNameInferrer::State::~State((State *)&local_60);
  return uVar6;
}

