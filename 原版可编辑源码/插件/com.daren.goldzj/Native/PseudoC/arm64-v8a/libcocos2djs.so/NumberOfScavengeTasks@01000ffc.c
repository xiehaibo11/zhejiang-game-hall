
/* v8::internal::ScavengerCollector::NumberOfScavengeTasks() */

int __thiscall v8::internal::ScavengerCollector::NumberOfScavengeTasks(ScavengerCollector *this)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  
  if (FLAG_parallel_scavenge == '\0') {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(*(long *)(*(long *)(this + 8) + 0xe8) + 0x138);
    iVar4 = iVar1 + 0xfffff;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    iVar4 = iVar4 >> 0x14;
    if (((DAT_01d3f4a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3f4a0), iVar1 != 0)) {
      plVar3 = (long *)V8::GetCurrentPlatform();
      iVar1 = (**(code **)(*plVar3 + 0x28))();
      DAT_01d3f498 = iVar1 + 1;
      __cxa_guard_release(&DAT_01d3f4a0);
    }
    if (6 < iVar4) {
      iVar4 = 7;
    }
    iVar1 = DAT_01d3f498;
    if (iVar4 + 1 < DAT_01d3f498) {
      iVar1 = iVar4 + 1;
    }
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    uVar2 = Heap::CanExpandOldGeneration(*(Heap **)(this + 8),(ulong)(uint)(iVar1 << 0x12));
    if ((uVar2 & 1) == 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}

