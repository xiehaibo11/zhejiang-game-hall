
/* v8::internal::compiler::InstructionSelector::VisitWord32AtomicExchange(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32AtomicExchange
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = AtomicOpType(*(Operator **)param_1);
  uVar1 = uVar2 & 0xff;
  if (uVar1 == 4) {
    if ((uVar2 >> 8 & 0xfe) != 2) goto LAB_0162582c;
    uVar3 = 0x2c;
  }
  else if (uVar1 == 3) {
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 2) {
      uVar3 = 0x2a;
    }
    else {
      if (uVar1 != 3) goto LAB_0162582c;
      uVar3 = 0x2b;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_0162582c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = uVar2 >> 8 & 0xff;
    if (uVar1 == 2) {
      uVar3 = 0x28;
    }
    else {
      if (uVar1 != 3) goto LAB_0162582c;
      uVar3 = 0x29;
    }
  }
  FUN_01625838(this,param_1,uVar3);
  return;
}

