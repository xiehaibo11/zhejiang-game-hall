
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseFunctionBody(v8::internal::PreParserScopedStatementList*,
   v8::internal::PreParserIdentifier, int, v8::internal::PreParserFormalParameters const&,
   v8::internal::FunctionKind, v8::internal::FunctionSyntaxKind,
   v8::internal::ParserBase<v8::internal::PreParser>::FunctionBodyType) */

void v8::internal::ParserBase<v8::internal::PreParser>::ParseFunctionBody
               (ParserBase<v8::internal::PreParser> *param_1,undefined8 param_2,
               AstRawString *param_3,undefined8 param_4,undefined8 param_5,undefined8 *param_6,
               uint param_7,char param_8,int param_9)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  bool bVar4;
  ParserBase<v8::internal::PreParser> *pPVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  Scope *this;
  Scope *pSVar9;
  int *piVar10;
  Zone *this_00;
  DeclarationScope *this_01;
  byte bVar11;
  ulong *puVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  DeclarationScope *this_02;
  undefined8 uVar19;
  ulong uVar20;
  ParserBase<v8::internal::PreParser> *local_b8;
  long local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
  *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar19 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  this_02 = (DeclarationScope *)*param_6;
  this_01 = this_02;
  if (*(char *)((long)param_6 + 9) != '\x01') {
    if (*(char *)(*(long *)(*(long *)(param_1 + 200) + 0x18) + 0x30) != '\0') goto LAB_01175c78;
    lVar18 = Scope::AsDeclarationScope();
    if (((*(byte *)(lVar18 + 0x81) >> 2 & 1) != 0) &&
       (plVar14 = *(long **)(param_1 + 0x120), plVar14 != (long *)0x0)) {
      lVar18 = *plVar14;
      if (lVar18 == 0) {
        *(byte *)((long)plVar14 + 0x4c) = *(byte *)((long)plVar14 + 0x4c) | 1;
      }
      else {
        *(byte *)(lVar18 + 0x4c) = *(byte *)(lVar18 + 0x4c) | 1;
      }
    }
    if (*(char *)(*(long *)(*(long *)(param_1 + 200) + 0x18) + 0x30) != '\0') goto LAB_01175c78;
    this_00 = *(Zone **)(param_1 + 0x88);
    this_01 = *(DeclarationScope **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0xe0) {
      this_01 = (DeclarationScope *)Zone::NewExpand(this_00,0xe0);
    }
    else {
      *(DeclarationScope **)(this_00 + 0x10) = this_01 + 0xe0;
    }
    DeclarationScope::DeclarationScope
              (this_01,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)param_1,6,0);
    *(undefined4 *)(this_01 + 0x70) = *(undefined4 *)**(undefined8 **)(param_1 + 200);
  }
  lVar18 = *(long *)param_1;
  *(DeclarationScope **)param_1 = this_01;
  if (param_9 != 0) {
    uVar7 = param_7 - 0xd & 0xff;
    uVar15 = 0xd;
    if (param_8 == '\x04') {
      uVar15 = 0xe;
    }
    if (uVar7 < 2) {
      puVar12 = *(ulong **)(*(long *)(param_1 + 200) + 8);
      cVar1 = (char)puVar12[7];
      while (cVar1 == 'Z') {
        uVar20 = *puVar12;
        if ((((*(char *)((long)puVar12 + 0x1c) == '\0') ||
             (*(int *)((long)puVar12 + 4) - (int)uVar20 != 0xc)) || ((int)puVar12[3] != 10)) ||
           (iVar6 = strncmp("use strict",(char *)puVar12[1],10), iVar6 != 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        iVar6 = ParseStatementListItem(param_1);
        if (iVar6 != 4) {
          if (iVar6 == 0) goto LAB_011757a8;
          break;
        }
        if (bVar4) {
          *(ushort *)(*(long *)param_1 + 0x81) = *(ushort *)(*(long *)param_1 + 0x81) | 1;
          uVar8 = Scope::HasSimpleParameters(*(Scope **)param_1);
          if ((uVar8 & 1) == 0) goto LAB_011756c8;
        }
        puVar12 = *(ulong **)(*(long *)(param_1 + 200) + 8);
        cVar1 = (char)puVar12[7];
      }
      do {
        if (*(char *)(*(long *)(*(long *)(param_1 + 200) + 8) + 0x38) == '\r') break;
        iVar6 = ParseStatementListItem(param_1);
      } while (iVar6 != 0);
    }
    else if (uVar7 < 4) {
      puVar12 = *(ulong **)(*(long *)(param_1 + 200) + 8);
      cVar1 = (char)puVar12[7];
      while (cVar1 == 'Z') {
        uVar20 = *puVar12;
        if (((*(char *)((long)puVar12 + 0x1c) == '\0') ||
            (*(int *)((long)puVar12 + 4) - (int)uVar20 != 0xc)) ||
           (((int)puVar12[3] != 10 ||
            (iVar6 = strncmp("use strict",(char *)puVar12[1],10), iVar6 != 0)))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        iVar6 = ParseStatementListItem(param_1);
        if (iVar6 != 4) {
          if (iVar6 == 0) goto LAB_011757a8;
          break;
        }
        if (bVar4) {
          *(ushort *)(*(long *)param_1 + 0x81) = *(ushort *)(*(long *)param_1 + 0x81) | 1;
          uVar8 = Scope::HasSimpleParameters(*(Scope **)param_1);
          if ((uVar8 & 1) == 0) goto LAB_011756c8;
        }
        puVar12 = *(ulong **)(*(long *)(param_1 + 200) + 8);
        cVar1 = (char)puVar12[7];
      }
      do {
        if (*(char *)(*(long *)(*(long *)(param_1 + 200) + 8) + 0x38) == '\r') break;
        iVar6 = ParseStatementListItem(param_1);
      } while (iVar6 != 0);
    }
    else {
      puVar12 = *(ulong **)(*(long *)(param_1 + 200) + 8);
      cVar1 = (char)puVar12[7];
      if ((param_7 - 10 & 0xff) < 5) {
        while (cVar1 == 'Z') {
          uVar20 = *puVar12;
          if (((*(char *)((long)puVar12 + 0x1c) == '\0') ||
              (*(int *)((long)puVar12 + 4) - (int)uVar20 != 0xc)) ||
             (((int)puVar12[3] != 10 ||
              (iVar6 = strncmp("use strict",(char *)puVar12[1],10), iVar6 != 0)))) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          iVar6 = ParseStatementListItem(param_1);
          if (iVar6 != 4) {
            if (iVar6 == 0) goto LAB_0117576c;
            break;
          }
          if (bVar4) {
            *(ushort *)(*(long *)param_1 + 0x81) = *(ushort *)(*(long *)param_1 + 0x81) | 1;
            uVar8 = Scope::HasSimpleParameters(*(Scope **)param_1);
            if ((uVar8 & 1) == 0) {
              PendingCompilationErrorHandler::ReportMessageAt
                        (*(PendingCompilationErrorHandler **)(param_1 + 0x80),uVar20 & 0xffffffff,
                         uVar20 >> 0x20,0xf3,"use strict");
              lVar13 = *(long *)(param_1 + 200);
              lVar16 = *(long *)(lVar13 + 0x18);
              if (*(char *)(lVar16 + 0x30) == '\0') {
                *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
                *(undefined1 *)(lVar16 + 0x30) = 1;
                *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
                *(undefined1 *)(lVar13 + 0x60) = 0x6d;
                *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
                *(undefined1 *)(lVar13 + 0x100) = 0x6d;
              }
              goto LAB_0117576c;
            }
          }
          puVar12 = *(ulong **)(*(long *)(param_1 + 200) + 8);
          cVar1 = (char)puVar12[7];
        }
        do {
          if (*(char *)(*(long *)(*(long *)(param_1 + 200) + 8) + 0x38) == '\r') break;
          iVar6 = ParseStatementListItem(param_1);
        } while (iVar6 != 0);
LAB_0117576c:
        *(undefined4 *)(this_01 + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
      }
      else {
        while (cVar1 == 'Z') {
          uVar20 = *puVar12;
          if ((((*(char *)((long)puVar12 + 0x1c) == '\0') ||
               (*(int *)((long)puVar12 + 4) - (int)uVar20 != 0xc)) || ((int)puVar12[3] != 10)) ||
             (iVar6 = strncmp("use strict",(char *)puVar12[1],10), iVar6 != 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          iVar6 = ParseStatementListItem(param_1);
          if (iVar6 != 4) {
            if (iVar6 == 0) goto LAB_011757a8;
            break;
          }
          if (bVar4) {
            *(ushort *)(*(long *)param_1 + 0x81) = *(ushort *)(*(long *)param_1 + 0x81) | 1;
            uVar8 = Scope::HasSimpleParameters(*(Scope **)param_1);
            if ((uVar8 & 1) == 0) goto LAB_011756c8;
          }
          puVar12 = *(ulong **)(*(long *)(param_1 + 200) + 8);
          cVar1 = (char)puVar12[7];
        }
        do {
          if (*(byte *)(*(long *)(*(long *)(param_1 + 200) + 8) + 0x38) == uVar15) break;
          iVar6 = ParseStatementListItem(param_1);
        } while (iVar6 != 0);
      }
    }
    goto LAB_011757a8;
  }
  local_b0 = *(long *)(param_1 + 0x90);
  local_a8 = 0;
  if (local_b0 == 0) {
    local_a6 = 0;
    local_a7 = 0;
  }
  else {
    local_a7 = *(undefined1 *)(local_b0 + 0x11);
    local_a6 = *(undefined1 *)(local_b0 + 0x12);
  }
  local_a0 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
              *)(param_1 + 0xb0);
  *(ParserBase<v8::internal::PreParser> ***)(param_1 + 0x90) = &local_b8;
  local_98 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
  local_70 = 0;
  if (local_b0 != 0) {
    if (*(byte *)(local_b0 + 0x10) < 3) {
      local_70 = *(undefined1 *)(local_b0 + 0x48);
    }
    else {
      local_70 = 0;
    }
  }
  local_88 = 0;
  uStack_78 = 0xffffffff;
  local_80 = 0xffffffff;
  local_b8 = param_1;
  local_90 = local_98;
  uVar20 = ParseAssignmentExpressionCoverGrammar(param_1);
  pPVar5 = local_b8;
  if ((uint)local_80 <= local_80._4_4_) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(local_b8 + 0x80),local_80 & 0xffffffff,
               local_80._4_4_,local_88 & 0xffffffff,0);
    lVar13 = *(long *)(pPVar5 + 200);
    lVar16 = *(long *)(lVar13 + 0x18);
    if (*(char *)(lVar16 + 0x30) == '\0') {
      *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar16 + 0x30) = 1;
      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
      *(undefined1 *)(lVar13 + 0x60) = 0x6d;
      *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar13 + 0x100) = 0x6d;
    }
  }
  uVar8 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
  if (local_98 < uVar8 || local_98 - uVar8 == 0) {
    if (local_98 < uVar8) {
      *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
    ::__append(local_a0,local_98 - uVar8);
  }
  local_90 = local_98;
  *(long *)(local_b8 + 0x90) = local_b0;
  if (4 < (param_7 - 10 & 0xff)) {
    if (((uVar20 & 7) != 0) &&
       (lVar13 = Scope::AsDeclarationScope(), *(byte *)(lVar13 + 0x85) - 0xd < 2)) {
      *(int *)(*(long *)(param_1 + 0x10) + 0x14) = *(int *)(*(long *)(param_1 + 0x10) + 0x14) + 1;
    }
    Scope::AsDeclarationScope();
  }
  goto LAB_01175954;
LAB_011756c8:
  PendingCompilationErrorHandler::ReportMessageAt
            (*(PendingCompilationErrorHandler **)(param_1 + 0x80),uVar20 & 0xffffffff,uVar20 >> 0x20
             ,0xf3,"use strict");
  lVar13 = *(long *)(param_1 + 200);
  lVar16 = *(long *)(lVar13 + 0x18);
  if (*(char *)(lVar16 + 0x30) == '\0') {
    *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
    *(undefined1 *)(lVar16 + 0x30) = 1;
    *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
    *(undefined1 *)(lVar13 + 0x60) = 0x6d;
    *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
    *(undefined1 *)(lVar13 + 0x100) = 0x6d;
  }
LAB_011757a8:
  if ((param_7 - 5 & 0xff) < 2) {
    local_b0 = *(long *)(param_1 + 0x90);
    local_a8 = 0;
    if (local_b0 == 0) {
      local_a6 = 0;
      local_a7 = 0;
    }
    else {
      local_a7 = *(undefined1 *)(local_b0 + 0x11);
      local_a6 = *(undefined1 *)(local_b0 + 0x12);
    }
    local_a0 = (vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
                *)(param_1 + 0xb0);
    *(ParserBase<v8::internal::PreParser> ***)(param_1 + 0x90) = &local_b8;
    local_98 = *(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 4;
    local_70 = 0;
    if (local_b0 != 0) {
      if (*(byte *)(local_b0 + 0x10) < 3) {
        local_70 = *(undefined1 *)(local_b0 + 0x48);
      }
      else {
        local_70 = 0;
      }
    }
    local_88 = 0;
    uStack_78 = 0xffffffff;
    local_80 = 0xffffffff;
    local_b8 = param_1;
    local_90 = local_98;
    this = (Scope *)Scope::GetClosureScope(*(Scope **)param_1);
    pSVar9 = (Scope *)Scope::GetReceiverScope(this);
    pPVar5 = local_b8;
    lVar13 = *(long *)(pSVar9 + 0xb0);
    *(ushort *)(lVar13 + 0x28) = *(ushort *)(lVar13 + 0x28) | 0x800;
    if (this == pSVar9) {
      lVar13 = *(long *)(param_1 + 0x90);
      do {
        if (*(byte *)(lVar13 + 0x10) - 1 < 2) {
          *(undefined1 *)(lVar13 + 0x59) = 1;
        }
        lVar13 = *(long *)(lVar13 + 8);
      } while (lVar13 != 0);
    }
    else {
      *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) | 0x800;
      *(ushort *)(lVar13 + 0x28) = *(ushort *)(lVar13 + 0x28) | 0x400;
    }
    if ((uint)local_80 <= local_80._4_4_) {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(local_b8 + 0x80),local_80 & 0xffffffff,
                 local_80._4_4_,local_88 & 0xffffffff,0);
      lVar13 = *(long *)(pPVar5 + 200);
      lVar16 = *(long *)(lVar13 + 0x18);
      if (*(char *)(lVar16 + 0x30) == '\0') {
        *(undefined4 *)(lVar13 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar16 + 0x30) = 1;
        *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)(lVar16 + 0x18);
        *(undefined1 *)(lVar13 + 0x60) = 0x6d;
        *(undefined1 *)(lVar13 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar13 + 0x100) = 0x6d;
      }
    }
    uVar20 = *(long *)(local_a0 + 8) - *(long *)local_a0 >> 4;
    if (local_98 < uVar20 || local_98 - uVar20 == 0) {
      if (local_98 < uVar20) {
        *(ulong *)(local_a0 + 8) = *(long *)local_a0 + local_98 * 0x10;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::pair<v8::internal::VariableProxy*,int>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::VariableProxy*,int>>>
      ::__append(local_a0,local_98 - uVar20);
    }
    local_90 = local_98;
    *(long *)(local_b8 + 0x90) = local_b0;
  }
  uVar7 = Scanner::Next(*(Scanner **)(param_1 + 200));
  if ((uVar7 & 0xff) != uVar15) {
    ReportUnexpectedToken(param_1,uVar7);
  }
LAB_01175954:
  *(long *)param_1 = lVar18;
  *(undefined4 *)(lVar18 + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
  if ((*(char *)(*(long *)(*(long *)(param_1 + 200) + 0x18) + 0x30) == '\0') &&
     (piVar10 = (int *)DeclarationScope::CheckConflictingVarDeclarations(this_01),
     piVar10 != (int *)0x0)) {
    PendingCompilationErrorHandler::ReportMessageAt
              (*(PendingCompilationErrorHandler **)(param_1 + 0x80),*piVar10,*piVar10 + 1,0xb0,
               *(undefined8 *)(*(long *)(piVar10 + 2) + 8));
    lVar18 = *(long *)(param_1 + 200);
    lVar13 = *(long *)(lVar18 + 0x18);
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      *(undefined1 *)(lVar18 + 0x60) = 0x6d;
      *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar18 + 0x100) = 0x6d;
    }
  }
  if (*(char *)((long)param_6 + 9) == '\0') {
    *(ushort *)(this_02 + 0x81) =
         *(ushort *)(this_02 + 0x81) & 0xfffe | *(ushort *)(this_01 + 0x81) & 1;
    if (((byte)this_01[0x81] & 1) == 0) {
      DeclarationScope::HoistSloppyBlockFunctions(this_01,(AstNodeFactory *)0x0);
    }
    *(undefined4 *)(this_01 + 0x74) = *(undefined4 *)(**(long **)(param_1 + 200) + 4);
    lVar18 = Scope::FinalizeBlockScope((Scope *)this_01);
    if ((lVar18 != 0) &&
       (lVar18 = Scope::FindVariableDeclaredIn((Scope *)this_01,this_02,1), lVar18 != 0)) {
      puVar17 = *(undefined1 **)(param_1 + 0x80);
      *puVar17 = 1;
      puVar17[2] = 1;
      lVar18 = *(long *)(param_1 + 200);
      lVar13 = *(long *)(lVar18 + 0x18);
      if (*(char *)(lVar13 + 0x30) == '\0') {
        *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar13 + 0x30) = 1;
        *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
        *(undefined1 *)(lVar18 + 0x60) = 0x6d;
        *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar18 + 0x100) = 0x6d;
      }
    }
LAB_01175b80:
    bVar11 = *(byte *)(*(long *)param_1 + 0x81) & 1;
    cVar1 = *(char *)((long)param_6 + 0x14);
joined_r0x01175b90:
    if (cVar1 != '\0') {
      puVar17 = *(undefined1 **)(param_1 + 0x80);
      *puVar17 = 1;
      puVar17[2] = 1;
      lVar18 = *(long *)(param_1 + 200);
      lVar13 = *(long *)(lVar18 + 0x18);
      if (*(char *)(lVar13 + 0x30) == '\0') {
        *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
        *(undefined1 *)(lVar13 + 0x30) = 1;
        *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
        *(undefined1 *)(lVar18 + 0x60) = 0x6d;
        *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
        *(undefined1 *)(lVar18 + 0x100) = 0x6d;
      }
    }
  }
  else {
    uVar2 = *(ushort *)(this_02 + 0x81);
    if ((uVar2 & 1) == 0) {
      DeclarationScope::HoistSloppyBlockFunctions(this_02,(AstNodeFactory *)0x0);
      uVar2 = *(ushort *)(this_02 + 0x81);
    }
    if ((uVar2 & 1) != 0) goto LAB_01175b80;
    bVar11 = *(byte *)(*(long *)param_1 + 0x81) & 1;
    if (((param_7 & 0xff) < 0x13) && ((1 << (ulong)(param_7 & 0x1f) & 0x73000U) != 0)) {
      cVar1 = *(char *)((long)param_6 + 0x14);
      goto joined_r0x01175b90;
    }
  }
  if ((bVar11 != 0) && (*(char *)((long)param_6 + 0x15) != '\0')) {
    puVar17 = *(undefined1 **)(param_1 + 0x80);
    *puVar17 = 1;
    puVar17[2] = 1;
    lVar18 = *(long *)(param_1 + 200);
    lVar13 = *(long *)(lVar18 + 0x18);
    if (*(char *)(lVar13 + 0x30) == '\0') {
      *(undefined4 *)(lVar18 + 0x20) = 0xffffffff;
      *(undefined1 *)(lVar13 + 0x30) = 1;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar13 + 0x18);
      *(undefined1 *)(lVar18 + 0x60) = 0x6d;
      *(undefined1 *)(lVar18 + 0xb0) = 0x6d;
      *(undefined1 *)(lVar18 + 0x100) = 0x6d;
    }
  }
  if (1 < (param_7 - 9 & 0xff)) {
    DeclarationScope::DeclareArguments(this_02,*(AstValueFactory **)(param_1 + 0x28));
  }
  if ((param_8 == '\x01') &&
     (lVar18 = VariableMap::Lookup((VariableMap *)(this_02 + 0x20),param_3), lVar18 == 0)) {
    DeclarationScope::DeclareFunctionVar(this_02,param_3,(Scope *)0x0);
  }
LAB_01175c78:
  *(undefined8 *)(param_1 + 0x90) = uVar19;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

