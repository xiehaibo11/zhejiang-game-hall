
/* v8::internal::compiler::InstructionSelector::VisitWord32AtomicOr(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32AtomicOr
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = AtomicOpType(*(Operator **)param_1);
  uVar1 = uVar2 & 0xff;
  if (uVar1 == 4) {
    if ((uVar2 >> 8 & 0xfe) != 2) goto LAB_016262b4;
    uVar3 = 0x45;
  }
  else if (uVar1 == 3) {
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 2) {
      uVar3 = 0x43;
    }
    else {
      if (uVar1 != 3) goto LAB_016262b4;
      uVar3 = 0x44;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_016262b4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 2) {
      uVar3 = 0x41;
    }
    else {
      if (uVar1 != 3) goto LAB_016262b4;
      uVar3 = 0x42;
    }
  }
  FUN_01625e50(this,param_1,uVar3);
  return;
}

