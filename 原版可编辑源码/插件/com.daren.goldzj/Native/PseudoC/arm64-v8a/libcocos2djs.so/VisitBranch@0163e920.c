
/* v8::internal::compiler::InstructionSelector::VisitBranch(v8::internal::compiler::Node*,
   v8::internal::compiler::BasicBlock*, v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitBranch
          (InstructionSelector *this,Node *param_1,BasicBlock *param_2,BasicBlock *param_3)

{
  int iVar1;
  long lVar2;
  char cVar3;
  Node *pNVar4;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined4 local_70;
  BasicBlock *local_60;
  BasicBlock *pBStack_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cVar3 = IsSafetyCheckOf(*(Operator **)param_1);
  iVar1 = *(int *)(this + 0x16c);
  if (iVar1 == 0) {
    if (cVar3 != '\x02') {
LAB_0163e9a4:
      local_88[0] = 0x100000002;
      goto LAB_0163e9bc;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (cVar3 == '\0') goto LAB_0163e9a4;
  }
  local_88[0] = 0x100000001;
LAB_0163e9bc:
  local_70 = 0xffffffff;
  local_78 = 0;
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  local_60 = param_2;
  pBStack_58 = param_3;
  VisitWordCompareZero(this,param_1,*(Node **)pNVar4,(FlagsContinuation *)local_88);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

