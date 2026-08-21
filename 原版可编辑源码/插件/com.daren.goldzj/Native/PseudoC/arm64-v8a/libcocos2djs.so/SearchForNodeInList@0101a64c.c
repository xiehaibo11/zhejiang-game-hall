
/* v8::internal::FreeListCategory::SearchForNodeInList(unsigned long, unsigned long*) */

ulong __thiscall
v8::internal::FreeListCategory::SearchForNodeInList
          (FreeListCategory *this,ulong param_1,ulong *param_2)

{
  uint uVar1;
  MemoryChunk *pMVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)(this + 8);
  uVar3 = (uint)uVar4;
  if (uVar3 == 0) {
LAB_0101a6a8:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(uVar4 + 3);
    uVar7 = (long)((ulong)uVar1 << 0x20) >> 0x21;
    if (uVar7 < param_1) {
      do {
        uVar6 = uVar4;
        uVar5 = *(uint *)(uVar6 + 7);
        if (uVar5 == 0) goto LAB_0101a6a8;
        uVar4 = uVar6 & 0xffffffff00000000 | (ulong)uVar5;
        uVar1 = *(uint *)(uVar4 + 3);
        uVar7 = (long)((ulong)uVar1 << 0x20) >> 0x21;
      } while (uVar7 < param_1);
    }
    else {
      uVar6 = 0;
      uVar5 = uVar3;
    }
    *(int *)(this + 4) = *(int *)(this + 4) - ((int)uVar1 >> 1);
    if (uVar5 == uVar3) {
      *(ulong *)(this + 8) = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7);
    }
    if ((int)uVar6 != 0) {
      pMVar2 = (MemoryChunk *)(uVar6 & 0xfffffffffffc0000);
      if ((((byte)pMVar2[10] >> 5 & 1) == 0) && (*(int *)(*(long *)(pMVar2 + 0x58) + 0x48) == 3)) {
        Heap::UnprotectAndRegisterMemoryChunk(*(Heap **)(pMVar2 + 0x18),pMVar2);
      }
      *(undefined4 *)(uVar6 + 7) = *(undefined4 *)(uVar4 + 7);
    }
    *param_2 = uVar7;
  }
  return uVar4;
}

