
/* v8::internal::FreeList::SearchForNodeInList(int, unsigned long, unsigned long*) */

ulong __thiscall
v8::internal::FreeList::SearchForNodeInList(FreeList *this,int param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  MemoryChunk *pMVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(*(long *)(this + 0x20) + (long)param_1 * 8);
  if (lVar5 == 0) {
    return 0;
  }
LAB_0101aa40:
  uVar4 = *(ulong *)(lVar5 + 8);
  lVar6 = *(long *)(lVar5 + 0x18);
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar9 = (long)((ulong)*(uint *)(uVar4 + 3) << 0x20) >> 0x21;
    if (uVar9 < param_2) goto LAB_0101aa64;
    uVar8 = 0;
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) - ((int)*(uint *)(uVar4 + 3) >> 1);
    goto LAB_0101aac0;
  }
  uVar4 = 0;
  goto LAB_0101aa3c;
LAB_0101aa64:
  do {
    uVar8 = uVar4;
    uVar1 = *(uint *)(uVar8 + 7);
    if (uVar1 == 0) {
      lVar5 = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
      goto LAB_0101aa40;
    }
    uVar4 = uVar8 & 0xffffffff00000000 | (ulong)uVar1;
    uVar9 = (long)((ulong)*(uint *)(uVar4 + 3) << 0x20) >> 0x21;
  } while (uVar9 < param_2);
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) - ((int)*(uint *)(uVar4 + 3) >> 1);
  if (uVar1 == uVar3) {
LAB_0101aac0:
    *(ulong *)(lVar5 + 8) = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7);
    iVar7 = (int)uVar8;
  }
  else {
    iVar7 = (int)uVar8;
  }
  if (iVar7 == 0) {
    *param_3 = uVar9;
  }
  else {
    pMVar2 = (MemoryChunk *)(uVar8 & 0xfffffffffffc0000);
    if ((((byte)pMVar2[10] >> 5 & 1) == 0) && (*(int *)(*(long *)(pMVar2 + 0x58) + 0x48) == 3)) {
      Heap::UnprotectAndRegisterMemoryChunk(*(Heap **)(pMVar2 + 0x18),pMVar2);
    }
    *(undefined4 *)(uVar8 + 7) = *(undefined4 *)(uVar4 + 7);
    *param_3 = uVar9;
  }
  if ((int)uVar4 != 0) {
    *(ulong *)(this + 0x28) = *(long *)(this + 0x28) - *param_3;
    if (*(int *)(lVar5 + 8) != 0) {
      return uVar4;
    }
    (**(code **)(*(long *)this + 0x40))(this,lVar5);
    return uVar4;
  }
LAB_0101aa3c:
  lVar5 = lVar6;
  if (lVar6 == 0) {
    return uVar4;
  }
  goto LAB_0101aa40;
}

