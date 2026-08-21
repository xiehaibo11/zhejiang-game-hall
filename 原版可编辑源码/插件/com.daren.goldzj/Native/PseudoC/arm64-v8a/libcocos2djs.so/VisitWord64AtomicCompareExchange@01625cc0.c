
/* v8::internal::compiler::InstructionSelector::VisitWord64AtomicCompareExchange(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64AtomicCompareExchange
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = AtomicOpType(*(Operator **)param_1);
  switch(uVar1 & 0xff) {
  case 2:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1e0;
LAB_01625d54:
      FUN_01625b18(this,param_1,uVar2);
      return;
    }
    break;
  case 3:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1e1;
      goto LAB_01625d54;
    }
    break;
  case 4:
    if ((uVar1 >> 8 & 0xff) == 3) {
      uVar2 = 0x1e2;
      goto LAB_01625d54;
    }
    break;
  case 5:
    if ((uVar1 >> 8 & 0xff) == 5) {
      uVar2 = 0x1e3;
      goto LAB_01625d54;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

