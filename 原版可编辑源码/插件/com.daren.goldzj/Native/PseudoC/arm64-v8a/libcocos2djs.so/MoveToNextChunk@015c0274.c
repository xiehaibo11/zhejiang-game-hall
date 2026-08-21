
/* v8::internal::DeserializerAllocator::MoveToNextChunk(v8::internal::SnapshotSpace) */

void __thiscall
v8::internal::DeserializerAllocator::MoveToNextChunk(DeserializerAllocator *this,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(this + (long)param_2 * 4 + 0x90);
  if (*(long *)(*(long *)(this + (long)param_2 * 0x18) + (ulong)uVar1 * 0x18 + 0x10) !=
      *(long *)(this + (long)param_2 * 8 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","reservation[chunk_index].end == high_water_[space_number]");
  }
  uVar1 = uVar1 + 1;
  uVar4 = (ulong)uVar1;
  *(uint *)(this + (long)param_2 * 4 + 0x90) = uVar1;
  lVar2 = *(long *)(this + (long)param_2 * 0x18);
  uVar3 = (*(long *)(this + (long)param_2 * 0x18 + 8) - lVar2 >> 3) * -0x5555555555555555;
  if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
    *(undefined8 *)(this + (long)param_2 * 8 + 0xa0) = *(undefined8 *)(lVar2 + uVar4 * 0x18 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","chunk_index < reservation.size()");
}

