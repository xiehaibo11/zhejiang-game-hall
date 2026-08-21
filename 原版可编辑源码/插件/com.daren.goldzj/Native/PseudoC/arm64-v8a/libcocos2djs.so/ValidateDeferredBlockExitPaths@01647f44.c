
/* v8::internal::compiler::InstructionSequence::ValidateDeferredBlockExitPaths() const */

void __thiscall
v8::internal::compiler::InstructionSequence::ValidateDeferredBlockExitPaths
          (InstructionSequence *this)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  puVar1 = (undefined8 *)**(long **)(this + 0x10);
  puVar3 = (undefined8 *)(*(long **)(this + 0x10))[1];
  if (puVar1 != puVar3) {
    puVar4 = puVar1;
    do {
      plVar5 = (long *)*puVar4;
      if ((char)plVar5[0xf] != '\0') {
        piVar2 = (int *)*plVar5;
        if (1 < (ulong)(plVar5[1] - (long)piVar2 >> 2)) {
          for (; piVar2 != (int *)plVar5[1]; piVar2 = piVar2 + 1) {
            if ((ulong)((long)puVar3 - (long)puVar1 >> 3) <= (ulong)(long)*piVar2) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(char *)(puVar1[*piVar2] + 0x78) == '\0') {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","InstructionBlockAt(successor_id)->IsDeferred()");
            }
          }
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar3);
  }
  return;
}

