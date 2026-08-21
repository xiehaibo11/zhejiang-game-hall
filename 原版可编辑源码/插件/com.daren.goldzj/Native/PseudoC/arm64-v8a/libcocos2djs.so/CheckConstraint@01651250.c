
/* v8::internal::compiler::RegisterAllocatorVerifier::CheckConstraint(v8::internal::compiler::InstructionOperand
   const*, v8::internal::compiler::RegisterAllocatorVerifier::OperandConstraint const*) */

void __thiscall
v8::internal::compiler::RegisterAllocatorVerifier::CheckConstraint
          (RegisterAllocatorVerifier *this,InstructionOperand *param_1,OperandConstraint *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  switch(*(undefined4 *)param_2) {
  case 0:
    if ((*(ulong *)param_1 & 7) == 2) {
      if (*(int *)(param_2 + 4) == (int)(*(ulong *)param_1 >> 3)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "ConstantOperand::cast(op)->virtual_register() == constraint->value_");
    }
    break;
  case 1:
    if ((*(ulong *)param_1 & 7) == 3) {
      if (*(int *)(param_2 + 4) == (int)(*(ulong *)param_1 >> 0x20)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","value == constraint->value_");
    }
    break;
  case 2:
    uVar2 = *(ulong *)param_1;
    if ((uVar2 & 0x1c) != 4) break;
    goto LAB_016513bc;
  case 3:
  case 0xc:
    uVar2 = *(ulong *)param_1;
    if (((uVar2 & 0x1c) == 4) && (((uint)(uVar2 >> 5) & 0xff) < 0xb)) {
LAB_01651404:
      if (*(int *)(param_2 + 4) == (int)((long)uVar2 >> 0x23)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "LocationOperand::cast(op)->register_code() == constraint->value_");
    }
    break;
  case 4:
    uVar2 = *(ulong *)param_1;
    if ((uVar2 & 0x1c) != 4) break;
    goto LAB_01651470;
  case 5:
    uVar2 = *(ulong *)param_1;
    if (((uVar2 & 0x1c) == 4) && (10 < ((uint)(uVar2 >> 5) & 0xff))) goto LAB_01651404;
    break;
  case 6:
    if ((*(ulong *)param_1 & 0x1c) == 0xc) {
      uVar1 = (int)(*(ulong *)param_1 >> 5) - 1;
      if (0xc < (uVar1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (*(int *)(&DAT_01a5a60c + (long)(char)uVar1 * 4) == *(int *)(param_2 + 4)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "ElementSizeLog2Of(LocationOperand::cast(op)->representation()) == constraint->value_"
              );
    }
    break;
  case 7:
    if ((*(ulong *)param_1 & 0x1c) == 0xc) {
      if (*(int *)(param_2 + 4) == (int)((long)*(ulong *)param_1 >> 0x23)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","LocationOperand::cast(op)->index() == constraint->value_");
    }
    break;
  case 8:
    uVar2 = *(ulong *)param_1;
    if ((uVar2 & 0x1c | 8) != 0xc) break;
LAB_016513bc:
    if (((uint)(uVar2 >> 5) & 0xff) < 0xb) {
switchD_01651278_default:
      return;
    }
    break;
  case 9:
    uVar2 = *(ulong *)param_1;
    if ((uVar2 & 0x1c | 8) != 0xc) break;
LAB_01651470:
    if (10 < ((uint)(uVar2 >> 5) & 0xff)) {
      return;
    }
    break;
  case 10:
    uVar2 = *(ulong *)param_1;
    if ((uVar2 & 7) == 2) {
      return;
    }
    if ((uVar2 & 0x1c | 8) == 0xc && ((uint)uVar2 >> 5 & 0xff) < 0xb) {
      return;
    }
    break;
  case 0xb:
    break;
  default:
    goto switchD_01651278_default;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",*(undefined8 *)(this + 0x78));
}

