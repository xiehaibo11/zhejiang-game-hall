
/* v8::internal::MemoryChunk::ReleaseSlotSet(v8::internal::SlotSet**) */

void __thiscall v8::internal::MemoryChunk::ReleaseSlotSet(MemoryChunk *this,SlotSet **param_1)

{
  SlotSet *pSVar1;
  Malloced *this_00;
  SlotSet **ppSVar2;
  SlotSet **extraout_x1;
  SlotSet *pSVar3;
  ulong uVar4;
  
  pSVar3 = *param_1;
  if (pSVar3 != (SlotSet *)0x0) {
    pSVar1 = pSVar3;
    ppSVar2 = param_1;
    for (uVar4 = *(long *)this + 0xfffU >> 0xc; uVar4 != 0; uVar4 = uVar4 - 1) {
      this_00 = *(Malloced **)pSVar1;
      *(undefined8 *)pSVar1 = 0;
      if (this_00 != (Malloced *)0x0) {
        Malloced::operator_delete(this_00,ppSVar2);
        ppSVar2 = extraout_x1;
      }
      pSVar1 = pSVar1 + 8;
    }
    AlignedFree(pSVar3 + -8 + -(*(long *)(pSVar3 + -8) + 7U & 0xfffffffffffffff8));
    *param_1 = (SlotSet *)0x0;
  }
  return;
}

