
/* v8::internal::Dictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::AtPut(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails) */

ulong * v8::internal::Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
        AtPut(long param_1,ulong *param_2,long *param_3,ulong *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long local_38;
  
  uVar9 = *param_2;
  uVar4 = *(uint *)(*param_3 + 3);
  if ((uVar4 & 1) == 0) {
    uVar4 = uVar4 >> 3;
  }
  else {
    local_38 = *param_3;
    uVar4 = String::ComputeAndSetHash((String *)&local_38);
  }
  uVar3 = (*(int *)(uVar9 + 0xf) >> 1) - 1;
  uVar6 = (ulong)(uVar3 & uVar4);
  lVar8 = uVar6 * 0xc00000000;
  lVar1 = uVar9 + 7;
  iVar7 = *(int *)((lVar8 + 0x1400000000 >> 0x20) + lVar1);
  if (iVar7 == *(int *)(param_1 + 0xa0)) {
LAB_010fdd84:
    uVar4 = *(uint *)(*param_2 + 0x13);
    param_2 = (ulong *)Add(param_1,param_2,param_3,param_4,
                           (uVar4 & 0x1fffffe) << 7 | param_5 & 0x800000ff,0);
    *(uint *)(*param_2 + 0x13) = uVar4 + 2 & 0xfffffffe;
  }
  else {
    if (iVar7 != (int)*param_3) {
      iVar7 = 1;
      do {
        uVar6 = (ulong)((int)uVar6 + iVar7 & uVar3);
        lVar8 = uVar6 * 0xc00000000;
        iVar2 = *(int *)((lVar8 + 0x1400000000 >> 0x20) + lVar1);
        if (iVar2 == *(int *)(param_1 + 0xa0)) goto LAB_010fdd84;
        iVar7 = iVar7 + 1;
      } while (iVar2 != (int)*param_3);
    }
    uVar6 = *param_2;
    uVar9 = *param_4;
    lVar1 = uVar6 + (lVar8 + 0x1800000000 >> 0x20);
    *(int *)(lVar1 + 7) = (int)uVar9;
    if ((uVar9 & 1) != 0) {
      uVar5 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,lVar1,uVar9);
        uVar5 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar9);
      }
    }
    *(uint *)(*param_2 + (lVar8 + 0x1c00000000 >> 0x20) + 7) = param_5 << 1;
  }
  return param_2;
}

