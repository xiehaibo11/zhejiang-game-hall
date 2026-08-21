
/* v8::internal::ParserBase<v8::internal::PreParser>::ParseExpressionCoverGrammar() */

undefined4 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ParseExpressionCoverGrammar
          (ParserBase<v8::internal::PreParser> *this)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  Scanner *this_00;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_28 [2];
  
  local_28[0] = 0;
  lVar8 = *(long *)(this + 0x90);
  local_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (*(byte *)(lVar8 + 0x10) < 3) {
    local_58 = *(undefined8 *)(lVar8 + 0x30);
    uStack_48 = *(ulong *)(lVar8 + 0x40);
    local_50 = *(ulong *)(lVar8 + 0x38);
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0xffffffff;
    *(undefined8 *)(lVar8 + 0x38) = 0xffffffff;
    local_60 = lVar8;
  }
  puVar9 = *(undefined4 **)(*(long *)(this + 200) + 8);
  if (*(char *)(puVar9 + 0xe) == '\n') {
    iVar18 = 0;
  }
  else {
    iVar18 = 0;
    do {
      uVar3 = *puVar9;
      uVar7 = ParseAssignmentExpressionCoverGrammar(this);
      ClassifyArrowParameter(this,&local_60,uVar3,uVar7);
      local_28[0] = local_28[0] + 1;
      lVar8 = *(long *)(this + 0x90);
      this_00 = *(Scanner **)(this + 200);
      piVar12 = *(int **)(this_00 + 8);
      iVar5 = iVar18;
      if (*(byte *)(lVar8 + 0x10) < 3) {
        iVar16 = (int)*(undefined8 *)(lVar8 + 0x28) - (int)*(long *)(lVar8 + 0x20);
        if (iVar16 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = iVar16 + -1;
          if (iVar18 < iVar16) {
            iVar4 = *piVar12;
            piVar15 = (int *)(**(long **)(lVar8 + 0x18) +
                              ((long)iVar16 + -1 + *(long *)(lVar8 + 0x20)) * 0x10 + 8);
            if (*piVar15 == -1) {
              lVar17 = (long)iVar16 + -2;
              do {
                *piVar15 = iVar4;
                if (lVar17 + 1 <= (long)iVar18) break;
                lVar2 = lVar17 + *(long *)(lVar8 + 0x20);
                lVar17 = lVar17 + -1;
                piVar15 = (int *)(**(long **)(lVar8 + 0x18) + lVar2 * 0x10 + 8);
              } while (*piVar15 == -1);
              this_00 = *(Scanner **)(this + 200);
              piVar12 = *(int **)(this_00 + 8);
            }
          }
        }
      }
      iVar18 = iVar5;
      if ((char)piVar12[0xe] != '\x1e') {
LAB_0117af04:
        if (local_28[0] != 1) {
          uVar7 = 2;
        }
        if (local_60 == 0) {
          return uVar7;
        }
        goto LAB_0117af1c;
      }
      Scanner::Next(this_00);
      puVar9 = *(undefined4 **)(*(Scanner **)(this + 200) + 8);
      cVar6 = *(char *)(puVar9 + 0xe);
      if (cVar6 == '\x06') {
        cVar6 = Scanner::PeekAhead(*(Scanner **)(this + 200));
        if (cVar6 == '\x0f') goto LAB_0117af04;
        puVar9 = *(undefined4 **)(*(long *)(this + 200) + 8);
        cVar6 = *(char *)(puVar9 + 0xe);
      }
      if (cVar6 == 'I') {
        if (*(char *)(*(long *)(this + 0x10) + 0x3a) == '\0') {
          cVar6 = 'I';
        }
        else {
          *(byte *)(*(long *)(this + 0x10) + 0x39) = FLAG_max_lazy ^ 1;
          puVar9 = *(undefined4 **)(*(long *)(this + 200) + 8);
          cVar6 = *(char *)(puVar9 + 0xe);
        }
      }
    } while (cVar6 != '\n');
  }
  uVar7 = ParseArrowParametersWithRest
                    (this,(PreParserExpressionList *)local_28,(AccumulationScope *)&local_60,iVar18)
  ;
  if (local_60 != 0) {
LAB_0117af1c:
    uVar10 = local_50 & 0xffffffff;
    bVar1 = local_50._4_4_ < (uint)local_50;
    uVar11 = local_50._4_4_;
    if (bVar1) {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(local_60 + 0x30));
      uVar10 = *(ulong *)(local_60 + 0x38);
      uVar11 = (uint)(uVar10 >> 0x20);
      local_50 = uVar10;
    }
    *(undefined4 *)(local_60 + 0x30) = 0;
    *(undefined8 *)(local_60 + 0x38) = 0xffffffff;
    uVar13 = uStack_48 & 0xffffffff;
    bVar1 = uStack_48._4_4_ < (uint)uStack_48;
    uVar14 = uStack_48._4_4_;
    if (bVar1) {
      local_58 = CONCAT44(*(undefined4 *)(local_60 + 0x34),(undefined4)local_58);
      uVar13 = *(ulong *)(local_60 + 0x40);
      uVar14 = (uint)(uVar13 >> 0x20);
      uStack_48 = uVar13;
    }
    *(undefined4 *)(local_60 + 0x34) = 0;
    *(undefined8 *)(local_60 + 0x40) = 0xffffffff;
    if ((uint)uVar10 <= uVar11) {
      *(undefined4 *)(local_60 + 0x30) = (undefined4)local_58;
      *(ulong *)(local_60 + 0x38) = local_50;
    }
    if ((uint)uVar13 <= uVar14) {
      *(undefined4 *)(local_60 + 0x34) = local_58._4_4_;
      *(ulong *)(local_60 + 0x40) = uStack_48;
    }
  }
  return uVar7;
}

