
/* v8::internal::ParserBase<v8::internal::Parser>::ParseExpressionCoverGrammar() */

Expression * __thiscall
v8::internal::ParserBase<v8::internal::Parser>::ParseExpressionCoverGrammar
          (ParserBase<v8::internal::Parser> *this)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  Expression *pEVar6;
  Scanner *this_00;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ParserBase<v8::internal::Parser> *local_58;
  ulong local_50;
  ulong local_48;
  Expression *local_28;
  
  local_58 = this + 200;
  local_50 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  lVar7 = *(long *)(this + 0xc0);
  local_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(byte *)(lVar7 + 0x10) < 3) {
    local_70 = *(undefined8 *)(lVar7 + 0x30);
    uStack_60 = *(ulong *)(lVar7 + 0x40);
    local_68 = *(ulong *)(lVar7 + 0x38);
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar7 + 0x38) = 0xffffffff;
    local_78 = lVar7;
  }
  piVar8 = *(int **)(*(long *)(this + 0xf8) + 8);
  local_48 = local_50;
  if ((char)piVar8[0xe] == '\n') {
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    do {
      iVar3 = *piVar8;
      pEVar6 = (Expression *)ParseAssignmentExpressionCoverGrammar(this);
      ClassifyArrowParameter(this,(AccumulationScope *)&local_78,iVar3,pEVar6);
      local_28 = pEVar6;
      if (*(undefined8 **)(local_58 + 8) < *(undefined8 **)(local_58 + 0x10)) {
        **(undefined8 **)(local_58 + 8) = pEVar6;
        *(long *)(local_58 + 8) = *(long *)(local_58 + 8) + 8;
      }
      else {
        std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__push_back_slow_path<void*>
                  ((vector<void*,std::__ndk1::allocator<void*>> *)local_58,&local_28);
      }
      local_48 = local_48 + 1;
      lVar7 = *(long *)(this + 0xc0);
      this_00 = *(Scanner **)(this + 0xf8);
      piVar8 = *(int **)(this_00 + 8);
      iVar3 = iVar16;
      if (*(byte *)(lVar7 + 0x10) < 3) {
        iVar14 = (int)*(undefined8 *)(lVar7 + 0x28) - (int)*(long *)(lVar7 + 0x20);
        if (iVar14 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar14 + -1;
          if (iVar16 < iVar14) {
            iVar4 = *piVar8;
            piVar13 = (int *)(**(long **)(lVar7 + 0x18) +
                              ((long)iVar14 + -1 + *(long *)(lVar7 + 0x20)) * 0x10 + 8);
            if (*piVar13 == -1) {
              lVar15 = (long)iVar14 + -2;
              do {
                *piVar13 = iVar4;
                if (lVar15 + 1 <= (long)iVar16) break;
                lVar2 = lVar15 + *(long *)(lVar7 + 0x20);
                lVar15 = lVar15 + -1;
                piVar13 = (int *)(**(long **)(lVar7 + 0x18) + lVar2 * 0x10 + 8);
              } while (*piVar13 == -1);
              this_00 = *(Scanner **)(this + 0xf8);
              piVar8 = *(int **)(this_00 + 8);
            }
          }
        }
      }
      iVar16 = iVar3;
      if ((char)piVar8[0xe] != '\x1e') {
LAB_011640c8:
        if ((int)local_48 - (int)local_50 != 1) {
          pEVar6 = (Expression *)
                   Parser::ExpressionListToExpression((Parser *)this,(ScopedList *)&local_58);
        }
        goto LAB_011640ec;
      }
      Scanner::Next(this_00);
      piVar8 = *(int **)(*(Scanner **)(this + 0xf8) + 8);
      cVar5 = (char)piVar8[0xe];
      if (cVar5 == '\x06') {
        cVar5 = Scanner::PeekAhead(*(Scanner **)(this + 0xf8));
        if (cVar5 == '\x0f') goto LAB_011640c8;
        piVar8 = *(int **)(*(long *)(this + 0xf8) + 8);
        cVar5 = (char)piVar8[0xe];
      }
      if (cVar5 == 'I') {
        if (*(char *)(*(long *)(this + 0x10) + 0x3a) == '\0') {
          cVar5 = 'I';
        }
        else {
          *(byte *)(*(long *)(this + 0x10) + 0x39) = FLAG_max_lazy ^ 1;
          piVar8 = *(int **)(*(long *)(this + 0xf8) + 8);
          cVar5 = (char)piVar8[0xe];
        }
      }
    } while (cVar5 != '\n');
  }
  pEVar6 = (Expression *)
           ParseArrowParametersWithRest
                     (this,(ScopedList *)&local_58,(AccumulationScope *)&local_78,iVar16);
LAB_011640ec:
  if (local_78 != 0) {
    uVar9 = local_68 & 0xffffffff;
    bVar1 = local_68._4_4_ < (uint)local_68;
    uVar10 = local_68._4_4_;
    if (bVar1) {
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(local_78 + 0x30));
      uVar9 = *(ulong *)(local_78 + 0x38);
      uVar10 = (uint)(uVar9 >> 0x20);
      local_68 = uVar9;
    }
    *(undefined4 *)(local_78 + 0x30) = 0;
    *(undefined8 *)(local_78 + 0x38) = 0xffffffff;
    uVar11 = uStack_60 & 0xffffffff;
    bVar1 = uStack_60._4_4_ < (uint)uStack_60;
    uVar12 = uStack_60._4_4_;
    if (bVar1) {
      local_70 = CONCAT44(*(undefined4 *)(local_78 + 0x34),(undefined4)local_70);
      uVar11 = *(ulong *)(local_78 + 0x40);
      uVar12 = (uint)(uVar11 >> 0x20);
      uStack_60 = uVar11;
    }
    *(undefined4 *)(local_78 + 0x34) = 0;
    *(undefined8 *)(local_78 + 0x40) = 0xffffffff;
    if ((uint)uVar9 <= uVar10) {
      *(undefined4 *)(local_78 + 0x30) = (undefined4)local_70;
      *(ulong *)(local_78 + 0x38) = local_68;
    }
    if ((uint)uVar11 <= uVar12) {
      *(undefined4 *)(local_78 + 0x34) = local_70._4_4_;
      *(ulong *)(local_78 + 0x40) = uStack_60;
    }
  }
  uVar9 = *(long *)(local_58 + 8) - *(long *)local_58 >> 3;
  if (local_50 < uVar9 || local_50 - uVar9 == 0) {
    if (local_50 < uVar9) {
      *(ulong *)(local_58 + 8) = *(long *)local_58 + local_50 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_58,local_50 - uVar9);
  }
  return pEVar6;
}

