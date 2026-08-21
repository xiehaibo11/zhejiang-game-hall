
/* v8::internal::ZonePreparseData::Serialize(v8::internal::Isolate*) */

ulong * __thiscall
v8::internal::ZonePreparseData::Serialize(ZonePreparseData *this,Isolate *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  
  lVar1 = *(long *)(this + 0x20);
  lVar2 = *(long *)(this + 0x28);
  iVar11 = (int)*(undefined8 *)(this + 8) - (int)*(undefined8 *)this;
  iVar3 = (int)((ulong)(lVar2 - lVar1) >> 3);
  puVar4 = (ulong *)Factory::NewPreparseData((Factory *)param_1,iVar11,iVar3);
  memcpy((void *)(*puVar4 + 0xb),*(void **)this,(long)iVar11);
  if (0 < iVar3) {
    lVar10 = 0;
    iVar11 = 0;
    do {
      puVar5 = (ulong *)Serialize(*(ZonePreparseData **)(*(long *)(this + 0x20) + lVar10),param_1);
      uVar7 = *puVar4;
      uVar8 = *puVar5;
      lVar9 = uVar7 + (long)(int)(iVar11 + (*(int *)(uVar7 + 3) + 0xfU & 0xfffffffc));
      *(int *)(lVar9 + -1) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar6 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        lVar9 = lVar9 + -1;
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,lVar9,uVar8);
          uVar6 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,lVar9,uVar8);
        }
      }
      lVar10 = lVar10 + 8;
      iVar11 = iVar11 + 4;
    } while (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) * 8 - lVar10 != 0);
  }
  return puVar4;
}

