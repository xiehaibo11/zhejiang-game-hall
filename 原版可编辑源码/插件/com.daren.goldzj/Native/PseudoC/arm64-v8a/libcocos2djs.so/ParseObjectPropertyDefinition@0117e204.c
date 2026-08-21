
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseObjectPropertyDefinition(v8::internal::ParserBase<v8::internal::PreParser>::ParsePropertyInfo*,
   bool*) */

void __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseObjectPropertyDefinition
          (ParserBase<v8::internal::PreParser> *this,ParsePropertyInfo *param_1,bool *param_2)

{
  bool bVar1;
  AstRawString *pAVar2;
  uint uVar3;
  ParsePropertyInfo PVar4;
  char cVar5;
  byte bVar6;
  ParserBase<v8::internal::PreParser> PVar7;
  ushort uVar8;
  long lVar9;
  ParserBase<v8::internal::PreParser> *pPVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  ParserBase<v8::internal::PreParser> *local_b8;
  long lStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  ParserBase<v8::internal::PreParser> *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  bVar6 = (byte)(*(ulong **)(*(long *)(this + 200) + 8))[7];
  uVar19 = **(ulong **)(*(long *)(this + 200) + 8);
  ParseProperty(this,param_1);
  PVar4 = param_1[0x20];
  if (9 < (byte)PVar4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pAVar2 = *(AstRawString **)(param_1 + 8);
  uVar18 = *(ulong *)(param_1 + 0x10);
  switch(PVar4) {
  case (ParsePropertyInfo)0x0:
  case (ParsePropertyInfo)0x1:
    plVar16 = *(long **)(this + 0x90);
    uVar21 = *(uint *)(**(long **)(this + 200) + 4);
    if (*(byte *)(plVar16 + 2) - 3 < 3) {
      lVar13 = *plVar16;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar13 + 0x80),uVar19 & 0xffffffff,uVar21,0xfd
                 ,0);
      lVar13 = *(long *)(lVar13 + 200);
      lVar17 = *(long *)(lVar13 + 0x18);
      if (*(char *)(lVar17 + 0x30) == '\0') {
        *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar17 + 0x30) = 1;
        *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
        *(undefined1 *)(lVar13 + 0x60) = 0x6d;
        *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar13 + 0x100) = 0x6d;
      }
    }
    else if (*(uint *)((long)plVar16 + 0x44) < *(uint *)(plVar16 + 8)) {
      *(undefined4 *)((long)plVar16 + 0x34) = 0xfd;
      plVar16[8] = uVar19 & 0xffffffff | (ulong)uVar21 << 0x20;
    }
    uVar14 = *(undefined8 *)**(undefined8 **)(this + 200);
    bVar6 = *(byte *)(*(long *)this + 0x81);
    uVar15 = 7;
    if (PVar4 != (ParsePropertyInfo)0x0) {
      uVar15 = 8;
    }
    goto LAB_0117e4e4;
  case (ParsePropertyInfo)0x2:
    if ((((param_1[0x21] == (ParsePropertyInfo)0x0) &&
         (puVar20 = (undefined8 *)**(undefined8 **)(this + 200),
         *(char *)((long)puVar20 + 0x1c) != '\0')) && (*(int *)(puVar20 + 3) == 9)) &&
       (iVar11 = strncmp("__proto__",(char *)puVar20[1],9), iVar11 == 0)) {
      if (((*param_2 != false) && (lVar13 = *(long *)(this + 0x90), *(byte *)(lVar13 + 0x10) < 3))
         && (*(uint *)(lVar13 + 0x3c) < *(uint *)(lVar13 + 0x38))) {
        *(undefined4 *)(lVar13 + 0x30) = 0xea;
        *(undefined8 *)(lVar13 + 0x38) = *puVar20;
      }
      *param_2 = true;
    }
    Scanner::Next(*(Scanner **)(this + 200));
    PVar7 = this[0x100];
    this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
    ParsePossibleDestructuringSubPattern(this,*(AccumulationScope **)param_1);
    this[0x100] = PVar7;
    break;
  default:
    uVar8 = *(ushort *)(*(long *)this + 0x81);
    lVar13 = Scope::AsDeclarationScope();
    cVar5 = *(char *)(lVar13 + 0x85);
    if (this[0x71] == (ParserBase<v8::internal::PreParser>)0x0) {
      lVar13 = Scope::AsDeclarationScope();
      bVar1 = 4 < *(byte *)(lVar13 + 0x85) - 10;
    }
    else {
      bVar1 = false;
    }
    uVar21 = (uint)bVar6;
    if ((uVar21 & 0xfc) != 0x5c) {
      if (uVar21 == 0x61) {
        if (((uVar8 & 1) == 0) && (3 < (byte)(cVar5 - 0xdU))) goto LAB_0117e5b8;
      }
      else if (bVar6 == 0x60) {
        if (bVar1) goto LAB_0117e344;
      }
      else if ((uVar21 - 0x61 < 5) && ((uVar8 & 1) == 0)) goto LAB_0117e5b8;
      goto switchD_0117e274_caseD_6;
    }
    if (bVar6 == 0x60) {
LAB_0117e344:
      lVar13 = *(long *)(this + 0x90);
      if (*(byte *)(lVar13 + 0x10) < 3) {
        cVar5 = *(char *)(lVar13 + 0x48);
        lVar17 = lVar13;
        while (cVar5 != '\0') {
          if (*(char *)(lVar17 + 0x10) == '\x02') {
            *(ulong *)(lVar17 + 0x4c) = uVar19;
            *(undefined4 *)(lVar17 + 0x54) = 0x130;
          }
          lVar17 = *(long *)(lVar17 + 8);
          if (lVar17 == 0) break;
          cVar5 = *(char *)(lVar13 + 0x48);
        }
      }
    }
LAB_0117e5b8:
    ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>>::NewVariable
              (*(ExpressionScope<v8::internal::ParserTypes<v8::internal::PreParser>> **)
                (this + 0x90),pAVar2,(int)uVar19);
    if (((uVar18 & 0xfe) == 2) && ((*(ushort *)(*(long *)this + 0x81) & 1) != 0)) {
      plVar16 = *(long **)(this + 0x90);
      if (*(byte *)(plVar16 + 2) - 3 < 3) {
        lVar13 = *plVar16;
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(lVar13 + 0x80),uVar19 & 0xffffffff,
                   uVar19 >> 0x20,0x128,0);
        lVar13 = *(long *)(lVar13 + 200);
        lVar17 = *(long *)(lVar13 + 0x18);
        if (*(char *)(lVar17 + 0x30) == '\0') {
          *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x30) = 1;
          *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
          *(undefined1 *)(lVar13 + 0x60) = 0x6d;
          *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar13 + 0x100) = 0x6d;
        }
      }
      else if (*(uint *)((long)plVar16 + 0x44) < *(uint *)(plVar16 + 8)) {
        *(undefined4 *)((long)plVar16 + 0x34) = 0x128;
        plVar16[8] = uVar19;
      }
    }
    if (*(char *)(*(long *)(*(Scanner **)(this + 200) + 8) + 0x38) == '\x11') {
      Scanner::Next(*(Scanner **)(this + 200));
      PVar7 = this[0x100];
      this[0x100] = (ParserBase<v8::internal::PreParser>)0x1;
      lStack_b0 = *(long *)(this + 0x90);
      local_a8 = 0;
      if (lStack_b0 == 0) {
        local_a6 = 0;
        local_a7 = 0;
      }
      else {
        local_a7 = *(undefined1 *)(lStack_b0 + 0x11);
        local_a6 = *(undefined1 *)(lStack_b0 + 0x12);
      }
      local_a0 = this + 0xb0;
      *(ParserBase<v8::internal::PreParser> ***)(this + 0x90) = &local_b8;
      local_98 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 4;
      local_70 = 0;
      if (lStack_b0 != 0) {
        if (*(byte *)(lStack_b0 + 0x10) < 3) {
          local_70 = *(undefined1 *)(lStack_b0 + 0x48);
        }
        else {
          local_70 = 0;
        }
      }
      local_88 = 0;
      uStack_78 = 0xffffffff;
      local_80 = 0xffffffff;
      local_b8 = this;
      local_90 = local_98;
      ParseAssignmentExpressionCoverGrammar(this);
      pPVar10 = local_b8;
      if ((uint)local_80 <= local_80._4_4_) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(local_b8 + 0x80),local_80 & 0xffffffff,
                   local_80._4_4_,local_88 & 0xffffffff,0);
        lVar13 = *(long *)(pPVar10 + 200);
        lVar17 = *(long *)(lVar13 + 0x18);
        if (*(char *)(lVar17 + 0x30) == '\0') {
          *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar17 + 0x30) = 1;
          *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
          *(undefined1 *)(lVar13 + 0x60) = 0x6d;
          *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar13 + 0x100) = 0x6d;
        }
      }
      uVar18 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
      if (local_98 < uVar18 || local_98 - uVar18 == 0) {
        if (local_98 < uVar18) {
          *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
        ::__append((vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                    *)local_a0,local_98 - uVar18);
      }
      local_90 = local_98;
      *(long *)(local_b8 + 0x90) = lStack_b0;
      lVar13 = *(long *)(this + 0x90);
      this[0x100] = PVar7;
      if ((*(byte *)(lVar13 + 0x10) < 3) && (*(uint *)(lVar13 + 0x3c) < *(uint *)(lVar13 + 0x38))) {
        uVar21 = *(uint *)(**(long **)(this + 200) + 4);
        *(undefined4 *)(lVar13 + 0x30) = 0xfc;
        *(ulong *)(lVar13 + 0x38) = uVar19 & 0xffffffff | (ulong)uVar21 << 0x20;
      }
    }
    break;
  case (ParsePropertyInfo)0x5:
    plVar16 = *(long **)(this + 0x90);
    uVar21 = *(uint *)(param_1 + 0x1c);
    uVar3 = *(uint *)(**(long **)(this + 200) + 4);
    if (*(byte *)(plVar16 + 2) - 3 < 3) {
      lVar13 = *plVar16;
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(lVar13 + 0x80),uVar19 & 0xffffffff,uVar3,0xfd,
                 0);
      lVar13 = *(long *)(lVar13 + 200);
      lVar17 = *(long *)(lVar13 + 0x18);
      if (*(char *)(lVar17 + 0x30) == '\0') {
        *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar17 + 0x30) = 1;
        *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
        *(undefined1 *)(lVar13 + 0x60) = 0x6d;
        *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar13 + 0x100) = 0x6d;
      }
    }
    else if (*(uint *)((long)plVar16 + 0x44) < *(uint *)(plVar16 + 8)) {
      *(undefined4 *)((long)plVar16 + 0x34) = 0xfd;
      plVar16[8] = uVar19 & 0xffffffff | (ulong)uVar3 << 0x20;
    }
    uVar14 = *(undefined8 *)**(undefined8 **)(this + 200);
    bVar6 = *(byte *)(*(long *)this + 0x81);
    uVar15 = *(undefined1 *)
              ((long)&FunctionKindForImpl(bool,v8::base::Flags<v8::internal::ParseFunctionFlag,int>)
                      ::kFunctionKinds + ((ulong)uVar21 & 1) * 2 + ((ulong)(uVar21 >> 1) & 1) + 4);
LAB_0117e4e4:
    PreParser::ParseFunctionLiteral
              ((PreParser *)this,pAVar2,uVar18,uVar14,1,uVar15,uVar19 & 0xffffffff,3,bVar6 & 1);
    break;
  case (ParsePropertyInfo)0x6:
  case (ParsePropertyInfo)0x9:
switchD_0117e274_caseD_6:
    uVar12 = Scanner::Next(*(Scanner **)(this + 200));
    ReportUnexpectedToken(this,uVar12);
    uVar14 = 0;
    goto LAB_0117e800;
  case (ParsePropertyInfo)0x8:
    param_1[0x21] = (ParsePropertyInfo)0x1;
    param_1[0x24] = (ParsePropertyInfo)0x1;
  }
  uVar14 = 2;
LAB_0117e800:
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar14);
}

