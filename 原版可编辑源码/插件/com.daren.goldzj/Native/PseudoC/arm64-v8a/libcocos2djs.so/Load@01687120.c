
/* v8::internal::compiler::CodeAssembler::Load(v8::internal::MachineType,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, v8::internal::LoadSensitivity) */

void __thiscall
v8::internal::compiler::CodeAssembler::Load
          (CodeAssembler *this,undefined2 param_2,Node *param_3,undefined8 param_4,int param_5)

{
  Operator *pOVar1;
  RawMachineAssembler *this_00;
  Node *local_50;
  undefined8 uStack_48;
  
  this_00 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Load((MachineOperatorBuilder *)(this_00 + 0x20),param_2);
  if (*(int *)(this_00 + 0xa0) != 0) {
    if ((param_5 == 0) && (*(int *)(this_00 + 0xa0) == 2)) {
      pOVar1 = (Operator *)
               MachineOperatorBuilder::PoisonedLoad
                         ((MachineOperatorBuilder *)(this_00 + 0x20),param_2);
    }
    local_50 = param_3;
    uStack_48 = param_4;
    RawMachineAssembler::AddNode(this_00,pOVar1,2,&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","PoisoningMitigationLevel::kPoisonAll != poisoning_level_");
}

