
/* v8::internal::TransitionsAccessor::SetMigrationTarget(v8::internal::Map) */

void __thiscall
v8::internal::TransitionsAccessor::SetMigrationTarget(TransitionsAccessor *this,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (((*(int *)(this + 0x20) == 1) &&
      (*(int *)(*(long *)(this + 0x10) + 0x23) = (int)param_2, (int)param_2 != 3)) &&
     ((param_2 & 1) != 0)) {
    uVar1 = *(ulong *)(this + 0x10);
    lVar2 = uVar1 + 0x23;
    if ((*(byte *)((param_2 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar1,lVar2,param_2 & 0xfffffffffffffffd);
      uVar1 = *(ulong *)(this + 0x10);
      lVar2 = uVar1 + 0x23;
    }
    if (((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar1,lVar2,param_2 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

