
/* v8::internal::TurboAssembler::NeedExtraInstructionsOrRegisterBranch(v8::internal::Label*,
   v8::internal::ImmBranchType) */

undefined8 __thiscall
v8::internal::TurboAssembler::NeedExtraInstructionsOrRegisterBranch
          (TurboAssembler *this,uint *param_1,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TurboAssembler *pTVar5;
  ulong uVar6;
  __tree_node_base *p_Var7;
  uint uVar8;
  TurboAssembler *pTVar9;
  TurboAssembler *pTVar10;
  
  uVar8 = *param_1;
  if ((int)uVar8 < 0) {
    uVar8 = ~uVar8;
  }
  else {
    if (uVar8 == 0) goto LAB_012700b8;
    uVar8 = uVar8 - 1;
  }
  uVar6 = Instruction::IsValidImmPCOffset
                    (param_3,(long)(int)(uVar8 + (*(int *)(this + 0x10) - *(int *)(this + 0x20))));
  if ((uVar6 & 1) == 0) {
    return 1;
  }
  if ((int)*param_1 < 0) {
    return 0;
  }
LAB_012700b8:
  if (3 < param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  iVar2 = *(int *)(this + 0x20);
  iVar3 = *(int *)(this + 0x10);
  iVar1 = (iVar2 - iVar3) +
          ((uint)(1 << (ulong)(*(uint *)(&DAT_019f3f00 + (long)(int)(param_3 - 1U) * 4) & 0x1f)) >>
          1);
  iVar4 = iVar1 + -4;
  p_Var7 = operator_new(0x38);
  *(int *)(p_Var7 + 0x20) = iVar4;
  *(int *)(p_Var7 + 0x28) = iVar2 - iVar3;
  *(uint **)(p_Var7 + 0x30) = param_1;
  pTVar5 = *(TurboAssembler **)(this + 0x120);
  if (*(TurboAssembler **)(this + 0x120) == (TurboAssembler *)0x0) {
    pTVar9 = this + 0x120;
    pTVar10 = pTVar9;
  }
  else {
    do {
      while (pTVar9 = pTVar5, iVar4 < *(int *)(pTVar9 + 0x20)) {
        pTVar5 = *(TurboAssembler **)pTVar9;
        pTVar10 = pTVar9;
        if (*(TurboAssembler **)pTVar9 == (TurboAssembler *)0x0) goto LAB_01270148;
      }
      pTVar5 = *(TurboAssembler **)(pTVar9 + 8);
    } while (*(TurboAssembler **)(pTVar9 + 8) != (TurboAssembler *)0x0);
    pTVar10 = pTVar9 + 8;
  }
LAB_01270148:
  *(undefined8 *)p_Var7 = 0;
  *(undefined8 *)(p_Var7 + 8) = 0;
  *(TurboAssembler **)(p_Var7 + 0x10) = pTVar9;
  *(__tree_node_base **)pTVar10 = p_Var7;
  if (**(long **)(this + 0x118) != 0) {
    *(long *)(this + 0x118) = **(long **)(this + 0x118);
    p_Var7 = *(__tree_node_base **)pTVar10;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(this + 0x120),p_Var7);
  iVar1 = iVar1 + -0x804;
  *(long *)(this + 0x128) = *(long *)(this + 0x128) + 1;
  iVar2 = *(int *)(this + 0x130);
  if (iVar1 <= *(int *)(this + 0x130)) {
    iVar2 = iVar1;
  }
  *(int *)(this + 0x130) = iVar2;
  return 0;
}

