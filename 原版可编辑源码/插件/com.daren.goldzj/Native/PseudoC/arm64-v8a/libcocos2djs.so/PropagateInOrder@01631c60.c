
/* v8::internal::compiler::FrameElider::PropagateInOrder() */

uint __thiscall v8::internal::compiler::FrameElider::PropagateInOrder(FrameElider *this)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar5;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)**(long **)(*(long *)this + 0x10);
  puVar1 = (undefined8 *)(*(long **)(*(long *)this + 0x10))[1];
  if (puVar3 == puVar1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      puVar4 = puVar3 + 1;
      uVar2 = PropagateIntoBlock(this,(InstructionBlock *)*puVar3);
      uVar5 = uVar5 | uVar2;
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
  }
  return uVar5 & 1;
}

