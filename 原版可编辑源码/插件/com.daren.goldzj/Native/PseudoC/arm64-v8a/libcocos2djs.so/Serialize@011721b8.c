
/* v8::internal::PreparseDataBuilder::Serialize(v8::internal::Isolate*) */

ulong * __thiscall
v8::internal::PreparseDataBuilder::Serialize(PreparseDataBuilder *this,Isolate *param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar6 = *(undefined8 *)(this + 0x10);
  puVar2 = (ulong *)Factory::NewPreparseData((Factory *)param_1,(int)uVar6,*(int *)(this + 0x48));
  memcpy((void *)(*puVar2 + 0xb),*(void **)(this + 8),(long)(int)uVar6);
  if (*(long *)(this + 0x28) != 0) {
    puVar10 = *(undefined8 **)(this + 0x20);
    iVar8 = 0;
    lVar11 = *(long *)(this + 0x28) << 3;
    do {
      if (((byte)((PreparseDataBuilder *)*puVar10)[0x4c] & 3) == 2) {
        puVar3 = (ulong *)Serialize((PreparseDataBuilder *)*puVar10,param_1);
        uVar5 = *puVar2;
        uVar7 = *puVar3;
        iVar1 = iVar8 + 1;
        lVar9 = uVar5 + (long)(int)((*(int *)(uVar5 + 3) + 0xfU & 0xfffffffc) + iVar8 * 4);
        *(int *)(lVar9 + -1) = (int)uVar7;
        iVar8 = iVar1;
        if ((uVar7 & 1) != 0) {
          uVar4 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          lVar9 = lVar9 + -1;
          if (((uint)uVar4 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar5,lVar9,uVar7);
            uVar4 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar5,lVar9,uVar7);
          }
        }
      }
      lVar11 = lVar11 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  return puVar2;
}

