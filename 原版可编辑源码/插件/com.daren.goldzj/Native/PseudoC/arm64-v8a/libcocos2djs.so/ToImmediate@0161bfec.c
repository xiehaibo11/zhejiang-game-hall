
/* v8::internal::compiler::Arm64OperandConverter::ToImmediate(v8::internal::compiler::InstructionOperand*)
    */

void v8::internal::compiler::Arm64OperandConverter::ToImmediate(InstructionOperand *param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong *in_x1;
  undefined1 *in_x8;
  long *plVar3;
  long *plVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  Operand *pOVar9;
  undefined1 auVar10 [16];
  ulong local_30;
  Operand *pOStack_28;
  
  uVar7 = *in_x1;
  if ((uVar7 & 7) == 3) {
    if (((uint)uVar7 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_30,(int)(uVar7 >> 0x20));
    }
    else {
      puVar1 = (ulong *)(*(long *)(*(long *)(*(long *)param_1 + 0x28) + 0x60) +
                        ((long)uVar7 >> 0x20) * 0x10);
      pOStack_28 = (Operand *)puVar1[1];
      local_30 = *puVar1;
    }
  }
  else {
    plVar4 = (long *)(*(long *)(*(long *)param_1 + 0x28) + 0x48);
    plVar8 = (long *)*plVar4;
    if (plVar8 == (long *)0x0) {
LAB_0161c068:
      plVar3 = plVar4;
    }
    else {
      plVar3 = plVar4;
      do {
        iVar6 = (int)(uVar7 >> 3);
        if (iVar6 <= (int)plVar8[4]) {
          plVar3 = plVar8;
        }
        plVar8 = (long *)plVar8[(int)plVar8[4] < iVar6];
      } while (plVar8 != (long *)0x0);
      if ((plVar3 == plVar4) || (iVar6 < (int)plVar3[4])) goto LAB_0161c068;
    }
    local_30 = plVar3[5];
    pOStack_28 = (Operand *)plVar3[6];
  }
  switch(local_30 & 0xffffffff) {
  case 0:
    *in_x8 = 0;
    in_x8[8] = 0;
    *(long *)(in_x8 + 0x20) = (long)(int)SUB84(pOStack_28,0);
    in_x8[0x28] = 0x13;
    *(undefined4 *)(in_x8 + 0x38) = 2;
    *(undefined8 *)(in_x8 + 0x30) = 0xffffffff;
    break;
  case 1:
    *in_x8 = 0;
    in_x8[8] = 0;
    *(Operand **)(in_x8 + 0x20) = pOStack_28;
    if ((local_30 & 0xff00000000) == 0x400000000) {
      uVar5 = 4;
    }
    else {
      uVar5 = 0x13;
    }
    in_x8[0x28] = uVar5;
    *(undefined4 *)(in_x8 + 0x38) = 2;
    *(undefined8 *)(in_x8 + 0x30) = 0xffffffff;
    break;
  case 2:
    pOVar9 = (Operand *)(double)SUB84(pOStack_28,0);
    goto LAB_0161c168;
  case 3:
    pOVar9 = pOStack_28;
LAB_0161c168:
    Operand::EmbeddedNumber(pOStack_28,(double)pOVar9);
    break;
  case 4:
    uVar2 = ExternalReference::FromRawAddress((ulong)pOStack_28);
    uVar5 = 7;
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x20) = uVar2;
    goto LAB_0161c198;
  case 5:
  case 6:
    uVar2 = Constant::ToHeapObject((Constant *)&local_30);
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x20) = uVar2;
    uVar5 = 3;
LAB_0161c198:
    in_x8[0x28] = uVar5;
    *(undefined8 *)(in_x8 + 0x30) = 0xffffffff;
    *(undefined4 *)(in_x8 + 0x38) = 2;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 8:
    auVar10 = Constant::ToDelayedStringConstant((Constant *)&local_30);
    Operand::EmbeddedStringConstant(auVar10._0_8_,auVar10._8_8_);
  }
  return;
}

