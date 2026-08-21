
/* v8::internal::compiler::InstructionSequence::ValidateDeferredBlockEntryPaths() const */

void __thiscall
v8::internal::compiler::InstructionSequence::ValidateDeferredBlockEntryPaths
          (InstructionSequence *this)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar1 = (long *)**(long **)(this + 0x10);
  plVar3 = (long *)(*(long **)(this + 0x10))[1];
  if (plVar1 != plVar3) {
    plVar4 = plVar1;
    do {
      lVar5 = *plVar4;
      if (*(char *)(lVar5 + 0x78) != '\0') {
        piVar2 = *(int **)(lVar5 + 0x20);
        if (1 < (ulong)((long)*(int **)(lVar5 + 0x28) - (long)piVar2 >> 2)) {
          for (; piVar2 != *(int **)(lVar5 + 0x28); piVar2 = piVar2 + 1) {
            if ((ulong)((long)plVar3 - (long)plVar1 >> 3) <= (ulong)(long)*piVar2) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (*(char *)(plVar1[*piVar2] + 0x78) == '\0') {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","InstructionBlockAt(predecessor_id)->IsDeferred()");
            }
          }
        }
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar3);
  }
  return;
}

