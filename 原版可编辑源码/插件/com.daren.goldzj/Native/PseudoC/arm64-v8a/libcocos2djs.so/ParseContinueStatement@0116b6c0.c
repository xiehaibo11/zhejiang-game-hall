
/* v8::internal::ParserBase<v8::internal::Parser>::ParseContinueStatement() */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseContinueStatement
          (ParserBase<v8::internal::Parser> *this)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  Zone *pZVar5;
  JumpStatement *pJVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  BreakableStatement *this_00;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_01;
  long lVar11;
  JumpStatementSourceRanges *local_48;
  JumpStatement *local_28;
  
  uVar7 = **(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  lVar10 = 0;
  if ((*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x4c) == '\0') &&
     (2 < (byte)(*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) - 0xcU))) {
    lVar10 = Scope::AsDeclarationScope();
    cVar2 = *(char *)(lVar10 + 0x85);
    bVar3 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((bVar3 & 0xfc) != 0x5c) {
      if (bVar3 == 0x61) {
        if (3 < (byte)(cVar2 - 0xdU)) {
LAB_0116b988:
          if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_0116b738;
        }
      }
      else if (bVar3 == 0x60) {
        if ((4 < (byte)(cVar2 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
        goto LAB_0116b738;
      }
      else if ((byte)(bVar3 + 0x9f) < 5) goto LAB_0116b988;
      ReportUnexpectedToken(this);
      lVar10 = *(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
      lVar11 = *(long *)(this + 0x300);
      goto joined_r0x0116b74c;
    }
LAB_0116b738:
    lVar10 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60));
  }
  lVar11 = *(long *)(this + 0x300);
joined_r0x0116b74c:
  if (lVar11 != 0) {
    do {
      lVar4 = AstNode::AsIterationStatement(*(AstNode **)(lVar11 + 8));
      if ((lVar10 == 0) || (lVar4 == 0)) {
        if (lVar4 != 0) {
LAB_0116b7e8:
          ExpectSemicolon(this);
          pZVar5 = *(Zone **)(this + 0x68);
          pJVar6 = *(JumpStatement **)(pZVar5 + 0x10);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pJVar6) < 0x10) {
            pJVar6 = (JumpStatement *)Zone::NewExpand(pZVar5,0x10);
          }
          else {
            *(JumpStatement **)(pZVar5 + 0x10) = pJVar6 + 0x10;
          }
          *(undefined4 *)pJVar6 = uVar7;
          *(undefined4 *)(pJVar6 + 4) = 0xd;
          *(long *)(pJVar6 + 8) = lVar4;
          this_01 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                      **)(this + 0x2f8);
          if (this_01 ==
              (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
               *)0x0) {
            return (undefined4 *)pJVar6;
          }
          pZVar5 = *(Zone **)(this + 0xb8);
          local_48 = *(JumpStatementSourceRanges **)(pZVar5 + 0x10);
          uVar7 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
          if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)local_48) < 0x10) {
            local_48 = (JumpStatementSourceRanges *)Zone::NewExpand(pZVar5,0x10);
          }
          else {
            *(JumpStatementSourceRanges **)(pZVar5 + 0x10) = local_48 + 0x10;
          }
          *(undefined4 *)(local_48 + 8) = uVar7;
          *(undefined ***)local_48 = &PTR__AstNodeSourceRanges_01cb52f0;
          local_28 = pJVar6;
          std::__ndk1::
          __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
          ::
          __emplace_unique_impl<v8::internal::JumpStatement*&,v8::internal::JumpStatementSourceRanges*&>
                    (this_01,&local_28,&local_48);
          return (undefined4 *)pJVar6;
        }
      }
      else {
        plVar8 = *(long **)(lVar4 + 0x10);
        if (plVar8 != (long *)0x0) {
          lVar9 = (long)*(int *)((long)plVar8 + 0xc);
          while (0 < lVar9) {
            lVar1 = lVar9 * 8;
            lVar9 = lVar9 + -1;
            if (*(long *)(*plVar8 + lVar1 + -8) == lVar10) goto LAB_0116b7e8;
          }
        }
        plVar8 = *(long **)(lVar4 + 8);
        if (plVar8 != (long *)0x0) {
          lVar4 = (long)*(int *)((long)plVar8 + 0xc);
          while (0 < lVar4) {
            lVar9 = lVar4 * 8;
            lVar4 = lVar4 + -1;
            if (*(long *)(*plVar8 + lVar9 + -8) == lVar10) goto LAB_0116b7d4;
          }
        }
      }
      lVar11 = *(long *)(lVar11 + 0x10);
    } while (lVar11 != 0);
LAB_0116b7d4:
    for (lVar11 = *(long *)(this + 0x300); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      this_00 = *(BreakableStatement **)(lVar11 + 8);
      if (lVar10 == 0) {
        if (((byte)this_00[4] >> 6 & 1) == 0) goto LAB_0116b8d8;
      }
      else {
        plVar8 = (long *)BreakableStatement::labels(this_00);
        if (plVar8 != (long *)0x0) {
          lVar4 = (long)*(int *)((long)plVar8 + 0xc);
          while (0 < lVar4) {
            lVar9 = lVar4 * 8;
            lVar4 = lVar4 + -1;
            if (*(long *)(*plVar8 + lVar9 + -8) == lVar10) goto joined_r0x0116b8c0;
          }
        }
      }
    }
  }
  this_00 = (BreakableStatement *)0x0;
joined_r0x0116b8c0:
  if (lVar10 == 0) {
LAB_0116b8d8:
    uVar7 = 0xf1;
  }
  else {
    uVar7 = 0x147;
    if (this_00 != (BreakableStatement *)0x0) {
      uVar7 = 0xf2;
    }
  }
  ReportMessage<v8::internal::AstRawString_const*>(this,uVar7,lVar10);
  return (undefined4 *)0x0;
}

