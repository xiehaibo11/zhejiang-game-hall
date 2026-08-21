
/* v8::internal::compiler::DecompressionOptimizer::ChangeLoad(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::ChangeLoad
          (DecompressionOptimizer *this,Node *param_1)

{
  ushort uVar1;
  short sVar2;
  Operator *pOVar3;
  uint uVar4;
  
  sVar2 = LoadRepresentationOf(*(Operator **)param_1);
  uVar1 = *(ushort *)(*(long *)param_1 + 0x10);
  uVar4 = 9;
  if (sVar2 == 0x708) {
    uVar4 = 10;
  }
  if (uVar1 < 0x1e7) {
    if (uVar1 == 0x1aa) {
      pOVar3 = (Operator *)
               MachineOperatorBuilder::Load(*(MachineOperatorBuilder **)(this + 0x10),uVar4 | 0x700)
      ;
    }
    else {
      if (uVar1 != 0x1ab) {
LAB_0169f70c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pOVar3 = (Operator *)
               MachineOperatorBuilder::PoisonedLoad
                         (*(MachineOperatorBuilder **)(this + 0x10),uVar4 | 0x700);
    }
  }
  else if (uVar1 == 0x1e7) {
    pOVar3 = (Operator *)
             MachineOperatorBuilder::UnalignedLoad
                       (*(MachineOperatorBuilder **)(this + 0x10),uVar4 | 0x700);
  }
  else {
    if (uVar1 != 0x1ef) goto LAB_0169f70c;
    pOVar3 = (Operator *)
             MachineOperatorBuilder::ProtectedLoad
                       (*(MachineOperatorBuilder **)(this + 0x10),uVar4 | 0x700);
  }
  NodeProperties::ChangeOp(param_1,pOVar3);
  return;
}

