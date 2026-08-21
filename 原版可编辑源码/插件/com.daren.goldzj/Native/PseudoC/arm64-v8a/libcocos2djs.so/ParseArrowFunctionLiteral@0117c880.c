
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseArrowFunctionLiteral(v8::internal::PreParserFormalParameters
   const&) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseArrowFunctionLiteral
          (ParserBase<v8::internal::PreParser> *this,PreParserFormalParameters *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ParserBase<v8::internal::PreParser> PVar8;
  long lVar9;
  RuntimeCallStats *pRVar10;
  Scanner *this_00;
  ulong uVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  Logger *this_01;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined1 auStack_d8 [8];
  RuntimeCallStats *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ParserBase<v8::internal::PreParser> *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  ParserBase<v8::internal::PreParser> *local_88;
  long local_80;
  long lStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  pRVar10 = *(RuntimeCallStats **)(this + 0x60);
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = (RuntimeCallStats *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if ((pRVar10 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    uVar12 = 0x4ab;
    if (*(int *)(pRVar10 + 0x14) == 1) {
      uVar12 = 0x4ac;
    }
    local_d0 = pRVar10;
    RuntimeCallStats::Enter(pRVar10,(RuntimeCallTimer *)((ulong)&local_d0 | 8),uVar12);
  }
  if (FLAG_log_function_events == '\0') {
    lVar18 = 0;
  }
  else {
    lVar18 = base::TimeTicks::HighResolutionNow();
  }
  this_00 = *(Scanner **)(this + 200);
  if (*(char *)(*(long *)(this_00 + 8) + 0x4c) == '\0') {
    local_88 = this + 0x10;
    *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
    lStack_78 = *(long *)param_1;
    uStack_a0 = *(undefined8 *)this;
    uVar6 = *(undefined1 *)(lStack_78 + 0x85);
    *(long *)this = lStack_78;
    local_90 = 0;
    local_98 = 0;
    local_80 = *(long *)(this + 0x10);
    local_70 = 0;
    *(ParserBase<v8::internal::PreParser> ***)(this + 0x10) = &local_a8;
    if (local_80 != 0) {
      uVar7 = *(undefined1 *)(local_80 + 0x39);
      *(undefined1 *)(local_80 + 0x39) = 0;
      *(undefined1 *)(local_80 + 0x3a) = uVar7;
      this_00 = *(Scanner **)(this + 200);
    }
    local_a8 = this;
    Scanner::Next(this_00);
    if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == '\b') {
      Scanner::Next(*(Scanner **)(this + 200));
      PVar8 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      ParseFunctionBody(this,auStack_d8,0,0,0xffffffff,param_1,uVar6,0,1);
      this[0x100] = PVar8;
    }
    else {
      ParseFunctionBody(this,auStack_d8,0,0,0xffffffff,param_1,uVar6,0,0);
    }
    *(undefined4 *)(*(long *)param_1 + 0x74) = *(undefined4 *)(**(long **)(this + 200) + 4);
    if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
      plVar14 = *(long **)(this + 200);
      uVar3 = *(uint *)((long)plVar14 + 0x154);
      if ((((int)uVar3 <= *(int *)(*plVar14 + 4)) &&
          (uVar4 = *(uint *)(plVar14 + 0x2a), *(int *)(*(long *)param_1 + 0x70) <= (int)uVar4)) &&
         (uVar4 <= uVar3)) {
        lVar15 = plVar14[0x2b];
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),uVar4,uVar3,(int)lVar15,0);
        lVar19 = *(long *)(this + 200);
        lVar16 = *(long *)(lVar19 + 0x18);
        if (*(char *)(lVar16 + 0x30) == '\0') {
          *(undefined4 *)(lVar19 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar16 + 0x30) = 1;
          *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
          *(undefined1 *)(lVar19 + 0x60) = 0x6d;
          *(undefined1 *)(lVar19 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar19 + 0x100) = 0x6d;
          lVar19 = *(long *)(this + 200);
        }
        *(undefined8 *)(lVar19 + 0x150) = 0xffffffff;
        *(undefined4 *)(lVar19 + 0x158) = 0;
        if (((int)lVar15 == 299) && (lVar15 = *(long *)(this + 0x108), lVar15 != 0)) {
          *(int *)(lVar15 + 0x80) = *(int *)(lVar15 + 0x80) + 1;
        }
      }
    }
    *(long *)local_88 = local_80;
    *(undefined8 *)local_a8 = uStack_a0;
    if (FLAG_log_function_events != '\0') {
      lVar19 = *(long *)param_1;
      lVar15 = base::TimeTicks::HighResolutionNow();
      local_a8 = (ParserBase<v8::internal::PreParser> *)(lVar15 - lVar18);
      dVar20 = (double)base::TimeDelta::InMillisecondsF((TimeDelta *)&local_a8);
      this_01 = *(Logger **)(this + 0x68);
      iVar5 = *(int *)(this + 0xd4);
      iVar1 = *(int *)(lVar19 + 0x70);
      iVar2 = *(int *)(lVar19 + 0x74);
      uVar11 = __strlen_chk("arrow function",0xf);
      Logger::FunctionEvent(this_01,"parse",iVar5,dVar20,iVar1,iVar2,"arrow function",uVar11);
    }
    uVar17 = 2;
  }
  else {
    puVar13 = *(undefined1 **)(this + 0x80);
    uVar17 = 1;
    *puVar13 = 1;
    puVar13[2] = 1;
    lVar18 = *(long *)(this + 200);
    lVar15 = *(long *)(lVar18 + 0x18);
    if (*(char *)(lVar15 + 0x30) == '\0') {
      *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar15 + 0x30) = 1;
      *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)(lVar15 + 0x18);
      *(undefined1 *)(lVar18 + 0x60) = 0x6d;
      *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar18 + 0x100) = 0x6d;
    }
  }
  if (local_d0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_d0,(RuntimeCallTimer *)((ulong)&local_d0 | 8));
  }
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}

