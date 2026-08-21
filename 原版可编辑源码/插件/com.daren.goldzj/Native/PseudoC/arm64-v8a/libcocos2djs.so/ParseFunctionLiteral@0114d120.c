
/* v8::internal::Parser::ParseFunctionLiteral(v8::internal::AstRawString const*,
   v8::internal::Scanner::Location, v8::internal::FunctionNameValidity, v8::internal::FunctionKind,
   int, v8::internal::FunctionSyntaxKind, v8::internal::LanguageMode,
   v8::internal::ZoneList<v8::internal::AstRawString const*>*) */

FunctionLiteral * __thiscall
v8::internal::Parser::ParseFunctionLiteral
          (Parser *this,AstRawString *param_1,undefined8 param_3,undefined4 param_4,int param_5,
          int param_6,uint param_7,ushort param_8,undefined8 param_9)

{
  byte bVar1;
  byte bVar2;
  Parser *pPVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  RuntimeCallStats *pRVar15;
  ulong uVar16;
  Zone *pZVar17;
  FunctionLiteral *pFVar18;
  DeclarationScope *this_00;
  Parser *pPVar19;
  long lVar20;
  Parser PVar21;
  long *plVar22;
  __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
  *this_01;
  uint uVar23;
  double dVar24;
  undefined8 in_stack_fffffffffffffec0;
  undefined4 *puVar25;
  undefined4 uVar26;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar27;
  long local_120;
  AstRawString *local_f8;
  undefined8 local_e8;
  undefined1 local_dc [4];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  Parser *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  RuntimeCallStats *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  FunctionLiteralSourceRanges *local_78;
  FunctionLiteral *local_70 [2];
  
  uVar26 = (undefined4)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  uVar27 = (undefined4)((ulong)in_stack_fffffffffffffed0 >> 0x20);
  iVar10 = param_6;
  if (param_6 == -1) {
    iVar10 = **(int **)(*(long *)(this + 0xf8) + 8);
  }
  local_f8 = param_1;
  if (param_1 == (AstRawString *)0x0) {
    local_f8 = *(AstRawString **)(*(long *)(*(long *)(this + 0x60) + 0x38) + 0x110);
  }
  PVar21 = (Parser)0x0;
  if (((param_7 & 0xff) != 4) && (*(char *)(*(long *)(this + 0x10) + 0x39) == '\0')) {
    PVar21 = this[0x108];
  }
  local_80 = param_3;
  if ((*(long *)(this + 0xc0) == 0) || (*(char *)(*(long *)(this + 0xc0) + 0x12) == '\0')) {
    bVar12 = Scope::AllowsLazyParsingWithoutUnresolvedVariables
                       (*(Scope **)this,*(Scope **)(this + 8));
  }
  else {
    bVar12 = 0;
  }
  pRVar15 = *(RuntimeCallStats **)(this + 0x90);
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = (RuntimeCallStats *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if ((pRVar15 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar14 = 0x4a7;
    if (*(int *)(pRVar15 + 0x14) == 1) {
      uVar14 = 0x4a8;
    }
    local_b0 = pRVar15;
    RuntimeCallStats::Enter(pRVar15,(RuntimeCallTimer *)((ulong)&local_b0 | 8),uVar14);
  }
  if (FLAG_log_function_events == '\0') {
    local_120 = 0;
  }
  else {
    local_120 = base::TimeTicks::HighResolutionNow();
  }
  uVar13 = 0;
  bVar1 = PVar21 == (Parser)0x1 & (bVar12 ^ 1) & *(int *)(this + 0x2f0) == 0;
  if (((PVar21 != (Parser)0x1 && ((bVar12 ^ 1) & 1) == 0) && (*(int *)(this + 0x2f0) == 0)) &&
     (FLAG_parallel_compile_tasks != '\0')) {
    if (*(long *)(*(long *)(this + 0x138) + 0xa0) != 0) {
      plVar22 = *(long **)(*(long *)(this + 0xf8) + 0x18);
      uVar16 = (**(code **)(*plVar22 + 0x10))(plVar22);
      if ((uVar16 & 1) != 0) {
        uVar13 = (**(code **)(*plVar22 + 0x20))(plVar22);
        uVar13 = uVar13 ^ 1;
        goto LAB_0114d2b8;
      }
    }
    uVar13 = 0;
  }
LAB_0114d2b8:
  local_c8 = this + 200;
  local_d4 = 0xffffffff;
  local_d0 = 0xffffffff;
  local_c0 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  local_d8 = 0xffffffff;
  local_cc = 0;
  local_dc[0] = 0;
  iVar5 = *(int *)(this + 0x100);
  bVar2 = PVar21 == (Parser)0x1 & bVar12 & *(int *)(this + 0x2f0) == 0;
  *(int *)(this + 0x100) = iVar5 + 1;
  local_e8 = 0;
  if ((bVar1 == 0 && (uVar13 & 1) == 0) && bVar2 == 0) {
    pZVar17 = *(Zone **)(this + 0xb8);
    pPVar19 = (Parser *)pZVar17;
  }
  else {
    pZVar17 = *(Zone **)(this + 0xb8);
    pPVar19 = this + 0x2a8;
  }
  this_00 = *(DeclarationScope **)(pZVar17 + 0x10);
  pPVar3 = (Parser *)pZVar17;
  if (pPVar19 != (Parser *)0x0) {
    pPVar3 = pPVar19;
  }
  uStack_b8 = local_c0;
  if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)this_00) < 0xe0) {
    this_00 = (DeclarationScope *)Zone::NewExpand(pZVar17,0xe0);
  }
  else {
    *(DeclarationScope **)(pZVar17 + 0x10) = this_00 + 0xe0;
  }
  DeclarationScope::DeclarationScope(this_00,pPVar3,*(undefined8 *)this,2,param_5);
  *(undefined1 *)(*(long *)(this + 0x10) + 0x3b) = 1;
  if (1 < (param_5 - 9U & 0xff)) {
    DeclarationScope::DeclareDefaultFunctionVariables(this_00,*(AstValueFactory **)(this + 0x60));
  }
  lVar20 = 0x24;
  if ((param_8 & 1) == 0) {
    lVar20 = 0x20;
  }
  *(int *)(this + lVar20 + 0x310) = *(int *)(this + lVar20 + 0x310) + 1;
  *(ushort *)(this_00 + 0x81) = *(ushort *)(this_00 + 0x81) & 0xfffe | param_8 & 1;
  if (((param_7 & 0xff) != 4) &&
     (cVar8 = *(char *)(*(long *)(*(Scanner **)(this + 0xf8) + 8) + 0x38),
     uVar14 = Scanner::Next(*(Scanner **)(this + 0xf8)), cVar8 != '\x05')) {
    ParserBase<v8::internal::Parser>::ReportUnexpectedToken
              ((ParserBase<v8::internal::Parser> *)this,uVar14);
    pFVar18 = (FunctionLiteral *)0x0;
    goto LAB_0114d61c;
  }
  *(undefined4 *)(this_00 + 0x70) = *(undefined4 *)**(undefined8 **)(this + 0xf8);
  if ((bVar1 == 0 && (uVar13 & 1) == 0) && bVar2 == 0) {
LAB_0114d424:
    puVar25 = &local_cc;
    ParseFunction(this,&local_c8,local_f8,iVar10,param_5,param_7,this_00,&local_d4,&local_d8,
                  local_dc,puVar25,&local_d0,param_9);
    uVar26 = (undefined4)((ulong)puVar25 >> 0x20);
    uVar27 = (undefined4)((ulong)param_9 >> 0x20);
    uVar23 = 0;
    bVar11 = true;
  }
  else {
    uVar16 = SkipFunction(this,local_f8,param_5,param_7,this_00,&local_d4,&local_d8,&local_e8);
    if ((uVar16 & 1) == 0) {
      Scanner::Next(*(Scanner **)(this + 0xf8));
      goto LAB_0114d424;
    }
    bVar11 = false;
    uVar23 = uVar13;
  }
  if (FLAG_log_function_events != '\0') {
    lVar20 = base::TimeTicks::HighResolutionNow();
    local_70[0] = (FunctionLiteral *)(lVar20 - local_120);
    dVar24 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)local_70);
    pcVar4 = "preparse-no-resolution";
    if ((bVar12 & 1) == 0) {
      pcVar4 = "preparse-resolution";
    }
    if ((bVar1 == 0 && (uVar13 & 1) == 0) && bVar2 == 0) {
      pcVar4 = "full-parse";
    }
    Logger::FunctionEvent
              (*(Logger **)(this + 0x98),pcVar4,*(int *)(this + 0x104),dVar24,
               *(int *)(this_00 + 0x70),*(int *)(this_00 + 0x74),*(char **)(local_f8 + 8),
               (long)*(int *)(local_f8 + 0x10));
  }
  if ((!bVar11 && TracingFlags::runtime_stats != 0) &&
     (*(RuntimeCallStats **)(this + 0x90) != (RuntimeCallStats *)0x0)) {
    RuntimeCallStats::CorrectCurrentCounterId(*(RuntimeCallStats **)(this + 0x90),0x4ad,1);
  }
  uVar9 = *(ushort *)(this_00 + 0x81);
  ParserBase<v8::internal::Parser>::CheckFunctionName
            ((ParserBase<v8::internal::Parser> *)this,uVar9 & 1,local_f8,param_4,&local_80);
  if ((uVar9 & 1) != 0) {
    lVar20 = *(long *)(this + 0xf8);
    uVar13 = *(uint *)(lVar20 + 0x154);
    if ((((int)uVar13 <= *(int *)(this_00 + 0x74)) &&
        (uVar6 = *(uint *)(lVar20 + 0x150), *(int *)(this_00 + 0x70) <= (int)uVar6)) &&
       (uVar6 <= uVar13)) {
      iVar7 = *(int *)(lVar20 + 0x158);
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),uVar6,uVar13,iVar7,0);
      lVar20 = *(long *)(this + 0x158);
      if (*(char *)(lVar20 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar20 + 0x30) = 1;
        *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(lVar20 + 0x18);
        this[0x1a0] = (Parser)0x6d;
        this[0x1f0] = (Parser)0x6d;
        this[0x240] = (Parser)0x6d;
      }
      lVar20 = *(long *)(this + 0xf8);
      *(undefined8 *)(lVar20 + 0x150) = 0xffffffff;
      *(undefined4 *)(lVar20 + 0x158) = 0;
      if (iVar7 == 299) {
        *(int *)(this + 0x390) = *(int *)(this + 0x390) + 1;
      }
    }
  }
  pFVar18 = (FunctionLiteral *)
            AstNodeFactory::NewFunctionLiteral
                      ((AstNodeFactory *)(this + 0x68),local_f8,this_00,&local_c8,local_cc,local_d4,
                       local_d8,local_dc[0],(char)param_7,PVar21,CONCAT44(uVar26,iVar10),1,
                       CONCAT44(uVar27,iVar5 + 1),local_e8);
  *(int *)(pFVar18 + 0x14) = param_6;
  *(undefined4 *)(pFVar18 + 0x18) = local_d0;
  this_01 = *(__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
              **)(this + 0x2f8);
  if (this_01 !=
      (__tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
       *)0x0) {
    pZVar17 = *(Zone **)(this + 0xb8);
    local_78 = *(FunctionLiteralSourceRanges **)(pZVar17 + 0x10);
    if ((ulong)(*(long *)(pZVar17 + 0x18) - (long)local_78) < 8) {
      local_78 = (FunctionLiteralSourceRanges *)Zone::NewExpand(pZVar17,8);
    }
    else {
      *(FunctionLiteralSourceRanges **)(pZVar17 + 0x10) = local_78 + 8;
    }
    *(undefined ***)local_78 = &PTR__AstNodeSourceRanges_01cb50f8;
    local_70[0] = pFVar18;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::__map_value_compare<v8::internal::ZoneObject*,std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>,std::__ndk1::less<v8::internal::ZoneObject*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::ZoneObject*,v8::internal::AstNodeSourceRanges*>>>
    ::
    __emplace_unique_impl<v8::internal::FunctionLiteral*&,v8::internal::FunctionLiteralSourceRanges*&>
              (this_01,local_70,&local_78);
  }
  if ((uVar23 & 1) != 0) {
    ParseInfo::ParallelTasks::Enqueue
              (*(ParallelTasks **)(*(ParseInfo **)(this + 0x138) + 0xa0),
               *(ParseInfo **)(this + 0x138),local_f8,pFVar18);
  }
  if ((param_1 == (AstRawString *)0x0) && (local_70[0] = pFVar18, *(long *)(this + 0x58) != 0)) {
    if (*(undefined8 **)(this + 0x48) == *(undefined8 **)(this + 0x50)) {
      std::__ndk1::
      vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
      ::__push_back_slow_path<v8::internal::FunctionLiteral*const&>
                ((vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
                  *)(this + 0x40),local_70);
    }
    else {
      **(undefined8 **)(this + 0x48) = pFVar18;
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
    }
  }
LAB_0114d61c:
  uVar16 = *(long *)(local_c8 + 8) - *(long *)local_c8 >> 3;
  if (local_c0 < uVar16 || local_c0 - uVar16 == 0) {
    if (local_c0 < uVar16) {
      *(ulong *)(local_c8 + 8) = *(long *)local_c8 + local_c0 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_c8,local_c0 - uVar16);
  }
  if (local_b0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_b0,(RuntimeCallTimer *)((ulong)&local_b0 | 8));
  }
  return pFVar18;
}

