
/* v8::internal::compiler::MachineOperatorReducer::ReduceProjection(unsigned long,
   v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::MachineOperatorReducer::ReduceProjection
          (MachineOperatorReducer *this,ulong param_1,Node *param_2)

{
  undefined8 *puVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  MachineGraph *this_00;
  undefined8 uVar5;
  uint local_4c;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_48 [8];
  undefined8 local_40;
  int local_38;
  char local_34;
  undefined8 local_30;
  int local_28;
  char local_24;
  
  sVar2 = *(short *)(*(long *)param_2 + 0x10);
  if (sVar2 == 0x134) {
    BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
    ::BinopMatcher(aBStack_48,param_2);
    if (local_34 == '\0') {
      if (local_24 == '\0') {
        return 0;
      }
      if (local_28 != 1) {
        if (local_28 != 0) {
          return 0;
        }
        return local_30;
      }
      if (param_1 == 0) {
        return local_40;
      }
      this_00 = *(MachineGraph **)(this + 0x10);
      local_4c = 0;
    }
    else {
      if (local_24 == '\0') {
        return 0;
      }
      uVar4 = base::bits::SignedMulOverflow32(local_38,local_28,(int *)&local_4c);
      this_00 = *(MachineGraph **)(this + 0x10);
      if (param_1 != 0) {
        local_4c = uVar4 & 1;
      }
    }
  }
  else {
    if (sVar2 == 0x132) {
      BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
      ::BinopMatcher(aBStack_48,param_2);
      if (local_34 == '\0') goto LAB_0177cdc0;
      if (local_24 == '\0') {
        return 0;
      }
      this_00 = *(MachineGraph **)(this + 0x10);
      bVar3 = SBORROW4(local_38,local_28);
      local_4c = local_38 - local_28;
    }
    else {
      if (sVar2 != 0x130) {
        return 0;
      }
      BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
      ::BinopMatcher(aBStack_48,param_2);
      if (local_34 == '\0') {
LAB_0177cdc0:
        if ((local_24 != '\0') && (local_28 == 0)) {
          puVar1 = &local_40;
          if (param_1 != 0) {
            puVar1 = &local_30;
          }
          return *puVar1;
        }
        return 0;
      }
      if (local_24 == '\0') {
        return 0;
      }
      this_00 = *(MachineGraph **)(this + 0x10);
      bVar3 = SCARRY4(local_38,local_28);
      local_4c = local_38 + local_28;
    }
    if (param_1 != 0) {
      local_4c = (uint)bVar3;
    }
  }
  uVar5 = MachineGraph::Int32Constant(this_00,local_4c);
  return uVar5;
}

