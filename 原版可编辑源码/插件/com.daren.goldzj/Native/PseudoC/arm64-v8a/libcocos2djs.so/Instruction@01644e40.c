
/* v8::internal::compiler::Instruction::Instruction(unsigned int, unsigned long,
   v8::internal::compiler::InstructionOperand*, unsigned long,
   v8::internal::compiler::InstructionOperand*, unsigned long,
   v8::internal::compiler::InstructionOperand*) */

void __thiscall
v8::internal::compiler::Instruction::Instruction
          (Instruction *this,uint param_1,ulong param_2,InstructionOperand *param_3,ulong param_4,
          InstructionOperand *param_5,ulong param_6,InstructionOperand *param_7)

{
  InstructionOperand *pIVar1;
  ulong uVar2;
  long lVar3;
  InstructionOperand *pIVar4;
  Instruction *pIVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(uint *)this = param_1;
  *(uint *)(this + 4) = (uint)param_2 | (int)param_4 << 8 | (int)param_6 << 0x18;
  *(undefined8 *)(this + 0x28) = 0;
  if (param_2 != 0) {
    if ((param_2 < 4) ||
       ((this + 0x28 < (Instruction *)(param_3 + param_2 * 8) &&
        (param_3 < this + param_2 * 8 + 0x28)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_2 & 0xfffffffffffffffc;
      pIVar4 = param_3 + 0x10;
      pIVar5 = this + 0x38;
      uVar6 = uVar2;
      do {
        pIVar1 = pIVar4 + -8;
        uVar7 = *(undefined8 *)(pIVar4 + -0x10);
        uVar9 = *(undefined8 *)(pIVar4 + 8);
        uVar8 = *(undefined8 *)pIVar4;
        pIVar4 = pIVar4 + 0x20;
        uVar6 = uVar6 - 4;
        *(undefined8 *)(pIVar5 + -8) = *(undefined8 *)pIVar1;
        *(undefined8 *)(pIVar5 + -0x10) = uVar7;
        *(undefined8 *)(pIVar5 + 8) = uVar9;
        *(undefined8 *)pIVar5 = uVar8;
        pIVar5 = pIVar5 + 0x20;
      } while (uVar6 != 0);
      if (uVar2 == param_2) goto LAB_01644eb4;
    }
    lVar3 = param_2 - uVar2;
    pIVar5 = this + uVar2 * 8 + 0x28;
    pIVar4 = param_3 + uVar2 * 8;
    do {
      lVar3 = lVar3 + -1;
      *(undefined8 *)pIVar5 = *(undefined8 *)pIVar4;
      pIVar5 = pIVar5 + 8;
      pIVar4 = pIVar4 + 8;
    } while (lVar3 != 0);
  }
LAB_01644eb4:
  if (param_4 != 0) {
    if (param_4 < 4) {
LAB_01644ef0:
      uVar2 = 0;
    }
    else {
      if ((this + param_2 * 8 + 0x28 < (Instruction *)(param_5 + param_4 * 8)) &&
         (param_5 < this + param_4 * 8 + param_2 * 8 + 0x28)) goto LAB_01644ef0;
      uVar2 = param_4 & 0xfffffffffffffffc;
      lVar3 = param_2 * 8;
      param_2 = uVar2 + param_2;
      pIVar5 = this + lVar3 + 0x38;
      pIVar4 = param_5 + 0x10;
      uVar6 = uVar2;
      do {
        pIVar1 = pIVar4 + -8;
        uVar7 = *(undefined8 *)(pIVar4 + -0x10);
        uVar9 = *(undefined8 *)(pIVar4 + 8);
        uVar8 = *(undefined8 *)pIVar4;
        uVar6 = uVar6 - 4;
        pIVar4 = pIVar4 + 0x20;
        *(undefined8 *)(pIVar5 + -8) = *(undefined8 *)pIVar1;
        *(undefined8 *)(pIVar5 + -0x10) = uVar7;
        *(undefined8 *)(pIVar5 + 8) = uVar9;
        *(undefined8 *)pIVar5 = uVar8;
        pIVar5 = pIVar5 + 0x20;
      } while (uVar6 != 0);
      if (uVar2 == param_4) goto LAB_01644f1c;
    }
    lVar3 = param_4 - uVar2;
    pIVar4 = param_5 + uVar2 * 8;
    uVar2 = param_2;
    do {
      param_2 = uVar2 + 1;
      lVar3 = lVar3 + -1;
      *(undefined8 *)(this + uVar2 * 8 + 0x28) = *(undefined8 *)pIVar4;
      pIVar4 = pIVar4 + 8;
      uVar2 = param_2;
    } while (lVar3 != 0);
  }
LAB_01644f1c:
  if (param_6 == 0) {
    return;
  }
  if (3 < param_6) {
    if (((Instruction *)(param_7 + param_6 * 8) <= this + param_2 * 8 + 0x28) ||
       (this + param_2 * 8 + param_6 * 8 + 0x28 <= param_7)) {
      uVar2 = param_6 & 0xfffffffffffffffc;
      lVar3 = param_2 * 8;
      pIVar4 = param_7 + 0x10;
      param_2 = param_2 + uVar2;
      pIVar5 = this + lVar3 + 0x38;
      uVar6 = uVar2;
      do {
        pIVar1 = pIVar4 + -8;
        uVar7 = *(undefined8 *)(pIVar4 + -0x10);
        uVar9 = *(undefined8 *)(pIVar4 + 8);
        uVar8 = *(undefined8 *)pIVar4;
        pIVar4 = pIVar4 + 0x20;
        uVar6 = uVar6 - 4;
        *(undefined8 *)(pIVar5 + -8) = *(undefined8 *)pIVar1;
        *(undefined8 *)(pIVar5 + -0x10) = uVar7;
        *(undefined8 *)(pIVar5 + 8) = uVar9;
        *(undefined8 *)pIVar5 = uVar8;
        pIVar5 = pIVar5 + 0x20;
      } while (uVar6 != 0);
      if (uVar2 == param_6) {
        return;
      }
      goto LAB_01644f5c;
    }
  }
  uVar2 = 0;
LAB_01644f5c:
  lVar3 = param_6 - uVar2;
  pIVar4 = param_7 + uVar2 * 8;
  pIVar5 = this + param_2 * 8 + 0x28;
  do {
    lVar3 = lVar3 + -1;
    *(undefined8 *)pIVar5 = *(undefined8 *)pIVar4;
    pIVar4 = pIVar4 + 8;
    pIVar5 = pIVar5 + 8;
  } while (lVar3 != 0);
  return;
}

