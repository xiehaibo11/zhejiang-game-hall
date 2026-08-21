
/* v8::internal::compiler::LoopPeeler::PeelInnerLoopsOfTree() */

void __thiscall v8::internal::compiler::LoopPeeler::PeelInnerLoopsOfTree(LoopPeeler *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(*(long *)(this + 0x10) + 0x10);
  for (puVar2 = *(undefined8 **)(*(long *)(this + 0x10) + 8); puVar2 != puVar1; puVar2 = puVar2 + 1)
  {
    PeelInnerLoops(this,(Loop *)*puVar2);
  }
  EliminateLoopExits(*(Graph **)this,*(Zone **)(this + 0x18));
  return;
}

