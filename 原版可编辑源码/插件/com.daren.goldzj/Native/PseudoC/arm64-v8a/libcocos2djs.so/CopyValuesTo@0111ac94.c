
/* v8::internal::NumberDictionary::CopyValuesTo(v8::internal::FixedArray) */

void __thiscall v8::internal::NumberDictionary::CopyValuesTo(NumberDictionary *this,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  uVar4 = *(ulong *)this;
  if ((int)*(uint *)(uVar4 + 0xf) >> 1 != 0) {
    lVar12 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
    uVar7 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    iVar5 = 0;
    uVar9 = uVar4 & 0xffffffff00000000;
    lVar10 = 0x1400000000;
    lVar11 = 0x1000000000;
    while( true ) {
      lVar12 = lVar12 + -1;
      iVar2 = *(int *)(uVar4 + (lVar11 >> 0x20) + 7);
      if ((iVar2 != *(int *)(uVar9 + 0xa8)) && (iVar2 != *(int *)(uVar9 + 0xa0))) {
        uVar3 = *(uint *)(uVar4 + (lVar10 >> 0x20) + 7);
        iVar2 = iVar5 + 1;
        puVar1 = (uint *)(param_2 + 7 + (long)(iVar5 << 2));
        *puVar1 = uVar3;
        iVar5 = iVar2;
        if (((uVar7 & 0x40000) != 0 || (uVar7 & 0x18) == 0) && (uVar3 & 1) != 0) {
          uVar8 = uVar4 & 0xffffffff00000000 | (ulong)uVar3;
          uVar6 = uVar4 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          uVar4 = *(ulong *)(uVar6 + 8);
          if (((uint)uVar4 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(param_2,puVar1,uVar8);
            uVar4 = *(ulong *)(uVar6 | 8);
          }
          if (((uVar4 & 0x18) != 0) && ((*(byte *)(param_2 & 0xfffffffffffc0000 | 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(param_2,puVar1,uVar8);
          }
        }
      }
      if (lVar12 == 0) break;
      uVar4 = *(ulong *)this;
      lVar10 = lVar10 + 0xc00000000;
      lVar11 = lVar11 + 0xc00000000;
    }
  }
  return;
}

