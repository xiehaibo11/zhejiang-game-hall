
/* v8::internal::PreParser::ParseFunctionLiteral(v8::internal::PreParserIdentifier,
   v8::internal::Scanner::Location, v8::internal::FunctionNameValidity, v8::internal::FunctionKind,
   int, v8::internal::FunctionSyntaxKind, v8::internal::LanguageMode,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

undefined8 __thiscall
v8::internal::PreParser::ParseFunctionLiteral
          (PreParser *this,long param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
          int param_6,int param_7,undefined4 param_8,byte param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  PreParser PVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  RuntimeCallStats *pRVar9;
  DeclarationScope *this_00;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  Zone *this_01;
  PreParser *pPVar17;
  double dVar18;
  long local_148;
  DeclarationScope *local_128;
  undefined2 local_120;
  undefined8 local_11c;
  undefined2 local_114;
  PreParser *local_110;
  long local_108;
  RuntimeCallStats *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  PreParser *local_d0;
  long lStack_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined8 local_bc;
  PreParser *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  PreParser *local_90;
  long lStack_88;
  DeclarationScope *local_80;
  undefined4 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  local_e0 = 0;
  pRVar9 = *(RuntimeCallStats **)(this + 0x60);
  uStack_f8 = 0;
  local_100 = (RuntimeCallStats *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = param_4;
  if ((pRVar9 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar13 = 0x4ad;
    if (*(int *)(pRVar9 + 0x14) == 1) {
      uVar13 = 0x4ae;
    }
    local_100 = pRVar9;
    RuntimeCallStats::Enter(pRVar9,(RuntimeCallTimer *)((ulong)&local_100 | 8),uVar13);
  }
  if (FLAG_log_function_events == '\0') {
    local_148 = 0;
  }
  else {
    local_148 = base::TimeTicks::HighResolutionNow();
  }
  this_01 = *(Zone **)(this + 0x88);
  this_00 = *(DeclarationScope **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0xe0) {
    this_00 = (DeclarationScope *)Zone::NewExpand(this_01,0xe0);
  }
  else {
    *(DeclarationScope **)(this_01 + 0x10) = this_00 + 0xe0;
  }
  DeclarationScope::DeclarationScope(this_00,this_01,*(undefined8 *)this,2,param_6);
  pPVar17 = this + 0x10;
  *(undefined1 *)(*(long *)pPVar17 + 0x3b) = 1;
  if (1 < (param_6 - 9U & 0xff)) {
    DeclarationScope::DeclareDefaultFunctionVariables(this_00,*(AstValueFactory **)(this + 0x28));
  }
  *(ushort *)(this_00 + 0x81) = *(ushort *)(this_00 + 0x81) & 0xfffe | param_9 & 1;
  iVar1 = *(int *)(this + 0xd0);
  *(int *)(this + 0xd0) = iVar1 + 1;
  local_108 = 0;
  lStack_88 = *(long *)(this + 0x10);
  local_110 = this;
  if ((*(char *)(lStack_88 + 0x39) == '\0') && (*(long *)(this + 0x120) != 0)) {
    PreparseDataBuilder::DataGatheringScope::Start((DataGatheringScope *)&local_110,this_00);
    lStack_88 = *(long *)pPVar17;
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  uStack_a8 = *(undefined8 *)this;
  *(DeclarationScope **)this = this_00;
  local_9c = 0;
  local_a0 = 0;
  local_78 = 0;
  *(PreParser ***)(this + 0x10) = &local_b0;
  if (lStack_88 != 0) {
    uVar4 = *(undefined1 *)(lStack_88 + 0x39);
    *(undefined1 *)(lStack_88 + 0x39) = 0;
    *(undefined1 *)(lStack_88 + 0x3a) = uVar4;
  }
  local_b0 = this;
  local_90 = pPVar17;
  local_80 = this_00;
  uVar8 = Scanner::Next(*(Scanner **)(this + 200));
  if ((uVar8 & 0xff) != 5) {
    ParserBase<v8::internal::PreParser>::ReportUnexpectedToken(this,uVar8);
  }
  iVar2 = *(int *)**(undefined8 **)(this + 200);
  *(int *)(this_00 + 0x70) = iVar2;
  local_120 = 0x100;
  local_11c = 0;
  local_114 = 0;
  lStack_c8 = *(long *)(this + 0x90);
  local_c0 = 0x103;
  local_be = 0;
  if (lStack_c8 != 0) {
    local_be = *(undefined1 *)(lStack_c8 + 0x12);
  }
  *(PreParser ***)(this + 0x90) = &local_d0;
  local_bc = 0xffffffff;
  local_128 = this_00;
  local_d0 = this;
  ParserBase<v8::internal::PreParser>::ParseFormalParameterList
            ((ParserBase<v8::internal::PreParser> *)this,(PreParserFormalParameters *)&local_128);
  if ((uint)local_bc <= local_bc._4_4_) {
    local_114 = CONCAT11(local_114._1_1_,1);
  }
  *(long *)(local_d0 + 0x90) = lStack_c8;
  uVar8 = Scanner::Next(*(Scanner **)(this + 200));
  if ((uVar8 & 0xff) != 6) {
    ParserBase<v8::internal::PreParser>::ReportUnexpectedToken(this,uVar8);
  }
  ParserBase<v8::internal::PreParser>::CheckArityRestrictions
            ((ParserBase<v8::internal::PreParser> *)this,local_11c._4_4_,param_6,
             (undefined1)local_120,iVar2,*(undefined4 *)(**(long **)(this + 200) + 4));
  uVar8 = Scanner::Next(*(Scanner **)(this + 200));
  if ((uVar8 & 0xff) != 8) {
    ParserBase<v8::internal::PreParser>::ReportUnexpectedToken(this,uVar8);
  }
  if (param_7 == -1) {
    param_7 = **(int **)(*(long *)(this + 200) + 8);
  }
  PVar5 = this[0x100];
  this[0x100] = (PreParser)0x1;
  ParserBase<v8::internal::PreParser>::ParseFunctionBody
            (this,&local_d0,param_2,param_3,param_7,&local_128,param_6,param_8,1);
  if (((byte)this_00[0x81] & 1) == 0) {
    DeclarationScope::HoistSloppyBlockFunctions(this_00,(AstNodeFactory *)0x0);
    ParserBase<v8::internal::PreParser>::CheckFunctionName
              (this,0,param_2,param_3,param_5,&uStack_d8);
  }
  else {
    ParserBase<v8::internal::PreParser>::CheckFunctionName
              (this,1,param_2,param_3,param_5,&uStack_d8);
    plVar14 = *(long **)(this + 200);
    uVar8 = *(uint *)((long)plVar14 + 0x154);
    if ((((int)uVar8 <= *(int *)(*plVar14 + 4)) &&
        (uVar3 = *(uint *)(plVar14 + 0x2a), iVar2 <= (int)uVar3)) && (uVar3 <= uVar8)) {
      lVar10 = plVar14[0x2b];
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0x80),uVar3,uVar8,(int)lVar10,0);
      lVar15 = *(long *)(this + 200);
      lVar16 = *(long *)(lVar15 + 0x18);
      if (*(char *)(lVar16 + 0x30) == '\0') {
        *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar16 + 0x30) = 1;
        *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
        *(undefined1 *)(lVar15 + 0x60) = 0x6d;
        *(undefined1 *)(lVar15 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar15 + 0x100) = 0x6d;
        lVar15 = *(long *)(this + 200);
      }
      *(undefined8 *)(lVar15 + 0x150) = 0xffffffff;
      *(undefined4 *)(lVar15 + 0x158) = 0;
      if (((int)lVar10 == 299) && (lVar10 = *(long *)(this + 0x108), lVar10 != 0)) {
        *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + 1;
      }
    }
  }
  if (bVar7) {
    PreparseDataBuilder::DataGatheringScope::SetSkippableFunction
              ((DataGatheringScope *)&local_110,this_00,(int)local_11c,
               *(int *)(this + 0xd0) - (iVar1 + 1));
  }
  this[0x100] = PVar5;
  *(long *)local_90 = lStack_88;
  *(undefined8 *)local_b0 = uStack_a8;
  if (local_108 != 0) {
    PreparseDataBuilder::DataGatheringScope::Close((DataGatheringScope *)&local_110);
  }
  if (FLAG_log_function_events != '\0') {
    lVar10 = base::TimeTicks::HighResolutionNow();
    local_b0 = (PreParser *)(lVar10 - local_148);
    dVar18 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)&local_b0);
    if (param_2 == 0) {
      uVar12 = 0;
      pcVar11 = "";
    }
    else {
      pcVar11 = *(char **)(param_2 + 8);
      uVar12 = (ulong)*(int *)(param_2 + 0x10);
    }
    Logger::FunctionEvent
              (*(Logger **)(this + 0x68),"preparse-resolution",*(int *)(this + 0xd4),dVar18,
               *(int *)(this_00 + 0x70),*(int *)(this_00 + 0x74),pcVar11,uVar12);
  }
  if (local_100 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_100,(RuntimeCallTimer *)((ulong)&local_100 | 8));
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

