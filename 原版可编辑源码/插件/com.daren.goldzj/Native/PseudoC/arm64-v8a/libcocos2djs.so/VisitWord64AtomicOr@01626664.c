
/* v8::internal::compiler::InstructionSelector::VisitWord64AtomicOr(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64AtomicOr
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = AtomicOpType(*(Operator **)param_1);
  switch(uVar1 & 0xff) {
  case 2:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1d4;
LAB_016266f8:
      FUN_01625e50(this,param_1,uVar2);
      return;
    }
    break;
  case 3:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1d5;
      goto LAB_016266f8;
    }
    break;
  case 4:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1d6;
      goto LAB_016266f8;
    }
    break;
  case 5:
    if ((uVar1 >> 8 & 0xff) == 5) {
      uVar2 = 0x1d7;
      goto LAB_016266f8;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

