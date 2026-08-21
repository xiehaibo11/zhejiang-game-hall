
/* v8::internal::compiler::Arm64OperandGenerator::CanBeImmediate(long,
   v8::internal::compiler::ImmediateMode) */

uint __thiscall
v8::internal::compiler::Arm64OperandGenerator::CanBeImmediate
          (undefined8 param_1_00,ulong param_1,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uStack_24;
  
  switch(param_3) {
  case 0:
    uVar1 = Assembler::IsImmAddSub(param_1);
    goto LAB_016284d4;
  case 1:
  case 2:
    goto switchD_0162842c_caseD_1;
  case 3:
    uVar1 = 0x20;
    break;
  case 4:
    uVar1 = 0x40;
    break;
  case 5:
    uVar2 = Assembler::IsImmLSScaled(param_1,0);
    goto joined_r0x016284bc;
  case 6:
    uVar1 = 1;
    uVar2 = Assembler::IsImmLSScaled(param_1,1);
    if ((uVar2 & 1) != 0) goto LAB_016284d4;
    goto LAB_016284c8;
  case 7:
    uVar1 = 2;
    goto LAB_016284b4;
  case 8:
    uVar1 = 3;
LAB_016284b4:
    uVar2 = Assembler::IsImmLSScaled(param_1,uVar1);
joined_r0x016284bc:
    if ((uVar2 & 1) == 0) {
LAB_016284c8:
      uVar1 = Assembler::IsImmLSUnscaled(param_1);
    }
    else {
switchD_0162842c_caseD_1:
      uVar1 = 1;
    }
    goto LAB_016284d4;
  default:
    uVar1 = 0;
    goto LAB_016284d4;
  }
  uVar1 = Assembler::IsImmLogical(param_1,uVar1,&uStack_24,&uStack_24,&uStack_24);
LAB_016284d4:
  return uVar1 & 1;
}

