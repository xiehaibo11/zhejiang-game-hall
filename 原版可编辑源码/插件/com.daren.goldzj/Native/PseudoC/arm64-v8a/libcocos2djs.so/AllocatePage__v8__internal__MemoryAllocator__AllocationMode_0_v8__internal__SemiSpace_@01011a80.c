
/* v8::internal::Page*
   v8::internal::MemoryAllocator::AllocatePage<(v8::internal::MemoryAllocator::AllocationMode)0,
   v8::internal::SemiSpace>(unsigned long, v8::internal::SemiSpace*, v8::internal::Executability) */

Page * __thiscall
v8::internal::MemoryAllocator::
AllocatePage<(v8::internal::MemoryAllocator::AllocationMode)0,v8::internal::SemiSpace>
          (MemoryAllocator *this,undefined8 param_1,long param_2,undefined8 param_4)

{
  ulong uVar1;
  Page *pPVar2;
  long *plVar3;
  void *__s;
  ulong uVar4;
  ulong uVar5;
  
  pPVar2 = (Page *)AllocateChunk(this,param_1,param_1,param_4,param_2);
  if (pPVar2 != (Page *)0x0) {
    uVar5 = *(ulong *)(pPVar2 + 8);
    uVar1 = 8;
    if (*(int *)(param_2 + 0x8c) != 0) {
      uVar1 = 0x10;
    }
    uVar4 = uVar1 | uVar5;
    *(ulong *)(pPVar2 + 8) = uVar4;
    uVar4 = uVar4 | 0x40006;
    if (*(int *)(*(long *)(*(long *)(param_2 + 0x40) + 0x828) + 0x58) < 2) {
      uVar4 = uVar1 | uVar5 & 0xfffffffffffbfff9 | 2;
    }
    *(ulong *)(pPVar2 + 8) = uVar4;
    plVar3 = operator_new(0x30);
    *plVar3 = (long)pPVar2;
    plVar3[2] = 0;
    plVar3[1] = 0;
    plVar3[4] = 0;
    plVar3[3] = 0;
    *(undefined4 *)(plVar3 + 5) = 0x3f800000;
    *(long **)(pPVar2 + 0xf8) = plVar3;
    *(undefined8 *)(pPVar2 + 0xe0) = 0;
    *(undefined8 *)(pPVar2 + 0xe8) = 0;
    if (FLAG_minor_mc != '\0') {
      __s = calloc(1,0x2000);
      *(void **)(pPVar2 + 0x108) = __s;
      memset(__s,0,0x2000);
      *(undefined8 *)(pPVar2 + 0x100) = 0;
    }
    DataMemoryBarrier(2,3);
  }
  return pPVar2;
}

