
void FUN_0108fef0(ulong *param_1,long *param_2,uint param_3)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = *param_2;
  uVar8 = *param_1;
  iVar6 = param_3 * 8 + -1;
  uVar5 = uVar8 & 0xffffffff00000000;
  while (param_3 != 0) {
    lVar1 = (long)iVar6;
    param_3 = param_3 - 1;
    iVar6 = iVar6 + -8;
    if (*(long *)(lVar3 + lVar1) != -0x8000000080001) {
      v8::internal::Heap::RightTrimFixedArray
                ((Heap *)(uVar5 + 0x8850),lVar3,~param_3 + (*(int *)(lVar3 + 3) >> 1));
      return;
    }
  }
  uVar7 = *(ulong *)(uVar5 + 0x168);
  puVar2 = (uint *)(uVar8 + 7);
  if ((*(byte *)((uVar5 | 10) + (ulong)*(uint *)(uVar8 - 1)) & 0xf8) == 0x68) {
    uVar8 = uVar5 | *puVar2;
    *(uint *)(uVar8 + 0xb) = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    puVar2 = (uint *)(uVar8 + 0xb);
    uVar4 = (uint)uVar5;
  }
  else {
    *puVar2 = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    uVar4 = (uint)uVar5;
  }
  if ((uVar4 >> 0x12 & 1) != 0) {
    v8::internal::Heap_MarkingBarrierSlow(uVar8,puVar2,uVar7);
    uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
  }
  if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    v8::internal::Heap_GenerationalBarrierSlow(uVar8,puVar2,uVar7);
    return;
  }
  return;
}

