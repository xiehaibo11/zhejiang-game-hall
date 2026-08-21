
/* v8::internal::interpreter::ConstantArrayBuilder::ToFixedArray(v8::internal::Isolate*) */

ulong * __thiscall
v8::internal::interpreter::ConstantArrayBuilder::ToFixedArray
          (ConstantArrayBuilder *this,Isolate *param_1)

{
  ConstantArrayBuilder *pCVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar4 = 0x10;
  do {
    if (lVar4 == -8) {
      lVar4 = *(long *)(*(long *)this + 0x28) - *(long *)(*(long *)this + 0x20) >> 4;
      goto LAB_017c1370;
    }
    plVar5 = *(long **)(this + lVar4);
    lVar4 = lVar4 + -8;
  } while (plVar5[5] - plVar5[4] == 0);
  lVar4 = *plVar5 + (plVar5[5] - plVar5[4] >> 4);
LAB_017c1370:
  puVar2 = (ulong *)Factory::NewFixedArrayWithHoles((Factory *)param_1,lVar4,1);
  iVar8 = 0;
  pCVar1 = this + 0x18;
  while( true ) {
    lVar12 = *(long *)this;
    lVar4 = *(long *)(lVar12 + 0x20);
    if (*(long *)(lVar12 + 0x28) == lVar4) {
      uVar6 = 0;
    }
    else {
      lVar11 = 0;
      uVar13 = 0;
      iVar9 = iVar8 << 2;
      do {
        puVar3 = (ulong *)Entry::ToHandle((Entry *)(lVar4 + lVar11),param_1);
        uVar10 = *puVar2;
        uVar6 = *puVar3;
        *(int *)(uVar10 + (long)iVar9 + 7) = (int)uVar6;
        if ((uVar6 & 1) != 0) {
          uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
          lVar4 = uVar10 + (long)iVar9 + 7;
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,lVar4,uVar6);
            uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar10,lVar4,uVar6);
          }
        }
        lVar4 = *(long *)(lVar12 + 0x20);
        uVar13 = uVar13 + 1;
        iVar9 = iVar9 + 4;
        lVar11 = lVar11 + 0x10;
        uVar6 = *(long *)(lVar12 + 0x28) - lVar4 >> 4;
      } while (uVar13 < uVar6);
      iVar8 = iVar8 + (int)uVar13;
    }
    uVar6 = *(long *)(lVar12 + 8) - uVar6;
    if ((ulong)(long)((*(int *)(*puVar2 + 3) >> 1) - iVar8) <= uVar6) break;
    this = this + 8;
    iVar8 = iVar8 + (int)uVar6;
    if (this == pCVar1) {
      return puVar2;
    }
  }
  return puVar2;
}

