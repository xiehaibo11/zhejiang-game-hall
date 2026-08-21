
/* v8::internal::OldLargeObjectSpace::ClearMarkingStateOfLiveObjects() */

void v8::internal::OldLargeObjectSpace::ClearMarkingStateOfLiveObjects(void)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  long in_x0;
  MemoryChunk *in_x1;
  MemoryChunk *extraout_x1;
  int iVar5;
  RememberedSet<(v8::internal::RememberedSetType)0> *this;
  long lVar6;
  uint uVar7;
  
  lVar6 = *(long *)(in_x0 + 0x20);
  if (lVar6 != 0) {
    uVar1 = *(long *)(lVar6 + 0x20) + 1;
    iVar5 = (int)uVar1;
    while (iVar5 != 0) {
      this = (RememberedSet<(v8::internal::RememberedSetType)0> *)(uVar1 & 0xfffffffffffc0000);
      lVar6 = *(long *)(lVar6 + 0xe0);
      puVar2 = (uint *)(*(long *)(this + 0x10) + (uVar1 - (long)this >> 7 & 0x1ffffff) * 4);
      uVar3 = 1 << (ulong)((uint)(uVar1 - (long)this >> 2) & 0x1f);
      if ((*puVar2 & uVar3) != 0) {
        bVar4 = uVar3 << 1 == 0;
        *puVar2 = *puVar2 & (uVar3 ^ 0xffffffff);
        uVar7 = 0xfffffffe;
        if (!bVar4) {
          uVar7 = ~(uVar3 << 1);
        }
        puVar2[bVar4] = puVar2[bVar4] & uVar7;
        RememberedSet<(v8::internal::RememberedSetType)0>::FreeEmptyBuckets(this,in_x1);
        if (((byte)this[9] & 1) != 0) {
          *(undefined8 *)(this + 0x60) = 0;
        }
        *(undefined8 *)(this + 0x68) = 0;
        in_x1 = extraout_x1;
      }
      if (lVar6 == 0) {
        return;
      }
      uVar1 = *(long *)(lVar6 + 0x20) + 1;
      iVar5 = (int)uVar1;
    }
  }
  return;
}

