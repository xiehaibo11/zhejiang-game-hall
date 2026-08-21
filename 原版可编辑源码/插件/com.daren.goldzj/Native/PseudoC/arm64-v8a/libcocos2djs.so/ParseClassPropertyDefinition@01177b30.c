
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseClassPropertyDefinition(v8::internal::ParserBase<v8::internal::PreParser>::ClassInfo*,
   v8::internal::ParserBase<v8::internal::PreParser>::ParsePropertyInfo*, bool) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseClassPropertyDefinition
          (ParserBase<v8::internal::PreParser> *this,ClassInfo *param_1,ParsePropertyInfo *param_2,
          bool param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  ClassInfo CVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  int *piVar12;
  undefined1 *puVar13;
  long lVar14;
  ParsePropertyInfo PVar15;
  
  piVar12 = *(int **)(*(Scanner **)(this + 200) + 8);
  iVar2 = *piVar12;
  if ((char)piVar12[0xe] == 'c') {
    Scanner::Next(*(Scanner **)(this + 200));
    piVar12 = *(int **)(*(Scanner **)(this + 200) + 8);
    bVar4 = *(byte *)(piVar12 + 0xe);
    iVar3 = *piVar12;
    if ((bVar4 - 0xc < 2) || (bVar4 == 0x11)) {
      lVar7 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
      piVar12 = (int *)**(undefined8 **)(this + 200);
      cVar5 = (char)piVar12[0xe];
      if (cVar5 == 'l') {
        PVar15 = (ParsePropertyInfo)0x8;
      }
      else if (cVar5 == '`') {
        PVar15 = (ParsePropertyInfo)0x5;
      }
      else if (cVar5 == '_') {
        PVar15 = (ParsePropertyInfo)0x6;
      }
      else {
        lVar14 = *(long *)(*(long *)(this + 0x28) + 0x38);
        if (*(long *)(lVar14 + 0xb0) == lVar7) {
          PVar15 = (ParsePropertyInfo)0x4;
        }
        else if (*(long *)(lVar14 + 0x158) == lVar7) {
          PVar15 = (ParsePropertyInfo)0x7;
        }
        else {
          iVar1 = (piVar12[1] - *piVar12) + -2;
          if (cVar5 != 'Z') {
            iVar1 = piVar12[1] - *piVar12;
          }
          if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) == iVar1) {
            if (*(long *)(lVar14 + 0x118) == lVar7) {
              PVar15 = (ParsePropertyInfo)0x2;
            }
            else {
              PVar15 = (ParsePropertyInfo)0x3;
              if (*(long *)(lVar14 + 0x70) != lVar7) {
                PVar15 = (ParsePropertyInfo)0x1;
              }
            }
          }
          else {
            PVar15 = (ParsePropertyInfo)0x1;
          }
        }
      }
      *(long *)(param_2 + 8) = lVar7;
      param_2[0x10] = PVar15;
      CVar6 = param_1[0xd];
    }
    else if (bVar4 == 5) {
      PVar15 = (ParsePropertyInfo)0x5;
      param_2[0x20] = (ParsePropertyInfo)0x5;
      lVar7 = Scanner::CurrentSymbol(*(Scanner **)(this + 200),*(AstValueFactory **)(this + 0x28));
      piVar12 = (int *)**(undefined8 **)(this + 200);
      cVar5 = (char)piVar12[0xe];
      if (cVar5 == 'l') {
        PVar15 = (ParsePropertyInfo)0x8;
      }
      else if (cVar5 != '`') {
        if (cVar5 == '_') {
          PVar15 = (ParsePropertyInfo)0x6;
        }
        else {
          lVar14 = *(long *)(*(long *)(this + 0x28) + 0x38);
          if (*(long *)(lVar14 + 0xb0) == lVar7) {
            PVar15 = (ParsePropertyInfo)0x4;
          }
          else if (*(long *)(lVar14 + 0x158) == lVar7) {
            PVar15 = (ParsePropertyInfo)0x7;
          }
          else {
            iVar1 = (piVar12[1] - *piVar12) + -2;
            if (cVar5 != 'Z') {
              iVar1 = piVar12[1] - *piVar12;
            }
            if (piVar12[6] >> ((*(byte *)(piVar12 + 7) ^ 1) & 0x1f) == iVar1) {
              if (*(long *)(lVar14 + 0x118) == lVar7) {
                PVar15 = (ParsePropertyInfo)0x2;
              }
              else {
                PVar15 = (ParsePropertyInfo)0x3;
                if (*(long *)(lVar14 + 0x70) != lVar7) {
                  PVar15 = (ParsePropertyInfo)0x1;
                }
              }
            }
            else {
              PVar15 = (ParsePropertyInfo)0x1;
            }
          }
        }
      }
      *(long *)(param_2 + 8) = lVar7;
      param_2[0x10] = PVar15;
      CVar6 = param_1[0xd];
    }
    else {
      param_2[0x23] = (ParsePropertyInfo)0x1;
      ParseProperty(this,param_2);
      CVar6 = param_1[0xd];
    }
  }
  else {
    ParseProperty(this,param_2);
    CVar6 = param_1[0xd];
    iVar3 = iVar2;
  }
  if (((CVar6 == (ClassInfo)0x0) && (param_2[0x23] != (ParsePropertyInfo)0x0)) &&
     (param_2[0x10] == (ParsePropertyInfo)0x7)) {
    param_1[0xd] = (ClassInfo)0x1;
  }
  PVar15 = param_2[0x20];
  switch(PVar15) {
  case (ParsePropertyInfo)0x0:
  case (ParsePropertyInfo)0x1:
    if (param_2[0x21] == (ParsePropertyInfo)0x0) {
      CheckClassMethodName
                (this,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),PVar15,0,
                 param_2[0x23],param_1 + 0xc);
    }
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar10 = *(undefined8 *)**(undefined8 **)(this + 200);
    bVar4 = *(byte *)(*(long *)this + 0x81);
    uVar11 = 7;
    if (PVar15 != (ParsePropertyInfo)0x0) {
      uVar11 = 8;
    }
    break;
  case (ParsePropertyInfo)0x2:
  case (ParsePropertyInfo)0x3:
  case (ParsePropertyInfo)0x8:
    puVar13 = *(undefined1 **)(this + 0x80);
    *puVar13 = 1;
    puVar13[2] = 1;
    lVar7 = *(long *)(this + 200);
    lVar14 = *(long *)(lVar7 + 0x18);
    if (*(char *)(lVar14 + 0x30) == '\0') {
      *(undefined4 *)(lVar7 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar14 + 0x30) = 1;
      *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
      *(undefined1 *)(lVar7 + 0x60) = 0x6d;
      *(undefined1 *)(lVar7 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar7 + 0x100) = 0x6d;
      return 0;
    }
    return 0;
  case (ParsePropertyInfo)0x4:
  case (ParsePropertyInfo)0x6:
  case (ParsePropertyInfo)0x7:
  case (ParsePropertyInfo)0x9:
    param_2[0x20] = (ParsePropertyInfo)0x6;
    if (param_2[0x21] == (ParsePropertyInfo)0x0) {
      lVar7 = *(long *)(param_2 + 8);
      lVar14 = *(long *)(*(long *)(this + 0x28) + 0x38);
      if ((param_2[0x23] == (ParsePropertyInfo)0x0) || (*(long *)(lVar14 + 0x1a0) != lVar7)) {
        if ((*(long *)(lVar14 + 0xb0) != lVar7) && (*(long *)(lVar14 + 400) != lVar7))
        goto LAB_01177f84;
        uVar8 = 0x25;
      }
      else {
        uVar8 = 0xa2;
      }
      ReportMessage(this,uVar8);
    }
LAB_01177f84:
    ParseMemberInitializer(this,param_1,iVar2,(bool)param_2[0x23]);
    ExpectSemicolon(this);
    return 2;
  case (ParsePropertyInfo)0x5:
    if (param_2[0x21] == (ParsePropertyInfo)0x0) {
      CheckClassMethodName
                (this,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),5,
                 *(undefined4 *)(param_2 + 0x1c),param_2[0x23],param_1 + 0xc);
    }
    uVar11 = *(undefined1 *)
              ((long)&FunctionKindForImpl(bool,v8::base::Flags<v8::internal::ParseFunctionFlag,int>)
                      ::kFunctionKinds +
              ((ulong)*(uint *)(param_2 + 0x1c) & 1) * 2 +
              ((ulong)(*(uint *)(param_2 + 0x1c) >> 1) & 1) + 4);
    if ((param_2[0x23] == (ParsePropertyInfo)0x0) && (param_2[0x10] == (ParsePropertyInfo)0x4)) {
      uVar11 = 6;
      if (!param_3) {
        uVar11 = 3;
      }
      param_1[0xc] = (ClassInfo)0x1;
    }
    uVar8 = *(undefined8 *)(param_2 + 8);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar10 = *(undefined8 *)**(undefined8 **)(this + 200);
    bVar4 = *(byte *)(*(long *)this + 0x81);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  PreParser::ParseFunctionLiteral((PreParser *)this,uVar8,uVar9,uVar10,1,uVar11,iVar3,3,bVar4 & 1);
  return 2;
}

