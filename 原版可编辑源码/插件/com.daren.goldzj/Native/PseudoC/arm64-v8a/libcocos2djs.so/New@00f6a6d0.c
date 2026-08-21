
/* v8::internal::Factory::New(v8::internal::Handle<v8::internal::Map>, v8::internal::AllocationType)
    */

long __thiscall v8::internal::Factory::New(Factory *this,ulong *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)*(byte *)(*param_2 + 3) * 4;
  if ((param_3 & 0xff) == 0) {
    lVar4 = *(long *)(this + 0x8938);
    lVar1 = *(long *)(lVar4 + 0x68);
    if (((uVar3 <= (ulong)(*(long *)(lVar4 + 0x70) - lVar1)) && (FLAG_inline_new != '\0')) &&
       (FLAG_gc_interval == 0)) {
      lVar2 = lVar1 + 1;
      *(ulong *)(lVar4 + 0x68) = lVar1 + uVar3;
      Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar1,uVar3,1,1);
      goto LAB_00f6a778;
    }
  }
  lVar2 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar3,param_3,1,0);
LAB_00f6a778:
  uVar3 = *param_2;
  *(int *)(lVar2 + -1) = (int)uVar3;
  if ((((param_3 & 0xff) != 0) && ((uVar3 & 1) != 0)) &&
     ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(lVar2,0);
  }
  return lVar2;
}

