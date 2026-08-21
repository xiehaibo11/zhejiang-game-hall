
/* v8::internal::MemoryChunk::ReleaseSweepingSlotSet() */

void v8::internal::MemoryChunk::ReleaseSweepingSlotSet(void)

{
  undefined8 *puVar1;
  long *in_x0;
  Malloced *this;
  void *in_x1;
  void *extraout_x1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar2 = (undefined8 *)in_x0[0xe];
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    for (uVar3 = *in_x0 + 0xfffU >> 0xc; uVar3 != 0; uVar3 = uVar3 - 1) {
      this = (Malloced *)*puVar1;
      *puVar1 = 0;
      if (this != (Malloced *)0x0) {
        Malloced::operator_delete(this,in_x1);
        in_x1 = extraout_x1;
      }
      puVar1 = puVar1 + 1;
    }
    AlignedFree((void *)((long)(puVar2 + -1) - (puVar2[-1] + 7 & 0xfffffffffffffff8)));
    in_x0[0xe] = 0;
  }
  return;
}

