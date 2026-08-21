
/* v8::internal::PreParser::PreParseFunction(v8::internal::AstRawString const*,
   v8::internal::FunctionKind, v8::internal::FunctionSyntaxKind, v8::internal::DeclarationScope*,
   int*, v8::internal::ProducedPreparseData**, int) */

undefined4 __thiscall
v8::internal::PreParser::PreParseFunction
          (PreParser *this,AstRawString *param_1,uint param_3,char param_4,DeclarationScope *param_5
          ,undefined8 param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined1 uVar1;
  long lVar2;
  uint uVar3;
  Zone *this_00;
  int *piVar4;
  ulong uVar5;
  DeclarationScope *this_01;
  bool bVar6;
  ushort uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  PreParser *local_f0;
  long local_e8;
  DeclarationScope *local_e0;
  undefined2 local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  PreParser *local_c8;
  long lStack_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b4;
  PreParser *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  PreParser *local_88;
  long local_80;
  DeclarationScope *pDStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_88 = this + 0x10;
  *(undefined8 *)(this + 0x108) = param_6;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = param_8;
  local_d8 = 0x100;
  local_d4 = 0;
  local_cc = 0;
  uStack_a0 = *(undefined8 *)this;
  *(DeclarationScope **)this = param_5;
  local_90 = 0;
  local_98 = 0;
  local_80 = *(long *)(this + 0x10);
  local_70 = 0;
  *(PreParser ***)(this + 0x10) = &local_a8;
  if (local_80 != 0) {
    uVar1 = *(undefined1 *)(local_80 + 0x39);
    *(undefined1 *)(local_80 + 0x39) = 0;
    *(undefined1 *)(local_80 + 0x3a) = uVar1;
  }
  local_e8 = 0;
  local_f0 = this;
  local_e0 = param_5;
  local_a8 = this;
  pDStack_78 = param_5;
  if ((param_3 - 9 & 0xff) < 2) {
    local_d8 = ((byte)param_5[0x83] & 1) << 8;
  }
  else {
    PreparseDataBuilder::DataGatheringScope::Start((DataGatheringScope *)&local_f0,param_5);
    lStack_c0 = *(long *)(this + 0x90);
    local_b8 = 0x103;
    local_b6 = 0;
    if (lStack_c0 != 0) {
      local_b6 = *(undefined1 *)(lStack_c0 + 0x12);
    }
    *(PreParser ***)(this + 0x90) = &local_c8;
    local_b4 = 0xffffffff;
    local_c8 = this;
    ParserBase<v8::internal::PreParser>::ParseFormalParameterList
              ((ParserBase<v8::internal::PreParser> *)this,(PreParserFormalParameters *)&local_e0);
    if ((uint)local_b4 <= local_b4._4_4_) {
      local_cc = CONCAT11(local_cc._1_1_,1);
    }
    if (((local_d8._1_1_ == '\0') &&
        (lVar11 = Scope::AsDeclarationScope(), (*(byte *)(lVar11 + 0x81) >> 2 & 1) != 0)) &&
       (plVar9 = *(long **)(this + 0x120), plVar9 != (long *)0x0)) {
      lVar11 = *plVar9;
      if (lVar11 == 0) {
        *(byte *)((long)plVar9 + 0x4c) = *(byte *)((long)plVar9 + 0x4c) | 1;
      }
      else {
        *(byte *)(lVar11 + 0x4c) = *(byte *)(lVar11 + 0x4c) | 1;
      }
    }
    uVar3 = Scanner::Next(*(Scanner **)(this + 200));
    if ((uVar3 & 0xff) != 6) {
      ParserBase<v8::internal::PreParser>::ReportUnexpectedToken(this,uVar3);
    }
    ParserBase<v8::internal::PreParser>::CheckArityRestrictions
              ((ParserBase<v8::internal::PreParser> *)this,local_d4._4_4_,param_3,
               (undefined1)local_d8,*(undefined4 *)(param_5 + 0x70),
               *(undefined4 *)(**(long **)(this + 200) + 4));
    *(long *)(local_c8 + 0x90) = lStack_c0;
  }
  uVar3 = Scanner::Next(*(Scanner **)(this + 200));
  if ((uVar3 & 0xff) != 8) {
    ParserBase<v8::internal::PreParser>::ReportUnexpectedToken(this,uVar3);
  }
  this_01 = param_5;
  if (local_d8._1_1_ == '\0') {
    this_00 = *(Zone **)(this + 0x88);
    this_01 = *(DeclarationScope **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0xe0) {
      this_01 = (DeclarationScope *)Zone::NewExpand(this_00,0xe0);
    }
    else {
      *(DeclarationScope **)(this_00 + 0x10) = this_01 + 0xe0;
    }
    DeclarationScope::DeclarationScope(this_01,*(undefined8 *)(this + 0x88),*(undefined8 *)this,6,0)
    ;
    *(undefined4 *)(this_01 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 200);
  }
  uVar14 = *(undefined8 *)this;
  *(DeclarationScope **)this = this_01;
  ParseStatementListAndLogFunction(this,(PreParserFormalParameters *)&local_e0);
  *(undefined8 *)this = uVar14;
  if ((*(char *)(*(long *)(*(long *)(this + 200) + 0x18) + 0x30) == '\0') &&
     (piVar4 = (int *)DeclarationScope::CheckConflictingVarDeclarations(this_01),
     piVar4 != (int *)0x0)) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0x80),*piVar4,*piVar4 + 1,0xb0,
               *(undefined8 *)(*(long *)(piVar4 + 2) + 8));
    lVar11 = *(long *)(this + 200);
    lVar10 = *(long *)(lVar11 + 0x18);
    if (*(char *)(lVar10 + 0x30) == '\0') {
      *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar10 + 0x30) = 1;
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined1 *)(lVar11 + 0x60) = 0x6d;
      *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar11 + 0x100) = 0x6d;
    }
  }
  if (*(char *)(*(long *)(*(long *)(this + 200) + 0x18) + 0x30) == '\0') {
    if (local_d8._1_1_ == '\0') {
      if (((byte)this_01[0x81] & 1) == 0) {
        DeclarationScope::HoistSloppyBlockFunctions(this_01,(AstNodeFactory *)0x0);
        uVar7 = *(ushort *)(this_01 + 0x81) & 1;
      }
      else {
        uVar7 = 1;
      }
      *(ushort *)(param_5 + 0x81) = *(ushort *)(param_5 + 0x81) & 0xfffe | uVar7;
      *(undefined4 *)(this_01 + 0x74) = *(undefined4 *)(*(long *)(*(long *)(this + 200) + 8) + 4);
      lVar11 = Scope::FinalizeBlockScope((Scope *)this_01);
      if ((lVar11 != 0) &&
         (lVar11 = Scope::FindVariableDeclaredIn((Scope *)this_01,param_5,1), lVar11 != 0)) {
        puVar12 = *(undefined1 **)(this + 0x80);
        *puVar12 = 1;
        puVar12[2] = 1;
        lVar11 = *(long *)(this + 200);
        lVar10 = *(long *)(lVar11 + 0x18);
        if (*(char *)(lVar10 + 0x30) == '\0') {
          *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar10 + 0x30) = 1;
          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
          *(undefined1 *)(lVar11 + 0x60) = 0x6d;
          *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar11 + 0x100) = 0x6d;
          bVar6 = false;
          goto LAB_01174124;
        }
      }
      goto LAB_01174120;
    }
    uVar7 = *(ushort *)(param_5 + 0x81);
    if ((uVar7 & 1) == 0) {
      DeclarationScope::HoistSloppyBlockFunctions(param_5,(AstNodeFactory *)0x0);
      uVar7 = *(ushort *)(param_5 + 0x81);
    }
    if ((uVar7 & 1) != 0) goto LAB_01174120;
    bVar6 = 2 < (param_3 - 0x10 & 0xff) && (param_3 & 0xfe) != 0xc;
  }
  else {
LAB_01174120:
    bVar6 = false;
  }
LAB_01174124:
  puVar12 = *(undefined1 **)(this + 0x80);
  *(undefined8 *)(this + 0x108) = 0;
  if (puVar12[1] != '\0') {
    uVar8 = 0;
    goto joined_r0x01174240;
  }
  if (puVar12[2] == '\0') {
    if (*(char *)(*(long *)(*(long *)(this + 200) + 0x18) + 0x30) == '\0') {
      if (1 < (param_3 - 9 & 0xff)) {
        uVar7 = *(ushort *)(*(long *)this + 0x81);
        if ((!bVar6) && ((char)local_cc != '\0')) {
          *puVar12 = 1;
          puVar12[2] = 1;
          lVar11 = *(long *)(this + 200);
          lVar10 = *(long *)(lVar11 + 0x18);
          if (*(char *)(lVar10 + 0x30) == '\0') {
            *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar10 + 0x30) = 1;
            *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
            *(undefined1 *)(lVar11 + 0x60) = 0x6d;
            *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar11 + 0x100) = 0x6d;
          }
        }
        if (((uVar7 & 1) != 0) && (local_cc._1_1_ != '\0')) {
          puVar12 = *(undefined1 **)(this + 0x80);
          *puVar12 = 1;
          puVar12[2] = 1;
          lVar11 = *(long *)(this + 200);
          lVar10 = *(long *)(lVar11 + 0x18);
          if (*(char *)(lVar10 + 0x30) == '\0') {
            *(undefined4 *)(lVar11 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar10 + 0x30) = 1;
            *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
            *(undefined1 *)(lVar11 + 0x60) = 0x6d;
            *(undefined1 *)(lVar11 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar11 + 0x100) = 0x6d;
          }
        }
        if (*(char *)(*(long *)(*(long *)(this + 200) + 0x18) + 0x30) != '\0') {
          uVar8 = 1;
          if (*(char *)(*(long *)(this + 0x80) + 2) == '\0') {
            uVar8 = 2;
          }
          goto joined_r0x01174240;
        }
        DeclarationScope::DeclareArguments(param_5,*(AstValueFactory **)(this + 0x28));
        if ((param_4 == '\x01') &&
           (lVar11 = VariableMap::Lookup((VariableMap *)(param_5 + 0x20),param_1), lVar11 == 0)) {
          DeclarationScope::DeclareFunctionVar(param_5,param_1,(Scope *)0x0);
        }
        uVar5 = PreparseDataBuilder::HasData(*(PreparseDataBuilder **)(this + 0x120));
        if ((uVar5 & 1) != 0) {
          uVar14 = ProducedPreparseData::For
                             (*(PreparseDataBuilder **)(this + 0x120),
                              *(Zone **)(*(long *)(this + 0x28) + 0x448));
          *param_7 = uVar14;
        }
      }
      if (*(char *)(*(long *)(this + 0x80) + 2) != '\0') goto LAB_011741f8;
      if (((byte)param_5[0x81] & 1) != 0) {
        plVar9 = *(long **)(this + 200);
        if ((((int)*(uint *)((long)plVar9 + 0x154) <= *(int *)(*plVar9 + 4)) &&
            (*(int *)(param_5 + 0x70) <= (int)*(uint *)(plVar9 + 0x2a))) &&
           (*(uint *)(plVar9 + 0x2a) <= *(uint *)((long)plVar9 + 0x154))) {
          lVar11 = plVar9[0x2b];
          PendingCompilationErrorHandler::ReportMessageAt();
          lVar10 = *(long *)(this + 200);
          lVar13 = *(long *)(lVar10 + 0x18);
          if (*(char *)(lVar13 + 0x30) == '\0') {
            *(undefined4 *)(lVar10 + 0x20) = 0xffffffff;
            *(undefined1 *)(lVar13 + 0x30) = 1;
            *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
            *(undefined1 *)(lVar10 + 0x60) = 0x6d;
            *(undefined1 *)(lVar10 + 0xb0) = 0x6d;
            *(undefined1 *)(lVar10 + 0x100) = 0x6d;
            lVar10 = *(long *)(this + 200);
          }
          *(undefined8 *)(lVar10 + 0x150) = 0xffffffff;
          *(undefined4 *)(lVar10 + 0x158) = 0;
          if (((int)lVar11 == 299) && (lVar11 = *(long *)(this + 0x108), lVar11 != 0)) {
            *(int *)(lVar11 + 0x80) = *(int *)(lVar11 + 0x80) + 1;
          }
        }
      }
    }
    uVar8 = 2;
  }
  else {
LAB_011741f8:
    uVar8 = 1;
  }
joined_r0x01174240:
  if (local_e8 != 0) {
    PreparseDataBuilder::DataGatheringScope::Close((DataGatheringScope *)&local_f0);
  }
  *(long *)local_88 = local_80;
  *(undefined8 *)local_a8 = uStack_a0;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

