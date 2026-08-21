
/* v8::internal::interpreter::BytecodeGenerator::VisitBreakStatement(v8::internal::BreakStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitBreakStatement
          (BytecodeGenerator *this,BreakStatement *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if (*(BlockCoverageBuilder **)(this + 0x208) != (BlockCoverageBuilder *)0x0) {
    BlockCoverageBuilder::AllocateBlockCoverageSlot
              (*(BlockCoverageBuilder **)(this + 0x208),param_1,2);
  }
  iVar1 = *(int *)param_1;
  if (iVar1 != -1) {
    this[0x1c0] = (BytecodeGenerator)0x2;
    *(int *)(this + 0x1c4) = iVar1;
  }
  plVar3 = *(long **)(this + 0x2f0);
  uVar4 = *(undefined8 *)(param_1 + 8);
  do {
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0,uVar4,0xffffffff);
    if ((uVar2 & 1) != 0) {
      return;
    }
    plVar3 = (long *)plVar3[2];
  } while (plVar3 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

