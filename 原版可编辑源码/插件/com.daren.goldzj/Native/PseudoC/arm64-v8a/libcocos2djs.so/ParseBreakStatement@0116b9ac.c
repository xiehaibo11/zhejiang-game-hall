
/* v8::internal::ParserBase<v8::internal::Parser>::ParseBreakStatement(v8::internal::ZoneList<v8::internal::AstRawString
   const*>*) */

undefined4 * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseBreakStatement
          (ParserBase<v8::internal::Parser> *this,ZoneList *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  Zone *pZVar6;
  JumpStatement *pJVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  BreakableStatement *this_00;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_01;
  long lVar11;
  JumpStatementSourceRanges *local_50;
  JumpStatement *pJStack_48;
  
  uVar8 = **(undefined4 **)(*(Scanner **)(this + 0xf8) + 8);
  Scanner::Next(*(Scanner **)(this + 0xf8));
  lVar10 = 0;
  bVar3 = true;
  if ((*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x4c) == '\0') &&
     (2 < (byte)(*(char *)(*(long *)(*(long *)(this + 0xf8) + 8) + 0x38) - 0xcU))) {
    lVar10 = Scope::AsDeclarationScope();
    cVar2 = *(char *)(lVar10 + 0x85);
    bVar4 = Scanner::Next(*(Scanner **)(this + 0xf8));
    if ((bVar4 & 0xfc) == 0x5c) {
LAB_0116ba2c:
      lVar10 = Scanner::CurrentSymbol(*(Scanner **)(this + 0xf8),*(AstValueFactory **)(this + 0x60))
      ;
    }
    else {
      if (bVar4 == 0x61) {
        if (3 < (byte)(cVar2 - 0xdU)) {
LAB_0116baf8:
          if ((*(ushort *)(*(long *)this + 0x81) & 1) == 0) goto LAB_0116ba2c;
        }
      }
      else if (bVar4 == 0x60) {
        if ((4 < (byte)(cVar2 - 10U)) && (this[0xa1] == (ParserBase<v8::internal::Parser>)0x0))
        goto LAB_0116ba2c;
      }
      else if ((byte)(bVar4 + 0x9f) < 5) goto LAB_0116baf8;
      ReportUnexpectedToken(this);
      lVar10 = *(long *)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
    }
    if (lVar10 == 0) {
      bVar3 = true;
      lVar11 = *(long *)(this + 0x300);
      goto joined_r0x0116ba90;
    }
    if (param_1 != (ZoneList *)0x0) {
      lVar11 = (long)*(int *)(param_1 + 0xc);
      while (0 < lVar11) {
        lVar9 = lVar11 * 8;
        lVar11 = lVar11 + -1;
        if (*(long *)(*(long *)param_1 + lVar9 + -8) == lVar10) {
          ExpectSemicolon(this);
          return *(undefined4 **)(this + 0x78);
        }
      }
      bVar3 = false;
      lVar11 = *(long *)(this + 0x300);
      goto joined_r0x0116ba90;
    }
    bVar3 = false;
  }
  lVar11 = *(long *)(this + 0x300);
joined_r0x0116ba90:
  do {
    if (lVar11 == 0) {
LAB_0116bbfc:
      uVar8 = 0xf0;
      if (!bVar3) {
        uVar8 = 0x147;
      }
      ReportMessage<v8::internal::AstRawString_const*>(this,uVar8,lVar10);
      return (undefined4 *)0x0;
    }
    this_00 = *(BreakableStatement **)(lVar11 + 8);
    if (bVar3) {
      if (((byte)this_00[4] >> 6 & 1) == 0) {
LAB_0116bb70:
        ExpectSemicolon(this);
        pZVar6 = *(Zone **)(this + 0x68);
        pJVar7 = *(JumpStatement **)(pZVar6 + 0x10);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)pJVar7) < 0x10) {
          pJVar7 = (JumpStatement *)Zone::NewExpand(pZVar6,0x10);
        }
        else {
          *(JumpStatement **)(pZVar6 + 0x10) = pJVar7 + 0x10;
        }
        *(undefined4 *)pJVar7 = uVar8;
        *(undefined4 *)(pJVar7 + 4) = 0xe;
        *(BreakableStatement **)(pJVar7 + 8) = this_00;
        this_01 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
                    **)(this + 0x2f8);
        if (this_01 ==
            (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
             *)0x0) {
          return (undefined4 *)pJVar7;
        }
        pZVar6 = *(Zone **)(this + 0xb8);
        local_50 = *(JumpStatementSourceRanges **)(pZVar6 + 0x10);
        uVar8 = *(undefined4 *)(**(long **)(this + 0xf8) + 4);
        if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)local_50) < 0x10) {
          local_50 = (JumpStatementSourceRanges *)Zone::NewExpand(pZVar6,0x10);
        }
        else {
          *(JumpStatementSourceRanges **)(pZVar6 + 0x10) = local_50 + 0x10;
        }
        *(undefined4 *)(local_50 + 8) = uVar8;
        *(undefined ***)local_50 = &PTR__AstNodeSourceRanges_01cb52f0;
        pJStack_48 = pJVar7;
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
        ::
        __emplace_unique_impl<v8::internal::JumpStatement*&,v8::internal::JumpStatementSourceRanges*&>
                  (this_01,&pJStack_48,&local_50);
        return (undefined4 *)pJVar7;
      }
    }
    else {
      plVar5 = (long *)BreakableStatement::labels(this_00);
      if (plVar5 != (long *)0x0) {
        lVar9 = (long)*(int *)((long)plVar5 + 0xc);
        while (0 < lVar9) {
          lVar1 = lVar9 * 8;
          lVar9 = lVar9 + -1;
          if (*(long *)(*plVar5 + lVar1 + -8) == lVar10) {
            if (this_00 != (BreakableStatement *)0x0) goto LAB_0116bb70;
            goto LAB_0116bbfc;
          }
        }
      }
    }
    lVar11 = *(long *)(lVar11 + 0x10);
  } while( true );
}

