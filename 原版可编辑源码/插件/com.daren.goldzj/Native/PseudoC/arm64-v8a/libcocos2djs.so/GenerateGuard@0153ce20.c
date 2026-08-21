
/* v8::internal::ChoiceNode::GenerateGuard(v8::internal::RegExpMacroAssembler*,
   v8::internal::Guard*, v8::internal::Trace*) */

void __thiscall
v8::internal::ChoiceNode::GenerateGuard
          (ChoiceNode *this,RegExpMacroAssembler *param_1,Guard *param_2,Trace *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(int *)(param_2 + 4) == 1) {
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0xf0);
  }
  else {
    if (*(int *)(param_2 + 4) != 0) {
      return;
    }
    uVar1 = *(undefined4 *)param_2;
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0xe8);
  }
                    /* WARNING: Could not recover jumptable at 0x0153ce64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,uVar2,uVar3);
  return;
}

