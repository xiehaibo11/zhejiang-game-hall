
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::SetEntry(v8::internal::Isolate*,
   v8::internal::InternalIndex, v8::internal::Object, v8::internal::Object,
   v8::internal::PropertyDetails) */

void v8::internal::
     Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
     SetEntry(ulong *param_1,undefined8 param_2,int param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  param_3 = param_3 * 8;
  uVar2 = *(ulong *)((*param_1 & 0xfffffffffffc0000) + 8);
  lVar4 = (long)(param_3 + 0xc) + 7;
  *(int *)(*param_1 + lVar4) = (int)param_4;
  if ((((uint)uVar2 >> 0x12 & 1) == 0) && ((uVar2 & 0x18) != 0)) {
    *(int *)(*param_1 + ((long)(param_3 + 0x10) | 7U)) = (int)param_5;
  }
  else {
    uVar2 = *param_1;
    if ((param_4 & 1) != 0) {
      uVar3 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
      lVar1 = uVar2 + lVar4;
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,lVar1,param_4);
        uVar2 = *param_1;
        uVar3 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
        lVar1 = uVar2 + lVar4;
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,lVar1,param_4);
        uVar2 = *param_1;
      }
    }
    lVar4 = (long)(int)(param_3 + 0x10U | 7);
    *(int *)(uVar2 + lVar4) = (int)param_5;
    if ((param_5 & 1) != 0) {
      uVar2 = *param_1;
      uVar3 = *(ulong *)((param_5 & 0xfffffffffffc0000) + 8);
      lVar1 = uVar2 + lVar4;
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar2,lVar1,param_5);
        uVar2 = *param_1;
        uVar3 = *(ulong *)(param_5 & 0xfffffffffffc0000 | 8);
        lVar1 = uVar2 + lVar4;
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,lVar1,param_5);
        return;
      }
    }
  }
  return;
}

