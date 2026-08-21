
/* v8::internal::Handle<v8::internal::TransitionArray>
   v8::internal::Factory::NewWeakFixedArrayWithMap<v8::internal::TransitionArray>(v8::internal::RootIndex,
   int, v8::internal::AllocationType) */

void v8::internal::Factory::NewWeakFixedArrayWithMap<v8::internal::TransitionArray>
               (Isolate *param_1,ushort param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  iVar1 = param_3 * 4 + 8;
  uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(param_1 + 0x8850),iVar1,1,1,0);
  if ((0x20000 < iVar1) && (FLAG_use_marking_progress_bar != '\0')) {
    puVar6 = (ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    uVar8 = *puVar6;
    uVar7 = (uint)uVar8;
    while ((uVar7 >> 8 & 1) == 0) {
      while (*puVar6 == uVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar4) {
          *puVar6 = uVar8 | 0x100;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_00f733e8;
      }
      ClearExclusiveLocal();
      uVar8 = *puVar6;
      uVar7 = (uint)uVar8;
    }
  }
LAB_00f733e8:
  *(undefined4 *)(uVar5 - 1) = *(undefined4 *)(param_1 + (ulong)param_2 * 8 + 0x80);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(param_1 + 0x95a0);
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar6;
  }
  *(uint *)(uVar5 + 3) = param_3 << 1;
  if (param_3 != 0) {
    uVar5 = *puVar6;
    uVar2 = *(undefined4 *)(param_1 + 0xa0);
    uVar8 = (ulong)(int)param_3;
    if (param_3 < 8) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar8 & 0xfffffffffffffff8;
      puVar12 = (undefined8 *)(uVar5 + 0x17);
      uVar13 = uVar11;
      do {
        puVar12[-1] = CONCAT44(uVar2,uVar2);
        puVar12[-2] = CONCAT44(uVar2,uVar2);
        puVar12[1] = CONCAT44(uVar2,uVar2);
        *puVar12 = CONCAT44(uVar2,uVar2);
        uVar13 = uVar13 - 8;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      if (uVar11 == uVar8) {
        return;
      }
    }
    lVar10 = uVar8 - uVar11;
    puVar9 = (undefined4 *)(uVar5 + 7 + uVar11 * 4);
    do {
      lVar10 = lVar10 + -1;
      *puVar9 = uVar2;
      puVar9 = puVar9 + 1;
    } while (lVar10 != 0);
  }
  return;
}

