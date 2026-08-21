
void FUN_014f8d18(Isolate *param_1,ulong *param_2,long *param_3,undefined8 param_4,int param_5,
                 ulong *param_6,int param_7,ulong *param_8)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  if ((*(ushort *)(*param_3 + 7) < 0x44) || ((*(byte *)(*param_3 + 9) >> 5 & 1) != 0)) {
    uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar7;
    }
    else {
      puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
      uVar7 = *puVar2;
    }
    uVar4 = *param_2;
    uVar5 = (uint)uVar7 | 2;
    *(uint *)(uVar4 + 0xf) = uVar5;
    if (((uVar7 & 1) == 0) || (uVar5 == 3)) {
LAB_014f8e40:
      iVar8 = 2;
      uVar7 = *param_2;
    }
    else {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xf,uVar7 & 0xfffffffffffffffd);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if ((uVar6 & 0x18) != 0) {
        if ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) != 0) goto LAB_014f8e40;
        v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xf,uVar7 & 0xfffffffffffffffd);
      }
      iVar8 = 2;
      uVar7 = *param_2;
    }
  }
  else {
    iVar8 = 1;
    uVar7 = *param_2;
  }
  if (param_5 == 0) {
    if (param_6 == (ulong *)0x0) goto LAB_014f8fb8;
    uVar4 = *param_6 | 2;
  }
  else {
    if (param_6 == (ulong *)0x0) {
LAB_014f8fb8:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    uVar4 = *param_6;
  }
  *(int *)(uVar7 + 0xb) = (int)uVar4;
  if (((int)uVar4 != 3) && ((uVar4 & 1) != 0)) {
    uVar6 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar4 & 0xfffffffffffffffd);
      uVar6 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar4 & 0xfffffffffffffffd);
    }
  }
  if (param_8 != (ulong *)0x0) {
    uVar4 = *param_2;
    uVar7 = *param_8 | 2;
    if (param_7 != 0) {
      uVar7 = *param_8;
    }
    iVar3 = (int)uVar7;
    if (iVar8 == 1) {
      *(int *)(uVar4 + 0xf) = iVar3;
      if (iVar3 == 3) {
        return;
      }
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar1 = uVar4 + 0xf;
      uVar5 = (uint)uVar6;
    }
    else {
      *(int *)(uVar4 + 0x13) = iVar3;
      if (iVar3 == 3) {
        return;
      }
      if ((uVar7 & 1) == 0) {
        return;
      }
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar1 = uVar4 + 0x13;
      uVar5 = (uint)uVar6;
    }
    if ((uVar5 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar4,lVar1,uVar7 & 0xfffffffffffffffd);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar4,lVar1,uVar7 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

