
/* v8::internal::RememberedSet<(v8::internal::RememberedSetType)0>::FreeEmptyBuckets(v8::internal::MemoryChunk*)
    */

void __thiscall
v8::internal::RememberedSet<(v8::internal::RememberedSetType)0>::FreeEmptyBuckets
          (RememberedSet<(v8::internal::RememberedSetType)0> *this,MemoryChunk *param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  Bucket *this_00;
  Malloced *pMVar3;
  MemoryChunk *extraout_x1;
  MemoryChunk *extraout_x1_00;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  puVar4 = *(undefined8 **)(this + 0x30);
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = *(long *)this + 0xfffU >> 0xc;
    if (uVar5 != 0) {
      bVar2 = true;
      this_00 = (Bucket *)*puVar4;
      while( true ) {
        if (this_00 != (Bucket *)0x0) {
          auVar6 = SlotSet::Bucket::IsEmpty(this_00);
          param_1 = auVar6._8_8_;
          if ((auVar6._0_8_ & 1) == 0) {
            bVar2 = false;
          }
          else {
            pMVar3 = (Malloced *)*puVar4;
            *puVar4 = 0;
            if (pMVar3 != (Malloced *)0x0) {
              Malloced::operator_delete(pMVar3,param_1);
              param_1 = extraout_x1;
            }
          }
        }
        uVar5 = uVar5 - 1;
        puVar4 = puVar4 + 1;
        if (uVar5 == 0) break;
        this_00 = (Bucket *)*puVar4;
      }
      if (!bVar2) {
        return;
      }
      puVar4 = *(undefined8 **)(this + 0x30);
    }
    if (puVar4 != (undefined8 *)0x0) {
      puVar1 = puVar4;
      for (uVar5 = *(long *)this + 0xfffU >> 0xc; uVar5 != 0; uVar5 = uVar5 - 1) {
        pMVar3 = (Malloced *)*puVar1;
        *puVar1 = 0;
        if (pMVar3 != (Malloced *)0x0) {
          Malloced::operator_delete(pMVar3,param_1);
          param_1 = extraout_x1_00;
        }
        puVar1 = puVar1 + 1;
      }
      AlignedFree((void *)((long)(puVar4 + -1) - (puVar4[-1] + 7 & 0xfffffffffffffff8)));
      *(undefined8 *)(this + 0x30) = 0;
    }
  }
  return;
}

