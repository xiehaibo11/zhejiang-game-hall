
/* v8::internal::Factory::AllocateRawArray(int, v8::internal::AllocationType) */

ulong __thiscall v8::internal::Factory::AllocateRawArray(Factory *this,uint param_1,ulong param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  
  if (((int)param_1 < 0x20001) && ((param_3 & 0xff) == 0)) {
    lVar5 = *(long *)(this + 0x8938);
    lVar1 = *(long *)(lVar5 + 0x68);
    if (((ulong)param_1 <= (ulong)(*(long *)(lVar5 + 0x70) - lVar1)) &&
       ((FLAG_inline_new != '\0' && (FLAG_gc_interval == 0)))) {
      *(long *)(lVar5 + 0x68) = lVar1 + (int)param_1;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,param_1,1,1);
      return lVar1 + 1;
    }
  }
  uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),param_1,param_3,1,0);
  if ((0x20000 < (int)param_1) && (FLAG_use_marking_progress_bar != '\0')) {
    puVar6 = (ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    uVar8 = *puVar6;
    uVar7 = (uint)uVar8;
    while ((uVar7 >> 8 & 1) == 0) {
      while (*puVar6 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar3) {
          *puVar6 = uVar8 | 0x100;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          return uVar4;
        }
      }
      ClearExclusiveLocal();
      uVar8 = *puVar6;
      uVar7 = (uint)uVar8;
    }
  }
  return uVar4;
}

