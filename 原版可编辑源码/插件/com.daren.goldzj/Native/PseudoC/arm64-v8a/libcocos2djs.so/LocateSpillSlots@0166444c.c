
/* v8::internal::compiler::SpillSlotLocator::LocateSpillSlots() */

void __thiscall v8::internal::compiler::SpillSlotLocator::LocateSpillSlots(SpillSlotLocator *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  InstructionSequence *this_00;
  long *plVar5;
  int *piVar6;
  
  lVar3 = *(long *)this;
  plVar5 = *(long **)(lVar3 + 0x88);
  plVar1 = *(long **)(lVar3 + 0x90);
  lVar2 = (long)plVar1 - (long)plVar5;
  if (plVar1 == plVar5) {
    return;
  }
  this_00 = *(InstructionSequence **)(lVar3 + 0x10);
  do {
    lVar4 = *plVar5;
    if (((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) && ((*(uint *)(lVar4 + 4) >> 6 & 1) != 0))
    {
      if ((*(byte *)(lVar3 + 0x1d0) & 1) == 0) {
        if (*(char *)(lVar4 + 0x80) == '\0') {
LAB_016644a8:
          for (piVar6 = *(int **)(lVar4 + 0x78); piVar6 != (int *)0x0;
              piVar6 = *(int **)(piVar6 + 4)) {
            lVar3 = InstructionSequence::GetInstructionBlock(this_00,*piVar6);
            *(undefined1 *)(lVar3 + 0x7c) = 1;
          }
        }
      }
      else if ((~*(uint *)(lVar4 + 4) & 0x60) != 0) goto LAB_016644a8;
    }
    plVar5 = plVar5 + 1;
    if (plVar5 == plVar1) {
      return;
    }
    lVar3 = *(long *)this;
    if (lVar2 != *(long *)(lVar3 + 0x90) - *(long *)(lVar3 + 0x88)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","live_ranges_size == data()->live_ranges().size()");
    }
  } while( true );
}

