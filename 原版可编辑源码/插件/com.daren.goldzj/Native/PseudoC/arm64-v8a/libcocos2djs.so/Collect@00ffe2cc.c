
/* v8::internal::ObjectStatsCollector::Collect() */

void __thiscall v8::internal::ObjectStatsCollector::Collect(ObjectStatsCollector *this)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  ulong uVar6;
  ObjectStatsCollectorImpl *pOVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  ulong local_230;
  CombinedHeapObjectIterator aCStack_228 [64];
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  void *local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined **local_180;
  void *local_178;
  undefined8 uStack_170;
  void *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  long local_120;
  long local_118;
  long lStack_110;
  long local_108;
  void *local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined **local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_1e8 = *(long *)this;
  lStack_110 = *(long *)(this + 8);
  local_108 = *(long *)(local_1e8 + 0x800) + 0x2701;
  local_180 = &PTR__FieldStatsCollector_01ca9160;
  local_80 = lStack_110 + 0x53e70;
  lStack_78 = lStack_110 + 0x53e78;
  local_70 = lStack_110 + 0x53e80;
  lStack_68 = lStack_110 + 0x53e88;
  local_60 = lStack_110 + 0x53e90;
  lStack_58 = lStack_110 + 0x53e98;
  local_50 = lStack_110 + 0x53ea0;
  uStack_f8 = 0;
  local_100 = (void *)0x0;
  uStack_e8 = 0;
  local_f0 = (undefined8 *)0x0;
  local_e0 = 0x3f800000;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  uStack_c0 = 0;
  local_c8 = (undefined8 *)0x0;
  local_b8 = 0x3f800000;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_88 = 0x3f800000;
  lStack_1e0 = *(long *)(this + 0x10);
  local_150 = lStack_1e0 + 0x53e70;
  lStack_148 = lStack_1e0 + 0x53e78;
  local_140 = lStack_1e0 + 0x53e80;
  lStack_138 = lStack_1e0 + 0x53e88;
  local_130 = lStack_1e0 + 0x53e90;
  lStack_128 = lStack_1e0 + 0x53e98;
  local_120 = lStack_1e0 + 0x53ea0;
  local_1d8 = *(long *)(local_1e8 + 0x800) + 0x2701;
  uStack_1c8 = 0;
  local_1d0 = (void *)0x0;
  uStack_1b8 = 0;
  local_1c0 = (undefined8 *)0x0;
  local_1b0 = 0x3f800000;
  uStack_1a0 = 0;
  local_1a8 = (void *)0x0;
  uStack_190 = 0;
  local_198 = (undefined8 *)0x0;
  local_188 = 0x3f800000;
  uStack_170 = 0;
  local_178 = (void *)0x0;
  uStack_160 = 0;
  local_168 = (void *)0x0;
  local_158 = 0x3f800000;
  local_118 = local_1e8;
  local_b0 = local_180;
  ObjectStatsCollectorImpl::CollectGlobalStatistics((ObjectStatsCollectorImpl *)&local_118);
  CombinedHeapObjectIterator::CombinedHeapObjectIterator(aCStack_228,*(undefined8 *)this,0);
  uVar6 = CombinedHeapObjectIterator::Next(aCStack_228);
  iVar10 = (int)uVar6;
  while (local_230 = uVar6, iVar10 != 0) {
    HeapObject::SizeFromMap
              ((HeapObject *)&local_230,uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1));
    uVar9 = uVar6 - (uVar6 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((uVar6 & 0xfffffffffffc0000) + 0x10) + (uVar9 >> 7 & 0x1ffffff) * 4)
    ;
    uVar2 = 1 << (ulong)((uint)(uVar9 >> 2) & 0x1f);
    if ((uVar2 & *puVar1) == 0) {
LAB_00ffe438:
      pOVar7 = (ObjectStatsCollectorImpl *)&local_1e8;
      uVar8 = 0;
    }
    else {
      uVar2 = uVar2 << 1;
      bVar5 = uVar2 == 0;
      if (bVar5) {
        uVar2 = 1;
      }
      if ((puVar1[bVar5] & uVar2) == 0) goto LAB_00ffe438;
      pOVar7 = (ObjectStatsCollectorImpl *)&local_118;
      uVar8 = 1;
    }
    ObjectStatsCollectorImpl::CollectStatistics(pOVar7,uVar6,0,uVar8);
    uVar6 = CombinedHeapObjectIterator::Next(aCStack_228);
    iVar10 = (int)uVar6;
  }
  HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_228);
  CombinedHeapObjectIterator::CombinedHeapObjectIterator(aCStack_228,*(undefined8 *)this,0);
  uVar6 = CombinedHeapObjectIterator::Next(aCStack_228);
  iVar10 = (int)uVar6;
  do {
    local_230 = uVar6;
    if (iVar10 == 0) {
      HeapObjectIterator::~HeapObjectIterator((HeapObjectIterator *)aCStack_228);
      local_180 = &PTR__FieldStatsCollector_01ca9160;
      pvVar12 = local_178;
      puVar4 = local_168;
      while (puVar4 != (void *)0x0) {
        pvVar11 = (void *)*puVar4;
        local_178 = pvVar12;
        operator_delete(puVar4);
        pvVar12 = local_178;
        puVar4 = pvVar11;
      }
      local_178 = (void *)0x0;
      pvVar11 = local_1a8;
      puVar4 = local_198;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
        pvVar11 = local_1a8;
        puVar4 = local_198;
      }
      while (puVar4 != (void *)0x0) {
        pvVar12 = (void *)*puVar4;
        local_1a8 = pvVar11;
        operator_delete(puVar4);
        pvVar11 = local_1a8;
        puVar4 = pvVar12;
      }
      local_1a8 = (void *)0x0;
      pvVar12 = local_1d0;
      puVar4 = local_1c0;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
        pvVar12 = local_1d0;
        puVar4 = local_1c0;
      }
      while (puVar4 != (void *)0x0) {
        pvVar11 = (void *)*puVar4;
        local_1d0 = pvVar12;
        operator_delete(puVar4);
        pvVar12 = local_1d0;
        puVar4 = pvVar11;
      }
      local_1d0 = (void *)0x0;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
      local_b0 = &PTR__FieldStatsCollector_01ca9160;
      pvVar12 = local_a8;
      puVar4 = local_98;
      while (puVar4 != (void *)0x0) {
        pvVar11 = (void *)*puVar4;
        local_a8 = pvVar12;
        operator_delete(puVar4);
        pvVar12 = local_a8;
        puVar4 = pvVar11;
      }
      local_a8 = (void *)0x0;
      pvVar11 = local_d8;
      puVar4 = local_c8;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
        pvVar11 = local_d8;
        puVar4 = local_c8;
      }
      while (puVar4 != (void *)0x0) {
        pvVar12 = (void *)*puVar4;
        local_d8 = pvVar11;
        operator_delete(puVar4);
        pvVar11 = local_d8;
        puVar4 = pvVar12;
      }
      local_d8 = (void *)0x0;
      pvVar12 = local_100;
      puVar4 = local_f0;
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
        pvVar12 = local_100;
        puVar4 = local_f0;
      }
      while (puVar4 != (void *)0x0) {
        pvVar11 = (void *)*puVar4;
        local_100 = pvVar12;
        operator_delete(puVar4);
        pvVar12 = local_100;
        puVar4 = pvVar11;
      }
      local_100 = (void *)0x0;
      if (pvVar12 != (void *)0x0) {
        operator_delete(pvVar12);
      }
      if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    HeapObject::SizeFromMap
              ((HeapObject *)&local_230,uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1));
    uVar9 = uVar6 - (uVar6 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((uVar6 & 0xfffffffffffc0000) + 0x10) + (uVar9 >> 7 & 0x1ffffff) * 4)
    ;
    uVar2 = 1 << (ulong)((uint)(uVar9 >> 2) & 0x1f);
    if ((uVar2 & *puVar1) == 0) {
LAB_00ffe500:
      pOVar7 = (ObjectStatsCollectorImpl *)&local_1e8;
      uVar8 = 0;
    }
    else {
      uVar2 = uVar2 << 1;
      bVar5 = uVar2 == 0;
      if (bVar5) {
        uVar2 = 1;
      }
      if ((puVar1[bVar5] & uVar2) == 0) goto LAB_00ffe500;
      pOVar7 = (ObjectStatsCollectorImpl *)&local_118;
      uVar8 = 1;
    }
    ObjectStatsCollectorImpl::CollectStatistics(pOVar7,uVar6,1,uVar8);
    uVar6 = CombinedHeapObjectIterator::Next(aCStack_228);
    iVar10 = (int)uVar6;
  } while( true );
}

