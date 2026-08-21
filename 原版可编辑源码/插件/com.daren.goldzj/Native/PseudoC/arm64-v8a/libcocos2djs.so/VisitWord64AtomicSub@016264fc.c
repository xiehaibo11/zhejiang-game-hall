
/* v8::internal::compiler::InstructionSelector::VisitWord64AtomicSub(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64AtomicSub
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = AtomicOpType(*(Operator **)param_1);
  switch(uVar1 & 0xff) {
  case 2:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1cc;
LAB_01626590:
      FUN_01625e50(this,param_1,uVar2);
      return;
    }
    break;
  case 3:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1cd;
      goto LAB_01626590;
    }
    break;
  case 4:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1ce;
      goto LAB_01626590;
    }
    break;
  case 5:
    if ((uVar1 >> 8 & 0xff) == 5) {
      uVar2 = 0x1cf;
      goto LAB_01626590;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

