
/* v8::internal::MemoryAllocator::UncommitMemory(v8::internal::VirtualMemory*) */

undefined8 __thiscall
v8::internal::MemoryAllocator::UncommitMemory(MemoryAllocator *this,VirtualMemory *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = VirtualMemory::SetPermissions(param_1,*(undefined8 *)(param_1 + 8),uVar4,0);
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    lVar5 = *(long *)(*(long *)this + 0x9520);
    if (*(char *)(lVar5 + 0x1798) == '\0') {
      *(char *)(lVar5 + 0x1798) = '\x01';
      piVar3 = (int *)StatsCounterBase::FindLocationInStatsTable
                                ((StatsCounterBase *)(lVar5 + 0x1780));
      *(int **)(lVar5 + 0x1790) = piVar3;
    }
    else {
      piVar3 = *(int **)(lVar5 + 0x1790);
    }
    if (piVar3 != (int *)0x0) {
      *piVar3 = *piVar3 - (int)uVar4;
    }
    uVar2 = 1;
  }
  return uVar2;
}

