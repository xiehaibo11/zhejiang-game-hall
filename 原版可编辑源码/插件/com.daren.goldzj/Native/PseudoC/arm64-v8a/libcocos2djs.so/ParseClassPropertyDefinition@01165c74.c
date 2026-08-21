
/* v8::internal::ParserBase<v8::internal::Parser>::ParseClassPropertyDefinition(v8::internal::ParserBase<v8::internal::Parser>::ClassInfo*,
   v8::internal::ParserBase<v8::internal::Parser>::ParsePropertyInfo*, bool) */

LiteralProperty * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseClassPropertyDefinition
          (ParserBase<v8::internal::Parser> *this,ClassInfo *param_1,ParsePropertyInfo *param_2,
          bool param_3)

{
  AstRawString *pAVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ClassInfo CVar7;
  ParsePropertyInfo PVar8;
  ParsePropertyInfo PVar9;
  ParsePropertyInfo PVar10;
  ParsePropertyInfo PVar11;
  bool bVar12;
  Scanner *this_00;
  undefined8 uVar13;
  Zone *pZVar14;
  ulong uVar15;
  undefined4 *puVar16;
  LiteralProperty *pLVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  int *piVar20;
  long lVar21;
  undefined4 uVar22;
  long lVar23;
  AstRawString *pAVar24;
  AstRawString *pAVar25;
  Expression *pEVar26;
  Expression *pEVar27;
  
  piVar20 = *(int **)(*(Scanner **)(this + 0xf8) + 8);
  cVar5 = (char)piVar20[0xe];
  iVar2 = *piVar20;
  if (cVar5 == 'c') {
    Scanner::Next(*(Scanner **)(this + 0xf8));
    this_00 = *(Scanner **)(this + 0xf8);
    bVar6 = *(byte *)(*(int **)(this_00 + 8) + 0xe);
    iVar3 = **(int **)(this_00 + 8);
    if ((1 < bVar6 - 0xc) && (bVar6 != 0x11)) {
      if (bVar6 != 5) {
        param_2[0x1b] = (ParsePropertyInfo)0x1;
        puVar16 = (undefined4 *)ParseProperty(this,param_2);
        CVar7 = param_1[0x31];
        goto joined_r0x01165d84;
      }
      param_2[0x18] = (ParsePropertyInfo)0x5;
      this_00 = *(Scanner **)(this + 0xf8);
    }
    uVar13 = Scanner::CurrentSymbol(this_00,*(AstValueFactory **)(this + 0x60));
    *(undefined8 *)(param_2 + 8) = uVar13;
    pZVar14 = *(Zone **)(this + 0x68);
    puVar16 = *(undefined4 **)(pZVar14 + 0x10);
    uVar22 = *(undefined4 *)**(undefined8 **)(this + 0xf8);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar16) < 0x10) {
      puVar16 = (undefined4 *)Zone::NewExpand(pZVar14,0x10);
    }
    else {
      *(undefined4 **)(pZVar14 + 0x10) = puVar16 + 4;
    }
    *(undefined8 *)(puVar16 + 2) = uVar13;
    *puVar16 = uVar22;
    puVar16[1] = 0x1a9;
    CVar7 = param_1[0x31];
  }
  else {
    puVar16 = (undefined4 *)ParseProperty(this,param_2);
    CVar7 = param_1[0x31];
    iVar3 = iVar2;
  }
joined_r0x01165d84:
  if (((CVar7 == (ClassInfo)0x0) && (param_2[0x1b] != (ParsePropertyInfo)0x0)) &&
     (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x158) == *(long *)(param_2 + 8))) {
    param_1[0x31] = (ClassInfo)0x1;
  }
  PVar8 = param_2[0x18];
  switch(PVar8) {
  case (ParsePropertyInfo)0x0:
  case (ParsePropertyInfo)0x1:
    if (param_2[0x19] == (ParsePropertyInfo)0x0) {
      CheckClassMethodName(this,*(undefined8 *)(param_2 + 8),PVar8,0,param_2[0x1b],param_1 + 0x30);
      pZVar14 = *(Zone **)(this + 0x68);
      uVar22 = *puVar16;
      uVar13 = *(undefined8 *)(param_2 + 8);
      puVar16 = *(undefined4 **)(pZVar14 + 0x10);
      if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar16) < 0x10) {
        puVar16 = (undefined4 *)Zone::NewExpand(pZVar14,0x10);
      }
      else {
        *(undefined4 **)(pZVar14 + 0x10) = puVar16 + 4;
      }
      *(undefined8 *)(puVar16 + 2) = uVar13;
      *puVar16 = uVar22;
      puVar16[1] = 0x1a9;
    }
    uVar22 = 7;
    if (PVar8 != (ParsePropertyInfo)0x0) {
      uVar22 = 8;
    }
    uVar19 = 1;
    if (PVar8 != (ParsePropertyInfo)0x0) {
      uVar19 = 2;
    }
    uVar13 = Parser::ParseFunctionLiteral
                       ((Parser *)0x1,this,*(undefined8 *)(param_2 + 8),
                        *(undefined8 *)**(undefined8 **)(this + 0xf8),1,uVar22,iVar3,3,
                        *(ushort *)(*(long *)this + 0x81) & 1,0);
    pZVar14 = *(Zone **)(this + 0x68);
    PVar10 = param_2[0x1b];
    PVar11 = param_2[0x19];
    PVar9 = param_2[0x1a];
    pLVar17 = *(LiteralProperty **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)pLVar17) < 0x20) {
      pLVar17 = (LiteralProperty *)Zone::NewExpand(pZVar14,0x20);
    }
    else {
      *(LiteralProperty **)(pZVar14 + 0x10) = pLVar17 + 0x20;
    }
    ClassLiteralProperty::ClassLiteralProperty
              ((ClassLiteralProperty *)pLVar17,puVar16,uVar13,uVar19,
               PVar10 != (ParsePropertyInfo)0x0,PVar11 != (ParsePropertyInfo)0x0,
               PVar9 != (ParsePropertyInfo)0x0);
    if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0') {
      return pLVar17;
    }
    lVar21 = 0x138;
    if (PVar8 != (ParsePropertyInfo)0x0) {
      lVar21 = 0x1b8;
    }
    pAVar24 = *(AstRawString **)(param_2 + 8);
    pAVar25 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + lVar21);
    uVar15 = LiteralProperty::NeedsSetFunctionName(pLVar17);
    bVar12 = (uVar15 & 1) == 0;
    pAVar1 = (AstRawString *)0x0;
    if (bVar12) {
      pAVar1 = pAVar25;
    }
    pAVar25 = (AstRawString *)0x0;
    if (bVar12) {
      pAVar25 = pAVar24;
    }
    Parser::SetFunctionName((Parser *)this,*(Expression **)(pLVar17 + 8),pAVar25,pAVar1);
    return pLVar17;
  case (ParsePropertyInfo)0x2:
  case (ParsePropertyInfo)0x3:
  case (ParsePropertyInfo)0x8:
    Parser::ReportUnexpectedTokenAt((Parser *)this,CONCAT44(*puVar16,iVar3),cVar5,0x140);
    return (LiteralProperty *)0x0;
  case (ParsePropertyInfo)0x4:
  case (ParsePropertyInfo)0x6:
  case (ParsePropertyInfo)0x7:
  case (ParsePropertyInfo)0x9:
    break;
  case (ParsePropertyInfo)0x5:
    if (param_2[0x19] != (ParsePropertyInfo)0x0) goto LAB_011660d8;
    lVar23 = *(long *)(*(long *)(this + 0x60) + 0x38);
    lVar21 = *(long *)(param_2 + 8);
    if (*(long *)(lVar23 + 400) == lVar21) {
      uVar22 = 0xe6;
LAB_011660d0:
      ReportMessage(this,uVar22);
    }
    else if (param_2[0x1b] == (ParsePropertyInfo)0x0) {
      if (*(long *)(lVar23 + 0xb0) == lVar21) {
        uVar4 = *(uint *)(param_2 + 0x14);
        if (uVar4 == 0) {
          if (param_1[0x30] == (ClassInfo)0x0) {
            param_1[0x30] = (ClassInfo)0x1;
            goto LAB_011660d8;
          }
          uVar22 = 0xe8;
        }
        else {
          uVar22 = 0xe3;
          if ((uVar4 & 2) != 0) {
            uVar22 = 0xe5;
          }
          if ((uVar4 & 1) != 0) {
            uVar22 = 0xe4;
          }
        }
        goto LAB_011660d0;
      }
    }
    else if (*(long *)(lVar23 + 0x1a0) == lVar21) {
      uVar22 = 0xa2;
      goto LAB_011660d0;
    }
LAB_011660d8:
    uVar18 = (&UNK_019db493)
             [((ulong)*(uint *)(param_2 + 0x14) & 1) * 2 +
              ((ulong)(*(uint *)(param_2 + 0x14) >> 1) & 1)];
    if ((param_2[0x1b] == (ParsePropertyInfo)0x0) &&
       (*(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0xb0) == *(long *)(param_2 + 8))) {
      uVar18 = 6;
      if (!param_3) {
        uVar18 = 3;
      }
      param_1[0x30] = (ClassInfo)0x1;
    }
    uVar13 = Parser::ParseFunctionLiteral
                       ((Parser *)this,*(undefined8 *)(param_2 + 8),
                        *(undefined8 *)**(undefined8 **)(this + 0xf8),1,uVar18,iVar3,3,
                        *(ushort *)(*(long *)this + 0x81) & 1,0);
    pZVar14 = *(Zone **)(this + 0x68);
    PVar8 = param_2[0x1b];
    PVar10 = param_2[0x19];
    PVar11 = param_2[0x1a];
    pLVar17 = *(LiteralProperty **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)pLVar17) < 0x20) {
      pLVar17 = (LiteralProperty *)Zone::NewExpand(pZVar14,0x20);
    }
    else {
      *(LiteralProperty **)(pZVar14 + 0x10) = pLVar17 + 0x20;
    }
    ClassLiteralProperty::ClassLiteralProperty
              ((ClassLiteralProperty *)pLVar17,puVar16,uVar13,0,PVar8 != (ParsePropertyInfo)0x0,
               PVar10 != (ParsePropertyInfo)0x0,PVar11 != (ParsePropertyInfo)0x0);
    if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0') {
      return pLVar17;
    }
    pAVar24 = *(AstRawString **)(param_2 + 8);
    uVar15 = LiteralProperty::NeedsSetFunctionName(pLVar17);
    pEVar26 = *(Expression **)(pLVar17 + 8);
    pAVar1 = (AstRawString *)0x0;
    if ((uVar15 & 1) == 0) {
      pAVar1 = pAVar24;
    }
    uVar15 = Expression::IsAnonymousFunctionDefinition(pEVar26);
    if ((((uVar15 & 1) == 0) &&
        (uVar15 = Expression::IsConciseMethodDefinition(pEVar26), (uVar15 & 1) == 0)) &&
       (uVar15 = Expression::IsAccessorFunctionDefinition(pEVar26), (uVar15 & 1) == 0)) {
      return pLVar17;
    }
    pEVar27 = pEVar26;
    if ((*(uint *)(pEVar26 + 4) & 0x3f) != 0x26) {
      pEVar27 = (Expression *)0x0;
    }
    if ((*(uint *)(pEVar26 + 4) & 0x3f) == 0x1f) {
      pEVar27 = *(Expression **)(pEVar26 + 0x20);
    }
    goto joined_r0x01166224;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  param_2[0x18] = (ParsePropertyInfo)0x6;
  if (param_2[0x19] == (ParsePropertyInfo)0x0) {
    lVar21 = *(long *)(param_2 + 8);
    lVar23 = *(long *)(*(long *)(this + 0x60) + 0x38);
    if ((param_2[0x1b] == (ParsePropertyInfo)0x0) || (*(long *)(lVar23 + 0x1a0) != lVar21)) {
      if ((*(long *)(lVar23 + 0xb0) != lVar21) && (*(long *)(lVar23 + 400) != lVar21))
      goto LAB_01165fd4;
      uVar13 = 0x25;
    }
    else {
      uVar13 = 0xa2;
    }
    ReportMessage(this,uVar13);
  }
LAB_01165fd4:
  uVar13 = ParseMemberInitializer(this,param_1,iVar2,(bool)param_2[0x1b]);
  ExpectSemicolon(this);
  pZVar14 = *(Zone **)(this + 0x68);
  PVar8 = param_2[0x1b];
  PVar10 = param_2[0x19];
  PVar11 = param_2[0x1a];
  pLVar17 = *(LiteralProperty **)(pZVar14 + 0x10);
  if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)pLVar17) < 0x20) {
    pLVar17 = (LiteralProperty *)Zone::NewExpand(pZVar14,0x20);
  }
  else {
    *(LiteralProperty **)(pZVar14 + 0x10) = pLVar17 + 0x20;
  }
  ClassLiteralProperty::ClassLiteralProperty
            ((ClassLiteralProperty *)pLVar17,puVar16,uVar13,3,PVar8 != (ParsePropertyInfo)0x0,
             PVar10 != (ParsePropertyInfo)0x0,PVar11 != (ParsePropertyInfo)0x0);
  if (*(char *)(*(long *)(*(long *)(this + 0xf8) + 0x18) + 0x30) != '\0') {
    return pLVar17;
  }
  pAVar24 = *(AstRawString **)(param_2 + 8);
  uVar15 = LiteralProperty::NeedsSetFunctionName(pLVar17);
  pEVar26 = *(Expression **)(pLVar17 + 8);
  pAVar1 = (AstRawString *)0x0;
  if ((uVar15 & 1) == 0) {
    pAVar1 = pAVar24;
  }
  uVar15 = Expression::IsAnonymousFunctionDefinition(pEVar26);
  if ((((uVar15 & 1) == 0) &&
      (uVar15 = Expression::IsConciseMethodDefinition(pEVar26), (uVar15 & 1) == 0)) &&
     (uVar15 = Expression::IsAccessorFunctionDefinition(pEVar26), (uVar15 & 1) == 0)) {
    return pLVar17;
  }
  pEVar27 = pEVar26;
  if ((*(uint *)(pEVar26 + 4) & 0x3f) != 0x26) {
    pEVar27 = (Expression *)0x0;
  }
  if ((*(uint *)(pEVar26 + 4) & 0x3f) == 0x1f) {
    pEVar27 = *(Expression **)(pEVar26 + 0x20);
  }
joined_r0x01166224:
  if (pEVar27 != (Expression *)0x0) {
    if (pAVar1 == (AstRawString *)0x0) {
      *(undefined8 *)(pEVar27 + 0x20) = 0;
    }
    else {
      uVar13 = AstValueFactory::NewConsString(*(AstValueFactory **)(this + 0x60),pAVar1);
      *(undefined8 *)(pEVar27 + 0x20) = uVar13;
    }
  }
  return pLVar17;
}

