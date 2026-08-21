
/* v8::internal::Heap::FinalizeIncrementalMarkingIfComplete(v8::internal::GarbageCollectionReason)
    */

void __thiscall
v8::internal::Heap::FinalizeIncrementalMarkingIfComplete(Heap *this,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  LocalEmbedderHeapTracer *pLVar4;
  
  lVar3 = *(long *)(this + 0x828);
  iVar1 = *(int *)(lVar3 + 0x58);
  if (1 < iVar1) {
    if (*(int *)(lVar3 + 100) == 2) {
      if (*(char *)(lVar3 + 0x60) == '\0') {
LAB_00f94034:
        FinalizeIncrementalMarkingIncrementally(this,param_2);
        return;
      }
    }
    else if (((((*(char *)(lVar3 + 0x60) == '\0') &&
               (lVar3 = *(long *)(this + 0x800), *(long *)(*(long *)(lVar3 + 0x60) + 8) == 0)) &&
              (*(long *)(*(long *)(lVar3 + 0x58) + 8) == 0)) &&
             ((*(long *)(*(long *)(lVar3 + 0x318) + 8) == 0 &&
              (*(long *)(*(long *)(lVar3 + 0x310) + 8) == 0)))) &&
            ((*(long *)(lVar3 + 0x300) == 0 && (*(long *)(lVar3 + 0x5b8) == 0)))) {
      if ((((FLAG_incremental_marking_wrappers == '\0') ||
           (pLVar4 = *(LocalEmbedderHeapTracer **)(this + 0x870), *(long *)(pLVar4 + 8) == 0)) ||
          ((uVar2 = LocalEmbedderHeapTracer::IsRemoteTracingDone(pLVar4), (uVar2 & 1) != 0 &&
           (pLVar4[0x1c] != (LocalEmbedderHeapTracer)0x0)))) || (3 < *(ulong *)(pLVar4 + 0x10)))
      goto LAB_00f94034;
      iVar1 = *(int *)(*(long *)(this + 0x828) + 0x58);
    }
    if (iVar1 == 3) goto LAB_00f9409c;
  }
  lVar3 = *(long *)(this + 0x800);
  if (*(long *)(*(long *)(lVar3 + 0x60) + 8) != 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar3 + 0x58) + 8) != 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar3 + 0x318) + 8) != 0) {
    return;
  }
  if (*(long *)(*(long *)(lVar3 + 0x310) + 8) != 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x300) != 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x5b8) != 0) {
    return;
  }
  if ((((FLAG_incremental_marking_wrappers != '\0') &&
       (pLVar4 = *(LocalEmbedderHeapTracer **)(this + 0x870), *(long *)(pLVar4 + 8) != 0)) &&
      ((uVar2 = LocalEmbedderHeapTracer::IsRemoteTracingDone(pLVar4), (uVar2 & 1) == 0 ||
       (pLVar4[0x1c] == (LocalEmbedderHeapTracer)0x0)))) && (*(ulong *)(pLVar4 + 0x10) < 4)) {
    return;
  }
LAB_00f9409c:
  CollectGarbage(this,2,param_2,*(undefined4 *)(this + 0xad8));
  *(undefined4 *)(this + 0xad4) = 0;
  return;
}

