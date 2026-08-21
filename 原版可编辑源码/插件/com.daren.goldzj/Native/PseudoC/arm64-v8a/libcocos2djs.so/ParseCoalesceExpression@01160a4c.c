
/* v8::internal::ParserBase<v8::internal::Parser>::ParseCoalesceExpression(v8::internal::Expression*)
    */

Expression * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseCoalesceExpression
          (ParserBase<v8::internal::Parser> *this,Expression *param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  Expression *pEVar5;
  bool bVar6;
  Scanner *this_00;
  Expression *pEVar7;
  long lVar8;
  Expression *pEVar9;
  BinaryOperationSourceRanges *pBVar10;
  undefined4 *puVar11;
  Zone *pZVar12;
  uint uVar13;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_01;
  undefined8 local_78;
  Expression *local_70;
  BinaryOperationSourceRanges *local_68;
  Expression *local_48;
  
  this_00 = *(Scanner **)(this + 0xf8);
  puVar11 = *(undefined4 **)(this_00 + 8);
  if (*(char *)(puVar11 + 0xe) == '\x1f') {
    bVar4 = true;
    local_70 = param_1;
    do {
      local_78 = CONCAT44(0xffffffff,*puVar11);
      Scanner::Next(this_00);
      bVar3 = *(byte *)(*(undefined4 **)(*(long *)(this + 0xf8) + 8) + 0xe);
      uVar1 = **(undefined4 **)(*(long *)(this + 0xf8) + 8);
      if (bVar3 - 0x2c < 9) {
        pEVar7 = (Expression *)ParseUnaryOrPrefixExpression(this);
      }
      else {
        lVar8 = Scope::AsDeclarationScope();
        if (*(byte *)(lVar8 + 0x85) - 10 < 5) {
          bVar6 = true;
          if (bVar3 == 0x60) {
LAB_01160b44:
            if (bVar6) {
              pEVar7 = (Expression *)ParseAwaitExpression(this);
              goto LAB_01160b54;
            }
          }
        }
        else if (this[0x135] != (ParserBase<v8::internal::Parser>)0x0) {
          lVar8 = Scope::AsDeclarationScope();
          bVar6 = *(byte *)(lVar8 + 0x85) - 1 < 2;
          if (bVar3 == 0x60) goto LAB_01160b44;
        }
        iVar2 = **(int **)(*(long *)(this + 0xf8) + 8);
        pEVar7 = (Expression *)ParsePrimaryExpression(this);
        lVar8 = *(long *)(*(long *)(this + 0xf8) + 8);
        bVar3 = *(byte *)(lVar8 + 0x38);
        if (bVar3 < 4) {
          pEVar7 = (Expression *)DoParseMemberExpressionContinuation(this,pEVar7);
          lVar8 = *(long *)(*(long *)(this + 0xf8) + 8);
          bVar3 = *(byte *)(lVar8 + 0x38);
        }
        uVar13 = (uint)bVar3;
        if (uVar13 < 6) {
          pEVar7 = (Expression *)ParseLeftHandSideContinuation(this,pEVar7);
          lVar8 = *(long *)(*(long *)(this + 0xf8) + 8);
          uVar13 = (uint)*(byte *)(lVar8 + 0x38);
        }
        if ((uVar13 - 0x33 < 2) && (*(char *)(lVar8 + 0x4c) == '\0')) {
          pEVar7 = (Expression *)ParsePostfixContinuation(this,pEVar7,iVar2);
        }
      }
LAB_01160b54:
      if ('\x05' < (char)Token::precedence_
                         [(ulong)*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) +
                          (ulong)(byte)this[0x130] * 0x72]) {
        pEVar7 = (Expression *)
                 ParseBinaryContinuation
                           (this,pEVar7,6,
                            (uint)(byte)Token::precedence_
                                        [(ulong)*(byte *)(*(long *)(*(long *)(this + 0xf8) + 8) +
                                                         0x38) + (ulong)(byte)this[0x130] * 0x72]);
      }
      pEVar5 = local_70;
      if (bVar4) {
        pZVar12 = *(Zone **)(this + 0x68);
        pEVar9 = *(Expression **)(pZVar12 + 0x10);
        if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pEVar9) < 0x18) {
          pEVar9 = (Expression *)Zone::NewExpand(pZVar12,0x18);
        }
        else {
          *(Expression **)(pZVar12 + 0x10) = pEVar9 + 0x18;
        }
        *(Expression **)(pEVar9 + 8) = pEVar5;
        *(Expression **)(pEVar9 + 0x10) = pEVar7;
        *(undefined4 *)pEVar9 = uVar1;
        *(undefined4 *)(pEVar9 + 4) = 0xf9a;
        this_01 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                    **)(this + 0x2f8);
        local_70 = pEVar9;
        if (this_01 !=
            (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
             *)0x0) {
          pZVar12 = *(Zone **)(this + 0xb8);
          pBVar10 = *(BinaryOperationSourceRanges **)(pZVar12 + 0x10);
          if ((*(uint *)(pEVar9 + 4) & 0x3f) != 0x1a) {
            pEVar9 = (Expression *)0x0;
          }
          if ((ulong)(*(long *)(pZVar12 + 0x18) - (long)pBVar10) < 0x10) {
            pBVar10 = (BinaryOperationSourceRanges *)Zone::NewExpand(pZVar12,0x10);
          }
          else {
            *(BinaryOperationSourceRanges **)(pZVar12 + 0x10) = pBVar10 + 0x10;
          }
          *(undefined ***)pBVar10 = &PTR__AstNodeSourceRanges_01cb51d8;
          *(undefined8 *)(pBVar10 + 8) = local_78;
          local_68 = pBVar10;
          local_48 = pEVar9;
          std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
          ::
          __emplace_unique_impl<v8::internal::BinaryOperation*&,v8::internal::BinaryOperationSourceRanges*&>
                    (this_01,(BinaryOperation **)&local_48,&local_68);
        }
      }
      else {
        Parser::CollapseNaryExpression((Parser *)this,&local_70,pEVar7,0x1f,uVar1,&local_78);
      }
      this_00 = *(Scanner **)(this + 0xf8);
      bVar4 = false;
      puVar11 = *(undefined4 **)(this_00 + 8);
      param_1 = local_70;
    } while (*(char *)(puVar11 + 0xe) == '\x1f');
  }
  return param_1;
}

