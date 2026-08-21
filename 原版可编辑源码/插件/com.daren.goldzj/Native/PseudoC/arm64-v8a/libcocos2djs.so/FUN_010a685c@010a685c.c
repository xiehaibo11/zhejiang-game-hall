
void FUN_010a685c(Factory *param_1,undefined8 param_2,ulong *param_3,ulong param_4,ulong *param_5,
                 undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar6 = *param_3;
  uVar3 = (*(int *)(uVar6 + 3) >> 1) - 2;
  uVar5 = param_4;
  if (uVar3 == 0) {
    iVar10 = 0;
  }
  else {
    iVar9 = 0;
    uVar11 = 0;
    iVar10 = 0;
    iVar8 = 8;
    do {
      uVar2 = *(uint *)(uVar6 + (long)iVar8 + 7);
      if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa8))) {
        if ((int)uVar5 == 0) {
          puVar4 = (ulong *)v8::internal::Factory::SizeToString(param_1,uVar11,true);
          uVar5 = param_4 & 0xffffffff;
          uVar6 = *puVar4;
          uVar12 = *param_5;
          lVar1 = uVar12 + (long)(iVar10 << 2);
          *(int *)(lVar1 + 7) = (int)uVar6;
          if ((uVar6 & 1) != 0) {
            uVar7 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar7 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar12,lVar1,uVar6);
              uVar7 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
            }
            uVar5 = param_4 & 0xffffffff;
            if (((uVar7 & 0x18) != 0) &&
               ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar6);
              uVar5 = param_4 & 0xffffffff;
            }
          }
        }
        else {
          *(int *)(*param_5 + (long)(iVar10 << 2) + 7) = iVar9;
        }
        uVar6 = *param_3;
        iVar10 = iVar10 + 1;
      }
      uVar11 = uVar11 + 1;
      iVar9 = iVar9 + 2;
      iVar8 = iVar8 + 4;
    } while (uVar3 != uVar11);
  }
  uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(param_1 + 0x95a0);
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_1);
      uVar5 = param_4 & 0xffffffff;
    }
    *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    uVar5 = param_4 & 0xffffffff;
  }
  FUN_0108c23c(param_1,param_2,puVar4,uVar5,param_5,param_6,iVar10);
  return;
}

