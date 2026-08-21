
/* v8::internal::PreParser::PreParseProgram() */

void __thiscall v8::internal::PreParser::PreParseProgram(PreParser *this)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  Zone *pZVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *piVar12;
  DeclarationScope *this_00;
  ModuleScope *this_01;
  DeclarationScope *pDVar13;
  ulong *puVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  PreParser *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  PreParser *local_78;
  long lStack_70;
  DeclarationScope *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pZVar9 = *(Zone **)(this + 0x88);
  this_00 = *(DeclarationScope **)(pZVar9 + 0x10);
  if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)this_00) < 0xe0) {
    this_00 = (DeclarationScope *)Zone::NewExpand(pZVar9,0xe0);
  }
  else {
    *(DeclarationScope **)(pZVar9 + 0x10) = this_00 + 0xe0;
  }
  DeclarationScope::DeclarationScope
            (this_00,*(Zone **)(this + 0x88),*(AstValueFactory **)(this + 0x28));
  Scanner::SkipHashBang(*(Scanner **)(this + 200));
  if (this[0x71] != (PreParser)0x0) {
    pZVar9 = *(Zone **)(this + 0x88);
    this_01 = *(ModuleScope **)(pZVar9 + 0x10);
    if ((ulong)(*(long *)(pZVar9 + 0x18) - (long)this_01) < 0xe8) {
      this_01 = (ModuleScope *)Zone::NewExpand(pZVar9,0xe8);
    }
    else {
      *(ModuleScope **)(pZVar9 + 0x10) = this_01 + 0xe8;
    }
    ModuleScope::ModuleScope(this_01,this_00,*(AstValueFactory **)(this + 0x28));
    this_00 = (DeclarationScope *)this_01;
  }
  uStack_90 = *(undefined8 *)this;
  local_78 = this + 0x10;
  *(DeclarationScope **)this = this_00;
  local_80 = 0;
  local_88 = 0;
  lStack_70 = *(long *)local_78;
  local_60 = 0;
  *(PreParser ***)local_78 = &local_98;
  pDVar13 = this_00;
  if (lStack_70 != 0) {
    uVar3 = *(undefined1 *)(lStack_70 + 0x39);
    *(undefined1 *)(lStack_70 + 0x39) = 0;
    *(undefined1 *)(lStack_70 + 0x3a) = uVar3;
    pDVar13 = *(DeclarationScope **)this;
  }
  *(DeclarationScope **)(this + 8) = pDVar13;
  puVar14 = *(ulong **)(*(long *)(this + 200) + 8);
  uVar7 = *puVar14;
  cVar4 = (char)puVar14[7];
  local_98 = this;
  local_68 = this_00;
  while (cVar4 == 'Z') {
    uVar19 = *puVar14;
    if ((((*(char *)((long)puVar14 + 0x1c) == '\0') ||
         (*(int *)((long)puVar14 + 4) - (int)uVar19 != 0xc)) || ((int)puVar14[3] != 10)) ||
       (iVar8 = strncmp("use strict",(char *)puVar14[1],10), iVar8 != 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar8 = ParserBase<v8::internal::PreParser>::ParseStatementListItem
                      ((ParserBase<v8::internal::PreParser> *)this);
    if (iVar8 != 4) {
      if (iVar8 == 0) goto LAB_01173c3c;
      break;
    }
    if (bVar6) {
      *(ushort *)(*(long *)this + 0x81) = *(ushort *)(*(long *)this + 0x81) | 1;
      uVar10 = Scope::HasSimpleParameters(*(Scope **)this);
      if ((uVar10 & 1) == 0) {
        PendingCompilationErrorHandler::ReportMessageAt
                  (*(PendingCompilationErrorHandler **)(this + 0x80),uVar19 & 0xffffffff,
                   uVar19 >> 0x20,0xf3,"use strict");
        lVar15 = *(long *)(this + 200);
        lVar18 = *(long *)(lVar15 + 0x18);
        if (*(char *)(lVar18 + 0x30) == '\0') {
          *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
          *(undefined1 *)(lVar18 + 0x30) = 1;
          *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x18);
          *(undefined1 *)(lVar15 + 0x60) = 0x6d;
          *(undefined1 *)(lVar15 + 0xb0) = 0x6d;
          *(undefined1 *)(lVar15 + 0x100) = 0x6d;
        }
        goto LAB_01173c3c;
      }
    }
    puVar14 = *(ulong **)(*(long *)(this + 200) + 8);
    cVar4 = (char)puVar14[7];
  }
  do {
    if (*(char *)(*(long *)(*(long *)(this + 200) + 8) + 0x38) == '\x0e') break;
    iVar8 = ParserBase<v8::internal::PreParser>::ParseStatementListItem
                      ((ParserBase<v8::internal::PreParser> *)this);
  } while (iVar8 != 0);
LAB_01173c3c:
  if ((*(char *)(*(long *)(*(long *)(this + 200) + 0x18) + 0x30) == '\0') &&
     (piVar12 = (int *)DeclarationScope::CheckConflictingVarDeclarations(this_00),
     piVar12 != (int *)0x0)) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(this + 0x80),*piVar12,*piVar12 + 1,0xb0,
               *(undefined8 *)(*(long *)(piVar12 + 2) + 8));
    lVar15 = *(long *)(this + 200);
    lVar18 = *(long *)(lVar15 + 0x18);
    if (*(char *)(lVar18 + 0x30) == '\0') {
      *(undefined4 *)(lVar15 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar18 + 0x30) = 1;
      *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 0x18);
      *(undefined1 *)(lVar15 + 0x60) = 0x6d;
      *(undefined1 *)(lVar15 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar15 + 0x100) = 0x6d;
    }
  }
  *(undefined8 *)(this + 8) = 0;
  if ((*(PendingCompilationErrorHandler **)(this + 0x80))[1] == (PendingCompilationErrorHandler)0x0)
  {
    if ((*(byte *)(*(long *)this + 0x81) & 1) != 0) {
      plVar16 = *(long **)(this + 200);
      uVar11 = 2;
      uVar1 = *(uint *)((long)plVar16 + 0x154);
      if (((*(int *)(*plVar16 + 4) < (int)uVar1) ||
          (uVar2 = *(uint *)(plVar16 + 0x2a), (int)uVar2 < (int)uVar7)) || (uVar1 < uVar2))
      goto LAB_01173cd8;
      lVar15 = plVar16[0x2b];
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0x80),uVar2,uVar1,(int)lVar15,0);
      lVar18 = *(long *)(this + 200);
      lVar17 = *(long *)(lVar18 + 0x18);
      if (*(char *)(lVar17 + 0x30) == '\0') {
        *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar17 + 0x30) = 1;
        *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar17 + 0x18);
        *(undefined1 *)(lVar18 + 0x60) = 0x6d;
        *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar18 + 0x100) = 0x6d;
        lVar18 = *(long *)(this + 200);
      }
      *(undefined8 *)(lVar18 + 0x150) = 0xffffffff;
      *(undefined4 *)(lVar18 + 0x158) = 0;
      if (((int)lVar15 == 299) && (lVar15 = *(long *)(this + 0x108), lVar15 != 0)) {
        *(int *)(lVar15 + 0x80) = *(int *)(lVar15 + 0x80) + 1;
      }
    }
    uVar11 = 2;
  }
  else {
    uVar11 = 0;
  }
LAB_01173cd8:
  *(long *)local_78 = lStack_70;
  *(undefined8 *)local_98 = uStack_90;
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

