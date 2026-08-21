
/* v8::internal::compiler::InstructionSelector::VisitWord32AtomicLoad(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord32AtomicLoad
          (InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = LoadRepresentationOf(*(Operator **)param_1);
  uVar1 = uVar3 & 0xff;
  if (uVar1 == 4) {
    iVar4 = 0x24;
  }
  else {
    if (uVar1 == 3) {
      uVar1 = uVar3 >> 8 & 0xff;
      bVar2 = uVar1 == 4 || uVar1 == 2;
      iVar4 = 0x22;
    }
    else {
      if (uVar1 != 2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar1 = uVar3 >> 8 & 0xff;
      bVar2 = uVar1 == 4 || uVar1 == 2;
      iVar4 = 0x20;
    }
    if (!bVar2) {
      iVar4 = iVar4 + 1;
    }
  }
  FUN_01625434(this,param_1,iVar4);
  return;
}

