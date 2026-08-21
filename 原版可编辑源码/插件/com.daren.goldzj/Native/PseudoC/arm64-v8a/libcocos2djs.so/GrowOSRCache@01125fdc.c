
/* v8::internal::OSROptimizedCodeCache::GrowOSRCache(v8::internal::Handle<v8::internal::NativeContext>,
   v8::internal::Handle<v8::internal::OSROptimizedCodeCache>*) */

int v8::internal::OSROptimizedCodeCache::GrowOSRCache(ulong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar4 = *(uint *)(*(long *)*param_2 + 3);
  iVar2 = (int)uVar4 >> 1;
  uVar3 = 0xc00;
  if ((int)uVar4 < 0xc02) {
    uVar3 = uVar4 & 0xfffffffe;
  }
  uVar4 = 0xc;
  if (iVar2 != 0) {
    uVar4 = uVar3;
  }
  puVar5 = (ulong *)Factory::CopyWeakFixedArrayAndGrow
                              ((ulong)*(uint *)((long)param_1 + 4) << 0x20,(long *)*param_2,
                               uVar4 - iVar2);
  *param_2 = puVar5;
  uVar9 = *puVar5;
  if (iVar2 < *(int *)(uVar9 + 3) >> 1) {
    lVar6 = (long)iVar2;
    iVar8 = iVar2 << 2;
    do {
      *(undefined4 *)(uVar9 + (long)iVar8 + 7) = 3;
      lVar6 = lVar6 + 1;
      iVar8 = iVar8 + 4;
      uVar9 = *(ulong *)*param_2;
    } while (lVar6 < *(int *)(uVar9 + 3) >> 1);
  }
  uVar10 = *param_1;
  puVar1 = (undefined4 *)(uVar10 + 0x3cf);
  *puVar1 = (int)uVar9;
  if ((uVar9 & 1) != 0) {
    uVar7 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar10,puVar1,uVar9);
      uVar7 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar9);
    }
  }
  return iVar2;
}

