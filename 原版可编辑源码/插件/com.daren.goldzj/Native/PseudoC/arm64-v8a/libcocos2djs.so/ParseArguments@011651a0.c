
/* v8::internal::ParserBase<v8::internal::Parser>::ParseArguments(v8::internal::ScopedList<v8::internal::Expression*,
   void*>*, bool*, v8::internal::ParsingArrowHeadFlag) */

void __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseArguments
          (ParserBase<v8::internal::Parser> *this,undefined8 *param_1,undefined1 *param_2,
          int param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ParserBase<v8::internal::Parser> PVar5;
  ulong uVar6;
  bool bVar7;
  Scanner *this_00;
  Expression *pEVar8;
  vector<void*,std::__ndk1::allocator<void*>> *this_01;
  Expression *pEVar9;
  long lVar10;
  undefined4 *puVar11;
  Zone *this_02;
  char cVar12;
  int *piVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  int *piVar17;
  undefined8 uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  int iVar23;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  Expression *local_68;
  
  *param_2 = 0;
  Scanner::Next(*(Scanner **)(this + 0xf8));
  lVar10 = *(long *)(this + 0xc0);
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (*(byte *)(lVar10 + 0x10) < 3) {
    local_80 = *(undefined8 *)(lVar10 + 0x30);
    uStack_70 = *(ulong *)(lVar10 + 0x40);
    local_78 = *(ulong *)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar10 + 0x38) = 0xffffffff;
    local_88 = lVar10;
  }
  this_00 = *(Scanner **)(this + 0xf8);
  puVar11 = *(undefined4 **)(this_00 + 8);
  cVar12 = *(char *)(puVar11 + 0xe);
  if (cVar12 != '\x06') {
    iVar23 = 0;
    do {
      uVar2 = *puVar11;
      bVar7 = cVar12 == '\n';
      if (bVar7) {
        Scanner::Next(this_00);
        this_00 = *(Scanner **)(this + 0xf8);
      }
      PVar5 = this[0x130];
      iVar3 = **(int **)(this_00 + 8);
      this[0x130] = (ParserBase<v8::internal::Parser>)0x1;
      pEVar8 = (Expression *)ParseAssignmentExpressionCoverGrammar(this);
      if (param_4 == 1) {
        ClassifyArrowParameter(this,(AccumulationScope *)&local_88,iVar3,pEVar8);
        if (bVar7) {
          if (*(byte *)(*(long *)(this + 0xc0) + 0x10) - 1 < 2) {
            *(undefined1 *)(*(long *)(this + 0xc0) + 0x58) = 0;
          }
          if (((*(uint *)(pEVar8 + 4) & 0x3f) == 0x18) &&
             (lVar10 = *(long *)(this + 0xc0), *(byte *)(lVar10 + 0x10) < 3)) {
            puVar14 = (undefined8 *)**(undefined8 **)(this + 0xf8);
            cVar12 = *(char *)(lVar10 + 0x48);
            lVar22 = lVar10;
            while (cVar12 != '\0') {
              if (*(char *)(lVar22 + 0x10) == '\x02') {
                uVar18 = *puVar14;
                *(undefined4 *)(lVar22 + 0x54) = 0x121;
                *(undefined8 *)(lVar22 + 0x4c) = uVar18;
              }
              lVar22 = *(long *)(lVar22 + 8);
              if (lVar22 == 0) break;
              cVar12 = *(char *)(lVar10 + 0x48);
            }
          }
          puVar14 = *(undefined8 **)(*(long *)(this + 0xf8) + 8);
          if ((*(char *)(puVar14 + 7) == '\x1e') &&
             (lVar10 = *(long *)(this + 0xc0), *(byte *)(lVar10 + 0x10) < 3)) {
            cVar12 = *(char *)(lVar10 + 0x48);
            lVar22 = lVar10;
            while (cVar12 != '\0') {
              if (*(char *)(lVar22 + 0x10) == '\x02') {
                uVar18 = *puVar14;
                *(undefined4 *)(lVar22 + 0x54) = 0x118;
                *(undefined8 *)(lVar22 + 0x4c) = uVar18;
              }
              lVar22 = *(long *)(lVar22 + 8);
              if (lVar22 == 0) break;
              cVar12 = *(char *)(lVar10 + 0x48);
            }
          }
          goto LAB_01165274;
        }
      }
      else {
LAB_01165274:
        if (bVar7) {
          *param_2 = 1;
          this_02 = *(Zone **)(this + 0x68);
          pEVar9 = *(Expression **)(this_02 + 0x10);
          if ((ulong)(*(long *)(this_02 + 0x18) - (long)pEVar9) < 0x18) {
            pEVar9 = (Expression *)Zone::NewExpand(this_02,0x18);
          }
          else {
            *(Expression **)(this_02 + 0x10) = pEVar9 + 0x18;
          }
          *(Expression **)(pEVar9 + 0x10) = pEVar8;
          *(undefined4 *)pEVar9 = uVar2;
          *(undefined4 *)(pEVar9 + 4) = 0x2d;
          *(int *)(pEVar9 + 8) = iVar3;
          pEVar8 = pEVar9;
        }
      }
      this_01 = (vector<void*,std::__ndk1::allocator<void*>> *)*param_1;
      local_68 = pEVar8;
      if (*(undefined8 **)(this_01 + 8) < *(undefined8 **)(this_01 + 0x10)) {
        **(undefined8 **)(this_01 + 8) = pEVar8;
        *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  (this_01,&local_68);
      }
      param_1[2] = param_1[2] + 1;
      lVar10 = *(long *)(this + 0xc0);
      this_00 = *(Scanner **)(this + 0xf8);
      piVar13 = *(int **)(this_00 + 8);
      iVar3 = iVar23;
      if (*(byte *)(lVar10 + 0x10) < 3) {
        iVar20 = (int)*(undefined8 *)(lVar10 + 0x28) - (int)*(long *)(lVar10 + 0x20);
        if (iVar20 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar20 + -1;
          if (iVar23 < iVar20) {
            iVar4 = *piVar13;
            piVar17 = (int *)(**(long **)(lVar10 + 0x18) +
                              ((long)iVar20 + -1 + *(long *)(lVar10 + 0x20)) * 0x10 + 8);
            if (*piVar17 == -1) {
              lVar22 = (long)iVar20 + -2;
              do {
                *piVar17 = iVar4;
                if (lVar22 + 1 <= (long)iVar23) break;
                lVar1 = lVar22 + *(long *)(lVar10 + 0x20);
                lVar22 = lVar22 + -1;
                piVar17 = (int *)(**(long **)(lVar10 + 0x18) + lVar1 * 0x10 + 8);
              } while (*piVar17 == -1);
              this_00 = *(Scanner **)(this + 0xf8);
              piVar13 = *(int **)(this_00 + 8);
            }
          }
        }
      }
      iVar23 = iVar3;
      if ((char)piVar13[0xe] != '\x1e') {
        this[0x130] = PVar5;
        break;
      }
      Scanner::Next(this_00);
      this_00 = *(Scanner **)(this + 0xf8);
      this[0x130] = PVar5;
      puVar11 = *(undefined4 **)(this_00 + 8);
      cVar12 = *(char *)(puVar11 + 0xe);
    } while (cVar12 != '\x06');
  }
  if (*(int *)(param_1 + 2) - *(int *)(param_1 + 1) < 0xffff) {
    if (*(char *)(*(long *)(this_00 + 8) + 0x38) == '\x06') {
      Scanner::Next(this_00);
      uVar19 = local_78;
      uVar6 = uStack_70;
    }
    else {
      PendingCompilationErrorHandler::ReportMessageAt
                (*(PendingCompilationErrorHandler **)(this + 0xb0),**(ulong **)this_00,
                 **(ulong **)this_00 >> 0x20,0x149,0);
      lVar10 = *(long *)(this + 0x158);
      uVar19 = local_78;
      uVar6 = uStack_70;
      if (*(char *)(lVar10 + 0x30) == '\0') {
        *(undefined4 *)(this + 0x160) = 0xffffffff;
        *(undefined1 *)(lVar10 + 0x30) = 1;
        *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + 0x18);
        this[0x1a0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x1f0] = (ParserBase<v8::internal::Parser>)0x6d;
        this[0x240] = (ParserBase<v8::internal::Parser>)0x6d;
      }
    }
  }
  else {
    ReportMessage(this,0x132);
    uVar19 = local_78;
    uVar6 = uStack_70;
  }
  if (local_88 != 0) {
    local_78._0_4_ = (uint)uVar19;
    uVar15 = uVar19 & 0xffffffff;
    local_78._4_4_ = (uint)(uVar19 >> 0x20);
    bVar7 = local_78._4_4_ < (uint)local_78;
    uVar16 = local_78._4_4_;
    local_78 = uVar19;
    if (bVar7) {
      local_80._4_4_ = (undefined4)((ulong)local_80 >> 0x20);
      local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(local_88 + 0x30));
      uVar15 = *(ulong *)(local_88 + 0x38);
      uVar16 = (uint)(uVar15 >> 0x20);
      local_78 = uVar15;
    }
    *(undefined4 *)(local_88 + 0x30) = 0;
    *(undefined8 *)(local_88 + 0x38) = 0xffffffff;
    uStack_70._0_4_ = (uint)uVar6;
    uVar19 = uVar6 & 0xffffffff;
    uStack_70._4_4_ = (uint)(uVar6 >> 0x20);
    bVar7 = uStack_70._4_4_ < (uint)uStack_70;
    uVar21 = uStack_70._4_4_;
    uStack_70 = uVar6;
    if (bVar7) {
      local_80 = CONCAT44(*(undefined4 *)(local_88 + 0x34),(undefined4)local_80);
      uVar19 = *(ulong *)(local_88 + 0x40);
      uVar21 = (uint)(uVar19 >> 0x20);
      uStack_70 = uVar19;
    }
    *(undefined4 *)(local_88 + 0x34) = 0;
    *(undefined8 *)(local_88 + 0x40) = 0xffffffff;
    if ((uint)uVar15 <= uVar16) {
      *(undefined4 *)(local_88 + 0x30) = (undefined4)local_80;
      *(ulong *)(local_88 + 0x38) = local_78;
    }
    if ((uint)uVar19 <= uVar21) {
      *(undefined4 *)(local_88 + 0x34) = local_80._4_4_;
      *(ulong *)(local_88 + 0x40) = uStack_70;
    }
  }
  return;
}

