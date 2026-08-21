
void FUN_01098514(ulong *param_1,long *param_2,int param_3)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = *param_2;
  uVar8 = *param_1;
  iVar6 = param_3 * 4;
  uVar5 = uVar8 & 0xffffffff00000000;
  while (iVar3 = param_3, iVar6 = iVar6 + -4, iVar3 != 0) {
    uVar4 = *(uint *)(lVar2 + 7 + (long)iVar6);
    if (((uVar4 & 1) == 0) || (param_3 = iVar3 + -1, uVar4 != *(uint *)(uVar5 + 0xa8))) {
      v8::internal::Heap::RightTrimFixedArray
                ((Heap *)(uVar5 + 0x8850),lVar2,(*(int *)(lVar2 + 3) >> 1) - iVar3);
      return;
    }
  }
  uVar7 = *(ulong *)(uVar5 + 0x168);
  puVar1 = (uint *)(uVar8 + 7);
  if ((*(byte *)((uVar5 | 10) + (ulong)*(uint *)(uVar8 - 1)) & 0xf8) == 0x68) {
    uVar8 = uVar5 | *puVar1;
    *(uint *)(uVar8 + 0xb) = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    puVar1 = (uint *)(uVar8 + 0xb);
    uVar4 = (uint)uVar5;
  }
  else {
    *puVar1 = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      return;
    }
    uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    uVar4 = (uint)uVar5;
  }
  if ((uVar4 >> 0x12 & 1) != 0) {
    v8::internal::Heap_MarkingBarrierSlow(uVar8,puVar1,uVar7);
    uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
  }
  if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    v8::internal::Heap_GenerationalBarrierSlow(uVar8,puVar1,uVar7);
    return;
  }
  return;
}

