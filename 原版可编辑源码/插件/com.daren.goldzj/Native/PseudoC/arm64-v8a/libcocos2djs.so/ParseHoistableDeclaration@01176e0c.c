
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseHoistableDeclaration(int,
   v8::base::Flags<v8::internal::ParseFunctionFlag, int>,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*, bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseHoistableDeclaration
          (ParserBase<v8::internal::PreParser> *this,undefined4 param_1,uint param_3,
          undefined8 param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  byte bVar6;
  ulong uVar7;
  Zone *this_00;
  DeclarationScope *this_01;
  SloppyBlockFunctionStatement *pSVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined1 auStack_24 [4];
  
  uVar15 = (ulong)param_5;
  uVar7 = GetCurrentStackPosition();
  if (uVar7 < *(ulong *)(this + 0x78)) {
    lVar11 = *(long *)(this + 200);
    lVar13 = *(long *)(lVar11 + 0x18);
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      *(undefined1 *)(lVar11 + 0x60) = 0x6d;
      *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar11 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0x80) = 0x101;
  }
  if (((param_3 >> 1 & 1) != 0) &&
     (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == '(')) {
    Scanner::Next(*(Scanner **)(this + 200));
    param_3 = param_3 | 1;
  }
  puVar12 = *(undefined8 **)(this + 200);
  cVar3 = *(char *)(puVar12[1] + 0x38);
  if (cVar3 == '\x05') {
    if ((param_5 & 1) == 0) {
      ReportMessage(this,0x113);
      return 0;
    }
    uVar9 = 1;
    lVar11 = 1;
    goto LAB_01176fec;
  }
  lVar11 = Scope::AsDeclarationScope();
  cVar4 = *(char *)(lVar11 + 0x85);
  bVar6 = Scanner::Next(*(Scanner **)(this + 200));
  if ((bVar6 & 0xfc) == 0x5c) {
LAB_01176ef4:
    uVar15 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
    puVar12 = *(undefined8 **)(this + 200);
    piVar14 = (int *)*puVar12;
    cVar4 = (char)piVar14[0xe];
    if (cVar4 == 'l') {
      uVar9 = 8;
    }
    else if (cVar4 == '`') {
      uVar9 = 5;
    }
    else if (cVar4 == '_') {
      uVar9 = 6;
    }
    else {
      lVar11 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if (*(ulong *)(lVar11 + 0xb0) == uVar15) {
        uVar9 = 4;
      }
      else if (*(ulong *)(lVar11 + 0x158) == uVar15) {
        uVar9 = 7;
      }
      else {
        iVar2 = (piVar14[1] - *piVar14) + -2;
        if (cVar4 != 'Z') {
          iVar2 = piVar14[1] - *piVar14;
        }
        if (piVar14[6] >> ((*(byte *)(piVar14 + 7) ^ 1) & 0x1f) == iVar2) {
          if (*(ulong *)(lVar11 + 0x118) == uVar15) {
            uVar9 = 2;
          }
          else {
            uVar9 = 3;
            if (*(ulong *)(lVar11 + 0x70) != uVar15) {
              uVar9 = 1;
            }
          }
        }
        else {
          uVar9 = 1;
        }
      }
    }
  }
  else {
    if (bVar6 == 0x61) {
      if (3 < (byte)(cVar4 - 0xdU)) {
LAB_01177174:
        if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_01176ef4;
      }
    }
    else if (bVar6 == 0x60) {
      if ((4 < (byte)(cVar4 - 10U)) && (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0))
      goto LAB_01176ef4;
    }
    else if ((byte)(bVar6 + 0x9f) < 5) goto LAB_01177174;
    ReportUnexpectedToken(this);
    uVar9 = 1;
    uVar15 = *(ulong *)(*(long *)(*(long *)(this + 0x28) + 0x38) + 0x110);
    puVar12 = *(undefined8 **)(this + 200);
  }
  lVar11 = (ulong)(4 < (byte)(cVar3 + 0x9fU)) << 1;
LAB_01176fec:
  PreParser::ParseFunctionLiteral
            ((PreParser *)this,uVar15,uVar9,*(undefined8 *)*puVar12,lVar11,
             *(undefined1 *)
              ((long)&FunctionKindForImpl(bool,v8::base::Flags<v8::internal::ParseFunctionFlag,int>)
                      ::kFunctionKinds + ((ulong)(param_3 >> 1) & 1) + ((ulong)param_3 & 1) * 2),
             param_1,2,*(byte *)(*(long *)this + 0x81) & 1);
  lVar11 = *(long *)this;
  uVar5 = *(ushort *)(lVar11 + 0x81);
  if ((uVar5 >> 8 & 1) == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = (ulong)(*(char *)(lVar11 + 0x80) != '\x03') << 1;
  }
  uVar10 = 3;
  if (param_3 != 0 || (uVar5 & 0x101) != 0) {
    uVar10 = 0;
  }
  uVar1 = *(undefined4 *)(**(long **)(this + 200) + 4);
  uVar9 = PreParser::DeclareVariableName
                    ((PreParser *)this,uVar15,lVar13,lVar11,auStack_24,param_1,uVar10);
  if (param_3 == 0 && (uVar5 & 0x101) == 0) {
    this_00 = *(Zone **)(this + 0x30);
    pSVar8 = *(SloppyBlockFunctionStatement **)(this_00 + 0x10);
    iVar2 = *(int *)(*(long *)(this + 0x10) + 0x18);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pSVar8) < 0x20) {
      pSVar8 = (SloppyBlockFunctionStatement *)Zone::NewExpand(this_00,0x20);
    }
    else {
      *(SloppyBlockFunctionStatement **)(this_00 + 0x10) = pSVar8 + 0x20;
    }
    uVar10 = 1099;
    if (iVar2 < 1) {
      uVar10 = 0x40b;
    }
    *(undefined8 *)(pSVar8 + 0x10) = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(pSVar8 + 0x18) = 0;
    *(undefined8 *)(pSVar8 + 8) = uVar9;
    *(undefined4 *)pSVar8 = uVar1;
    *(undefined4 *)(pSVar8 + 4) = uVar10;
    this_01 = (DeclarationScope *)Scope::GetDeclarationScope(*(Scope **)this);
    DeclarationScope::DeclareSloppyBlockFunction(this_01,pSVar8);
  }
  return 2;
}

