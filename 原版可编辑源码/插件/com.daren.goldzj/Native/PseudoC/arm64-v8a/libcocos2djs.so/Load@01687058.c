
/* v8::internal::compiler::RawMachineAssembler::Load(v8::internal::MachineType,
   v8::internal::compiler::Node*, v8::internal::LoadSensitivity) */

void __thiscall
v8::internal::compiler::RawMachineAssembler::Load
          (RawMachineAssembler *this,undefined2 param_2,Node *param_3,int param_4)

{
  Operator *pOVar1;
  undefined8 uVar2;
  Node *local_50;
  undefined8 uStack_48;
  
  pOVar1 = (Operator *)
           CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(this + 0x48),0);
  uVar2 = AddNode(this,pOVar1,0,(Node **)0x0);
  pOVar1 = (Operator *)MachineOperatorBuilder::Load((MachineOperatorBuilder *)(this + 0x20),param_2)
  ;
  if (*(int *)(this + 0xa0) != 0) {
    if ((param_4 == 0) && (*(int *)(this + 0xa0) == 2)) {
      pOVar1 = (Operator *)
               MachineOperatorBuilder::PoisonedLoad((MachineOperatorBuilder *)(this + 0x20),param_2)
      ;
    }
    local_50 = param_3;
    uStack_48 = uVar2;
    AddNode(this,pOVar1,2,&local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","PoisoningMitigationLevel::kPoisonAll != poisoning_level_");
}

