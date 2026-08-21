
/* v8::internal::Factory::AllocateRawWithAllocationSite(v8::internal::Handle<v8::internal::Map>,
   v8::internal::AllocationType, v8::internal::Handle<v8::internal::AllocationSite>) */

long __thiscall
v8::internal::Factory::AllocateRawWithAllocationSite
          (Factory *this,ulong *param_2,uint param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = (uint)*(byte *)(*param_2 + 3) * 4;
  if (param_4 != (long *)0x0) {
    uVar2 = uVar2 + 8;
  }
  uVar4 = (ulong)uVar2;
  if ((param_3 & 0xff) == 0) {
    lVar5 = *(long *)(this + 0x8938);
    lVar1 = *(long *)(lVar5 + 0x68);
    if (((uVar4 <= (ulong)(*(long *)(lVar5 + 0x70) - lVar1)) && (FLAG_inline_new != '\0')) &&
       (FLAG_gc_interval == 0)) {
      lVar3 = lVar1 + 1;
      *(ulong *)(lVar5 + 0x68) = lVar1 + uVar4;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,uVar4,1,1);
      goto LAB_00f6b7d0;
    }
  }
  lVar3 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar4,param_3,1,0);
LAB_00f6b7d0:
  uVar4 = *param_2;
  *(int *)(lVar3 + -1) = (int)uVar4;
  if ((((param_3 & 0xff) != 0) && ((uVar4 & 1) != 0)) &&
     ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(lVar3,0);
  }
  if (param_4 != (long *)0x0) {
    lVar5 = *param_4;
    lVar1 = lVar3 + (ulong)*(byte *)(*param_2 + 3) * 4;
    *(undefined4 *)(lVar1 + -1) = *(undefined4 *)(this + 0xcd8);
    *(int *)(lVar1 + 3) = (int)lVar5;
    if (FLAG_allocation_site_pretenuring != '\0') {
      *(int *)(lVar5 + 0x13) = *(int *)(lVar5 + 0x13) + 1;
    }
  }
  return lVar3;
}

