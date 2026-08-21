
/* v8::internal::Runtime_GetHeapUsage(int, unsigned long*, v8::internal::Isolate*) */

long v8::internal::Runtime_GetHeapUsage(int param_1,ulong *param_2,Isolate *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  if (TracingFlags::runtime_stats == 0) {
    uVar1 = Heap::SizeOfObjects((Heap *)(param_3 + 0x8850));
    if ((long)(int)uVar1 + 0x40000000U >> 0x1f == 0) {
      lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x1f;
    }
    else {
      plVar3 = (long *)Factory::NewNumberFromInt((Factory *)param_3,uVar1);
      lVar2 = *plVar3;
    }
    return lVar2;
  }
  lVar2 = FUN_011c2214(param_1,param_2,param_3);
  return lVar2;
}

