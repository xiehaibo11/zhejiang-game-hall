
/* v8::internal::Parser::SkipFunction(v8::internal::AstRawString const*, v8::internal::FunctionKind,
   v8::internal::FunctionSyntaxKind, v8::internal::DeclarationScope*, int*, int*,
   v8::internal::ProducedPreparseData**) */

undefined8 __thiscall
v8::internal::Parser::SkipFunction
          (Parser *this,undefined8 param_1,undefined4 param_3,undefined4 param_4,
          DeclarationScope *param_5,undefined4 *param_6,undefined4 *param_7,undefined8 *param_8)

{
  undefined1 uVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  ClassScope *pCVar9;
  undefined8 uVar10;
  PreParser *pPVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  byte **local_110;
  byte *local_108;
  char *local_100;
  undefined8 local_f8;
  PrivateNameScopeIterator local_f0 [16];
  long local_e0;
  long *local_d8;
  long *local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  Parser *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  Parser *local_90;
  long lStack_88;
  DeclarationScope *local_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uStack_a8 = *(undefined8 *)this;
  local_90 = this + 0x10;
  *(DeclarationScope **)this = param_5;
  local_9c = 0;
  local_a0 = 0;
  lStack_88 = *(long *)local_90;
  local_78 = 0;
  *(Parser ***)local_90 = &local_b0;
  if (lStack_88 != 0) {
    uVar1 = *(undefined1 *)(lStack_88 + 0x39);
    *(undefined1 *)(lStack_88 + 0x39) = 0;
    *(undefined1 *)(lStack_88 + 0x3a) = uVar1;
  }
  *(Parser **)param_5 = this + 0x2a8;
  plVar7 = *(long **)(this + 0x488);
  local_b0 = this;
  local_80 = param_5;
  if (plVar7 != (long *)0x0) {
    if (*(char *)(*(long *)(this + 0xb0) + 1) == '\0') {
      uVar8 = (**(code **)(*plVar7 + 0x10))
                        (plVar7,*(undefined8 *)(*(long *)(this + 0x60) + 0x448),
                         *(undefined4 *)(param_5 + 0x70),&local_110,param_6,param_7,&local_c8,
                         &local_d8,local_f0);
      *param_8 = uVar8;
      lVar12 = *(long *)(param_5 + 8);
      do {
        if ((*(ushort *)(lVar12 + 0x81) >> 10 & 1) != 0) break;
        *(ushort *)(lVar12 + 0x81) = *(ushort *)(lVar12 + 0x81) | 0x400;
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != 0);
      *(ushort *)(param_5 + 0x83) = *(ushort *)(param_5 + 0x83) | 0x100;
      *(int *)(param_5 + 0x74) = (int)local_110;
      Scanner::SeekForward(*(Scanner **)(this + 0xf8),(int)local_110 + -1);
      uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
      if ((uVar5 & 0xff) != 0xd) {
        ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                  ((ParserBase<v8::internal::Parser> *)this,uVar5);
      }
      lVar12 = 0x20;
      if (local_f0[0] != (PrivateNameScopeIterator)0x0) {
        lVar12 = 0x24;
      }
      *(int *)(this + lVar12 + 0x310) = *(int *)(this + lVar12 + 0x310) + 1;
      *(ushort *)(param_5 + 0x81) = *(ushort *)(param_5 + 0x81) & 0xfffe | (ushort)(byte)local_f0[0]
      ;
      if ((char)local_d8 != '\0') {
        *(ushort *)(param_5 + 0x83) = *(ushort *)(param_5 + 0x83) | 0x20;
      }
      *(int *)(this + 0x100) = *(int *)(this + 0x100) + (int)local_c8;
      DeclarationScope::ResetAfterPreparsing(param_5,*(AstValueFactory **)(this + 0x60),false);
    }
    uVar8 = 1;
    goto LAB_01156f54;
  }
  local_c8 = *(long *)(this + 0xf8);
  uStack_c0 = 0xfffffffffffffffe;
  local_b8 = *(undefined1 *)(*(long *)(local_c8 + 0x18) + 0x30);
  Scanner::BookmarkScope::Set((BookmarkScope *)&local_c8,(long)*(int *)(param_5 + 0x70));
  PrivateNameScopeIterator::PrivateNameScopeIterator(local_f0,(Scope *)param_5);
  if (local_e0 == 0) {
    uVar8 = 0;
  }
  else {
    pCVar9 = (ClassScope *)Scope::AsClassScope();
    uVar8 = ClassScope::GetUnresolvedPrivateNameTail(pCVar9);
  }
  if (DAT_01d3f750 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f750 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3f750;
  local_110 = (byte **)0x0;
  if ((*DAT_01d3f750 & 5) != 0) {
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar10 = (**(code **)(*plVar7 + 0x18))
                       (plVar7,0x58,pbVar3,"V8.PreParse",0,0,0,0,0,0,0,&local_d8,0);
    plVar7 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    plVar7 = local_d8;
    local_d8 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    local_110 = &local_108;
    local_100 = "V8.PreParse";
    local_108 = pbVar3;
    local_f8 = uVar10;
  }
  pPVar11 = (PreParser *)reusable_preparser(this);
  iVar6 = PreParser::PreParseFunction
                    (pPVar11,param_1,param_3,param_4,param_5,this + 0x310,param_8,
                     *(undefined4 *)(this + 0x104));
  if (iVar6 == 0) {
    lVar12 = *(long *)(this + 0xf8);
    lVar14 = *(long *)(lVar12 + 0x18);
    if (*(char *)(lVar14 + 0x30) == '\0') {
      *(undefined4 *)(lVar12 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar14 + 0x30) = 1;
      *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar14 + 0x18);
      *(undefined1 *)(lVar12 + 0x60) = 0x6d;
      *(undefined1 *)(lVar12 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar12 + 0x100) = 0x6d;
    }
    **(undefined2 **)(this + 0xb0) = 0x101;
LAB_01157254:
    uVar8 = 1;
  }
  else {
    if ((*(char **)(this + 0xb0))[2] == '\0') {
      if (**(char **)(this + 0xb0) == '\0') {
        lVar12 = reusable_preparser(this);
        this[0x136] = *(Parser *)(lVar12 + 0x106);
        lVar12 = reusable_preparser(this);
        *(undefined4 *)(param_5 + 0x74) = *(undefined4 *)(lVar12 + 0x110);
        uVar5 = Scanner::Next(*(Scanner **)(this + 0xf8));
        if ((uVar5 & 0xff) != 0xd) {
          ParserBase<v8::internal::Parser>::ReportUnexpectedToken
                    ((ParserBase<v8::internal::Parser> *)this,uVar5);
        }
        *(int *)(this + 0x480) =
             (*(int *)(param_5 + 0x74) - *(int *)(param_5 + 0x70)) + *(int *)(this + 0x480);
        *param_6 = *(undefined4 *)(lVar12 + 0x114);
        *param_7 = *(undefined4 *)(lVar12 + 0x118);
        *(int *)(this + 0x100) = *(int *)(this + 0x100) + *(int *)(lVar12 + 0x11c);
        if (local_e0 != 0) {
          pCVar9 = (ClassScope *)Scope::AsClassScope();
          ClassScope::MigrateUnresolvedPrivateNameTail(pCVar9,this + 0x68,uVar8);
        }
        if (*(long *)(this + 0xc0) == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = *(char *)(*(long *)(this + 0xc0) + 0x12) != '\0';
        }
        DeclarationScope::AnalyzePartially(param_5,this,(AstNodeFactory *)(this + 0x68),bVar4);
      }
      goto LAB_01157254;
    }
    this[0x484] = (Parser)0x0;
    *(undefined4 *)(this + 0x2f0) = 1;
    Scanner::BookmarkScope::Apply((BookmarkScope *)&local_c8);
    if (local_e0 != 0) {
      pCVar9 = (ClassScope *)Scope::AsClassScope();
      ClassScope::ResetUnresolvedPrivateNameTail(pCVar9,uVar8);
    }
    DeclarationScope::ResetAfterPreparsing(param_5,*(AstValueFactory **)(this + 0x60),true);
    puVar13 = *(undefined1 **)(this + 0xb0);
    uVar8 = 0;
    *puVar13 = 0;
    puVar13[2] = 0;
  }
  if ((local_110 != (byte **)0x0) && (*local_108 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_108,local_100,local_f8);
  }
LAB_01156f54:
  *(long *)local_90 = lStack_88;
  *(undefined8 *)local_b0 = uStack_a8;
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

