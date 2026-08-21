
/* v8::internal::Dictionary<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::AtPut(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NumberDictionary>, unsigned int,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails) */

ulong * v8::internal::Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>
        ::AtPut(long param_1,ulong *param_2,ulong param_3,ulong *param_4,int param_5)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  
  uVar8 = *param_2;
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x490) + 7);
  uVar6 = (uVar6 ^ param_3 & 0xffffffff ^ 0xffffffffffffffff) +
          (uVar6 ^ param_3 & 0xffffffff) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uVar4 = (*(int *)(uVar8 + 0xf) >> 1) - 1;
  uVar6 = (ulong)(uVar4 & ((uint)(uVar6 >> 0x16) ^ (uint)uVar6) & 0x3fffffff);
  lVar1 = uVar8 + 7;
  uVar3 = *(uint *)(((long)(uVar6 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
  if (uVar3 != *(uint *)(param_1 + 0xa0)) {
    iVar7 = 1;
    do {
      if (uVar3 != (uint)*(undefined8 *)(param_1 + 0xa8)) {
        if ((uVar3 & 1) == 0) {
          dVar11 = (double)((int)uVar3 >> 1);
        }
        else {
          dVar11 = *(double *)((uVar8 & 0xffffffff00000000 | (ulong)uVar3) + 3);
        }
        if ((int)dVar11 == (int)param_3) {
          uVar9 = *param_4;
          lVar10 = (ulong)(uint)((int)uVar6 * 3) << 0x22;
          puVar2 = (undefined4 *)(lVar1 + (lVar10 + 0x1400000000 >> 0x20));
          *puVar2 = (int)uVar9;
          if ((uVar9 & 1) != 0) {
            uVar6 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
            if (((uint)uVar6 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar8,puVar2,uVar9);
              uVar6 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
               ) {
              Heap_GenerationalBarrierSlow(uVar8,puVar2,uVar9);
            }
          }
          *(int *)(*param_2 + (lVar10 + 0x1800000000 >> 0x20) + 7) = param_5 << 1;
          return param_2;
        }
      }
      uVar6 = (ulong)((int)uVar6 + iVar7 & uVar4);
      uVar3 = *(uint *)(((long)(uVar6 * 0xc00000000 + 0x1000000000) >> 0x20) + lVar1);
      iVar7 = iVar7 + 1;
    } while (uVar3 != *(uint *)(param_1 + 0xa0));
  }
  puVar5 = (ulong *)Add(param_1,param_2,param_3,param_4,param_5,0);
  return puVar5;
}

