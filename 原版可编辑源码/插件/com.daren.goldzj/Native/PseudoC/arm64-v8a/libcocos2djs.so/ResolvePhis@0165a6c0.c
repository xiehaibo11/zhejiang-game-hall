
/* v8::internal::compiler::ConstraintBuilder::ResolvePhis() */

void __thiscall v8::internal::compiler::ConstraintBuilder::ResolvePhis(ConstraintBuilder *this)

{
  undefined8 *puVar1;
  long *plVar2;
  InstructionBlock *pIVar3;
  undefined8 *puVar4;
  
  plVar2 = *(long **)(*(long *)(*(long *)this + 0x10) + 0x10);
  puVar1 = (undefined8 *)*plVar2;
  puVar4 = (undefined8 *)plVar2[1];
  if (puVar4 != puVar1) {
    puVar4 = puVar4 + -1;
    pIVar3 = (InstructionBlock *)*puVar4;
    TickCounter::DoTick(*(TickCounter **)(*(long *)this + 0x1d8));
    ResolvePhis(this,pIVar3);
    while (puVar4 != puVar1) {
      puVar4 = puVar4 + -1;
      pIVar3 = (InstructionBlock *)*puVar4;
      TickCounter::DoTick(*(TickCounter **)(*(long *)this + 0x1d8));
      ResolvePhis(this,pIVar3);
    }
  }
  return;
}

