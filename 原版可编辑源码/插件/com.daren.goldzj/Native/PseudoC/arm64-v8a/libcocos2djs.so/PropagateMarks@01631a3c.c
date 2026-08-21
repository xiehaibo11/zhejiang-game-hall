
/* v8::internal::compiler::FrameElider::PropagateMarks() */

void __thiscall v8::internal::compiler::FrameElider::PropagateMarks(FrameElider *this)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar2 = (undefined8 *)**(long **)(*(long *)this + 0x10);
  puVar4 = (undefined8 *)(*(long **)(*(long *)this + 0x10))[1];
  if (puVar2 != puVar4) {
    do {
      uVar5 = 0;
      do {
        puVar3 = puVar2 + 1;
        uVar1 = PropagateIntoBlock(this,(InstructionBlock *)*puVar2);
        uVar5 = uVar5 | uVar1;
        puVar2 = puVar3;
      } while (puVar4 != puVar3);
      if ((uVar5 & 1) == 0) {
        puVar2 = (undefined8 *)**(long **)(*(long *)this + 0x10);
        puVar4 = (undefined8 *)(*(long **)(*(long *)this + 0x10))[1];
        if (puVar4 == puVar2) {
          return;
        }
        uVar5 = 0;
        do {
          puVar4 = puVar4 + -1;
          uVar1 = PropagateIntoBlock(this,(InstructionBlock *)*puVar4);
          uVar5 = uVar5 | uVar1;
        } while (puVar2 != puVar4);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      puVar2 = (undefined8 *)**(long **)(*(long *)this + 0x10);
      puVar4 = (undefined8 *)(*(long **)(*(long *)this + 0x10))[1];
    } while (puVar2 != puVar4);
  }
  return;
}

