
/* v8::internal::compiler::CodeAssembler::LoadFullTagged(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::LoadSensitivity) */

void __thiscall
v8::internal::compiler::CodeAssembler::LoadFullTagged
          (CodeAssembler *this,Node *param_1,undefined8 param_2,int param_4)

{
  Operator *pOVar1;
  Node *pNVar2;
  RawMachineAssembler *pRVar3;
  Node *local_50;
  undefined8 uStack_48;
  
  pRVar3 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)MachineOperatorBuilder::Load((MachineOperatorBuilder *)(pRVar3 + 0x20),5);
  if (*(int *)(pRVar3 + 0xa0) != 0) {
    if ((param_4 == 0) && (*(int *)(pRVar3 + 0xa0) == 2)) {
      pOVar1 = (Operator *)
               MachineOperatorBuilder::PoisonedLoad((MachineOperatorBuilder *)(pRVar3 + 0x20),5);
    }
    local_50 = param_1;
    uStack_48 = param_2;
    pNVar2 = (Node *)RawMachineAssembler::AddNode(pRVar3,pOVar1,2,&local_50);
    pRVar3 = (RawMachineAssembler *)**(undefined8 **)this;
    pOVar1 = (Operator *)
             MachineOperatorBuilder::BitcastWordToTagged((MachineOperatorBuilder *)(pRVar3 + 0x20));
    local_50 = pNVar2;
    RawMachineAssembler::AddNode(pRVar3,pOVar1,1,&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","PoisoningMitigationLevel::kPoisonAll != poisoning_level_");
}

