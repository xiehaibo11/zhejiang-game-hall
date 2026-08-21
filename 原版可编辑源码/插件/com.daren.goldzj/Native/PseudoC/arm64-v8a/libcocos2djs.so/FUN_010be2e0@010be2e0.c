
ulong * FUN_010be2e0(undefined8 param_1,Factory *param_2,ulong *param_3,uint param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  
  puVar2 = (ulong *)v8::internal::Factory::NewFixedArray(param_2,param_4,0);
  if (param_4 != 0) {
    lVar7 = 0;
    iVar8 = 0;
    do {
      uVar4 = *param_3;
      puVar3 = (ulong *)v8::internal::Factory::NewNumber<(v8::internal::AllocationType)0>
                                  ((Factory *)(uVar4 & 0xffffffff00000000),
                                   *(double *)
                                    (*(long *)(uVar4 + 0x27) + (ulong)*(uint *)(uVar4 + 0x2f) +
                                    lVar7));
      uVar6 = *puVar2;
      uVar4 = *puVar3;
      *(int *)(uVar6 + (long)iVar8 + 7) = (int)uVar4;
      if ((uVar4 & 1) != 0) {
        uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar6 + (long)iVar8 + 7;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar6,lVar1,uVar4);
          uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar4);
        }
      }
      lVar7 = lVar7 + 8;
      iVar8 = iVar8 + 4;
    } while ((ulong)param_4 * 8 - lVar7 != 0);
  }
  return puVar2;
}

