
/* v8::internal::compiler::InstructionSelector::VisitWord64AtomicExchange(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64AtomicExchange
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = AtomicOpType(*(Operator **)param_1);
  switch(uVar1 & 0xff) {
  case 2:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1dc;
LAB_01625a40:
      FUN_01625838(this,param_1,uVar2);
      return;
    }
    break;
  case 3:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1dd;
      goto LAB_01625a40;
    }
    break;
  case 4:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1de;
      goto LAB_01625a40;
    }
    break;
  case 5:
    if ((uVar1 >> 8 & 0xff) == 5) {
      uVar2 = 0x1df;
      goto LAB_01625a40;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

