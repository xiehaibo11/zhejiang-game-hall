
void FUN_01622314(InstructionSelector *param_1,Node *param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  Node *pNVar5;
  Node *pNVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  Use *pUVar10;
  Node *pNVar11;
  undefined8 uVar12;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_a0 [8];
  Node *local_98;
  int local_90;
  char local_8c;
  Node *local_88;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_78 [8];
  Node *local_70;
  int local_68;
  char local_64;
  Node *local_60;
  int local_58;
  char local_54;
  
  v8::internal::compiler::
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  ::BinopMatcher(aBStack_78,param_2);
  uVar3 = param_3[1];
  if ((*param_3 != 2) && (*param_3 != 4)) {
    pNVar6 = local_70;
    iVar7 = local_58;
    uVar2 = uVar3;
    if (local_54 == '\0') {
      if (local_64 == '\0') goto LAB_016223ac;
      uVar2 = v8::internal::compiler::CommuteFlagsCondition(uVar3);
      pNVar6 = local_60;
      iVar7 = local_68;
    }
    uVar4 = FUN_01628810(param_1,pNVar6,iVar7,param_2,uVar2,param_3);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
LAB_016223ac:
  if (((local_54 == '\0') || (local_58 != 0)) ||
     ((sVar1 = *(short *)(*(long *)local_70 + 0x10), sVar1 != 0x12f && (sVar1 != 0x128)))) {
    if (((local_64 == '\0') || (local_68 != 0)) ||
       ((*(short *)(*(long *)local_60 + 0x10) != 0x12f &&
        (*(short *)(*(long *)local_60 + 0x10) != 0x128)))) {
      uVar8 = 0;
      uVar9 = 0x69;
      if ((uVar3 < 2) && (*(short *)(*(long *)local_60 + 0x10) == 0x131)) {
        v8::internal::compiler::
        BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
        ::BinopMatcher(aBStack_a0,local_60);
        if ((local_8c == '\0') || (local_90 != 0)) {
          uVar9 = 0x69;
        }
        else {
          uVar4 = v8::internal::compiler::InstructionSelector::CanCover(param_1,param_2,local_60);
          pNVar6 = param_2 + 0x20;
          pNVar11 = pNVar6;
          if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
            pNVar11 = (Node *)(*(long *)pNVar6 + 0x10);
          }
          pNVar5 = *(Node **)(pNVar11 + 8);
          if (pNVar5 != local_88) {
            if ((*(uint *)(param_2 + 0x14) & 0xf000000) == 0xf000000) {
              pUVar10 = (Use *)(*(long *)pNVar6 + -0x30);
            }
            else {
              pUVar10 = (Use *)(param_2 + -0x30);
            }
            if (pNVar5 != (Node *)0x0) {
              v8::internal::compiler::Node::RemoveUse(pNVar5,pUVar10);
            }
            *(Node **)(pNVar11 + 8) = local_88;
            if (local_88 != (Node *)0x0) {
              v8::internal::compiler::Node::AppendUse(local_88,pUVar10);
            }
          }
          if ((uVar4 & 1) != 0) {
            pNVar6 = local_60 + 0x20;
            pNVar11 = pNVar6;
            if ((*(uint *)(local_60 + 0x14) & 0xf000000) == 0xf000000) {
              pNVar11 = (Node *)(*(long *)pNVar6 + 0x10);
            }
            pNVar5 = *(Node **)(pNVar11 + 8);
            if (pNVar5 != local_98) {
              if ((*(uint *)(local_60 + 0x14) & 0xf000000) == 0xf000000) {
                local_60 = *(Node **)pNVar6;
              }
              if (pNVar5 != (Node *)0x0) {
                v8::internal::compiler::Node::RemoveUse(pNVar5,(Use *)(local_60 + -0x30));
              }
              *(Node **)(pNVar11 + 8) = local_98;
              if (local_98 != (Node *)0x0) {
                v8::internal::compiler::Node::AppendUse(local_98,(Use *)(local_60 + -0x30));
              }
            }
          }
          uVar9 = 0x6b;
        }
        uVar8 = 0;
      }
      goto LAB_016226f4;
    }
    uVar3 = v8::internal::compiler::CommuteFlagsCondition(uVar3);
    uVar8 = 0;
    uVar9 = 0x69;
    if ((9 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x30fU) == 0)) goto LAB_016226f4;
    if (*(short *)(*(long *)local_60 + 0x10) == 0x12f) {
      uVar8 = 0;
      uVar9 = 0x6b;
      uVar12 = 0x61;
    }
    else {
      if (*(short *)(*(long *)local_60 + 0x10) != 0x128) goto LAB_01622738;
      uVar8 = 3;
      uVar9 = 0x6d;
      uVar12 = 99;
    }
    uVar4 = v8::internal::compiler::InstructionSelector::CanCover(param_1,param_2,local_60);
    if ((uVar4 & 1) == 0) {
      uVar4 = v8::internal::compiler::InstructionSelector::IsOnlyUserOfNodeInSameBlock
                        (param_1,param_2,local_60);
      if ((uVar4 & 1) != 0) {
        if ((9 < uVar3) || ((0x30fU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) goto LAB_01622738;
        iVar7 = *(int *)(&DAT_01a56ad4 + (long)(int)uVar3 * 4);
        param_2 = local_60;
        uVar9 = uVar12;
        goto LAB_016226dc;
      }
      goto LAB_016226ec;
    }
    if ((9 < uVar3) || ((0x30fU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) goto LAB_01622738;
    iVar7 = *(int *)(&DAT_01a56ad4 + (long)(int)uVar3 * 4);
    param_2 = local_60;
  }
  else {
    uVar8 = 0;
    uVar9 = 0x69;
    if ((9 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x30fU) == 0)) goto LAB_016226f4;
    if (sVar1 == 0x12f) {
      uVar8 = 0;
      uVar9 = 0x6b;
      uVar12 = 0x61;
    }
    else {
      if (sVar1 != 0x128) goto LAB_01622738;
      uVar8 = 3;
      uVar9 = 0x6d;
      uVar12 = 99;
    }
    uVar4 = v8::internal::compiler::InstructionSelector::CanCover(param_1,param_2,local_70);
    if ((uVar4 & 1) == 0) {
      uVar4 = v8::internal::compiler::InstructionSelector::IsOnlyUserOfNodeInSameBlock
                        (param_1,param_2,local_70);
      if ((uVar4 & 1) != 0) {
        if ((9 < uVar3) || ((0x30fU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) goto LAB_01622738;
        iVar7 = *(int *)(&DAT_01a56ad4 + (long)(int)uVar3 * 4);
        param_2 = local_70;
        uVar9 = uVar12;
LAB_016226dc:
        param_3[1] = iVar7;
        goto LAB_016226f4;
      }
LAB_016226ec:
      uVar8 = 0;
      uVar9 = 0x69;
      goto LAB_016226f4;
    }
    if ((9 < uVar3) || ((0x30fU >> (ulong)(uVar3 & 0x1f) & 1) == 0)) {
LAB_01622738:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar7 = *(int *)(&DAT_01a56ad4 + (long)(int)uVar3 * 4);
    param_2 = local_70;
  }
  param_3[1] = iVar7;
LAB_016226f4:
  FUN_01622dd0(param_1,param_2,uVar9,uVar8,param_3);
  return;
}

