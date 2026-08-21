
/* v8::internal::compiler::RegisterAllocatorVerifier::BuildConstraint(v8::internal::compiler::InstructionOperand
   const*, v8::internal::compiler::RegisterAllocatorVerifier::OperandConstraint*) */

void __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::BuildConstraint
          (RegisterAllocatorVerifier *this,InstructionOperand *param_1,OperandConstraint *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  *(undefined4 *)(param_2 + 4) = 0x80000000;
  *(undefined4 *)(param_2 + 0xc) = 0xffffffff;
  uVar5 = *(ulong *)param_1;
  uVar6 = uVar5 & 7;
  if (uVar6 == 2) {
    *(undefined4 *)param_2 = 0;
    uVar3 = (undefined4)(*(ulong *)param_1 >> 3);
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    return;
  }
  if (uVar6 == 3) {
    *(undefined4 *)param_2 = 1;
    *(int *)(param_2 + 4) = (int)(uVar5 >> 0x20);
    return;
  }
  if (uVar6 != 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","op->IsUnallocated()");
  }
  iVar4 = (int)(uVar5 >> 3);
  *(int *)(param_2 + 0xc) = iVar4;
  uVar5 = *(ulong *)param_1;
  if ((uVar5 >> 0x23 & 1) == 0) {
    *(undefined4 *)param_2 = 7;
    *(int *)(param_2 + 4) = (int)((long)*(undefined8 *)param_1 >> 0x24);
    return;
  }
  switch(uVar5 >> 0x24 & 7) {
  default:
    bVar1 = InstructionSequence::GetRepresentation(*(InstructionSequence **)(this + 0x10),iVar4);
    if (bVar1 < 0xb) {
      uVar3 = 8;
    }
    else {
      uVar3 = 9;
    }
    break;
  case 2:
    uVar3 = 10;
    break;
  case 3:
    if ((uVar5 & 0x17800000000) == 0x13800000000) {
      *(undefined4 *)param_2 = 0xc;
      *(uint *)(param_2 + 8) = (uint)((ulong)*(undefined8 *)param_1 >> 0x2f) & 7;
      goto LAB_01650d44;
    }
    uVar3 = 3;
    goto LAB_01650d40;
  case 4:
    uVar3 = 5;
LAB_01650d40:
    *(undefined4 *)param_2 = uVar3;
LAB_01650d44:
    *(uint *)(param_2 + 4) = (uint)((ulong)*(undefined8 *)param_1 >> 0x29) & 0x3f;
    return;
  case 5:
    bVar1 = InstructionSequence::GetRepresentation(*(InstructionSequence **)(this + 0x10),iVar4);
    if (bVar1 < 0xb) {
      uVar3 = 2;
    }
    else {
      uVar3 = 4;
    }
    break;
  case 6:
    *(undefined4 *)param_2 = 6;
    cVar2 = InstructionSequence::GetRepresentation(*(InstructionSequence **)(this + 0x10),iVar4);
    if ((byte)(cVar2 - 1U) < 0xd) {
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(&DAT_01a5a60c + (long)(char)(cVar2 - 1U) * 4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 7:
    uVar3 = 0xb;
  }
  *(undefined4 *)param_2 = uVar3;
  return;
}

