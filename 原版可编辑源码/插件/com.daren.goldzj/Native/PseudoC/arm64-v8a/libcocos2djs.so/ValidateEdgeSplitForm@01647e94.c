
/* v8::internal::compiler::InstructionSequence::ValidateEdgeSplitForm() const */

void __thiscall
v8::internal::compiler::InstructionSequence::ValidateEdgeSplitForm(InstructionSequence *this)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  
  puVar1 = (undefined8 *)**(long **)(this + 0x10);
  puVar3 = (undefined8 *)(*(long **)(this + 0x10))[1];
  if (puVar1 != puVar3) {
    puVar5 = puVar1;
    do {
      plVar6 = (long *)*puVar5;
      piVar7 = (int *)*plVar6;
      piVar4 = (int *)plVar6[1];
      if (1 < (ulong)((long)piVar4 - (long)piVar7 >> 2) && piVar7 != piVar4) {
        do {
          if ((ulong)((long)puVar3 - (long)puVar1 >> 3) <= (ulong)(long)*piVar7) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          piVar2 = *(int **)(puVar1[*piVar7] + 0x20);
          if ((*(long *)(puVar1[*piVar7] + 0x28) - (long)piVar2 != 4) ||
             (*piVar2 != *(int *)((long)plVar6 + 100))) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.",
                     "successor->PredecessorCount() == 1 && successor->predecessors()[0] == block->rpo_number()"
                    );
          }
          piVar7 = piVar7 + 1;
        } while (piVar4 != piVar7);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar3);
  }
  return;
}

