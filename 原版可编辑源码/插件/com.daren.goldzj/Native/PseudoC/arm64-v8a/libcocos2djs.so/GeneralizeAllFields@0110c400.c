
/* v8::internal::DescriptorArray::GeneralizeAllFields() */

void __thiscall v8::internal::DescriptorArray::GeneralizeAllFields(DescriptorArray *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar4 = *(ulong *)this;
  if (*(short *)(uVar4 + 5) != 0) {
    lVar7 = (long)*(short *)(uVar4 + 5);
    lVar9 = 0;
    while( true ) {
      lVar7 = lVar7 + -1;
      uVar10 = lVar9 + 0x1000000000 >> 0x20 | 3;
      uVar3 = *(uint *)(uVar4 + uVar10);
      uVar2 = (int)uVar3 >> 1;
      uVar11 = uVar2 & 0xfffffe3f | 0x100;
      if ((uVar3 >> 2 & 1) == 0) {
        uVar11 = uVar2 & 0xfffffe3b | 0x100;
        uVar5 = FieldType::Any();
        lVar1 = (lVar9 >> 0x20) + 0x17;
        *(int *)(*(long *)this + lVar1) = (int)uVar5;
        uVar4 = *(ulong *)this;
        if (((int)uVar5 != 3) && ((uVar5 & 1) != 0)) {
          uVar8 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
          lVar6 = uVar4 + lVar1;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar4,lVar6,uVar5 & 0xfffffffffffffffd);
            uVar4 = *(ulong *)this;
            uVar8 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
            lVar6 = uVar4 + lVar1;
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar4,lVar6,uVar5 & 0xfffffffffffffffd);
            uVar4 = *(ulong *)this;
          }
        }
      }
      *(uint *)(uVar4 + uVar10) = uVar11 << 1;
      if (lVar7 == 0) break;
      uVar4 = *(ulong *)this;
      lVar9 = lVar9 + 0xc00000000;
    }
  }
  return;
}

