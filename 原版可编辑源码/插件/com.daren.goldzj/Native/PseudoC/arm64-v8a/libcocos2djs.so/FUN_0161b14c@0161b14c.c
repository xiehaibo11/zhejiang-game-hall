
void FUN_0161b14c(undefined8 *param_1,ulong param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  CodeGenerator *pCVar6;
  ulong local_b0;
  undefined4 local_a8;
  undefined2 local_a4 [2];
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined4 local_88;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  puVar4 = &local_b0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar6 = (CodeGenerator *)*param_1;
  local_a0 = param_4;
  local_98 = param_5;
  local_90 = param_2;
  local_88 = param_3;
  if ((int)param_4 == 5) {
    uVar2 = v8::internal::compiler::Constant::ToHeapObject((Constant *)&local_a0);
    uVar3 = v8::internal::compiler::CodeGenerator::IsMaterializableFromRoot(pCVar6,uVar2,local_a4);
    if ((uVar3 & 1) == 0) {
      local_b0 = 0x200000003f;
      if ((int)local_90 != 0x3f) {
        local_b0 = local_90 & 0xffffffff | 0x2000000000;
      }
      local_a8 = 0;
      local_58 = 2;
      local_60 = uVar2;
LAB_0161b2b0:
      local_48 = 2;
      local_50 = 0xffffffff;
      local_78 = 0;
      local_80[0] = 0;
      goto LAB_0161b2b4;
    }
    lVar5 = *(long *)(pCVar6 + 0xd0);
  }
  else {
    if ((int)param_4 != 6) {
      v8::internal::compiler::Arm64OperandConverter::ToImmediate((InstructionOperand *)param_1[1]);
      puVar4 = &local_90;
LAB_0161b2b4:
      v8::internal::TurboAssembler::Mov((TurboAssembler *)(pCVar6 + 0xd0),puVar4,local_80,0);
      goto LAB_0161b2bc;
    }
    uVar2 = v8::internal::compiler::Constant::ToHeapObject((Constant *)&local_a0);
    uVar3 = v8::internal::compiler::CodeGenerator::IsMaterializableFromRoot(pCVar6,uVar2,&local_b0);
    if ((uVar3 & 1) == 0) {
      local_58 = CONCAT71(local_58._1_7_,3);
      puVar4 = &local_90;
      local_60 = uVar2;
      goto LAB_0161b2b0;
    }
    lVar5 = *(long *)(pCVar6 + 0xd0);
    local_a4[0] = (undefined2)local_b0;
  }
  (**(code **)(lVar5 + 0x58))(pCVar6 + 0xd0,local_90,local_88,local_a4[0]);
LAB_0161b2bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

