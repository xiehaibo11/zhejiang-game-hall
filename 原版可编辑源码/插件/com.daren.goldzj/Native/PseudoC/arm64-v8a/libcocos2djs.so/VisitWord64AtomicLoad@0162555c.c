
/* v8::internal::compiler::InstructionSelector::VisitWord64AtomicLoad(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64AtomicLoad
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = LoadRepresentationOf(*(Operator **)param_1);
  uVar1 = iVar2 - 2U & 0xff;
  if (uVar1 < 4) {
    FUN_01625434(this,param_1,uVar1 + 0x1c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

