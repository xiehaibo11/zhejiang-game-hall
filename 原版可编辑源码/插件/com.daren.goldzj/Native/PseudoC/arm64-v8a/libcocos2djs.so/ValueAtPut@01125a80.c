
/* v8::internal::OrderedNameDictionaryHandler::ValueAtPut(v8::internal::HeapObject, int,
   v8::internal::Object) */

void v8::internal::OrderedNameDictionaryHandler::ValueAtPut(ulong param_1,int param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x94) {
    lVar1 = param_1 + (long)(param_2 * 0xc);
    *(int *)(lVar1 + 0xf) = (int)param_3;
    if ((param_3 & 1) == 0) {
      return;
    }
    uVar3 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 0xf;
    uVar2 = (uint)uVar3;
  }
  else {
    lVar1 = param_1 + (long)(int)((param_2 * 4 + (*(uint *)(param_1 + 0x13) >> 1)) * 4 + 0x14);
    *(int *)(lVar1 + 7) = (int)param_3;
    if ((param_3 & 1) == 0) {
      return;
    }
    uVar3 = *(ulong *)((param_3 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    uVar2 = (uint)uVar3;
  }
  if ((uVar2 >> 0x12 & 1) != 0) {
    Heap_MarkingBarrierSlow(param_1,lVar1,param_3);
    uVar3 = *(ulong *)(param_3 & 0xfffffffffffc0000 | 8);
  }
  if (((uVar3 & 0x18) != 0) && ((*(byte *)((param_1 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    Heap_GenerationalBarrierSlow(param_1,lVar1,param_3);
    return;
  }
  return;
}

