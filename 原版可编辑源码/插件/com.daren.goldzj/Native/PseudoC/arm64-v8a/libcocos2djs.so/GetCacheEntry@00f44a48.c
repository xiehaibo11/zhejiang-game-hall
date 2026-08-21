
/* v8::internal::InnerPointerToCodeCache::GetCacheEntry(unsigned long) */

InnerPointerToCodeCache * __thiscall
v8::internal::InnerPointerToCodeCache::GetCacheEntry(InnerPointerToCodeCache *this,ulong param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  Isolate *this_00;
  InnerPointerToCodeCache *pIVar7;
  
  lVar6 = *(long *)(*(long *)this + 0x9520);
  if (*(char *)(lVar6 + 0x1a38) == '\0') {
    *(char *)(lVar6 + 0x1a38) = '\x01';
    piVar2 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar6 + 0x1a20))
    ;
    *(int **)(lVar6 + 0x1a30) = piVar2;
  }
  else {
    piVar2 = *(int **)(lVar6 + 0x1a30);
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  this_00 = *(Isolate **)this;
  uVar3 = InstructionStream::PcIsOffHeap(this_00,param_1);
  if ((uVar3 & 1) == 0) {
    uVar5 = (uint)param_1 & 0x3ffff;
  }
  else {
    iVar1 = Isolate::embedded_blob(this_00);
    Isolate::embedded_blob_size(this_00);
    uVar5 = (uint)param_1 - iVar1;
  }
  uVar5 = ~uVar5 + uVar5 * 0x8000;
  uVar5 = (uVar5 ^ uVar5 >> 0xc) * 5;
  uVar5 = (uVar5 ^ uVar5 >> 4) * 0x809;
  uVar3 = (ulong)((uVar5 ^ uVar5 >> 0x10) & 0x3ff);
  pIVar7 = this + uVar3 * 0x28 + 8;
  if (*(ulong *)pIVar7 == param_1) {
    lVar6 = *(long *)(*(long *)this + 0x9520);
    if (*(char *)(lVar6 + 0x1a58) == '\0') {
      *(char *)(lVar6 + 0x1a58) = '\x01';
      piVar2 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar6 + 0x1a40));
      *(int **)(lVar6 + 0x1a50) = piVar2;
    }
    else {
      piVar2 = *(int **)(lVar6 + 0x1a50);
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = *piVar2 + 1;
    }
  }
  else {
    uVar4 = Heap::GcSafeFindCodeForInnerPointer((Heap *)(*(long *)this + 0x8850),param_1);
    *(undefined8 *)(this + uVar3 * 0x28 + 0x10) = uVar4;
    *(undefined4 *)(this + uVar3 * 0x28 + 0x18) = 0;
    *(undefined8 *)(this + uVar3 * 0x28 + 0x20) = 0;
    *(ulong *)pIVar7 = param_1;
  }
  return pIVar7;
}

