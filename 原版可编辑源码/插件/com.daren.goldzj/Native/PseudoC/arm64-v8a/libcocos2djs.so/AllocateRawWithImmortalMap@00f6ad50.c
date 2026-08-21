
/* v8::internal::Factory::AllocateRawWithImmortalMap(int, v8::internal::AllocationType,
   v8::internal::Map, v8::internal::AllocationAlignment) */

long __thiscall
v8::internal::Factory::AllocateRawWithImmortalMap
          (Factory *this,uint param_1,ulong param_3,undefined4 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((((int)param_1 < 0x20001) && ((param_3 & 0xff) == 0)) && (param_5 == 0)) {
    lVar3 = *(long *)(this + 0x8938);
    lVar1 = *(long *)(lVar3 + 0x68);
    if ((((ulong)param_1 <= (ulong)(*(long *)(lVar3 + 0x70) - lVar1)) && (FLAG_inline_new != '\0'))
       && (FLAG_gc_interval == 0)) {
      lVar2 = lVar1 + 1;
      *(long *)(lVar3 + 0x68) = lVar1 + (int)param_1;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,param_1,1,1);
      goto LAB_00f6adec;
    }
  }
  lVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),(ulong)param_1,param_3,1)
  ;
LAB_00f6adec:
  *(undefined4 *)(lVar2 + -1) = param_4;
  return lVar2;
}

