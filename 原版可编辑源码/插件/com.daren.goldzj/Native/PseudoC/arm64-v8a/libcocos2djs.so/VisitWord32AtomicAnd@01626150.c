
/* v8::internal::compiler::InstructionSelector::VisitWord32AtomicAnd(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32AtomicAnd
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = AtomicOpType(*(Operator **)param_1);
  uVar1 = uVar2 & 0xff;
  if (uVar1 == 4) {
    if ((uVar2 >> 8 & 0xfe) != 2) goto LAB_016261fc;
    uVar3 = 0x40;
  }
  else if (uVar1 == 3) {
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 2) {
      uVar3 = 0x3e;
    }
    else {
      if (uVar1 != 3) goto LAB_016261fc;
      uVar3 = 0x3f;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_016261fc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 2) {
      uVar3 = 0x3c;
    }
    else {
      if (uVar1 != 3) goto LAB_016261fc;
      uVar3 = 0x3d;
    }
  }
  FUN_01625e50(this,param_1,uVar3);
  return;
}

