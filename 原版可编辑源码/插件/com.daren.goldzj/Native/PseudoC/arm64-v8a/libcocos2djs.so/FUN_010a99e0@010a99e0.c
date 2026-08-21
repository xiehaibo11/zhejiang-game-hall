
void FUN_010a99e0(Isolate *param_1,undefined8 param_2,ulong *param_3,int param_4,undefined4 param_5,
                 ulong *param_6,undefined8 param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = *param_3;
  uVar3 = (*(int *)(uVar5 + 3) >> 1) - 2;
  if (uVar3 == 0) {
    iVar9 = 0;
  }
  else {
    iVar8 = 0;
    uVar10 = 0;
    iVar9 = 0;
    iVar7 = 8;
    do {
      uVar2 = *(uint *)(uVar5 + (long)iVar7 + 7);
      if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa8))) {
        if (param_4 == 0) {
          puVar4 = (ulong *)v8::internal::Factory::SizeToString((Factory *)param_1,uVar10,true);
          uVar5 = *puVar4;
          uVar11 = *param_6;
          lVar1 = uVar11 + (long)(iVar9 << 2);
          *(int *)(lVar1 + 7) = (int)uVar5;
          if ((uVar5 & 1) != 0) {
            uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar6 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar11,lVar1,uVar5);
              uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar6 & 0x18) != 0) &&
               ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar11,lVar1,uVar5);
            }
          }
        }
        else {
          *(int *)(*param_6 + (long)(iVar9 << 2) + 7) = iVar8;
        }
        uVar5 = *param_3;
        iVar9 = iVar9 + 1;
      }
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 2;
      iVar7 = iVar7 + 4;
    } while (uVar3 != uVar10);
  }
  uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(param_1 + 0x95a0);
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  FUN_010a3ca8(param_1,puVar4,param_5,param_6,param_7,iVar9);
  return;
}

