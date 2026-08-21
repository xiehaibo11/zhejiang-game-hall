
/* v8::internal::MarkCompactCollector::EvacuateEpilogue() */

void __thiscall v8::internal::MarkCompactCollector::EvacuateEpilogue(MarkCompactCollector *this)

{
  Page *pPVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(this + 0x26e8) = *(undefined8 *)(this + 0x26e0);
  SemiSpace::set_age_mark
            ((SemiSpace *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0xd0),
             *(ulong *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x68));
  (**(code **)(**(long **)(*(long *)(this + 8) + 0x108) + 0x80))();
  (**(code **)(**(long **)(*(long *)(this + 8) + 0x110) + 0x80))();
  (**(code **)(**(long **)(*(long *)(this + 8) + 0x118) + 0x80))();
  puVar2 = *(undefined8 **)(this + 0x26b0);
  puVar3 = *(undefined8 **)(this + 0x26b8);
  if (puVar2 != puVar3) {
    do {
      pPVar1 = (Page *)*puVar2;
      if (((byte)pPVar1[8] >> 6 & 1) != 0) {
        *(undefined8 *)(pPVar1 + 0x68) = 0;
        if (*(long *)(pPVar1 + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","p->SweepingDone()");
        }
        PagedSpace::ReleasePage(*(PagedSpace **)(pPVar1 + 0x58),pPVar1);
      }
      puVar2 = puVar2 + 1;
    } while (puVar3 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x26b0);
  }
  *(undefined8 **)(this + 0x26b8) = puVar2;
  this[0x4e] = (MarkCompactCollector)0x0;
  MemoryAllocator::Unmapper::FreeQueuedChunks
            ((Unmapper *)(*(long *)(*(long *)(this + 8) + 0x820) + 0x88));
  return;
}

