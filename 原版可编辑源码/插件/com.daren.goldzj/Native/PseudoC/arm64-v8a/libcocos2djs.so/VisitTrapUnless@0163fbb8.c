
/* v8::internal::compiler::InstructionSelector::VisitTrapUnless(v8::internal::compiler::Node*,
   v8::internal::compiler::TrapId) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitTrapUnless
          (InstructionSelector *this,Node *param_1,undefined4 param_3)

{
  long lVar1;
  Node *pNVar2;
  Node *pNVar3;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pNVar2 = param_1 + 0x20;
  pNVar3 = pNVar2;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar3 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  local_48 = *(undefined8 *)(pNVar3 + 8);
  local_58 = 0;
  local_50 = 0xffffffff;
  local_68[0] = 6;
  if ((*(uint *)(param_1 + 0x14) & 0xf000000) == 0xf000000) {
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  local_30 = param_3;
  VisitWordCompareZero(this,param_1,*(Node **)pNVar2,(FlagsContinuation *)local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

