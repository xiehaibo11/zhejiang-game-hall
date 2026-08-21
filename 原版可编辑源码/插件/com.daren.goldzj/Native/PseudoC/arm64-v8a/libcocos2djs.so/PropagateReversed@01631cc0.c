
/* v8::internal::compiler::FrameElider::PropagateReversed() */

uint __thiscall v8::internal::compiler::FrameElider::PropagateReversed(FrameElider *this)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)**(long **)(*(long *)this + 0x10);
  puVar3 = (undefined8 *)(*(long **)(*(long *)this + 0x10))[1];
  if (puVar3 == puVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      puVar3 = puVar3 + -1;
      uVar2 = PropagateIntoBlock(this,(InstructionBlock *)*puVar3);
      uVar4 = uVar4 | uVar2;
    } while (puVar1 != puVar3);
  }
  return uVar4 & 1;
}

