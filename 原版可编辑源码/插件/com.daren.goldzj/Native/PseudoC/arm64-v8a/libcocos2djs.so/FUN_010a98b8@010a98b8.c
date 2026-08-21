
undefined4 FUN_010a98b8(undefined8 param_1,ulong *param_2,KeyAccumulator *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  Factory *pFVar8;
  int local_54;
  Factory *local_38;
  
  pFVar8 = *(Factory **)param_3;
  local_54 = 0;
  uVar6 = *param_2;
  puVar4 = (ulong *)v8::internal::Factory::NewFixedArray
                              (pFVar8,(*(int *)(uVar6 + 3) >> 1) +
                                      (*(int *)((uVar6 & 0xffffffff00000000 |
                                                (ulong)*(uint *)(uVar6 + 0xb)) + 3) >> 1) + -2,0);
  FUN_010a99e0(pFVar8,param_1,param_2,1,0x12,puVar4,&local_54);
  iVar7 = local_54;
  uVar6 = (ulong)local_54;
  lVar1 = *puVar4 + 7;
  lVar2 = lVar1 + uVar6 * 4;
  local_38 = pFVar8;
  FUN_01082940(lVar1,lVar2,&local_38);
  v8::internal::Heap::WriteBarrierForRange<v8::internal::CompressedObjectSlot>
            ((Heap *)(pFVar8 + 0x8850),*puVar4,lVar1,lVar2);
  if (iVar7 != 0) {
    iVar7 = 0;
    do {
      uVar5 = v8::internal::KeyAccumulator::AddKey
                        (param_3,*puVar4 & 0xffffffff00000000 |
                                 (ulong)*(uint *)(*puVar4 + (long)iVar7 + 7),0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      uVar3 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar3;
      iVar7 = iVar7 + 4;
    } while (uVar3 != 0);
  }
  return 1;
}

