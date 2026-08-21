
/* v8::internal::ParserBase<v8::internal::Parser>::ParseBinaryContinuation(v8::internal::Expression*,
   int, int) */

Expression * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseBinaryContinuation
          (ParserBase<v8::internal::Parser> *this,Expression *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  Expression *pEVar6;
  bool bVar7;
  uint uVar8;
  Expression *pEVar9;
  long lVar10;
  Zone *pZVar11;
  Expression *pEVar12;
  BinaryOperationSourceRanges *pBVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 *puVar16;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_00;
  Scanner *this_01;
  undefined8 local_80;
  Expression *local_78;
  BinaryOperationSourceRanges *local_70;
  Expression *pEStack_68;
  
  this_01 = *(Scanner **)(this + 0xf8);
  uVar14 = (ulong)(byte)this[0x130];
  local_78 = param_1;
  do {
    puVar16 = *(undefined4 **)(this_01 + 8);
    cVar5 = Token::precedence_[(ulong)*(byte *)(puVar16 + 0xe) + uVar14 * 0x72];
    while (param_3 == cVar5) {
      uVar2 = *puVar16;
      local_80 = CONCAT44(0xffffffff,uVar2);
      uVar8 = Scanner::Next(this_01);
      bVar4 = *(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38);
      iVar1 = param_3;
      if ((uVar8 & 0xff) != 0x2b) {
        iVar1 = param_3 + 1;
      }
      if (bVar4 - 0x2c < 9) {
        pEVar9 = (Expression *)ParseUnaryOrPrefixExpression(this);
      }
      else {
        lVar10 = Scope::AsDeclarationScope();
        if (*(byte *)(lVar10 + 0x85) - 10 < 5) {
          bVar7 = true;
          if (bVar4 == 0x60) {
LAB_0116076c:
            if (bVar7) {
              pEVar9 = (Expression *)ParseAwaitExpression(this);
              goto LAB_0116077c;
            }
          }
        }
        else if (this[0x135] != (ParserBase<v8::internal::Parser>)0x0) {
          lVar10 = Scope::AsDeclarationScope();
          bVar7 = *(byte *)(lVar10 + 0x85) - 1 < 2;
          if (bVar4 == 0x60) goto LAB_0116076c;
        }
        iVar3 = **(int **)(*(long *)(this + 0xf8) + 8);
        pEVar9 = (Expression *)ParsePrimaryExpression(this);
        lVar10 = *(long *)(*(long *)(this + 0xf8) + 8);
        bVar4 = *(byte *)(lVar10 + 0x38);
        if (bVar4 < 4) {
          pEVar9 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar9);
          lVar10 = *(long *)(*(long *)(this + 0xf8) + 8);
          bVar4 = *(byte *)(lVar10 + 0x38);
        }
        uVar15 = (uint)bVar4;
        if (uVar15 < 6) {
          pEVar9 = (Expression *)ParseLeftHandSideContinuation(this,pEVar9);
          lVar10 = *(long *)(*(long *)(this + 0xf8) + 8);
          uVar15 = (uint)*(byte *)(lVar10 + 0x38);
        }
        if ((uVar15 - 0x33 < 2) && (*(char *)(lVar10 + 0x4c) == '\0')) {
          pEVar9 = (Expression *)ParsePostfixContinuation(this,pEVar9,iVar3);
        }
      }
LAB_0116077c:
      if (iVar1 <= (char)Token::precedence_
                         [(ulong)*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) +
                          (ulong)(byte)this[0x130] * 0x72]) {
        pEVar9 = (Expression *)
                 ParseBinaryContinuation
                           (this,pEVar9,iVar1,
                            (int)(char)Token::precedence_
                                       [(ulong)*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) +
                                                        0x38) + (ulong)(byte)this[0x130] * 0x72]);
      }
      pEVar6 = local_78;
      local_80 = CONCAT44(*(undefined4 *)(*(long *)this_01 + 4),(undefined4)local_80);
      if ((uVar8 - 0x35 & 0xff) < 10) {
        if ((uVar8 & 0xff) == 0x38) {
          uVar15 = 0x36;
        }
        else {
          uVar15 = uVar8;
          if ((uVar8 & 0xff) == 0x37) {
            uVar15 = 0x35;
          }
        }
        pZVar11 = *(Zone **)(this + 0x68);
        pEVar12 = *(Expression **)(pZVar11 + 0x10);
        if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)pEVar12) < 0x18) {
          pEVar12 = (Expression *)Zone::NewExpand(pZVar11,0x18);
        }
        else {
          *(Expression **)(pZVar11 + 0x10) = pEVar12 + 0x18;
        }
        *(Expression **)(pEVar12 + 8) = pEVar6;
        *(Expression **)(pEVar12 + 0x10) = pEVar9;
        *(undefined4 *)pEVar12 = uVar2;
        *(uint *)(pEVar12 + 4) = (uVar15 & 0xff) << 7 | 0x20;
        local_78 = pEVar12;
        if ((uVar15 & 0xff) != (uVar8 & 0xff)) {
          pZVar11 = *(Zone **)(this + 0x68);
          local_78 = *(Expression **)(pZVar11 + 0x10);
          if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)local_78) < 0x10) {
            local_78 = pEVar12;
            local_78 = (Expression *)Zone::NewExpand(pZVar11,0x10);
          }
          else {
            *(Expression **)(pZVar11 + 0x10) = local_78 + 0x10;
          }
          *(Expression **)(local_78 + 8) = pEVar12;
          *(undefined4 *)local_78 = uVar2;
          *(undefined4 *)(local_78 + 4) = 0x1734;
        }
      }
      else {
        uVar14 = Parser::ShortcutNumericLiteralBinaryExpression
                           ((Parser *)this,&local_78,pEVar9,uVar8,uVar2);
        if (((uVar14 & 1) == 0) &&
           (uVar14 = Parser::CollapseNaryExpression
                               ((Parser *)this,&local_78,pEVar9,uVar8,uVar2,&local_80),
           pEVar6 = local_78, (uVar14 & 1) == 0)) {
          pZVar11 = *(Zone **)(this + 0x68);
          pEVar12 = *(Expression **)(pZVar11 + 0x10);
          if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)pEVar12) < 0x18) {
            pEVar12 = (Expression *)Zone::NewExpand(pZVar11,0x18);
          }
          else {
            *(Expression **)(pZVar11 + 0x10) = pEVar12 + 0x18;
          }
          *(Expression **)(pEVar12 + 8) = pEVar6;
          *(Expression **)(pEVar12 + 0x10) = pEVar9;
          *(undefined4 *)pEVar12 = uVar2;
          *(uint *)(pEVar12 + 4) = (uVar8 & 0xff) << 7 | 0x1a;
          local_78 = pEVar12;
          if (((uVar8 & 0xfe) == 0x20) &&
             (this_00 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                          **)(this + 0x2f8),
             this_00 !=
             (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              *)0x0)) {
            pZVar11 = *(Zone **)(this + 0xb8);
            pBVar13 = *(BinaryOperationSourceRanges **)(pZVar11 + 0x10);
            if ((*(uint *)(pEVar12 + 4) & 0x3f) != 0x1a) {
              pEVar12 = (Expression *)0x0;
            }
            if ((ulong)(*(long *)(pZVar11 + 0x18) - (long)pBVar13) < 0x10) {
              pBVar13 = (BinaryOperationSourceRanges *)Zone::NewExpand(pZVar11,0x10);
            }
            else {
              *(BinaryOperationSourceRanges **)(pZVar11 + 0x10) = pBVar13 + 0x10;
            }
            *(undefined ***)pBVar13 = &PTR__AstNodeSourceRanges_01cb51d8;
            *(undefined8 *)(pBVar13 + 8) = local_80;
            local_70 = pBVar13;
            pEStack_68 = pEVar12;
            std::__ndk1::
            __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
            ::
            __emplace_unique_impl<v8::internal::BinaryOperation*&,v8::internal::BinaryOperationSourceRanges*&>
                      (this_00,(BinaryOperation **)&pEStack_68,&local_70);
          }
        }
      }
      this_01 = *(Scanner **)(this + 0xf8);
      uVar14 = (ulong)(byte)this[0x130];
      puVar16 = *(undefined4 **)(this_01 + 8);
      cVar5 = Token::precedence_[(ulong)*(byte *)(puVar16 + 0xe) + uVar14 * 0x72];
    }
    bVar7 = param_3 <= param_2;
    param_3 = param_3 + -1;
    if (bVar7) {
      return local_78;
    }
  } while( true );
}

