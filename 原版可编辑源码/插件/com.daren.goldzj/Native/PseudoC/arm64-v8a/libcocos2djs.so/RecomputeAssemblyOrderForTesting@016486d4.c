
/* v8::internal::compiler::InstructionSequence::RecomputeAssemblyOrderForTesting() */

void __thiscall
v8::internal::compiler::InstructionSequence::RecomputeAssemblyOrderForTesting
          (InstructionSequence *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(*(long **)(this + 0x10))[1];
  for (plVar2 = (long *)**(long **)(this + 0x10); plVar2 != plVar1; plVar2 = plVar2 + 1) {
    *(undefined4 *)(*plVar2 + 0x60) = 0xffffffff;
  }
  ComputeAssemblyOrder(this);
  return;
}

