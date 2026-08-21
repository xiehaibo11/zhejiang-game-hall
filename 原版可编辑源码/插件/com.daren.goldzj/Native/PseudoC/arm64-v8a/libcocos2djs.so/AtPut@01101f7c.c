
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::AtPut(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SimpleNumberDictionary>, unsigned int,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails) */

ulong * v8::internal::
        Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
        AtPut(long param_1,ulong *param_2,ulong param_3,ulong *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  double dVar10;
  
  uVar9 = *param_2;
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x490) + 7);
  uVar7 = (uVar7 ^ param_3 & 0xffffffff ^ 0xffffffffffffffff) +
          (uVar7 ^ param_3 & 0xffffffff) * 0x40000;
  uVar4 = (*(int *)(uVar9 + 0xf) >> 1) - 1;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uVar7 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uVar3 = uVar4 & ((uint)(uVar7 >> 0x16) ^ (uint)uVar7);
  uVar2 = uVar3 & 0x3fffffff;
  uVar3 = *(uint *)(uVar9 + 7 + (long)(int)(uVar3 * 8 + 0xc));
  if (uVar3 != *(uint *)(param_1 + 0xa0)) {
    iVar8 = 1;
    do {
      if (uVar3 != (uint)*(undefined8 *)(param_1 + 0xa8)) {
        if ((uVar3 & 1) == 0) {
          dVar10 = (double)((int)uVar3 >> 1);
        }
        else {
          dVar10 = *(double *)((uVar9 & 0xffffffff00000000 | (ulong)uVar3) + 3);
        }
        if ((int)dVar10 == (int)param_3) {
          uVar7 = *param_4;
          puVar1 = (undefined4 *)(uVar9 + ((long)(int)(uVar2 * 8 + 0x10) | 7U));
          *puVar1 = (int)uVar7;
          if ((uVar7 & 1) == 0) {
            return param_2;
          }
          uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar6 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar9,puVar1,uVar7);
            uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if ((uVar6 & 0x18) == 0) {
            return param_2;
          }
          if ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
            return param_2;
          }
          Heap_GenerationalBarrierSlow(uVar9,puVar1,uVar7);
          return param_2;
        }
      }
      uVar2 = uVar2 + iVar8 & uVar4;
      uVar3 = *(uint *)(uVar9 + 7 + (long)(int)(uVar2 * 8 + 0xc));
      iVar8 = iVar8 + 1;
    } while (uVar3 != *(uint *)(param_1 + 0xa0));
  }
  puVar5 = (ulong *)Add(param_1,param_2,param_3,param_4,param_5,0);
  return puVar5;
}

